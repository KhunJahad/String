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
	int n;
	cin>>n;
	string a[n];
	for(int i=0;i<n;i++) cin>>a[i];
	map <string,int> mp;
	for(int i=0;i<n;i++){
		mp[a[i]]++;
	}
	vector <pair<string,int>> vec;
	copy(mp.begin(),mp.end(),back_inserter<vector<pair<string,int>>>(vec));

	sort(vec.begin(),vec.end(),
		[](pair<string,int>& l,pair<string,int>& r){
			return l.second>r.second;
		}
		);
	cout<<vec[1].first<<"\n";

	return 0;
}

/*
aaa bbb ccc bbb aaa aaa

*/