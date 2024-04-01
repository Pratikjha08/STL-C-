#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
    set<int> s; // stored unique elements in sorted manner, it is also implemented using tree, so non linear data type
    s.insert(1);
    s.insert(3);
    s.insert(2);
    s.insert(4);
    for (int element : s){
        cout << element << " "; 
    }cout << endl;
    auto it = s.find(2); //return an  iterator which points at 2, if element not present it points at memory just after last element 
    cout << *(it) << endl;
    s.erase(1); //erases 1, O(log(n)), we can also give iterator to erase() which takes contant time O(1)
    for (int element : s){
        cout << element << " "; 
    }cout << endl;
    int cnt1 = s.count(2); //returns 1 if element is present in the set otherwise 0
    cout << cnt1 << endl;
    multiset<int> ms; // only sorted not unique 
    ms.insert(1);
    ms.insert(1);
    ms.insert(2);
    ms.insert(2);
    ms.insert(2);
    ms.insert(3);
    ms.insert(3);
    ms.insert(4);
    for (int element : ms){
        cout << element  << " "; 
    }cout << endl;
    ms.erase(1); // All the occurances of 1 is erased 
    for (int element : ms){
        cout << element  << " "; 
    }cout << endl;
    int cnt2 = ms.count(2); // counts the number of occurance of 2s 
    cout << cnt2 << endl;
    ms.erase(ms.find(2)); //deletes only first occurance of 2s, cause find returns iterator of 1st 1
    for (int element : ms){
        cout << element  << " "; 
    }cout << endl;
    //rest all functions are same as set 
    unordered_set<int> us; // only unique not sorted, rest all functions are same except upper_bound() and lower_bound(), usually takes O(1) complexity to perform all functions
    return 0;
}