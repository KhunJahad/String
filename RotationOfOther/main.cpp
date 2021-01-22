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
	string s,a,b;
	cin>>a>>b;
	s=a+a;
	if (s.find(b)!=string::npos) cout<<"yes\n";
	else cout<<"no\n";
	return 0;
}