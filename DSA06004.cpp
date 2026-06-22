#include <bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, m; cin >> n >> m;
		vector<int> a(100001, 0);
		for(int i = 0; i < n ;i++){
			int x; cin >> x;
			a[x] = 1;
		}
		for(int i = 0; i < m ; i++){
			int x; cin >> x;
			if(a[x] == 0) a[x] = 3;
			else if(a[x] == 1) a[x] = 2;
		}
		for(int i = 0; i <= 100000; i++){
			if(a[i] > 0) cout << i << " ";
		}
		cout << endl;
		for(int i = 0; i <= 100000; i++){
			if(a[i] == 2) cout << i << " ";
		}
		cout << endl;
	}
}
