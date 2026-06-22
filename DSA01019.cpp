#include <bits/stdc++.h>

using namespace std; 

int n;
string s;

bool check(string a){
	if(a[0] != 'H') return false;
	if(a[n-1] != 'A') return false;
	for(int i = 0; i < n-1; i++){
		if(a[i] == 'H' && a[i+1] == 'H') return false; 
	}
	return true;
}

void in(){
	if(check(s)){
		for(int i = 0; i < n; i++){
			cout << s[i]; 
		}
		cout << endl; 
	}
}

void khoitao(){
	s = string(n, 'A'); 
//	in();
}

void sinh(){
	int i = n-1; 
	while(i >= 0 && s[i] == 'H'){
		i--; 
	}
	if(i < 0) return; 
	s[i] = 'H'; 
	for(int j = i+1; j < n; j++){
		s[j] = 'A'; 
	}
	in(); 
	sinh();
}

int main(){
	int t; cin >> t; 
	while(t--){
		cin >> n;
 		khoitao();
		sinh(); 
		cout << endl; 
	}
}