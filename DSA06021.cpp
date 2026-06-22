#include <bits/stdc++.h>

using namespace std;

int binary(int n, int a[], int x){
	int l = 0, r = n-1;

	while(l <= r){
		int index = (l+r)/2;
		if(a[index] == x) return index;
		if(a[l] <= a[index]){
			if(a[l] <= x && x < a[index]) r = index-1;
			else l = index+1;
		}else{
			if(a[index] < x && x <= a[r]) l = index +1;
			else r = index -1;
		}
	}
	return -1;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, k;
		cin >> n >> k;
		int a[n];
//		vector<int> b(10000007, 0);
		for(int i = 0; i < n ;i++){
			cin >> a[i];
//			b[a[i]] = i;
		}
		cout << binary(n, a, k)+1 << endl;
	}
}