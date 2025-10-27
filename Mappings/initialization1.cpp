// Initialize map using default constructor
#include <iostream>
#include <map>
using namespace std;

int main()
{
    //ordered map
    map<string, string> New_Map;

    // Keep on adding key-value pairs using subscript([]) and assignment(=) operators
    New_Map["Ground"] = "Grass";
    New_Map["Floor"] = "Cement";
    New_Map["Table"] = "Wood";
    for (auto x : New_Map)
    {
        cout << x.first << "->" << x.second << endl;
    }
    return 0;
}
