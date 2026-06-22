#include <bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n; cin >> n;
		vector<long long> a(n);
		
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		sort(a.begin(), a.end());
		int l = 0, r = n-1;
		long long ans = a[0] + a[1];
		while(l < r){
			long long sum = a[l] + a[r];
			if(sum == 0){
			    ans = 0;
			    break;
			}
			if(abs(sum) < abs(ans)) ans = sum;
			else if(abs(sum) == abs(ans)) {
				if(sum < ans) ans = sum;
			}
			if(sum < 0) l++;
			else r--;
		}
		cout << ans << endl;
	}
}