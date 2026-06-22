#include <bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n; cin >> n;
		int a[1000];
		for(int i = 0; i < n ; i++){
			cin >> a[i];
		}
		int cnt = 0;
		for(int i = 0; i < n-1; i++){
			int mini = i;
			for(int j = i+1; j < n ;j++){
				if(a[j] < a[mini]) mini = j;
			}
			if(mini != i){
				int tmp = a[i];
				a[i] = a[mini];
				a[mini] = tmp;
				cnt++;
			}
		}
		cout << cnt << endl;
	}
}
