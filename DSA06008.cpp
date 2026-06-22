#include <bits/stdc++.h>

using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		int m , n;
		cin >> m >> n;
		int a[m], b[n];
		for(int i = 0; i < m; i++){
			cin >> a[i];
		}
		sort(a, a+m);
		int cnty[5] = {0};
		for(int i = 0; i < n; i++){
			cin >> b[i];
			if(b[i] < 5) cnty[b[i]]++;
		}
		sort(b, b+n);
		int j = 0;
		int cnt = 0;
		for(int i = 0; i < m; i++){
			if(a[i] == 0) continue;
			if(a[i] == 1){
				cnt += cnty[0];
				continue;
			}
			if(a[i] >= 2){
			    int *it = upper_bound(b, b+n, a[i]);
			    cnt += (b + n - it);
				cnt += cnty[0] + cnty[1];	
			}

			if(a[i] == 2){
			    cnt -= (cnty[3] + cnty[4]);
			}
			if(a[i] == 3){
			    cnt += cnty[2];
			}
		}
		cout << cnt << endl;
	}
}
