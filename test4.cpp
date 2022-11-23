#include <iostream>
#include <vector>
#include <set>
#include <utility>
using namespace std;
#define ll long long
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll size, x1, y1, r1, x2, y2, r2, t1, t2;
    cin >> size;
    while(size--){
        cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
        t1 = (x1-x2)*(x1-x2)+(y1-y2)*(y1-y2);
        t2 = (r2+r1)*(r2+r1);
        if(t1 > t2) cout << 0 << '\n';
        else if(t1==t2) cout << 1 << '\n';
        else{
            if(x1==x2 && y1==y2 &&r1 == r2) cout << -1 << '\n';
            else if(t1 == (r1-r2)*(r1-r2)) cout << 1 << '\n';
            else if(t1 > (r1-r2)*(r1-r2)) cout << 2 << '\n';
            else cout << 0 << '\n'; 
        }
    }
    return 0;
}
// #include <iostream>
// using namespace std;
// char stars[6600][6600]={0,};
// void blank(int size){while(size--)cout<<' ';}
// void printer(int size){
//     for(int i = 0; i < size; i++){
// 		blank(size-i-1);
//         for(int j = 0; j < 2*i+1; j++)
//             cout << stars[i][j];
//         cout << '\n';
//     }
// }
// void nulliner(int size, int a, int b){
//     for(int i=a;i<a+size;i++)
//         for(int j=size;j>0;i--)
//             stars[i][b+1+i]=' ';
// }
// void divider(int size, int a, int b){
//     if(size==3){
//         for(int i=a;i<a+3;i++)
//             for(int j=b;j<2*(1+i-a)-1;j++)
//                 stars[i][j]='*';
//         stars[a+1][b+1]=' ';
//     }
//     else{
//         divider(size/2,a,b);
//         // divider(size/2,a+size/2,b);
//         // nulliner(size/2,a+size/2,b);
//         divider(size/2,a+size/2,b+size/2-1);
//     }
// }
// int main(){
//     int size;
//     cin >> size;
//     divider(size,0,0);
//     printer(size);
//     return 0;
// }
/*
**********
* ** ** **
**********
***   ****
* *   * **
***   ****
**********
* ** ** **
**********
*/
                       