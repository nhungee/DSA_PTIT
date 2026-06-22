#include <bits/stdc++.h>

using namespace std;

int main(){
	int n; cin >> n;
	string s;
	queue<int> q;
	for(int i = 0; i< n ; i++){
		cin >> s;
		if(s == "PUSH") {
			int x; cin >> x;
			q.push(x);
		}
		else if(s == "POP" && !q.empty()) q.pop();
		else if(s == "PRINTFRONT"){
			if(!q.empty()) cout << q.front() << endl;
			else cout << "NONE\n";
		}
	}
}
