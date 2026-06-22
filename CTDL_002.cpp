#include <bits/stdc++.h>

using namespace std;
int n, k; 
int a[1001];
int b[1001];
int cnt = 0; 
bool check(int a[]){
	int sum = 0; 
	for(int i = 1; i <= n; i++){
		if(a[i]) sum += b[i]; 
	}
	if(sum != k) return false;
	return true;
}

void in(){
	if(check(a)){
		cnt++;
		for(int i = 1; i <= n ; i++){
			if(a[i]) cout <<  b[i] << " "; 
		}
		cout << endl;
	}
}

void khoitao(){
	for(int i = 1; i <= n ; i++){
	 	cin >> b[i];
	 	a[i] = 0;
	}
}
//vector<vector<int, int>> v;
void sinh(){
	int i = n; 
	while(i >= 1 && a[i]){
		i--;
	}
	if(i < 1) return;
	a[i] = 1; 
	for(int j = i+1; j <= n; j++){
		a[j] = 0; 
	}
	in();
	sinh();
}
 
int main(){
	cin >> n >> k; 
	khoitao(); 
	sinh(); 
	cout << cnt; 
}
