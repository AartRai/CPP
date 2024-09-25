//Ques 1. Implement the priority queue using array.

#include <iostream>
#include <queue>
using namespace std;

int main() {
    priority_queue<int> pq;

    pq.push(10);
    pq.push(20);
    pq.push(15);
    pq.push(30);
    pq.push(5);

    cout << "Priority Queue elements (from highest to lowest): ";
    while (!pq.empty()) {
        cout << pq.top() << " "; 
        pq.pop();  
    }
    cout << endl;

    return 0;
}
