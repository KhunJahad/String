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
	vector <pair<string,int>> temp;
	for(int i=0;i<n;i++) {
		cin>>a[i];
		temp.push_back({a[i],i});
	}

	for(int i=0;i<n;i++){
		sort(temp[i].first.begin(),temp[i].first.end());
	}
	sort(temp.begin(),temp.end());
	
	vector  <vector <string>> anagrams;
	for(int i=0;i<n;i++){
		vector <string> tmp;
		tmp.push_back(a[temp[i].second]);
		while(i<n-1 && temp[i].first==temp[i+1].first){
			tmp.push_back(a[temp[i+1].second]);
			i++;
		}
		anagrams.push_back(tmp);
	}

	for(int i=0;i<anagrams.size();i++){
		vector <string> tmp=anagrams[i];
		for(int j=0;j<tmp.size();j++) cout<<tmp[j]<<" ";
		cout<<"\n";
	}

	return 0;
}

