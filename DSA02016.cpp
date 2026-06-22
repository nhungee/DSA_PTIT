#include <bits/stdc++.h>

using namespace std;
int n;
//int a[50];
int cot[50];
int dcc[50];
int dcp[50];
int cnt;
void Try(int i){
	if(i == n) {
		cnt++;
		return;
	}
	for(int j = 0; j < n; j++){
		if(!cot[j] && !dcc[i-j+n] && !dcp[i+j]){
//			a[i] = j;
			cot[j] = dcc[i-j+n] = dcp[i+j] = 1;
			Try(i+1);
			cot[j] = dcc[i-j+n] = dcp[i+j] = 0;
		}
	}
}
int main(){
	int t;
	cin >> t;
	while(t--){
		cnt = 0;
		cin >> n;
		for(int i = 0; i < 50; i++) dcc[i] = dcp[i] = cot[i] = 0;
		Try(0);
		cout << cnt << endl;
	}
}
