#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
    list<int> ls;
    ls.push_back(2);
    ls.push_back(3);
    ls.push_back(4);
    ls.push_back(5);
    ls.push_front(1); //list allows fornt operations as well reset is same as vector also, time complexity of push_front() is better than insert 
    for (int element : ls){
        cout << element << " ";
    }
    return 0;
}