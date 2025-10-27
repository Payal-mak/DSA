#include<bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef  vector<string> vs;
typedef  map<string, vs> msvs;
#define forn(i,n) for(int i = 0; i<n; i++)

void populate_maps(map<string, vector<string>> &crush_map)
{
    crush_map["akash"] = {"rohini"};
    pair<string, vector<string>> pl = {"akash",{"rohini"}};
    crush_map.insert({"kaushal",{"aesha"}});
    crush_map["yug"] = {"aesha","hema","mona"};
    crush_map.insert({"kaushal",{"aesha","hema","mona"}});
}
void print_crush_list(vector<string> &crush_list)
{
    map<string, vector<string>>::iterator itr;
    for(string crush : crush_list)
    {
        cout << crush << ", ";
    }
    cout << "\n";

}
void print_crush_map(map<string, vector<string>> &crush_map){
    map<string, vector<string>>::iterator itr;
    //scope resolution
    for(itr = crush_map.begin() ; itr!=crush_map.end() ; itr++)
    {
        pair<string, vector<string>> pkv = (*itr);
        string student = pkv.first;
        vector<string> crush_list = pkv.second;
        cout << (*itr).first << ":"; //itr -> (*itr).first
        print_crush_list(itr->second);

        // for(pair<string, vector<string>> pkv : crush_map)
        // {
        //     cout << pkv.first << ":"; //itr -> (*itr).first
        //     print_crush_list(pkv.second);
        // }

        // for(auto [student, crush_list] : crush_map)
        // {
        //     cout << student << ": ";
        //     print_crush_list(pkv.second);
        // }
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