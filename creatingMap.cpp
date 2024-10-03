#include<iostream>
#include <map>
#include <string>
using namespace std;

int main() {
  map<int, string> sample_map;
  sample_map.insert(pair<int, string>(1, "one"));
  sample_map.insert(pair<int, string>(2, "two"));

  cout << sample_map[1] << " " << sample_map[2] << endl;
}