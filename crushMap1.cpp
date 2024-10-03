#include<bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef vector<string> vs;
typedef map<string, vs> msvs;
#define forn(i,n) for(int i = 0; i<n; i++)

void populate_maps(map<string, vector<string>> &crush_map)
{
   
    crush_map["akash"] = {"rohini"};
    crush_map["kaushal"] = {"aesha"};
    crush_map["yug"] = {"aesha", "hema", "mona"};

    crush_map["kaushal"] = {"aesha", "hema", "mona"};
}

void print_crush_map(map<string, vector<string>> &crush_map){
    // Iterating over the map
    for(auto itr = crush_map.begin(); itr != crush_map.end(); ++itr)
    {
        string student = itr->first;
        vector<string> crush_list = itr->second;
        cout << endl;
        for(auto crush : crush_list)
        {
            cout << crush << " ";  
        }
        cout << endl;
    }
}

void play_with_maps()
{
    map<string, vs> crush_map;
    populate_maps(crush_map);
    print_crush_map(crush_map);
}

int main(){
    play_with_maps(); 
    return 0;
}
