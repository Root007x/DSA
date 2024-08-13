#include<bits/stdc++.h>

using namespace std;

int main(){

	priority_queue<int,vector<int>,greater<int>> pq; // min heap

	pq.push(30);
	pq.push(20);
	pq.push(5);

	cout << pq.top() << endl;

	return 0;
}