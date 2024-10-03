//write numbers and their spellings used in maps
// Adding key-value pairs using Initializer list
#include <iostream>
#include <map>
using namespace std;
int main()
{
    int n;
    cin >> n;
    map<int, string> Num_Map;

    Num_Map = {{1, "one"},
               {2, "two"},
               {3, "three"},
               {4, "four"},
               {5, "five"},
               {6, "six"},
               {7, "seven"},
               {8, "eight"},
               {9, "nine"},
               {10, "ten"}};

    for (auto x : Num_Map)
    {
        cout << x.first << "->" << x.second << endl;
    }
    return 0;
}
