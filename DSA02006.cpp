#include <bits/stdc++.h>

using namespace std;
int n, k;
int a[1001];
int b[1001];
int used[1001];
int sum = 0;
bool found;
void Try(int i, int start){
//	cout << i << " "  << start << " " << sum << endl;
	for(int j = start; j < n; j++){
		if(a[j] + sum <= k){	
			b[i] = a[j];
			sum += b[i];
			if(sum == k){
				found = true;
				cout << "[";
				for(int t = 0; t <= i; t++){
					cout << b[t] ;
					if(t < i) cout << " "; 
				}
				cout << "] ";
			}
			else{
				Try(i+1, j+1);
			}
			sum -= a[j];
		}
		
	}
	
}	


int main(){
	int t;
	cin >> t;
	while(t--){
		sum = 0;
		cin >> n >> k;
		for(int i = 0; i< n; i++){
			cin >> a[i];
		}
		sort(a, a+n);
		found = false;
		Try(0, 0);
		if(!found) cout << "-1";
		cout << endl;
	}
}