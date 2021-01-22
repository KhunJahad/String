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

	map <char,int> mp;

	for (int i=0;i<s.size();i++){
		mp[s[i]]++;
	}

	for (auto itr=mp.begin();itr!=mp.end();itr++){
		if (itr->second>1) cout<<itr->first<<"\n";
	}
	return 0;
}