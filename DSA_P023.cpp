#include <bits/stdc++.h>
using namespace std;
int n, k;
int a[20];
int cnt = 0;
bool snt(int s){
	if(s < 2) return false;
	for(int i = 2; i*i <= s; i++){
		if(s % i == 0) return false;
	}
	return true;
}
void Try(int i){
	for(int j = a[i-1]+1; j <= n-k+i; j++){
		a[i] = j;
		if(i == k){
			cnt++;
			if(snt(cnt)){
				cout << cnt << ": ";
				for(int t = 1; t <= k; t++){
					cout << a[t] << " ";
				}
				cout << endl;
			}
		}else Try(i+1);
	}
}

int main(){
	cin >> n >> k;
	Try(1);
}