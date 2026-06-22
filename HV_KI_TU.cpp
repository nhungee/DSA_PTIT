#include <bits/stdc++.h>

using namespace std;

int n, n1, n2;
int a[11]; 
//int b[11]; 
void in(){
	for(int i = 0; i < n; i++){
		cout << char(a[i]+ 'A'-1); 
	}
	cout << endl;
}
void khoitao(){
	int mini = min(n1, n2); 
//	cout << mini << endl;
	for(int i = 0; i < n;  i++){
		a[i] = mini+i;  
	}
	in();
}

void sinh(){
	int i = n-2; 
	while(i >= 0 && a[i] >= a[i+1]){
		i--; 
	}
	if(i < 0) return; 
	int j = n-1; 
	while(a[j] < a[i]){
		j--; 
	}
	int tmp = a[i]; 
	a[i] = a[j]; 
	a[j] = tmp; 
	int l = i+1, r = n-1; 
	while(l  < r){
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
	char c1, c2; 
	cin >> c1 >> c2;
	n1 = c1 - 'A' + 1;
	n2 = c2 - 'A' + 1; 
//	cout << n1 << " " << n2 << endl;
	n = abs(n2-n1-1);
	cout << n << endl;
	khoitao(); 
	sinh();
}
