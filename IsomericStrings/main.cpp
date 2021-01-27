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
	if (n!=m) return false;
	int max_size=256;
	int count_a[max_size],count_b[max_size];
	memset(count_a,0,sizeof(count_a));
	memset(count_b,0,sizeof(count_b));
	int count=0;
	for(int i=0;i<n;i++) {
		if (!count_a[a[i]]) count_a[a[i]]=count++;
	}
	count=0;
	for(int i=0;i<m;i++) {
		if (!count_b[b[i]]) count_b[b[i]]=count++;
	}
	count=1;
	for(int i=0;i<n;i++){
		if (count_a[a[i]]!=count_b[b[i]]){
			cout<<"false";
			count=0;
			break;
		}
	}
	if (count) cout<<"true";

	return 0;
}

