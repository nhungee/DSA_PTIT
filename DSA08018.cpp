#include <bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n; cin >> n;
		int tmp = pow(n, 2);
		queue<string> q;
		q.push("6");
		q.push("8");
		int total = pow(2, n+1) - 2;
		cout << total << endl;
		while(!q.empty()){
			string s = q.front(); q.pop();
			if(s.size() > n) break;
			cout << s << " ";
			q.push(s+"6");
			q.push(s+"8");
		}
		cout << endl;
	}
}