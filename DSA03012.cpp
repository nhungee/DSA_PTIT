#include <bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		vector<int> b(10000, 0); 
		string s;
		cin >> s;
		for(char c :  s){
			b[c]++;
		}
		int maxc = 0;
		for(char c: s){
			if(b[c] > maxc) maxc = b[c];
		}
		if(maxc <= (s.size()+1)/2) cout << "1\n";
		else cout << "-1\n"; 
	}
}
