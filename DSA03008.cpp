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
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		vector<action> actions(n);
		for(int i = 0; i< n; i++) cin >> actions[i].start;
		for(int i = 0; i< n; i++) cin >> actions[i].end;
		sort(actions.begin(), actions.end(), compare);
		int cnt = 0; int last_time = -1;
		for(int i = 0; i < n; i++){
			if(actions[i].start >= last_time){
				cnt++;
				last_time = actions[i].end;
			}
		}
		cout << cnt << endl;
	}
}