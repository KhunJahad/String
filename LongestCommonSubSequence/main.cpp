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
	string a,b;
	cin>>a>>b;

	int n=a.size();
	int m=b.size();

	int dp[n+1][m+1];
	memset(dp,0,sizeof(dp));

	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			if (a[i-1]==b[j-1]) dp[i][j]=dp[i-1][j-1]+1;
			else{
				dp[i][j]=max(dp[i-1][j-1],dp[i][j-1]);
				dp[i][j]=max(dp[i][j],dp[i-1][j]);
			}
		}
	}
	cout<<dp[n][m]<<"\n";
	return 0;
}

