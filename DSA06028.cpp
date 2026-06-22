#include <bits/stdc++.h>

using namespace std;

vector<vector<int>> v;
void select(vector<int> &a, int n){
	v.clear();
	for(int i = 0 ; i < n-1 ; i++){
		int mini = i;
		for(int j = i+1 ; j < n ; j++){
			if(a[j] < a[mini])  mini = j;
		}
		int tmp = a[i];
		a[i] = a[mini];
		a[mini] = tmp;
		v.push_back(a);
	}
	for(int i = v.size()-1; i >= 0 ; i--){
		cout << "Buoc " << i+1 << ": ";
		for(int x : v[i]) cout << x << " ";
		cout << endl;
	}
	
}
int main(){
	int n; cin >> n ;
	vector<int> a(n);
	for(int i = 0; i < n ; i++){
		cin >> a[i];
	}
	select(a, n);
}