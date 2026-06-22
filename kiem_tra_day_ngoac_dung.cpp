#include <bits/stdc++.h>

using namespace std;

stack<int> st;
vector<pair<int , int>> matches; // lưu các cặp dấu ngoặc tương ứng 

bool sovle(string s){
	int n = (int)s.size();
	for(int i = 0; i < n; i++){
		if(s[i]== '(') st.push(i); // chỉ đẩy dấu ngoặc mở vào stack
		else{
			if(st.empty()) return false; // dãy không phải là dãy ngoặc đúng 
			matches.push_back({st.top(), i}); //tìm thấy một ngoặc tương ứng 
			st.pop();
		}
	}
	if(!st.empty()) return false;//nếu stack không rỗng thì không đúng
	return true ; 
}
int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s; 
		if(sovle(s)) cout << "yes\n";
		else cout << "no\n";
	}
}
