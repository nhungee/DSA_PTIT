#include <bits/stdc++.h>

using namespace std;
int dp[100005];
int main(){
	int n; cin >> n ; 
	int l = 0;
	for(int i = 0 ; i < n; i++){
		int x; cin >> x; 
		dp[x] = dp[x-1]+1;
		l = max(l, dp[x]);
	}
	cout << n-l << endl;
}
