#include <bits/stdc++.h>

using namespace std;

int n, k;
int a[1001]; 
int cnt;
int b[1001];

bool check(){
	for(int i = 0; i < n; i++){
//		for(int j = 0; j < n; j++){
			if(a[i] != b[i]){
				return false;
			}
		
	}
	return true; 
}

void in(){
	if(check()){
		cout << cnt << endl;
		return;
	}	
}

void khoitao(){
	for(int i = 0; i < k; i++){
		cin >> b[i];
		a[i] = i+1;
	}
	in();
}

void sinh(){
	int i = k-1; 
	while(i >= 0 && a[i] >= n-k+1+i){
		i--;
	}
	if(i < 0){
//		cout << k << endl;
		return; 
	}
	a[i]++; 
	for(int j = i+1; j < k; j++){
		a[j] = a[j-1]+1;
	}
	cnt++;
	in();
	sinh();
}
int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n >>k;
		cnt = 1; 
		khoitao(); 
		sinh(); 
	}
}