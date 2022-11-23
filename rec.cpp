//1629
// #include <iostream>
// #include <algorithm>
// #include <vector>
// using namespace std;
// #define ll long long
// ll maker(int a, int b, int c){
//     if(b == 0) return 1;
//     if(b % 2)
//         return a * maker(a, b-1, c)  % c ;
//     else
//         return maker(a, b/2, c) * maker(a, b/2, c)  % c ;
// }
// int main(void){
//     ios::sync_with_stdio(0);
//     cin.tie(0);
//     int a, b, c;
//     cin >> a >> b >> c;
//     cout << maker(a,b,c);
//     return 0;
// }
//11729
// #include <iostream>
// #include <algorithm>
// #include <vector>
// #include <cmath>
// using namespace std;
// #define ll long long
// void hanoi(int from, int to, int size){
//     if(size == 0) return;
//     if(size == 1){
//         cout << from << " " << to << '\n';
//         return;
//     }
//     if(from == 1){
//         if(to == 2) {hanoi(1,3,size-1); hanoi(1,2,1); hanoi(3,2,size-1);}
//         if(to == 3) {hanoi(1,2,size-1); hanoi(1,3,1); hanoi(2,3,size-1);}
//     }
//     if(from == 2){
//         if(to == 1) {hanoi(2,3,size-1); hanoi(2,1,1); hanoi(3,1,size-1);}
//         if(to == 3) {hanoi(2,1,size-1); hanoi(2,3,1); hanoi(1,3,size-1);}

//     }
//     if(from == 3){
//         if(to == 1) {hanoi(3,2,size-1); hanoi(3,1,1); hanoi(2,1,size-1);}
//         if(to == 2) {hanoi(3,1,size-1); hanoi(3,2,1); hanoi(1,2,size-1);}
//     }
// }
// int main(void){
//     ios::sync_with_stdio(0);
//     cin.tie(0);
//     int size;
//     cin >> size;
//     cout << (int)pow(2,size) - 1 << '\n';
//     hanoi(1, 2, size-1);
//     hanoi(1, 3, 1);
//     hanoi(2, 3, size-1);
//     return 0;
// }
//1074
// #include <iostream>
// #include <algorithm>
// #include <vector>
// #include <cmath>
// using namespace std;
// #define ll long long
// int z(int n, int r, int c){
//     if(n==1){
//         if((r + c)==0){return 1;}
//         else if((r+c)==2){return 4;}
//         else if(r == 1){return 3;}
//         else{return 2;}
//     }
//     if((r >= 0 && r < (1<<n-1)) && (c >= 0 && c < (1<<n-1))){
//         return z(n-1, r % (1<<n-1), c % (1<<n-1));
//     }
//     if((r >= 0 && r < (1<<n-1)) && (c >= (1<<n-1) && c < 2<<(n-1))){
//         return z(n-1, r % (1<<n-1), c % (1<<n-1)) + (1<<n-1)*(1<<n-1);
//     }
//     if((r >= (1<<n-1) && r < 2<<(n-1)) && (c >= 0 && c < (1<<n-1))){
//         return z(n-1, r % (1<<n-1), c % (1<<n-1)) + 2*(1<<n-1)*(1<<n-1);
//     }
//     if((r >= (1<<n-1) && r < 2<<(n-1)) && (c >= (1<<n-1) && c < 2<<(n-1))){
//         return z(n-1, r % (1<<n-1), c % (1<<n-1)) + 3*(1<<n-1)*(1<<n-1);
//     }
// }
// int main(void){
//     ios::sync_with_stdio(0);
//     cin.tie(0);
//     int N,r,c;
//     cin >> N >> r >> c;
//     cout << z(N,r,c)-1;
//     return 0;
// }
//17478
// #include <iostream>
// #include <algorithm>
// using namespace std;
// #define ll long long
// void ender(int num){
// 	if(num < 0){return;}
// 	for(int i = 0; i < num; i++)
//     	cout << "____";
//     cout << "라고 답변하였지." <<'\n';
// 	ender(num-1);
// }
// void asker(int num){
// 	if(num < 0){return;}
// 	asker(num-1);
// 	for(int i = 0; i < num; i++)
//         cout << "____";
//     cout << "\"재귀함수가 뭔가요?\""<<'\n';
//     for(int i = 0; i < num; i++)
//         cout << "____";
//     cout << "\"잘 들어보게. 옛날옛날 한 산 꼭대기에 이세상 모든 지식을 통달한 선인이 있었어."<<'\n';
//     for(int i = 0; i < num; i++)
//         cout << "____";
//     cout << "마을 사람들은 모두 그 선인에게 수많은 질문을 했고, 모두 지혜롭게 대답해 주었지."<<'\n';
//     for(int i = 0; i < num; i++)
//         cout << "____";
//     cout << "그의 답은 대부분 옳았다고 하네. 그런데 어느 날, 그 선인에게 한 선비가 찾아와서 물었어.\""<<'\n';
	
// }
// void gag(int num){
// 	if(num < 0){return;}
// 	asker(num-1);
//     for(int i = 0; i < num; i++)
//         cout << "____";
//     cout << "\"재귀함수가 뭔가요?\""<<'\n';
// 	for(int i = 0; i < num; i++)
//         cout << "____";
//     cout << "\"재귀함수는 자기 자신을 호출하는 함수라네\""<<'\n';
	
// }
// int main(void){
//     ios::sync_with_stdio(0);
//     cin.tie(0);
//     int size;
//     cin >> size;
//     cout << "어느 한 컴퓨터공학과 학생이 유명한 교수님을 찾아가 물었다." << '\n';
//     gag(size);
// 	ender(size);
//     return 0;
// }
//1780
// #include <iostream>
// #include <algorithm>
// #include <vector>
// #include <cmath>
// using namespace std;
// #define ll long long
// int paper[2200][2200];
// int ans[3] = {0,};
// int check(int size, int a, int b){
//     int origin = paper[a][b];
//     for(int i=a;i<a+size;i++)
//         for(int j=b;j<b+size;j++){
//             if(origin==paper[i][j]) continue;
//             else return 0;
//         }
//     return origin+2;
// }
// void cut(int N, int a, int b){
//     if(N==1){
//         ans[paper[a][b]+1]++;
//         return;
//     }
//     else{
//         int temp = check(N,a,b);
//         if(temp) ans[temp-1]++;
//         else{
//             for(int i=a;i<=a+2*N/3;i+=N/3)
//                 for(int j=b;j<=b+2*N/3;j+=N/3){
//                     cut(N/3,i,j);
//                 }
//         }
//     }
// }
// int main(void){
//     ios::sync_with_stdio(0);
//     cin.tie(0);
//     int N;
//     cin >> N;
//     for(int i=0;i<N;i++)
//         for(int j=0;j<N;j++)
//             cin >> paper[i][j];
//     cut(N,0,0);
//     cout << ans[0] << '\n' << ans[1] << '\n' << ans[2];
//     return 0;
// }
//2630
// #include <iostream>
// #include <algorithm>
// #include <vector>
// #include <cmath>
// using namespace std;
// #define ll long long
// int paper[128][128]={0,};
// int color[2]={0};
// bool check(int size, int a, int b){
//     int temp=paper[a][b];
//     for(int i=a;i<a+size;i++)
//         for(int j=b;j<b+size;j++){
//             if(temp!=paper[i][j]) return false;
//         }
//     return true;
// }
// void cut(int size, int a, int b){
//     if(size==1) color[paper[a][b]]++;
//     else{
//         int temp=check(size,a,b);
//         if(temp){
//             color[paper[a][b]]++;
//         }
//         else{
//             for(int i=a;i<a+size;i+=size/2)
//                 for(int j=b;j<b+size;j+=size/2){
//                     temp=check(size/2,i,j);
//                     if(temp) color[paper[i][j]]++;
//                     else cut(size/2,i,j);
//                 }
//         }
//     }
// }
// int main(void){
//     ios::sync_with_stdio(0);
//     cin.tie(0);
//     int size;
//     cin >> size;
//     for(int i=0;i<size;i++)
//          for(int j=0;j<size;j++)
//             cin>>paper[i][j];
//     cut(size,0,0);
//     cout << color[0] << '\n' << color[1];
//     return 0;
// }
//
#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;
#define ll long long
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int size;
    cin >> size;
    for(int i=0;i<size;i++)
         for(int j=0;j<size;j++)
            cin>>paper[i][j];
    cut(size,0,0);
    cout << color[0] << '\n' << color[1];
    return 0;
}