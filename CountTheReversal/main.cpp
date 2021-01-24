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
		int n=a.size();
		if (n%2) {
			cout<<"-1\n";
			continue;
		}
		stack <char> s;
		int reversals=0;
		for (int i=0;i<n;i++){
			char bkt=a[i];
			if (bkt=='{') s.push(bkt);
			else{
				if (s.empty()){
					reversals++;
					s.push('{');
				}
				else s.pop();
			}
		}
		if (s.size()%2){
			cout<<-1<<"\n";
			continue;
		} 
		reversals+=(s.size()/2);
		cout<<reversals<<"\n";
	}

	return 0;
}