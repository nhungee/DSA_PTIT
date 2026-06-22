#include <bits/stdc++.h>

using namespace std;


int n, k; 
int a[1001]; 
bool check(int a[]){
	int sum = 0; 
	for(int i = 0; i < n; i++){
		sum += a[i]; 
	}
	if(sum != k) return false; 
	return true;
}

void in(){
	if(check(a)){
		for(int i = 0; i <n ; i++){
			cout << a[i];
		}
		cout << endl;
	}
}

void khoitao(){
	for(int i = 0; i < n; i++){
		a[i] = 0;
	}
}

void sinh(){
	int i = n-1; 
	while(i >= 0 && a[i]){
		i--;
	}
	if(i < 0) return; 
	a[i] = 1; 
	for(int j = i+1; j < n ; j++){
		a[j] = 0;
	}
	in();
	sinh(); 
}
int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n >> k; 
		khoitao(); 
		sinh();
	}
}
