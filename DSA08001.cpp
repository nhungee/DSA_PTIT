#include <bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n ; cin >> n;
		int a[n];
		queue<int> q;
		for(int i = 0; i< n ;i++){
			cin >> a[i];
			if(a[i] == 3){
				int x; cin >> x;
				q.push(x);
			}
			else if(a[i] == 1) cout << q.size() << endl;
			else if(a[i] == 2){
				if(!q.empty()) cout << "NO\n";
				else cout << "YES\n";
			}
			else if(a[i] == 4){
				if(!q.empty()) q.pop();
			}
			else if(a[i] == 5){
				if(!q.empty()) cout << q.front() << endl;
				else cout << "-1\n";
			}
			else if(a[i] == 6){
				if(!q.empty()) cout << q.back() << endl;
				else cout << "-1\n";
			}
		}
	}
}
