#include <bits/stdc++.h>

using namespace std;
vector<vector<int>> v;
void bubble(vector<int> &a, int n){
	bool hswap = false;
	v.clear();
	for(int i = 0; i < n-1; i++){
		hswap = false;
		for(int j = 0; j < n-i-1; j++){
			if(a[j+1] < a[j]){
				swap(a[j+1], a[j]);
				hswap = true;
			}
		}
		if(hswap == false) break;
		v.push_back(a);
	}
	for(int i = v.size()-1; i >= 0 ; i--){
		cout << "Buoc " << i+1 << ": ";
		for(int x : v[i]) cout << x << " ";
		cout << endl;
	}
}
int main(){
	int t;
	cin >> t;
	while(t--){
		int n; cin >> n; 
		vector<int> a(n);
		for(int i = 0; i < n ; i++){
			cin >> a[i];
		}
		bubble(a, n);
	}
}
