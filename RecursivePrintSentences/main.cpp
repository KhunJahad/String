# include <bits/stdc++.h>
using namespace std;

#define R 3
#define C 3

void read_input(){
  #ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif
}


void printUtilis(string arr[R][C],int m,int n,string output[R]){

	output[m]=arr[m][n];

	if (m==R-1){
		for(int i=0;i<R;i++) cout<<output[i]<<" ";
		cout<<"\n";
		return;
	}

	for(int i=0;i<C;i++){
		if (arr[m+1][i]!="") printUtilis(arr,m+1,i,output);
	}
}

void print(string arr[R][C]){

	string output[R];

	for(int i=0;i<C;i++){
		if (arr[0][i]!="") printUtilis(arr,0,i,output);
	}
}

int main(){
	read_input();

	string arr[R][C]  = {{"you", "we"},
                        {"have", "are"},
                        {"sleep", "eat", "drink"}};

    print(arr);


	return 0;
}

