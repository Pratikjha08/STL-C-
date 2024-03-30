#include <iostream>
#include <bits/stdc++.h>

using namespace std;

//stack has three unique function, push() ->adds to top, pop() -> removes from top and top() -> checks which element is at top, remaining are same as vectors and lists 

int main(){
    stack<int> s1;
    s1.push(1);
    s1.push(2);
    s1.push(3);
    s1.push(4);
    cout << s1.top(); 
    cout << endl;
    s1.pop(); 
    cout << s1.top();
    return 0;
}