#include <bits/stdc++.h>

using namespace std;

int main(){
	int n; cin >> n;
	stack<int> st;
	string s;
	int cnt = 1;
	for(int i = 0; i< n; i++){
		cin >> s;
		if(s == "PUSH"){
			cnt++;
			int x; cin >> x;
			st.push(x);
		}
		else if(s == "POP"){
			cnt++;
			if(!st.empty()) st.pop();
		}
		else if(s == "PRINT"){
			cnt++;
			if(!st.empty()) cout << st.top() << endl;
			else cout << "NONE" << endl;
		}
		
	}
}
