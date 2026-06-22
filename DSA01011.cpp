#include <bits/stdc++.h>

using namespace std;

string s;
void khoitao(){
	cin >> s;
}

void sinh(){
	int i = s.size()-2;
	while(i >= 0 && s[i] >= s[i+1]){
		i--;
	}
	if(i < 0){
		cout << "BIGGEST" << endl;
		return;
	}
	int j = s.size()-1;
	while(j > i && s[j]<= s[i]){
		j--;
	}
	char tmp = s[i];
	s[i] = s[j];
	s[j]= tmp;
	int l = i+1, r = s.size()-1;
	while(r > l){
		char k = s[r];
		s[r] = s[l];
		s[l] = k;
		r--;
		l++;
	}
	for(int k = 0; k < s.size(); k++){
		cout << s[k];
	}
	cout << endl;
}

int main(){
	int t;
	cin >> t;
	int cnt;
	while(t--){
		cin >> cnt;
		khoitao();
		cout << cnt << " ";
		sinh();

	}
}