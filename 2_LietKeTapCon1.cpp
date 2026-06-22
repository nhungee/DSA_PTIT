#include <bits/stdc++.h>

using namespace std; 
int n; 
int a[16]; 
string b[16];
set<string> s;

void luu(){
	string tmp = " ";
	for(int i = 0; i < n ; i++){
		if(a[i]) tmp += b[i]; 
	}
	s.insert(tmp);  
}

void in(){
	for(auto x : s){
		cout << x << endl;
	}
}
void khoitao(){
	for(int i = 0; i <n; i++){
		cin >> b[i]; 
		a[i] = 0;
	}
}

void sinh(){
	int i = n-1; 
	while(i >= 0 && a[i] == 1){
		i--;
	}
	if(i < 0 ) return; 
	a[i] = 1;
	for(int j = i+1; j < n; j++){
		a[j] = 0;
	}
	luu(); 
	sinh(); 
}
int main(){
	cin >> n ; 
	khoitao(); 
	sinh(); 
	in(); 
}