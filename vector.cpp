#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
    vector<int> v1; //vector of int datatype 
    v1.push_back(1);
    v1.push_back(2);
    v1.push_back(3);
    v1.push_back(4);
    v1.push_back(5);
    v1.push_back(6);
    vector<int>::iterator it1; // iterator points to memory address, so use pointer algebra to access actual element 
    for(it1 = v1.begin(); it1 != v1.end(); it1++){
        cout << *(it1) << " ";
    }cout << endl;

    vector<int>::iterator it2; //.end() points to memory after last element 
    for (it2 = v1.end()-1; it2 >= v1.begin(); it2--){
        cout << *(it2)<< " ";
    }cout << endl;

    for (auto it = v1.begin(); it!= v1.end(); it++){ // auto takes care of vector<int>::iterator, auto identifies datatypes for you
        cout << *(it) << " ";
    }cout << endl;

    for (auto element : v1){ // this is for each loop in c++ 
        cout << element << " ";
    }cout << endl;

    //there are aslo rbegin() and rend() but rarely used, basically revese of being and end 

    vector<pair<int,int>> vp; //creating vector of pairs 
    vp.push_back({1,2});
    cout << vp[0].first << " " << vp[0].second << " ";
    cout << endl;

    vector<int> vf(5, 0); //vector of size five initialized with 0, this size can be dynamically change
    for (int i = 0; i<5; i++){
        cout << vf[i] << " ";
    }cout << endl;

    v1.erase(v1.begin()); //easer the element present in provided address
    for (int element : v1){
        cout << element << " ";
    }cout << endl;

    v1.erase(v1.begin()+1,v1.begin()+3); // erases range [x , y) x is included but y is not, so it's actually x to y-1
    for (int element : v1){
        cout << element << " ";
    }cout << endl;

    v1.insert(v1.begin(), 1); // inserts 1 to begining of vector 
    v1.insert(v1.begin()+1, 2, 3); // inserts 3 , 2 times in begin()+1
    for (int element : v1){
        cout << element <<  " ";
    }cout << endl;
    vector<int> copy(2, 1); // initializing vector copy of size 2 with elements 1
    v1.insert(v1.begin(), copy.begin(), copy.end()); // inserts whole copy vector inside v1 vector 
    for (int element : v1){
        cout << element << " ";
    }cout << endl;
    // cout << v1.back() << " "; // returns the last element 
    // vector<int> vCopy(vf); //this copies just like using a copy constructor 
    // v1.swap(copy) //swaps two vector
    //v1.clear() // clears entire vector 
    return 0;
}