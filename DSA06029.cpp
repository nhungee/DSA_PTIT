#include <bits/stdc++.h>

using namespace std;
vector<vector<int>> v;
void insert(vector<int> &a, int n){
	for(int i = 0; i< n ; i++){
		int key = a[i];
		int j = i-1;
		while(j >= 0 && a[j] > key){
			a[j+1] = a[j];
			j--;
		}
		a[j+1] = key;
		vector<int> x;
		for(int k = 0; k <= i; k++){
			x.push_back(a[k]);
		} 
		v.push_back(x);
	}
	for(int i = v.size()-1; i >= 0; i--){
		cout << "Buoc " << i << ": ";
		for(int x : v[i]) cout << x << " ";
		cout << endl;
	}
}
int main(){
	int n; cin >> n;
	vector<int> a(n);
	for(int i = 0; i < n ; i++){
		cin >> a[i];
	}
	insert(a, n);

}
