#include <bits/stdc++.h>

using namespace std;

int n; 
char a[1005];
int used[1005];
string s;

void Try(int i){
	if(i == n){
		for(int j = 0; j < n; j++){
			cout << a[j];
		}
		cout << endl;
		return;
	}
	for(int j = 0; j < n; j++){
		if(!used[j]){
			a[i] = s[j];
			used[j] = 1;
			Try(i+1);
			used[j] = 0;
		}
	}
	
}

int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> s;
		sort(s.begin(), s.end());
		n = s.size();
		memset(used, 0, sizeof(used));
		Try(0);
	}
}