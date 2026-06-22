#include <bits/stdc++.h>

using namespace std;
char c;
int n;
int ae[10];
int a[50], used[50];
bool kt(int x[]){
	for(int i = 2; i <= n-1; i++){
		if(ae[a[i]] && !ae[a[i-1]] && !ae[a[i+1]])
		return false;
	}
	return true;
}
void Try(int i){
	for(int j = 1; j <= n; j++){
		if(!used[j]){
			a[i] = j;
			used[j] = 1;
			if(i == n && kt(a)){
				for(int t = 1; t <= n; t++){
					char s = a[t] + 64;
					cout << s;
				}
				cout << endl;
			}else {
				Try(i+1);
				
			}	
			used[j] = 0;
		}

	}
}
int main(){
	cin >> c;
	n = c-64;
	ae[1] = ae[5] = 1;
	Try(1);
}
