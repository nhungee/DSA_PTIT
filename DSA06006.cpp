#include <bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n; cin >> n;
		vector<int> a(3, 0);
		for(int i = 0; i < n; i++){
			int x; cin >> x;
			a[x]++;
		}
		for(int i = 0; i <= 2 ;i++){
			while(a[i]--){
				cout << i << " ";
			}
		}
		cout << endl;
	}
}
