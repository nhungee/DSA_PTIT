#include <bits/stdc++.h>

using namespace std;
int cnt = 1;
int n; 
int a[1001];
void in(){
	cout << cnt << ": ";
	for(int i = 1; i <= n; i++){
		cout << a[i] << " "; 
	}
	cout << endl;
	cnt++; 
}

void khoitao(){
	for(int i = 1; i <= n; i++){
		a[i] = i;
	}
	in();
}

void sinh(){
	int i = n-1; 
	while(i >= 1 && a[i] >=  a[i+1]){
		i--; 
	}
	if(i < 1)  return;
	int j = n; 
	while(a[j] < a[i]){
		j--;
	}
	int tmp = a[i];
	a[i] = a[j]; 
	a[j] = tmp;  
	int l = i+1, r = n; 
	while(l < r){
		tmp = a[l]; 
		a[l] = a[r]; 
		a[r] = tmp; 
		l++; 
		r--; 
	}
	in(); 
	sinh();
}

int main(){
	cin >> n;
	khoitao(); 
	sinh(); 
}
