#include <bits/stdc++.h>

using namespace std;
int n, k;
string s;
vector<string> v;
int a[10];

void tu(){
	v.clear();
	stringstream ss(s);
	string word;
	set<string> st;
	while(ss >> word){
		st.insert(word);
	}
	for(auto x : st){
		v.push_back(x);
	}
}

void Try(int i){
	for(int j = a[i-1]+1; j <= v.size()-k+i ; j++){
		a[i] = j;
		if(i == k) {
			for(int i = 1; i <= k; i++){
			    cout << v[a[i]-1] << " ";
			}
			cout << endl;	
		}
		else Try(i+1);
	}
	
}
int main(){
	cin >> n >> k;
	cin.ignore();
	getline(cin, s);
	a[0] = 0;
	tu();
	Try(1);
}
