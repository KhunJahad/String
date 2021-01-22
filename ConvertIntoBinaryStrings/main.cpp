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
	int n=s.size();

	int one_count=0;
	int zero_count=0;

	int ans=0;
	
	for (int i=0;i<n;i++){
		string temp="";
		int curr=s[i]-'0';
		
		if (curr) one_count++;
		else zero_count++;

		if (zero_count==one_count) ans++;
	}

	if (one_count!=zero_count) cout<<"-1\n";
	else cout<<ans<<"\n";
	return 0;
}