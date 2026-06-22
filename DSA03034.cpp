#include <bits/stdc++.h>

using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		int n, m , p; cin >> n >> m >> p;
		vector<int> a(n), b(m), c(p);
		for(auto &x : a) cin >> x;
		for(auto &x : b) cin >> x;
		for(auto &x : c) cin >> x;
		int i = 0, j = 0, k = 0;
		bool check = 1;
		while(i < n  && j  < m && k  < p){
			if(a[i] == b[j] && a[i] == c[k]){
				cout << a[i] << " ";
				check = 0;
				i++; j++; k++;
			}
			else if(a[i] < b[j]) i++;
			else if(b[j] < c[k]) j++;
			else k++;
		}
		if(check)  cout << "NO";
		cout << endl;
	}
}