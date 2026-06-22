#include <bits/stdc++.h>

using namespace std;
int n;
int a[20];
int b[20];
int cnt = 0;
vector<vector<string>> v;
void luu(int s[], int n){
	vector<string> c;
	for(int i = 0 ; i < n; i++){
		c.push_back(to_string(s[i]));
	}
	v.push_back(c);
}

void Try(int i){
    if(cnt >= 2){
//        for(int t = 0; t < cnt; t++)
//            cout << b[t] << " ";
//        cout << endl;
		luu(b, cnt);
    }

    for(int j = i; j < n; j++){
        if(cnt == 0 || a[j] > b[cnt - 1]){
            b[cnt++] = a[j];
            Try(j + 1);
            cnt--;
        }
    }
}

int main(){
	cin >> n;
	for(int i = 0; i  < n; i++){
		cin >> a[i];
	}
	Try(0);
	sort(v.begin(), v.end());
    for(auto &x : v){
        for(string y : x){
            cout << y << " ";
        }
        cout << endl;
	}
}
