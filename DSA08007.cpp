#include <bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		long long n; cin >> n;
		queue<string> q;
		q.push("1");
		long long cnt = 0;
		while(1){
			string s = q.front(); q.pop();
			if(stoll(s) > n) break;
			cnt++;
			q.push(s+"0");
			q.push(s+"1");
		}
		cout << cnt  << endl;
	}
}
