#include <bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n];
		for(int i = 0; i< n; i++){
			cin >> a[i];
		}
		stack<int> st, tmpst ;
		for(int i = 0;  i < n ; i++){
			for(int j = i; j < n ; j++){
				if(a[i] < a[j]){
					tmpst.push(a[j]);
					break;
				}
				else if(j == n-1) tmpst.push(-1);
			}
		}
		while(!tmpst.empty()){
			st.push(tmpst.top());
			tmpst.pop();
		}

		while(!st.empty()){
			cout << st.top() << " ";
			st.pop();
		}
		cout << endl;
	}
}
