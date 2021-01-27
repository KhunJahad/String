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
	if (n<m) return 0;
	int dp_a[256],dp_b[256];
	memset(dp_b,0,sizeof(dp_b));
	for(int i=0;i<m;i++) dp_b[b[i]]++;
	memset(dp_a,0,sizeof(dp_a));
	int count=0;
	int start=0;
	int len=INT_MAX;
	int start_index=-1;
	for(int i=0;i<n;i++){
		dp_a[a[i]]++;
		if (dp_a[a[i]]<=dp_b[a[i]]) count++;
		
		if (count==m){
			while(dp_a[a[start]]>dp_b[a[start]] || dp_b[a[start]]==0){
				if (dp_a[a[start]]>dp_b[a[start]]) dp_a[a[start]]--;
				start++;
			}
			
			if (len>i-start+1){
				start_index=start;
				len=i-start+1;
			}
		}
	}
	if (start_index==-1) cout<<-1<<"\n";
	else cout<<a.substr(start_index,len);


	return 0;
}

