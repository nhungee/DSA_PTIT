#include <bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, s, m; cin >> n >> s >> m;
		int sm = s*m; 
		int datebuy = s - (s/7);
		if(datebuy * n >=  sm){
			int day = sm/n;
			if(sm%n != 0) day++;
			cout << day << endl;
		}else cout << "-1\n";
	}
}
