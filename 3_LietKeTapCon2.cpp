#include <bits/stdc++.h>

using namespace std;


int n, k, m ; 
set<string> s;
string b[1001]; 
int a[1001];

 
void luu(){
	string tmp;
	for(int i = 0; i < k ; i++){
		tmp += b[a[i]] ;
	}
	s.insert(tmp);
}

void in(){
	for(auto x : s){
		cout << x << endl;
	}
}

void khoitao(){
	for(int i = 0; i < n; i++){
		cin >> b[i]; 
	}
	for(int i = 0; i < k; i++){
		a[i] = i;
	}
	luu(); 
}

void sinh(){
	int i = k-1; 
	while(i >= 0 && a[i] >= n-k+i){
		i--; 
	}
	if(i < 0 ) return; 
	a[i]++;
	for(int j = i+1; j < k ; j++){
		a[j] = a[j-1] +1;
	}
	luu(); 
	sinh(); 
}

int main(){
	cin >> n >> k ; 
	khoitao(); 
	sinh(); 
	in(); 
}
