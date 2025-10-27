// Adding key-value pairs using Initializer list
#include <iostream>
#include <map>
using namespace std;
int main()
{
    map<string, string> New_Map;

    New_Map = {{"Ground", "Grass"},
               {"Floor", "Cement"},
               {"Table", "Wood"}};

    for (auto x : New_Map)
    {
        cout << x.first << "->" << x.second << endl;
    }
    return 0;
}
