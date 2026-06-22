#include <bits/stdc++.h>

using namespace std;
int n;
int a[20];
int b[20];
vector<vector<int>> v;

void luu(int s[], int len){
	vector<int> row;
	for(int i = 0; i < len;i++){
		row.push_back(s[i]);
	}
	v.push_back(row);
}

void Try(int n){
	if(n <= 1) return;

	for(int i = 0; i < n-1;i++){
		b[i] = a[i] + a[i+1];
	}

	n--;
	luu(b, n);
	for(int i = 0; i < n;i++){
		a[i] = b[i];
	}
	Try(n);			
}

int main(){
	int t;
	cin >> t;
	while(t--){
		v.clear();
		cin >> n;
		for(int i = 0; i < n; i++){
			cin >> a[i] ;
		}
		luu(a, n);
		Try(n);
		for(int i = v.size() - 1; i >= 0; i--){
		    cout << "[";
		    for(int j = 0; j < v[i].size(); j++){
		        cout << v[i][j];
		        if(j < v[i].size() - 1) cout << " ";
		    }
		    cout << "] ";
		}
		cout << endl;
	}
}
