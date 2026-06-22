#include <bits/stdc++.h>

using namespace std;
int main(){
	int n; cin >> n;
	vector<int> a(n), le, chan;
	for(int i = 0; i < n; i++){
		cin >> a[i];
		if(i % 2 != 0) chan.push_back(a[i]);
		else le.push_back(a[i]);
	}
	sort(chan.begin(), chan.end(), greater<int>());
	sort(le.begin(), le.end());
	int i = 0, j = 0;
	for(int k = 0; k < n ;k++){
		if(k% 2== 0)cout << le[i++] << " ";
		else cout << chan[j++] << " ";
	}
	
}