#include <bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, k ; cin >> n >> k;
		vector<int> b(n, 0);
		vector<int> a(n);
		for(int i = 0; i < n; i++){
			cin >> a[i];
			b[a[i]]++;
		}
		if(b[k] == 0) cout << "-1\n";
		else cout << b[k] << endl;
	}
}
