#include <bits/stdc++.h>

using namespace std;

vector<int> f(1000006, 1);
void sang(){
	for(int i = 2; i*i <= 1000006; i++){
		if(f[i]){
			for(int j = i*i; j <= 1000006; j+=i){
				f[j] = 0;
			}
		}
	}
}
int main(){
	sang();
	int t;
	cin >> t;
	while(t--){
		
		int n ; cin >> n;
		bool check = true;
		for(int i = 2; i <= n/2; i++){
			if(f[i] && f[n-i]){
				 cout << i <<  " " << n-i << endl;
				 check = false;
				 break;
			}
		}
		if(check) cout << "-1" << endl;
	}
}
