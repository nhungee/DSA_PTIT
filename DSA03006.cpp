#include <bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;  cin >> n;
		int a[n], b[n];
		for(int i = 0; i< n; i++){
			cin >> a[i];
			b[i] = a[i];
		}
		sort(a, a+n);

		bool check = true;
		for(int i = 0; i < n/2; i++){
			int va1 = a[i], va2 = a[n-i-1];
			int vb1 = b[i], vb2 = b[n-i-1];
			if(!((va1 == vb1 && va2 == vb2) || (va1 == vb2 && va2 == vb1))){
				check = false;
				break;
			}else check = true;
		}
		if(!check) cout << "No\n";
		else cout << "Yes\n";
	}
}
