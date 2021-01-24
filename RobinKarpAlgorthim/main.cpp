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
	getline(cin,a);
	cin>>b;
	int n=a.size();
	int m=b.size();

	for (int i=0;i<=n-m;i++){
		int start=i;
		int j=0;
		while(start<n && j<m){
			if (a[start]==b[j]){
				start++;
				j++;
			}
			else{
				break;
			}
		}
		if (j==m) cout<<"The pattern found at index: "<<i<<"\n";
	}

	return 0;
}