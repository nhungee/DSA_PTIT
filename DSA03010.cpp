#include <bits/stdc++.h>

using namespace std;

void solve(){
	int n;
	if(!(cin >> n)) return;
	priority_queue<long long, vector<long long>, greater<long long>> pq;
	for(int i = 0; i < n; i++){
		long long tmp;
		cin >> tmp; 
		pq.push(tmp);
	}
	long long cost = 0;
	while(pq.size() > 1){
		long long first = pq.top(); pq.pop();
		long long second = pq.top(); pq.pop();
		long long cur = first + second; 
		cost += cur;
		pq.push(cur);
	} 
	cout << cost << endl;
}
int main(){
	int t; cin >> t; 
	while(t--){
		solve();
	}
	return 0;
}