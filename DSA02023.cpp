#include <bits/stdc++.h>

using namespace std;
int n, k;
//to hop
vector<string> v;
int a[50];


void Try(int i){
	if(i == k){
		for(int j = 1; j <= k; j++){
			cout << v[a[j]-1] << " ";
		}
		cout << endl;
		return;
	}
	for(int j = a[i-1]+1; j <= n-k+i; j++){
		a[i] = j;
		Try(i+1);
	}
}
//void Try(int i){
//	for(int j = a[i-1]+1; j <= n-k+i ; j++){
//		a[i] = j;
//		if(i == k) {
//			for(int i = 1; i <= k; i++){
//			    cout << v[a[i]-1] << " ";
//			}
//			cout << endl;	
//		}
//		else Try(i+1);
//	}
//	
//}
int main(){
	v.clear();
	cin >> n >> k;
	set<string> s;
	for(int i = 0; i < n; i++){
		string x;
		cin >> x;
		s.insert(x);
	}
	for(auto x : s) v.push_back(x);
	n = v.size();
//	cout << "n = " << n << ", k = " << k << endl;
	
	a[0] = 0;
	Try(1);
}
