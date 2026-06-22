#include <bits/stdc++.h>

using namespace std;

//vector<pair<int,int>>matches;
bool solve(string s){
	stack<int> st;
	int n = (int) s.size();
	for(int i = 0; i < n; i++){
		if(s[i] == '(' || s[i] == '[' || s[i] == '{'){
			st.push(i);
		}else{
			if(st.empty()) return false;
			if((s[st.top()] == '(' && s[i]!=')') || (s[st.top()] == '['  && s[i]!=']') || (s[st.top()] == '{' && s[i]!='}')) return false;
//			matches.push_back({st.top(), i});
			st.pop();
		}
	}
	if(!st.empty()) return false;
	return true;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s; 
		if(solve(s)) cout << "YES\n";
		else cout << "NO\n";
	}
}
