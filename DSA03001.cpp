#include <bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	int money[] = {1, 2, 5, 10, 20, 50, 100, 200, 500, 1000};
	while(t--){
		int n; cin >> n;
		int cnt = 0;
		for(int i = 9; i >= 0; i--){
//			cout << money[i] << " ";
//			cout << endl;
			cnt += n/money[i];
//			cout << cnt << endl;
			n %= money[i];
//			cout << n << endl;
		}
		cout << cnt << endl;
	}
}
