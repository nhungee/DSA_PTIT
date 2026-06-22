#include <bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, m; 
		cin >> n >> m;
		vector<int> v(100001, 0);
		for(int i = 0; i < n ; i++){
			int x; cin >> x; 
			v[x] = 1;
		}
		for(int i = 0; i < m; i++){
			int x = 0; cin >> x; 
			if(v[x] == 1) v[x] = 2;
			else if(v[x] == 0) v[x] = 3;
		}
		for(int i = 0; i <= 100000; i++){
			if(v[i] > 0) cout << i << " ";
		}
		cout << endl;
		for(int i = 0; i <= 100000; i++){
			if(v[i] == 2) cout << i << " ";
		}
		cout << endl;
	}
}
