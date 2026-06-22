#include <bits/stdc++.h>

using namespace std;
char c;
int n, k;
int a[50];
void Try(int i){
	for(int j = a[i-1]; j <= n; j++){
		a[i] = j;
		if(i == k){
			for(int t = 1; t <= k; t++){
				char s = a[t] + 64;
				cout << s;
			}
			cout << endl;
		}else Try(i+1);
	}
}
int main(){
	cin >> c;
	cin >> k;
	a[0] = 1;
	n = c-64;
	Try(1);
}
