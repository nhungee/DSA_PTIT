#include <bits/stdc++.h>

using namespace std;

int n, k; 
int a[1001]; 

//void in(){
//	for(int i = 0; i < k; i++){
//		cout << a[i] << " "; 
//	}
//	cout << endl;
//}

void khoitao(){
	for(int i = 0; i < k; i++){
		cin >> a[i];
	}
}

void sinh(){
	int i = k-1; 
	while(i >= 0 && a[i] >= n+1-k+i){
		i--;
	}
	if(i < 0){
		for(int j = 0; j < k ; j++){
			cout << j+1 << " "; 
		}
		cout << endl; 
		return;
	} 
//	cout << i << endl; 
	a[i]++;
//	cout << a[i] << endl; 
	for(int j = i+1; j < k ; j++){
		a[j] = a[j-1]+1;
	}
	for(int i = 0; i < k; i++){
		cout << a[i] << " "; 
	}
	cout << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n  >> k; 
		khoitao(); 
		sinh(); 
	}
}
