#include <string>
#include <vector>
#define N 1234567
using namespace std;
int fibo[100001] = {0,};
int solution(int n) {
    fibo[1] = 1;
    for(int i=2;i<=n;i++){
        fibo[i] = fibo[i-1]%N + fibo[i-2]%N;
        fibo[i] %= N;
    }
    return fibo[n];
}
