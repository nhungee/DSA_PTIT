#include <bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n; cin >> n;
		vector<int> a(100001, 0);
		int maxa = 0;
		for(int i = 0; i < n ;i++){
			int x; cin >> x;
			a[x]++;
			if(a[x] > maxa) maxa = a[x];
		}
		for(int k = maxa; k >= 0; k--){
			for(int i = 0; i< 100001 ; i++){
				if(a[i] == k){
					while(a[i]--){
						cout << i << " ";
					}
				}
			}
		}
		cout << endl;
	}
}
