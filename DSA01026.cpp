#include <bits/stdc++.h>

using namespace std;
int n;
int a[20];

bool check(){
	if(n < 6) return false;
	if(a[0] != 1 || a[n-1] != 0) return false;
	for(int i = 0; i < n-1; i++){
		if(a[i] && a[i+1]) return false;
	}
	for(int i = 0 ; i < n-3; i++){
		if(!a[i] && !a[i+1] && !a[i+2] && !a[i+3]) return false;
	}
	return true;
}

void in(){
	if(check()){
		for(int j = 0; j < n ;j++){
			if(a[j]) cout << "8";
			else cout << "6";
		}
		cout << endl;
	}
}

void khoitao(){
	a[0] = 1;
	for(int i = 0; i < n; i++){
		a[i] = 0;
	}
	in();
}



void sinh(){
	int i = n-1;
	while(i >= 0 && a[i] == 1){
		i--;
	}
	if(i < 0) return;
	a[i] = 1;
	for(int j = i+1; j < n; j++){
		a[j] = 0;
	}
	in();
	sinh();
}
int main(){
	cin >> n;
	khoitao();
	sinh();
}
