#include <bits/stdc++.h>

using namespace std;
void bubble(vector<int> &a, int n){
	bool hswap = false;
	for(int i = 0; i< n-1 ;i ++){
		hswap = false;
		for(int j = 0; j < n-i-1; j++){
			if(a[j+1] < a[j]){
				int tmp = a[j];
				a[j] = a[j+1];
				a[j+1] = tmp;
				hswap = true;
			}
		}
		if(hswap == false) break;
		cout << "Buoc " << i+1 << ": ";
		for(int x : a) cout << x << " ";
		cout << endl;
	}
}
int main(){
	int n; cin >> n;
	vector<int> a(n); 
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	bubble(a, n);
}
