#include <bits/stdc++.h>

using namespace std;

int n, k;
int a[1001]; 

int b[1001];

int check(int a[], int b[]){
	int cnt = 0;
	for(int i = 0; i < k; i++){
		for(int j = 0; j < k; j++){
			if(a[i] == b[j]){
				cnt++; 
				break;
			}
		}
	}
	return cnt; 
}

void khoitao(){
	for(int i = 0; i < k; i++){
		cin >> a[i];
		b[i] = a[i];
	}
}

void sinh(){
	int i = k-1; 
	while(i >= 0 && a[i] >= n-k+1+i){
		i--;
	}
	if(i < 0){
		cout << k << endl;
		return; 
	}
	a[i]++; 
	for(int j = i+1; j < k; j++){
		a[j] = a[j-1]+1;
	}
	
	cout << k - check(a, b) << endl;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n >>k; 
		khoitao(); 
		sinh(); 
	}
}
