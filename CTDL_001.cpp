#include <bits/stdc++.h>

using namespace std; 

int n; 
int a[1001]; 

bool check(int a[]){
	for(int i = 0; i < n; i++){
		if(a[i] != a[n-1-i]) return 0; 
	}
	return 1; 
}
void in(){
	for(int i = 0; i <n; i++){
		cout << a[i] << " ";
	}
	cout << endl;
}

void khoitao(){
	for(int i = 0; i <n; i++){
		a[i] = 0;
	}
	if(check(a)) in(); 
}
void sinh(){
	int i = n-1;
	while(i >= 0 && a[i]){
		i--; 
	} 
	if(i < 0 ) return; 
	a[i] = 1; 
	for(int j = i+1; j < n; j++){
		a[j] = 0;
	}
	if(check(a)) in();
	sinh(); 
	
}
int main(){
	cin >> n; 
	khoitao(); 
	sinh(); 
}