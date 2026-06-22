#include <bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, k; cin >> n >> k; 
		int a[n];
		for(int i = 0; i< n; i++){
			cin >> a[i];
		}
		sort(a, a+n);
		long long b = 0, c = 0;
		int m = min(k, n-k);
		for(int i = 0; i < n ; i++){
			if(i < m) b  += a[i];
			else c += a[i];
		}
		cout << c-b << endl;
	}
}
