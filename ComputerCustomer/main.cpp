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
	int n,k;
	cin>>k;
	string str;
	cin>>str;
	n=str.size();
	int seen[26];
	memset(seen,0,sizeof(seen));
	int walked=0;
	int occupied=0;
	for(int i=0;i<n;i++){
		int ind=str[i]-'A';
		if (seen[ind]==0){
			seen[ind]=1;
			if (occupied<k) {
				occupied++;
				seen[ind]=2;
			}
			else walked++;
		}
		else{
			if (seen[ind]==2) occupied--;
			seen[ind]=0;
		}
	}
	cout<<walked<<"\n";

	return 0;
}
/*
tc

2
ABBAJJKZKZ

3
GACCBDDBAGEE

1
ABCBCA

*/
