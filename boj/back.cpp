#include <iostream>
#include <algorithm>
using namespace std;
#define ll long long
int M, N;
int nums[13]={0,};
int input[13]={0,};
int used[13]={0,};
void solve(int n){
	if(n>=N){
		for(int i=0;i<n;i++)
			cout << nums[i] << " ";
		cout <<'\n';
	}
	else{
		for(int i=0;i<M;i++){
			if(used[i]) continue;
			if(n>0)
				if(input[i]<nums[n-1]) 
					continue;
			nums[n]=input[i];
			used[i]=1;
			solve(n+1);
			used[i]=0;
		}
	}
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    N=6;
    while(1){
    	cin >> M;
    	if(M==0) break;
    	for(int i=0;i<M;i++)
    		cin >> input[i];
    	sort(input, input+M);
    	solve(0);    	
    	cout << '\n';
	}
    return 0;
}
