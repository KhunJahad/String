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
	
	if (n!=m){
		cout<<"Not Possible\n";
		return 0;
	}

	int count[256];
	memset(count,0,sizeof(count));

	for(int i=0;i<n;i++) count[a[i]]++;
	for(int j=0;j<m;j++) count[b[j]]--;

	for(int i=0;i<256;i++){
		if (count[i]!=0){
			cout<<"Not Possible\n";
			return 0;
		}
	}

	int ans=0;
	int i=n-1;
	int j=n-1;
	while(i>=0){
		while(i>=0 && a[i]!=b[j]){
			i--;
			ans++;
		}
		// now if we get a match then we have to change those two
		if (i>=0){
			i--;
			j--;
		}
	}
	cout<<"The cost of operation is : "<<ans<<"\n";

	return 0;
}

