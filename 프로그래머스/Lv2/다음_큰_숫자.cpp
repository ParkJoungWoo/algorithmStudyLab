#include <string>
#include <vector>

using namespace std;
int one_count(int n){
    int ans = 0;
    while(n){
        if(n % 2)
            ans++;
        n /= 2;        
    }
    return ans;
}
int solution(int n) {
    int ans = one_count(n);
    for(int i=n+1;;i++){
        if(ans == one_count(i))
            return i;
    }
}
