#include <bits/stdc++.h>

using namespace std;

int main(){
	string a, b;
	cin >> a >> b;
	string s1 = a, s2 = b; 
	for(char &c : s1) if(c == '6') c = '5';
	for(char &c : s2) if(c == '6') c = '5';
	cout << stoll(s1)+stoll(s2) << " ";
	for(char &c : s1) if(c == '5') c = '6';
	for(char &c : s2) if(c == '5') c = '6';
	cout << stoll(s1)+stoll(s2);	
}
