#include <bits/stdc++.h>

using namespace std;
int n , k;
int a[1001];
int soday = 0;
vector<vector<int>> res;

void luu(){
    res.push_back(vector<int>(a, a + n));
}

bool check(int a[]){
	int cnt = 0;
	int dem = 0;
	for(int i = 0; i < n; i++){
		if(!a[i]){
			cnt++;
			if(cnt > k) return false;
		}else{
			if(cnt == k) dem++;
			cnt = 0;
		}
	}
	if(cnt == k) dem++;
	return dem == 1;
}

void in(){
	for(auto x : res){
		for(int v : x){
			if(v == 1) cout << "B";
			else cout << "A";
		}
		cout << endl;
	}
	
}

//quy uoc: A == 0, B == 1;
void khoitao(){
	for(int i = 0; i < n; i++){
		a[i] = 0;
	}
	if(check(a)){
		soday++;
		luu();
	}
}



void sinh(){
	int i = n-1;
	while(i >= 0 && a[i] == 1){
		i--;
	}
	if(i < 0 ) return;
	a[i] = 1;
	for(int j = i+1; j < n; j++){
		a[j] = 0;
	}
	if(check(a)){
		soday++;
		luu();
	}
	sinh();
}

int main(){
		cin >> n >> k;
		khoitao();
		sinh();
		cout << soday << endl;
		in();
}
