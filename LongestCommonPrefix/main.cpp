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
	if (n==1) {
		cout<<a[0];
		return 0;
	}
	string ans="";
	if (n==0){
		cout<<ans<<"\n";
		return 0;
	}
	int index=0;
	while(true){
		int flag=0;
		for (int i=1;i<n;i++){
			if (index==a[i].size() || a[i][index]!=a[0][index]){
				flag=1;
				break;
			}
		}
		if (flag){
			break;
		}
		ans+=a[0][index];
		index++;
	}
	cout<<ans<<"\n";
	return 0;
}

