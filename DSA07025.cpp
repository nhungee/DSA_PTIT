#include <bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		long long n; cin >> n;
		string s[n];
		stack<long long> st;
		for(int i = 0 ; i <  n; i++){
			cin >> s[i];
		}
		for(int i = 0; i < n; i++){
			
			if(s[i] == "*" || s[i] == "/" || s[i] == "+" || s[i] == "-"){
				long long a = st.top(); st.pop();
				long long b = st.top(); st.pop();
				if(s[i] == "*") st.push(b*a);
				else if(s[i] == "/") st.push(b/a);
				else if(s[i] == "+") st.push(b+a);
				else if(s[i] == "-") st.push(b-a);
			}else st.push(stoll(s[i]));
		}
		cout << st.top() << endl;
	}
}
