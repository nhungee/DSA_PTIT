#include <bits/stdc++.h>

using namespace std;

void insert(vector<int> &a, int n){
	int key, j;
	for(int i = 0; i < n ; i++){
		key = a[i];
		j  = i-1;
		while(j  >= 0 && a[j] > key){
			a[j+1] = a[j];
			j--;
		}
		a[j+1] = key;
		cout << "Buoc " << i << ": ";
		for(int k = 0; k <= i; k++){
			cout << a[k] << " ";
		}
		cout << endl;
	}
}

int main(){
	int n; cin >> n;
	vector<int> a(n);
	for(int i = 0; i < n ;i++){
		cin >> a[i];
	}
	insert(a, n);
}
