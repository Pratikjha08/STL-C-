#include <iostream>
#include <bits/stdc++.h>

using namespace std; 
//similar to stack but fifo, double ended queue (deque)is also similar to vectors and lists, in priority queue the largest element(say int, char etc.) stays at the top, pq is a non-linear data structure, it is usually implemented using tree

int main(){
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    cout << q.front() << " ";
    cout << q.back() << endl;
    priority_queue<int> pq; //(max heap)
    pq.push(1);
    pq.push(2);
    pq.push(3);
    pq.push(4);
    cout << pq.top() << " ";
    pq.pop();
    cout << pq.top() << endl;
    priority_queue<int, vector<int>, greater<int>> pqs; // do declare pq which priority is smallest element(min heap)
    pqs.push(1);
    pqs.push(2);
    pqs.push(3);
    pqs.push(4);
    cout << pqs.top() << " ";
    pqs.pop();
    cout << pqs.top();
    return 0;
}