#include <bits/stdc++.h>

using namespace std;
int n;
int a[1001];
int cnt = 1;

bool fibo(int s){
	fibo(0) = 0;
	fibo(1)= 1;
	if(s > 1){
		if(fibo(s) != fibo(s-1) + fibo(s-2)) return false;
	}
	fibo(s+1);
	return true;
}
void in(){
	if(fibo(cnt)){
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
	in();
}

void sinh(){
	int i = n-1;
	while(i >= 0 && a[i] == 1){
		i--;
	}
	a[i] = 1;
	for(int j = i+1; j < n ; j++){
		a[j] = 0;
	}
	in();
	sinh();
}
int main(){
	i
}
