#include <bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n ;
		int a[n];
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		int Lmin[n], Rmax[n];
		Lmin[0] = a[0];
		for(int i = 1; i < n; i++){
			Lmin[i] = min(Lmin[i-1], a[i]);
		}
		Rmax[n-1] = a[n-1];
		for(int  i = n-2; i >= 0; i--){
			Rmax[i] = max(Rmax[i+1], a[i]);
		}
		
		int i = 0, j = 0;
		int maxi = -1;
		while(i < n && j < n){
			if(Lmin[i] < Rmax[j]){
				maxi = max(maxi, j-i);
				j++;
			}else i++;
		}
//		if(maxi == 0){
//			for(int i = 0; i < n-1; i++){
//				if(a[i] > a[i+1]) maxi = -1;
//			}
//		}
		cout << maxi << endl;
	}
}
