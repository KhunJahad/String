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
		string a;
		cin>>a;
		stack <char> s;
		int n=a.size();
		int ans=0;
		vector <int> pos;

		for(int i=0;i<n;i++){
			if (a[i]=='[') pos.push_back(i);
		}

		int count=0;
		int p=0;

		for(int i=0;i<n;i++){
			if (a[i]==']'){
				count--;
			}
			else{
				count++;
				p++;
			}

			if (count<0){
				ans+=pos[p]-i;
				swap(a[i],a[pos[p]]);
				count=1;
				p++;
			}
			//cout<<a<<"\n";
		}
		cout<<ans<<"\n";
	}
	return 0;
}

