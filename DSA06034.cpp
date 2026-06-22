#include <bits/stdc++.h>
using namespace std;

int main(){
	int t; cin >> t; 
	while(t--){
		int n, k; cin >> n >> k;
		vector<long long> a(n); 
		for(int i = 0; i< n; i++){
			cin >> a[i];
		}
		unordered_map<long long, long long> mp;
		long long cnt = 0;
		for(int i = 0; i < n ; i++){
			cnt += mp[k-a[i]];
			mp[a[i]]++;
		}
		cout << cnt << endl;
	}
}