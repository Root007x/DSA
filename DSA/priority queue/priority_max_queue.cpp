#include<bits/stdc++.h>

using namespace std;

int main(){

	priority_queue<int> pq; // max heap

	pq.push(10);
	pq.push(20);
	pq.push(30);

	pq.pop();
	cout << pq.top() << endl;

	return 0;
}