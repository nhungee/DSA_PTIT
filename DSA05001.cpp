#include <bits/stdc++.h>

using namespace std ;

int main(){
	int t; cin >> t;
	while(t--){
		string s1, s2; cin >> s1 >> s2;
		int c[s1.size()+1][s2.size()+1];
		for(int i = 0; i <= s1.size(); i++){
			for(int j = 0; j <= s2.size(); j++){
				c[i][j] = 0;
			}
		}
		for(int i = 1; i <= s1.size(); i++){
			for(int j = 1; j <= s2.size(); j++){
				if(s1[i-1] == s2[j-1]){
					c[i][j] = c[i-1][j-1] + 1;
				}else c[i][j] = max(c[i-1][j], c[i][j-1]);
			}
		}
		cout << c[s1.size()][s2.size()] << endl;
	}
}