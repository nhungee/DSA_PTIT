#include <bits/stdc++.h>

using namespace std;
struct action{
	int start; 
	int end; 
};

bool compare(action a, action b){
	return a.end < b.end;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		int n; cin >> n;
		vector<action> actions(n); 
		for(int i = 0; i < n; i++){
			cin >> actions[i].start >> actions[i].end;
		}
		sort(actions.begin(), actions.end(), compare);
		int last = -1;
		int cnt = 0;
		for(int i = 0; i < n; i++){
			if(actions[i].start >= last){
				cnt++; 
				last = actions[i].end;
			}
		}
		cout << cnt << endl ;
	}
}
