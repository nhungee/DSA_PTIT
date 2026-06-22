#include <bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >>  t;
	while(t--){
		int n;
		cin >>  n;
		int v[n];
		for(int i= 0; i< n; i++) cin >> v[i];
		sort(v, v+n);
		for(int i = 0; i < n/2; i++){
			cout << v[n-i-1] << " " << v[i] << " ";
		}
		
		if (n % 2 == 1)cout << v[n / 2];
		cout << endl;
	}
}
