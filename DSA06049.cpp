#include <bits/stdc++.h>

using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		int n, k; cin >> n >> k; 
		int a[n];
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		sort(a, a+n);
		long long r = 0, cnt = 0; 
		for(int i = 0; i < n-1; i++){
			while(r < n && a[r]- a[i] < k){
				r++;
			}
			cnt += r-i-1;
		}
		cout << cnt << endl;
		
	}
}