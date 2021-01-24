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

	if (n<2){
		cout<<0<<"\n";
		return 0;
	}

	int len=0;
	int i=1;

	while (i<n){
		if (a[i]==a[len]){
			i++;
			len++;
		}
		else{
			i=i-len+1;
			len=0;
		}
	}
	cout<<len<<"\n";

	return 0;
}