#include <bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n];
		for(int i = 0; i < n ;i++){
			cin >> a[i];
		}
		sort(a, a+n);
//		for(int i = 0; i < n ;i++){
//			cout << a[i] << " ";
//		}
//		cout << endl;
		int ans = a[n-1] - a[0];
		for(int i = n-1; i > 0 ;i--){
			if(ans > a[i] - a[i-1]) ans = a[i] - a[i-1];
//			cout << ans << endl;
		}
		cout << ans << endl;
	}
}
