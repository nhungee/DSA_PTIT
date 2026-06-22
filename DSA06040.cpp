#include <bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		long long m , n , p; cin >> m >> n >> p;
		vector<long long>  a(m), b(n), c(p);
		for(auto &x : a) cin >> x;
		for(auto &x : b) cin >> x;
		for(auto &x : c) cin >> x;
		int i = 0, j = 0, k = 0;
		bool check = true;
		while(i < m && j < n && k < p){
			if(a[i] == b[j] && a[i] == c[k]){
				cout << a[i] << " ";
				check = false;
				i++; j++; k++;
			}
			else if(a[i] < b[j]) i++;
			else if(b[j] < c[k]) j++;
			else k++;
		}
		if(check) cout << "-1";
		cout << endl;
	}
}
