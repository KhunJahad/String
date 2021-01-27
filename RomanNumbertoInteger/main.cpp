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
	string s;
	cin>>s;
	int n=s.size();
	int ans=0;
	for (int i=0;i<n;i++){
		if (s[i]=='I') ans+=1;
		else if (s[i]=='V') ans+=5;
		else if (s[i]=='X') ans+=10;
		else if (s[i]=='L') ans+=50;
		else if (s[i]=='C') ans+=100;
		else if (s[i]=='D') ans+=500;
		else if (s[i]=='M') ans+=1000;
	}
	int correction=0;

	for(int i=1;i<n;i++){
		if (s[i]=='V'||s[i]=='X'||s[i]=='L'||s[i]=='C'||s[i]=='D'||s[i]=='M'){
			if (s[i-1]=='I') correction+=2;
		}
		if (s[i]=='X'||s[i]=='L'||s[i]=='C'||s[i]=='D'||s[i]=='M'){
			if (s[i-1]=='V') correction+=10;
		}
		if (s[i]=='L'||s[i]=='C'||s[i]=='D'||s[i]=='M'){
			if (s[i-1]=='X') correction+=20;
		}
		if (s[i]=='C'||s[i]=='D'||s[i]=='M'){
			if (s[i-1]=='L') correction+=100;
		}
		if (s[i]=='D'||s[i]=='M'){
			if (s[i-1]=='C') correction+=200;
		}
		if (s[i]=='M'){
			if (s[i-1]=='D') correction+=1000;
		}
	}

	ans-=correction;
	cout<<ans<<"\n";


	return 0;
}

