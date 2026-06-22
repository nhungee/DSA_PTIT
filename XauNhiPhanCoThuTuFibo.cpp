#include <bits/stdc++.h>

using namespace std;
int n;
int a[15];
int cnt = 1;
int f[93];
int b[1001];


void fibo(){
	for(int i = 0; i < 1001; i++){
		b[i] = 0;
	}
	f[0] = 0;
	f[1] = 1;
	b[f[1]] = 1;
	for(int i = 2; i < 16; i++){
		f[i] = f[i-1] + f[i-2];
//		cout << f[i] << " ";
		b[f[i]] = 1;
	}	
//	fibo(i+1);
}


void in(){
	
	if(b[cnt] == 1){
		cout << cnt << ": ";
		for(int i = 0; i < n; i++){
			cout << a[i] << " ";
		}
		cout << endl;
	}

}
void khoitao(){
	for(int i = 0; i < n; i++){
		a[i] = 0;
	}
//	cout << cnt << ": ";
	in();
}

void sinh(){
	int i = n-1;
	while(i >= 0 && a[i] == 1){
		i--;
	}
	if(i < 0) return;
	a[i] = 1;
	for(int j = i+1; j < n ; j++){
		a[j] = 0;
	}
	cnt++;
	in();
	sinh();
}
int main(){
	cin >> n;
	fibo();
	khoitao();
	sinh();
	
}
