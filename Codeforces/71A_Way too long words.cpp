#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    /*
     * PROBLEM RECAP:
     *   Each time display = HH:MM using 4 digit stickers.
     *     HH ∈ {00, 01, ..., 09, 10, 11}   (hours 0–11)
     *     MM ∈ {00, 01, ..., 59}            (minutes 0–59)
     *   Maximize the number of displays we can make from the given stickers.
     *
     * POSITION CONSTRAINTS (which digits can go where):
     *   H1 (hour tens):   must be 0 or 1
     *   H2 (hour units):  if H1=0 → any digit 0-9 ;  if H1=1 → only 0 or 1
     *   M1 (minute tens):  must be 0-5
     *   M2 (minute units): any digit 0-9
     *
     * KEY IDEA:
     *   Binary search on answer k = number of displays.
     *   For a candidate k, we check: can we partition digits into k valid (HH, MM) pairs?
     *
     *   We split k hours into two types:
     *     b  hours of the form "1X" (i.e. 10 or 11)
     *     a = k - b  hours of the form "0X" (i.e. 00–09)
     *
     *   Then we check if a valid value of b exists that satisfies ALL digit constraints.
     */

    // Step 1: Count frequency of each digit 0-9.
    //   e.g. s = "99111111" → cnt = {0,6,0,0,0,0,0,0,0,2}
    //   meaning: zero 0s, six 1s, two 9s, etc.
    int cnt[10] = {};
    for (char c : s)
        cnt[c - '0']++;

    // Step 2: S05 = total count of digits in {0,1,2,3,4,5}.
    //   These are the ONLY digits that can appear in constrained positions (H1, H2-when-1X, M1).
    //   Digits 6-9 can ONLY ever be used in unconstrained positions (H2-when-0X, or M2).
    //
    //   e.g. s = "99111111" → S05 = cnt[0]+cnt[1]+...+cnt[5] = 0+6+0+0+0+0 = 6
    //   e.g. s = "0123456789" → S05 = 1+1+1+1+1+1 = 6
    int S05 = 0;
    for (int d = 0; d <= 5; d++)
        S05 += cnt[d];

    // Step 3: Binary search on k (the answer).
    //   lo = best feasible k found so far, hi = upper bound to try.
    //   Each display uses exactly 4 stickers, so k ≤ n/4.
    //
    //   We use "upper-mid" binary search: mid = (lo+hi+1)/2
    //   so that lo always moves forward and we converge to the maximum feasible k.
    int lo = 0, hi = n / 4;
    while (lo < hi)
    {
        int mid = (lo + hi + 1) / 2;

        /*
         * FEASIBILITY CHECK for k = mid displays:
         *
         * Let b = number of "1X" hours,  a = mid - b = number of "0X" hours.
         * We need to find ANY valid b. If at least one valid b exists → feasible.
         *
         * === DERIVING EACH CONSTRAINT ON b ===
         *
         * CONSTRAINT 1: b >= max(0, mid - cnt[0])
         *   Why? We need a = mid - b copies of digit '0' for position H1 of "0X" hours.
         *   So mid - b ≤ cnt[0]  →  b ≥ mid - cnt[0].
         *   Also b ≥ 0 obviously.
         *
         *   Example: mid=3, cnt[0]=1 → b ≥ 2  (only 1 zero available, so at most 1 "0X" hour,
         *            meaning at least 2 must be "1X" hours).
         *
         * CONSTRAINT 2: b <= cnt[1]
         *   Why? We need b copies of digit '1' for position H1 of "1X" hours.
         *   So b ≤ cnt[1].
         *
         *   Example: cnt[1]=6 → b ≤ 6  (we have six 1s, so up to 6 "1X" hours possible).
         *
         * CONSTRAINT 3: b <= cnt[0] + cnt[1] - mid
         *   Why? After using a=mid-b zeros (for H1 of "0X") and b ones (for H1 of "1X"),
         *   the remaining 0s and 1s = cnt[0]-(mid-b) + cnt[1]-b = cnt[0]+cnt[1]-mid.
         *   The "1X" hours need their H2 digit to be 0 or 1 (since 10 and 11 are the only
         *   valid hours starting with 1). So we need b digits from what's left of {0,1}:
         *     cnt[0]+cnt[1] - mid ≥ b
         *
         *   Example: cnt[0]=2, cnt[1]=6, mid=3 → remaining {0,1} = 2+6-3 = 5, so b ≤ 5.
         *   Concretely: use 1 zero for H1("0X"), 2 ones for H1("1X"), then 1 zero + 4 ones
         *   remain → 5 available for H2 of "1X" hours, but we only need 2 → OK.
         *
         * CONSTRAINT 4: b <= S05 - 2*mid
         *   Why? We need to fill position M1 (minute tens) with k=mid digits from {0,...,5}.
         *   But we've already consumed from {0,...,5} for the hour positions:
         *     - H1 uses mid digits from {0,1} ⊂ {0,...,5}  → costs mid
         *     - H2 of "1X" hours uses b digits from {0,1} ⊂ {0,...,5}  → costs b
         *   So available {0,...,5} digits for M1 = S05 - mid - b.
         *   We need this ≥ mid (one M1 digit per display):
         *     S05 - mid - b ≥ mid  →  b ≤ S05 - 2*mid
         *
         *   Example: s="99111111", S05=6, mid=2 → b ≤ 6-4 = 2.
         *   After using b=2 ones for H1("1X") and 0 zeros for H1("0X"), and 2 ones for H2("1X"),
         *   remaining {0..5} digits = 6-2-2 = 2. We need 2 for M1 → exactly enough!
         *
         * CONSTRAINT 5: b <= mid
         *   Trivially, b can't exceed the total number of displays.
         *
         * CONSTRAINT 6: n >= 4*mid
         *   Why? Positions H2-of-"0X" and M2 accept ANY digit (0-9), so they're unconstrained.
         *   After allocating mid (H1) + b (H2 of "1X") + mid (M1) = 2*mid + b constrained digits,
         *   we still need (mid - b) for H2-of-"0X" + mid for M2 = 2*mid - b unconstrained digits.
         *   Total digits used = (2*mid + b) + (2*mid - b) = 4*mid.
         *   So we simply need n ≥ 4*mid.
         *
         *   Example: n=8, mid=2 → 8 ≥ 8 ✓.   n=8, mid=3 → 8 ≥ 12 ✗.
         *
         * PUTTING IT TOGETHER:
         *   Valid b must satisfy:  lb ≤ b ≤ ub  where
         *     lb = max(0, mid - cnt[0])
         *     ub = min(mid, cnt[1], cnt[0]+cnt[1]-mid, S05 - 2*mid)
         *   If lb ≤ ub AND n ≥ 4*mid → feasible.
         *
         * FULL WALKTHROUGH — Example: s = "99111111"
         *   cnt = {0,6,0,0,0,0,0,0,0,2}, S05=6, n=8
         *
         *   Try mid=2:
         *     lb = max(0, 2-0) = 2        (need b≥2 since cnt[0]=0, no "0X" hours possible)
         *     ub = min(2, 6, 0+6-2, 6-4)
         *        = min(2, 6, 4, 2) = 2
         *     lb ≤ ub? 2 ≤ 2 ✓,  n≥8? 8≥8 ✓  → FEASIBLE
         *     Meaning: b=2 → two "1X" hours, zero "0X" hours.
         *     Concretely: 2 ones for H1("1X"), 2 ones for H2("1X") → hours 11, 11.
         *     Remaining: 2 ones (for M1: digits 1,1) + 2 nines (for M2: digits 9,9).
         *     Displays: 11:19 and 11:19. ✓
         *
         *   Try mid=3:
         *     n≥12? 8≥12? NO → INFEASIBLE.  (only 8 stickers, can't make 3×4=12)
         *
         *   Answer: 2 ✓
         */
        int lb = max(0, mid - cnt[0]);
        int ub = min({mid, cnt[1], cnt[0] + cnt[1] - mid, S05 - 2 * mid});
        if (n >= 4 * mid && lb <= ub)
        {
            lo = mid;
        }
        else
        {
            hi = mid - 1;
        }
    }
    cout << lo << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}