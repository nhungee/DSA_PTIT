#include <bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, k; cin >> n >> k;
		vector<vector<int>> a(100001);
		int maxi = 0;
		for(int i = 0; i < n; i++){
			int x; cin >> x; 
			int ai = abs(k - x); 
			a[ai].push_back(x);
			if(ai > maxi) maxi = ai;   
 		}
 		for(int i = 0; i <= maxi; i++){
 			for(int x : a[i]) cout << x  << " ";
 			
		}
		cout << endl;
	}
}
