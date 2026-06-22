#include <bits/stdc++.h>

using namespace std;
int b[10];
int main(){
	int t;
	cin >> t;
	while(t--){
		memset(b, 0, sizeof(b));
		long long n; cin >> n;
		long long a[n];
		long long x = 0, d= 0;
		for(long long i = 0; i< n; i++){
			cin >> a[i];
			while(a[i] > 0){
				d = a[i]%10;
				a[i]/= 10;
				b[d]++;
				if(d > x) x = d;
			}
		}
		for(int i = 0; i <= x; i++){
			if(b[i] > 0) cout << i << " ";
		}
		cout << endl;
	}
}
