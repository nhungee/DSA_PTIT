#include <bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n , k;
		cin >> n >> k;
		int a[n];
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		
		for(int i = 0; i < n-k+1; i++){
			int maxi  = a[i];
			for(int j = i; j < i+k; j++){
				if(a[j] > maxi) maxi = a[j];
 			}
 			cout << maxi << " ";
		}
		cout << endl;
	}
}
