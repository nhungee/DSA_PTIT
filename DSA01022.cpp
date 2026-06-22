#include <bits/stdc++.h>

using namespace std;

int n;
int a[1001]; 
int b[1001];
int cnt = 1;

bool check(){
	for(int i = 0; i < n; i++){
//		for(int j = 0; j < n; j++){
			if(a[i] != b[i]){
				return false;
			}
		
	}
	return true; 
}

void in(){
	if(check()){
		cout << cnt << endl;
		return;
	}	
}
void khoitao(){
	for(int i = 0; i < n; i++){
		cin >> b[i];
		a[i] = i+1;
	}
	in();
}

void sinh(){

	int i = n-2; 
	while(i >= 0 && a[i] >= a[i+1]){
		i--;
	}
	if(i < 0){
//		cout << n << endl;
		return; 
	}
	int j = n-1;
	while(a[j] <= a[i]){
		j--;
	}
	int tmp = a[j];
	a[j] = a[i];
	a[i] = tmp;
	int l = i+1, r = n-1; 
	while(l < r){
		tmp = a[l];
		a[l] = a[r];
		a[r] = tmp;
		r--;
		l++;
	}
	cnt++;
	in();
	sinh();	
}
int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n;
		cnt = 1; 
		khoitao(); 
		if(!check())sinh(); 
	}
}
