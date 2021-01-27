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
	int tc;
	cin>>tc;
	while(tc--){
		string a,b;
		cin>>a>>b;
		int m=a.size(); // pattern
		int n=b.size(); // string

		bool dp[n+1][m+1]; // i characters in first matches j character in second
		memset(dp,false,sizeof(dp));
		dp[0][0]=true;

		for(int i=1;i<=m;i++){
			if (a[i-1]=='*') dp[0][i]=dp[0][i-1];
		}

		for (int i=1;i<=n;i++){
			for(int j=1;j<=m;j++){
				if (a[j-1]=='*') dp[i][j]=dp[i-1][j]||dp[i][j-1];
				else if (a[j-1]=='?'||b[i-1]==a[j-1]) dp[i][j]=dp[i-1][j-1];
				else dp[i][j]=false; 
			}
		}
		if (dp[n][m]) cout<<"Yes\n";
		else cout<<"No\n";
	}


	return 0;
}

