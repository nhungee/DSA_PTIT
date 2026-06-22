#include <bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s; 
		stack<char> st;
		for(char c : s){
			if(c == ')'){
				if(!st.empty() && st.top() == '(') st.pop();
				else st.push(c);
			}else st.push(c);
		}
		int out = 0, in = 0;
		while(!st.empty()){
			if(st.top() == '(') in++;
			else out++;
			st.pop();
		}
		cout << (in+1)/2 + (out+1)/2 << endl;
	}
}
