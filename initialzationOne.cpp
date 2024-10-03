#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
    unordered_map<string, string> New_Map;

    // Adding key-value pairs using subscript([]) and assignment(=) operators
    New_Map["Ground"] = "Grass";
    New_Map["Floor"] = "Cement";
    New_Map["Table"] = "Wood";

    for (auto x : New_Map)
    {
        cout << x.first << "->" << x.second << endl;
    }

    return 0;
}
