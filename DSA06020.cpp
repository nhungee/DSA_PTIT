#include <bits/stdc++.h>

using namespace std;

int binary(int n, int a[], int x){
	int l = 0, r = n-1;
	while(l <= r){
		int index = (l+r)/2;
		if(a[index] == x) return 1;
		else if(a[index] < x) l = index +1;
		else r = index -1;
	}
	return -1;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, k;
		cin >> n >> k;
		int a[n];
		for(int i = 0; i < n ;i++){
			cin >> a[i];
		}
		if(binary(n, a, k) ==  -1) cout << "-1\n";
		else cout << "1\n";
	}
}
