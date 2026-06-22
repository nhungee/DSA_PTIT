#include <bits/stdc++.h>

using namespace std;

int n, k, m ; 
int a[20]; 
int b[1001]; 
set<int> s; 


void in(){
	for(int i = 0; i < k; i++){
		cout << b[a[i]] <<" "; 
	}
	cout << endl;
}

void khoitao(){
	for(int i = 0; i < n; i++){
		int x; cin >> x; 
		s.insert(x); 
	}
	for(int x : s){
		b[m++] = x; 
	}
	for(int i = 0; i < k; i++){
		a[i] = i; 
	}
	in(); 
}

void sinh(){
	int i = k-1; 
	while(i >= 0 && a[i] >= m-k+i){
		i--;
	}
	if(i < 0) return; 
	a[i]++; 
	for(int j = i+1; j < k ; j++){
		a[j] = a[j-1] +1; 
	}
	in(); 
	sinh(); 
}

int main(){
	cin >> n >> k ; 
	khoitao(); 
	sinh();
}