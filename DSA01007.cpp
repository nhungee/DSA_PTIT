#include <bits/stdc++.h>

using namespace std; 

int n;
string s;

void in(){
	for(int i = 0; i < n; i++){
		cout << s[i];
	}
	cout << " ";
}

void khoitao(){
	s = string(n, 'A'); 
	in();
}
void sinh(){
	int i = n-1; 
	while(i >= 0 && s[i] == 'B'){
		i--; 
	}
	if(i < 0) return; 
	s[i] = 'B'; 
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