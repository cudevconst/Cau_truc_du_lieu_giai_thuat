#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		stack<int> res;
		res.push(-1);
		int n = s.length();
		int cnt = 0;
		for(int i = 0;i < n; i++){
			if(s[i] == '('){
				res.push(i);
			}
			else {
				if(!res.empty()){
					res.pop();
				}
				if(!res.empty()){
					cnt  = max(cnt,i-res.top());
				}
				else {
					res.push(i);
				}
			}
		}
		cout << cnt << endl;
	}
}