#include <bits/stdc++.h>

using namespace std;

bool check(string s){
	stack<char> st;
	for(char c : s){
		if(c == ')'){
			bool ha = false;
			char top = st.top(); st.pop();
			while(!st.empty() && top != '('){
				if(top =='*' || top == '/' || top == '+' || top == '-') ha = true;
				top = st.top(); st.pop();
			}
			if(ha == false) return true;
		}else st.push(c);
		
	}
	return false;
}

int main(){
	int t; cin >> t; 
	while(t--){
		string s;
		cin >> s;
		if(check(s)) cout << "Yes\n" ;
		else cout << "No\n";
	}
}