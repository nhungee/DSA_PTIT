#include <bits/stdc++.h>

using namespace std;

int n; 
int a[1001]; 
int b[1001];

void in(){
	for(int i = 0; i <n ; i++){
		cout << a[i] << " "; 
	}
	cout << endl;
}
void khoitao(){
	for(int i = 0; i <n; i++){
		cin >> a[i]; 
	}
	sort(a, a+n); 
	in(); 
}

void sinh(){
	int i = n-2; 
	while(i >= 0 && a[i] >= a[i+1]){
		i--; 
	}
	if(i <  0 ) return; 
	int j = n-1 ; 
	while(a[j] < a[i] ){
		j--; 
	}
	int tmp = a[i]; 
	a[i] = a[j]; 
	a[j] = tmp; 
	int l = i+1, r = n-1; 
	while(l < r){
		tmp = a[r]; 
		a[r] = a[l]; 
		a[l] = tmp;
		l++;
		r--;
	}
	in(); 
	sinh(); 
}
int main(){
	cin >> n ;
	khoitao(); 
	sinh();
}
