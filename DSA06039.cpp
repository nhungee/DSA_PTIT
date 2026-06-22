#include <bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, x; cin >> n; 
		unordered_map<int, int> mp;
		int a[n];
		for(int i = 0; i < n ;i++){
			cin >> a[i];
			mp[a[i]]++;
		}
		int check = 0;
		for(int i = 0; i < n ; i++){
			if(mp[a[i]] > 1){
				cout << a[i] <<"\n";
				check = 1;
				break;
			}
		}
		if(!check) cout << "NO\n";
	}
}
