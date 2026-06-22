#include <bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n; cin >> n; 
		set<int> a;
		a.clear();
		for(int i = 0; i< n;i++){
			int x; cin >> x;
			a.insert(x);
		}
		
		if(a.size() < 2) cout << "-1" << endl;
		else{
			auto x = a.begin();
			cout << *x << " " << *++x;
			cout << endl;
		}
	}
}
