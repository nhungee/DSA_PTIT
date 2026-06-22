#include <bits/stdc++.h>

using namespace std;

int main(){
	stack<int> st;
	string s;
	while(cin >> s){
		if(s == "push"){
			int x; cin >> x;
			st.push(x);
		}
		else if(s == "pop"){
			if(!st.empty()) st.pop();
		}
		else if(s == "show"){
			if(st.empty()){
				cout << "empty\n";
			}else{
				stack<int> tmp = st;
				vector<int> v;
				while(!tmp.empty()){
					v.push_back(tmp.top());
					tmp.pop();
				}
				reverse(v.begin(), v.end());
				for(int x : v) cout << x << " ";
				cout << endl;
			}
		}
	}
}
