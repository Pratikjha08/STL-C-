#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
    map<int, int> m; //similar to dictionary in python, stores key and value pair, key is unique and sorted(similar to set) but value can repeat 
    m[1] = 2;  // both of these syntax stores {key,value} pair, in m[1] = 2, it is stored as {1,2};
    m.insert({5,6});
    m.insert({3,4});
    m.insert({7,8});
    for (pair<int,int>element : m) {
        cout << element.first << " " << element.second << endl;
    }
    cout << m[1] << endl; //returns value of key 1
    auto it = m.find(3);
    cout << it->second << endl; // similar to (*it).second 
    // multimap and unordered map are similar to set
    return 0;
}