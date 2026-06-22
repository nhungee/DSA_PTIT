#include <bits/stdc++.h>

using namespace std;

int n, k;
int a[1001]; 

void in(){
	for(int i = 0; i < k; i++){
		char c = a[i]+ 64;
		cout <<  c;
	}
	cout << endl;
}


void khoitao(){
	for(int i = 0; i < k; i++){
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
	in();
	sinh();
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
