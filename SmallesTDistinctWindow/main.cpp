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
	string a;
	cin>>a;
	int n=a.size();
	int dp[256];
	memset(dp,0,sizeof(dp));
	int start=0;
	int start_ind=-1;
	int len=2e5;
	int dist_count=0;

	for (int i=0;i<n;i++) dp[int(a[i])]++;
	for (int i=0;i<n;i++){
		if (dp[int(a[i])]){
			dist_count++;
			dp[int(a[i])]=0;
		}
	}
	int count=0;

	for(int i=0;i<n;i++){
		dp[a[i]]++;
		if (dp[a[i]]==1) count++;

		if (count==dist_count){
			while(dp[a[start]]>1){
				if (dp[a[start]]>1) dp[a[start]]--;
				start++;
			}

			if (len>i-start+1){
				len=i-start+1;
				start_ind=start;
			}
		}
	}
	cout<<a.substr(start_ind,len)<<"\n";

	return 0;
}

