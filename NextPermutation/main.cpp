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
	int a[n];
	for(int i=0;i<n;i++) cin>>a[i];
	int k=-1;
	for (int i=0;i<n-1;i++){
		if (a[i]<a[i+1]) k=i;
	}
	if (k==-1){
		for(int i=n-1;i>=0;i--) cout<<a[i]<<" ";
		return 0;
	}

	int j=k;
	for (int i=k;i<n;i++){
		if (a[k]<a[i]) j=i; 
	}
	swap(a[j],a[k]);
	sort(a+k+1,a+n);
	for(int i=0;i<n;i++) cout<<a[i]<<" ";

	return 0;
}