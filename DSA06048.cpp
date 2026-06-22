#include <bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		long long n; cin >> n;
		long long a[n];
		for(long long i = 0; i < n ;i++){
			cin >> a[i];
		}
		int k = 0;
		for(int i = 0; i < n-1; i++){
			if(a[i] > a[i+1]){
				k = i+1;
				break;
			}
		}
		cout << k << endl;
	}
}
