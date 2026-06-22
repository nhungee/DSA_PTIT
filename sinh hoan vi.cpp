#include <bits/stdc++.h>

using namespace std;
int n;
int a[1001];
void khoitao(){
	for(int i = 0 ; i < n;i++){
		a[i] = i+1;
	}
	for(int i = 0; i < n; i++){
		cout << a[i] << " ";
	}
	cout << endl;
}

void sinh(){
	int i = n-2;
	while(i >= 0 && a[i] >= a[i+1]){
		i--;
	}
//	cout << "i: " << i  << " ";
 	if(i < 0) return;
	int j = n-1;
	while(a[j] < a[i]){
		j--;
	}
	int tmp = a[i];
	a[i] = a[j];
	a[j] = tmp;
	int r = n-1, l = i+1;
	while(l < r){
		int k = a[r];
		a[r] = a[l];
		a[l] = k;
		r--;
		l++;
	}
	for(int k = 0 ; k < n; k++){
		cout << a[k] << " ";
	}
	cout << endl;
	sinh();
}
int main(){
	cin >> n;
	khoitao();
	sinh();
	
}