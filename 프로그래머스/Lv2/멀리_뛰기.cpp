#include <string>
#include <vector>
#include <iostream>
using namespace std;
long long jump[2001];
long long solution(int n) {
    jump[0] = 1;
    jump[1] = 2;
    jump[2] = 3;
    for(int i=3;i<=n;i++){
        jump[i] = (jump[i-1] + jump[i-2]) % 1234567;
    }
    return jump[n-1];
}
