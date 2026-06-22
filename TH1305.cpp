#include <bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n; cin >> n;
		queue<string> q;
		q.push("A");
		q.push("B");
		string s;
		queue<string> p;
		while(!q.empty()){
			if(s.size() > n) break;
			else{
				s = q.front(); q.pop();
				q.push(s+"A");
				q.push(s+"B");
				if(s.size() == n) p.push(s);
			}
		}
		while(!p.empty()){
			 cout << p.front();
			 if(p.size() > 1) cout << ",";
			 p.pop();
		}
		cout << endl;
	}
}
