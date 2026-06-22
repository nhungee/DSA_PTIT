#include <bits/stdc++.h>

using namespace std;
int n;
int a[20];
int b[20];
vector<vector<int>> v;
void luu(int s[]){
	for(int i = 0; i< n;i++){
		v.push_back(s[i]);
	}
}
void in(){
	cout << "[";
	for(int i = 0; i < n; i++){
		if(i < n-1) cout << a[i] << " ";
		else cout << a[i];
	}
	cout << "]" << endl;
}
void Try(int n){
	if(n <= 1) return;
	int j = 0;
//	cout << "[";
	for(int i = 0; i < n-1;i++){
		b[j] = a[i] + a[i+1];
		
		j++;
	}
//	cout << "]" << endl;
	
	n--;
	if(j == n) luu(b);
	Try(n);			
}

int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n;
		for(int i = 0; i < n; i++){
			cin >> a[i] ;
		}
		Try(n);
		for(int i = n-1; i >= 0; i--){
			cout << "[";
			for(auto x : v){
				cout << x;
			}
			cout << "]" << " ";
		}
	}
}
