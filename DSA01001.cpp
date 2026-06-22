#include <bits/stdc++.h>

using namespace std;
int n;
string s;
int a[1001]; 

void in(){
	for(int i = 0; i < n; i++){
		cout << a[i];
	}
	cout << endl;
}

void khoitao(){
	cin >> s;
	n = s.size();
	for(int i = 0; i < n; i++){
		a[i] = s[i]-'0'; 
	}
}

void sinh(){
	int i = n-1;
	while(i >= 0 && a[i]){
		i--; 
	}
	if(i < 0){
		for(int j = 0; j < n; j++){
			cout << 0; 
		}
		cout << endl; 
		return;
	}
	a[i] = 1; 
	for(int j = i+1; j < n; j++){
		a[j] = 0;
	}
	in(); 
}

int main(){
	int t;
	cin >> t;
	while(t--){
		khoitao(); 
		sinh(); 
	}
}
