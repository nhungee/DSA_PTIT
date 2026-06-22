#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, q; cin >> n >> q;
	vector<long long> dp(n+1, 0);
	for(int i = 1; i < n+1 ; i++){
		int  x; cin >> x; 
		dp[i] = dp[i-1];
		if(x > 0) dp[i]+=x; 
	}
	while(q--){
		int l, r; cin >> l  >> r; 
		cout << dp[r] - dp[l-1] << endl;
	}
}