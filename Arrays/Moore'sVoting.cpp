#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int majorityElement(vector<int> &arr)
    {
        // take this example array, and then see the code
        //  arr = [7 7 5 7 5 1 5 7 5 5 7 7 5 5 5 5]
        // optimal approach
        // first iterate over the loop
        int cnt = 0;
        int ele;
        for (int i = 0; i < arr.size(); i++)
        {
            // for a new element, it will always start from count = 0
            if (cnt == 0)
            {
                cnt = 1;
                ele = arr[i];
            }
            else if (arr[i] == ele)
            {
                cnt++;
            }
            // if there are other elements, cnt --
            else
            {
                cnt--;
            }
        }
        // for a new element, it will check the whole array, the previous elements also
        // which were already counted... but cnt became 0, thats why we need to iterate
        // over the whole array
        int cnt1 = 0;
        for (int i = 0; i < arr.size(); i++)
        {
            if (arr[i] == ele)
            {
                cnt1++;
            }
        }
        if (cnt1 > (arr.size() / 2))
        {
            return ele;
        }
        return -1;
    }
};