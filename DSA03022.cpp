#include <bits/stdc++.h>

using namespace std;

int main(){
	int n; cin >> n ; 
	int a[n]; 
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	sort(a, a+n);
	long long dau2 = a[0] * a[1]; 
	long long cuoi2 = a[n-1] * a[n-2];
	long long dau3 = dau2*a[n-1]; 
	long long cuoi3 = cuoi2 * a[n-3];
	long long res = max({dau2, dau3, cuoi2, cuoi3});
	cout << res << endl; 
	
}