#include <string>
#include <vector>
#include <stack>
#include <iostream>
#define ll long long
using namespace std;
stack<int>s;
bool isPrime(ll n){
    if(n==1)
        return false;
    if(n==2)
        return true;
    for(ll k = 2; k*k <= n; k++){
        if(n%k == 0)
            return false;
    }
    return true;
}
void stackMake(int n, int k){
    while(n){
        s.push(n%k);
        n/=k;
    }
}
int solution(int n, int k) {
    int answer = 0;
    stackMake(n,k);
    while(!s.empty()){
        if(s.top() == 0){
            s.pop();
            continue;
        }
        ll num = 0;
        while(!s.empty() && s.top()){
            num *= 10;
            num += s.top();
            s.pop();
        }
        cout << num << '\n';
        if(isPrime(num))
            answer++;
    }
    return answer;
}
