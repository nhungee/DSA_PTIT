#include <bits/stdc++.h>

using namespace std;

int n;
int a[11][11];
vector<string> res;
void Try(int i, int j, string s){
	if(i >= n || j >= n || a[i][j] == 0) return;
	
	if(i == n-1 && j == n-1){
		res.push_back(s);
		return;
	}
	Try(i+1, j, s+"D");
	Try(i, j+1, s+"R");
}
int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n;
		res.clear();
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				cin >> a[i][j];
			}
		}
		Try(0, 0, "");
		if(res.empty()) cout << -1 << endl;			
		else for(string s:res) cout << s << " ";
		cout << endl;	
	}
}
