#include <bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n; cin >> n;
		int sum = 0;
		int a[n];
		for(int i = 0; i < n ;i++){
			cin >> a[i];
			sum += a[i];
		}
		int check = 1, suml = 0;
		for(int i = 0; i < n; i++){
			sum -= a[i];
			if(sum == suml){
				cout << i+1;
				check = 0;
				break;
			}else suml += a[i];
		}
		if(check)  cout << "-1";
		cout << endl;
	}
}
