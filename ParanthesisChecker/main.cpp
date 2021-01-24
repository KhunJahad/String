# include <bits/stdc++.h>
using namespace std;

void read_input(){
  #ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif
}

int main(){
	read_input();
	string s;
	cin>>s;
	stack <char> a;
	for(int i=0;i<s.size();i++){
		char bkt=s[i];
		if (bkt=='{'||bkt=='['||bkt=='(') a.push(bkt);
		if (a.empty()){
			cout<<"false";
			return 0;
		}
		if (bkt=='}'||bkt==']'||bkt==')'){
			if (bkt=='}' && a.top()!='{'){
				cout<<"false";
				return 0;
			}
			if (bkt==')' && a.top()!='('){
				cout<<"false";
				return 0;
			}
			if (bkt==']' && a.top()!='['){
				cout<<"false";
				return 0;
			}
			a.pop();
		}
	}
	if (a.empty()) cout<<"true";
	else cout<<"false";

	return 0;
}