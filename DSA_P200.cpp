#include <bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		vector<int> a(10000, 0);
		for(int i = 0; i < n; i++){
			int x; cin >> x;
			a[x]++;
		}
		for(int i = 1000; i < 9999; i++){
			while(a[i]--){
				cout <<  i << " ";
			}
		}
		cout << endl;
	}
}
