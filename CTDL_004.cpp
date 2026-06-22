#include <bits/stdc++.h>

using namespace std;

int n, k;
int a[1001];
int b[1001];
int cnt = 0;

bool check(int a[], int b[]){
	for(int i = 0; i < k-1 ; i++){
		if(b[a[i]] > b[a[i+1]]) return false;
	}
	return true;
}

void khoitao(){
	for(int i = 0; i < n; i++){
		cin >> b[i];
	}
	for(int i= 0; i< k; i++){
		a[i] = i;
	}
	if(check(a, b)) cnt++;
}

void sinh(){
	int i = k-1;
	while(i >= 0 && a[i] == n-k+i){
		i--;
	}
	if(i < 0) return;
	a[i] ++;
	for(int j = i+1; j < k; j++){
		a[j] = a[j-1]+1;
	}
	if(check(a, b)) cnt++;
	sinh();
}
int main(){
//	int t;
//	cin >> t;
//	while(t--){
		cin >> n >> k;
		khoitao();
		sinh();
		cout << cnt << endl;
//	}
}
