#include <bits/stdc++.h>

using namespace std;

void select(vector<int> &a, int n){
	for(int i = 0 ; i < n-1; i++){
		int mini = i;
		for(int j = i+1; j < n ; j++){
			if(a[j] < a[mini] )  mini = j;
		}
		int tmp = a[i];
		a[i] = a[mini];
		a[mini] = tmp;
		cout << "Buoc " << i+1 << ": ";
		for(int x : a) cout << x << " ";
		cout << endl;
	}
}
int main(){
	int n; cin >> n ;
	vector<int>  a(n);
	for(int i = 0 ; i  < n ;i++){
		cin >> a[i];
	}
	select(a, n);
	
}
