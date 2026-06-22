#include <bits/stdc++.h>

using namespace std;

int n; 
int a[1001]; 

void in(){
	for(int i = 0; i < n; i++){
		cout << a[i]; 
	}
	cout << " ";
}

void khoitao(){
	for(int i = 0; i < n; i++){
		a[i] = i+1;
	}
	in();
}

void sinh(){
	int i = n-2; 
	while(i >= 0 && a[i] >= a[i+1]){
		i--;
	}
	if(i < 0) return; 
	int j = n-1; 
	while(a[j] < a[i]){
		j--;
	}
	int tmp = a[j]; 
	a[j] = a[i]; 
	a[i] = tmp; 
	int r = n-1, l = i+1; 
	while(l < r){
		tmp = a[r]; 
		a[r] = a[l]; 
		a[l] = tmp; 
		r--; 
		l++;
	}
	in(); sinh();
}
int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n; 
		khoitao(); 
		sinh(); 
		cout << endl; 
	}
}
