#include <bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		string s;cin>>s;
		s=' '+s;
		int n=s.size()-1;
		vector<vector<int>> dp(n+1,vector<int>(n+1,0));
		for(int i=1;i<=n;i++){
			dp[i][i]=1;
			if(i<n) dp[i][i+1]=(s[i] == s[i+1]);
		}
		for(int len=3;len<=n;len++){
			for(int i=1;i<=n-len+1;i++){
				int j=i+len-1;
				dp[i][j]=(dp[i+1][j-1] && s[i]==s[j]);
			}
		}
	}
}
