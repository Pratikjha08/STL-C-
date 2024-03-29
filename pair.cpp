#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
    pair<int, int> p = {3, 4};
    // int a, b;
    // cin >> a >> b; 
    // p.first = a; 
    // p.second = b;
    cout << p.first << " " << p.second << endl;  

    pair <int, pair<int, int>> np = {1, {2, 3}}; //nested pair 
    cout << np.first << " " << np.second.first << " " << np.second.second <<endl; 

    pair <int, int> arr[] = {
        {1,2}, {3,4},{5,6}
    };

    for (int i = 0; i<3; i++){
        cout << arr[i].first << " " << arr[i].second << " ";
    }
    cout << "\n";
    // pair<pair<int, int>, pair<int, int>> nestedPairArray[] = { //array of nested pair 
    //     {{1,2},{3,4}}, {{5,6},{7,8}}
    // };

    pair<pair<int, int>, pair<int, int>> nestedPairArray[] = {
        make_pair(make_pair(1,2),make_pair(3, 4)), //using make_pair function 
        make_pair(make_pair(5,6),make_pair(7, 8))
    };
    for (int i = 0; i<2; i++){
        cout << nestedPairArray[i].first.first << " " << nestedPairArray[i].first.second << " " << nestedPairArray[i].second.first << " " << nestedPairArray[i].second.second << " ";
    }
    cout << "\n";
    return 0;
}