#include <bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n; cin >> n;
		vector<int> b(1000000, 0);
		int a[n];
		for(int i = 0; i< n ;i++){
			cin >> a[i];
			b[a[i]]++;
		}
		sort(a, a+n);
		int ans = 0, check = 1;
		for(int i = 0; i < n ; i++){
			if(b[a[i]] > n/2){
				ans = max(ans, b[a[i]]);
				check = 0;
			}
		}
		if(check) cout << "NO";
		else{
			for(int i = 0; i < n ;  i++){
				if(b[a[i]] == ans){
					cout << a[i];
					break;
				}
			}
		}	
		cout << endl;
	}
}
