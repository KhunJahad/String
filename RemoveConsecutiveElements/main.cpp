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
	string ans="";
	if (s.size()==1){
		cout<<s<<"\n";
		return 0;
	}
	for(int i=0;i<s.size()-1;i++){
		ans+=s[i];
		while (s[i]==s[i+1]){
			i++;
		}
	}
	if (ans[ans.size()-1]!=s[s.size()-1]) ans+=s[s.size()-1];
	cout<<ans<<"\n";
	return 0;
}

