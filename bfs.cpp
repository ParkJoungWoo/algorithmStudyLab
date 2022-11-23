// #include <iostream>
// #include <bits/stdc++.h>
// #include <queue>
// #include <utility>
// #define X first
// #define Y second
// using namespace std;
// int main(void) {
//     ios::sync_with_stdio(0);
//     cin.tie(0);
//     int dx[4]={1,0,-1,0};
//     int dy[4]={0,1,0,-1};
//     int x = 0;
//     int y = 0;
//     int temp = 0;
//     int size = 0;
//     int max = 0;
//     queue<pair<int, int>> Q;
//     int draw[500][500];
//     bool visited[500][500];
//     cin >> x;
//     cin >> y;
//     for(int i = 0; i < x; i++)
//         for(int j = 0; j < y; j++)
//             cin >> draw[i][j];
//     for(int i = 0; i < x; i++)
//         for(int j = 0; j < y; j++)
//         {
//             if(visited[i][j]) continue;
//             if((visited[i][j]==0)&&(draw[i][j]==1))
//             {
//                 Q.push({i, j});
//                 size++;
//                 temp++;
//                 while(!Q.empty())
//                 {
//                     for(int i = 0; i < 4; i++)
//                     {
//                         int nx = Q.front().X+dx[i];
//                         int ny = Q.front().Y+dy[i];
//                         if(nx < 0 || nx > 499 || ny < 0 || ny > 499) continue;
//                         if(visited[nx][ny] == 1 || draw[nx][ny] == 0) continue;
//                         visited[nx][ny] =  true;
//                         temp++;
//                         Q.push({nx, ny});
//                     }
//                     if(visited[Q.front().X][Q.front().Y] == 0) visited[Q.front().X][Q.front().Y] = true;
//                     Q.pop();
//                 }
//                 if(temp > max)
//                     max = temp;
//                 temp = 0;
//             }
//         }
//     cout << size << '\n' << max;
// }
// #include <iostream>
// #include <bits/stdc++.h>
// #include <queue>
// #include <utility>
// #include <string>
// #define X first
// #define Y second
// using namespace std;
// int main(void) {
//     ios::sync_with_stdio(0);
//     cin.tie(0);
//     int dx[4]={1,0,-1,0};
//     int dy[4]={0,1,0,-1};
//     int x = 0;
//     int y = 0;
//     int answer = 0;
//     int temp = 0;
//     int min = 1000000;
//     queue<pair<int, int>> Q;
//     string draw[100];
//     int visited[100][100];
//     for(int i = 0; i < 100; i++) fill(visited[i],visited[i]+100,-1);
//     cin >> x >> y;
//     for(int i = 0; i < x; i++)
//         cin >> draw[i];
//     for(int i = 0; i < x; i++)
//         for(int j = 0; j < y; j++)
//         {
//             if(visited[i][j] >= 0) continue;
//             if((visited[i][j]<0)&&(draw[i][j]=='1'))
//             {
//                 Q.push({i, j});
//                 while(!Q.empty())
//                 {
//                     for(int i = 0; i < 4; i++)
//                     {
//                         int nx = Q.front().X+dx[i];
//                         int ny = Q.front().Y+dy[i];
//                         if(nx < 0 || nx > x-1 || ny < 0 || ny > y-1) continue;
//                         if(visited[nx][ny] >= 0 || draw[nx][ny] == '0') continue;
//                         visited[nx][ny] = visited[Q.front().X][Q.front().Y]+1;
//                         Q.push({nx, ny});
//                     }
//                     Q.pop();
//                 }
//             }
//         }
//     cout << visited[x-1][y-1] + 2;
// }
// #include <iostream>
// #include <bits/stdc++.h>
// #include <queue>
// #include <utility>
// #include <algorithm>
// #include <vector>
// #define X first
// #define Y second
// using namespace std;
// int main(void) {
//     ios::sync_with_stdio(0);
//     cin.tie(0);
//     int dx[4]={1,0,-1,0};
//     int dy[4]={0,1,0,-1};
//     int x = 0;
//     int y = 0;
//     int zerocount = 0;
//     int temp = 1;
//     int answer = 0;
//     queue<pair<int, int>> Q;
//     vector<vector<int>> tomato(1002, vector<int>(1002));
//     // int tomato[1000][1000];
//     bool visited[1002][1002];
//     cin >> y >> x;
//     for(int i = 0; i < x; i++)
//         for(int j = 0; j < y; j++)
//         {
//             cin >> tomato[i][j];
//             if(tomato[i][j]==1) 
//                 Q.push({i, j});
//             if(tomato[i][j]==0)
//                 zerocount++; 
//         }
//     while(!Q.empty())
//     {
//         // visited[Q.front().X][Q.front().Y] = true;
//         for(int i = 0; i < 4; i++)
//         {
//             int nx = Q.front().X+dx[i];
//             int ny = Q.front().Y+dy[i];
//             if(nx < 0 || nx > x-1 || ny < 0 || ny > y-1) continue;
//             // if(visited[nx][ny] == true || tomato[nx][ny] != 0) continue;
//             if(tomato[nx][ny] != 0) continue;
//             // visited[nx][ny] = true;
//             tomato[nx][ny] = tomato[Q.front().X][Q.front().Y]+1;
//             zerocount--;
//             Q.push({nx, ny});
//         }
//         if(zerocount==0)break;
//         Q.pop();
//     }
//     for(int i = 0; i < x; i++)
//         if(answer < *max_element(tomato[i].begin(), tomato[i].end()))
//             answer = *max_element(tomato[i].begin(), tomato[i].end());
//     if(zerocount)
//         answer = 0;
//     cout << answer-1;
// }
//불!
// #include <iostream>
// #include <bits/stdc++.h>
// #include <deque>
// #include <utility>
// #include <algorithm>
// #include <string>
// #include <vector>
// #define X first
// #define Y second
// using namespace std;
// int main(void) {
//     ios::sync_with_stdio(0);
//     cin.tie(0);
//     int dx[4]={1,0,-1,0};
//     int dy[4]={0,1,0,-1};
//     int x = 0;
//     int y = 0;
//     int answer = -3;
//     string temp;
//     deque<pair<int, int>> Q;
//     vector<vector<int>> miro(1002, vector<int>(1002));
//     cin >> x >> y;
//     for(int i = 0; i < x; i++)
//     {
//         cin >> temp;
//         for(int j = 0; j < x; j++)
//         {
//             if(temp[j]==(int)'#') miro[i][j] = -2;
//             else if(temp[j]==(int)'J'){Q.push_front({i, j}); miro[i][j] = 1;}
//             else if(temp[j] == (int)'.') miro[i][j] = 0;
//             else{Q.push_back({i, j});miro[i][j] = -1;}
//         }
//     }
//     while(!Q.empty())
//     {
//         auto pos = Q.front(); Q.pop_front();
//         for(int i = 0; i < 4; i++)
//         {
//             int nx = pos.X+dx[i];
//             int ny = pos.Y+dy[i];
//             if(pos.X == 0 || pos.X == x-1 || pos.Y == 0 || pos.Y == y-1)
//                 if(miro[pos.X][pos.Y] >= 1 ) {cout << miro[pos.X][pos.Y]; return 0;}
//             if(nx < 0 || nx > x-1 || ny < 0 || ny > y-1) continue;//범위초과하면 패스
//             if((miro[pos.X][pos.Y] >= 1)&&(miro[nx][ny]==0))
//             {
//                 miro[nx][ny]=miro[pos.X][pos.Y]+1;
//                 // if(nx == 0 || nx == x-1 || ny == 0 || ny == y-1){cout << miro[nx][ny]+1; return 0;}
//             }
//             else if((miro[pos.X][pos.Y] == -1)&&(miro[nx][nx]>=0))
//             {
//                 miro[nx][ny]=-1;
//                 miro[pos.X][pos.Y]=-2;
//             }
//             else continue;
//             Q.push_back({nx, ny});
//         }
//     }
//     for(int i = 0; i < x; i++)
//         if(answer < *max_element(miro[i].begin(), miro[i].end()))
//             answer = *max_element(miro[i].begin(), miro[i].end());
//     if(answer <= 0){cout << "IMPOSSIBLE"; return 0;}
//     cout << answer;
// }
// #include <iostream>
// #include <bits/stdc++.h>
// #include <deque>
// #include <algorithm>
// #include <utility>
// #include <vector>
// #include <string>
// #define X first
// #define Y second
// using namespace std;
// int main(void) {
//     ios::sync_with_stdio(0);
//     cin.tie(0);
//     int dx[4]={1,0,-1,0};
//     int dy[4]={0,1,0,-1};
//     int x = 0, y = 0;
//     cin >> x >> y;
//     int ** miro, **visited;
//     miro = new int*[1000];
//     visited = new int*[1000];
//     for(int i = 0; i < 1000; i++)
//     {
//         miro[i] = new int[1000];
//         visited[i] = new int[1000];
//     }
//     for(int i = 0; i < 1000; i++)
//     {
//         memset(visited[i], 0, sizeof(int) * 1000);
//         memset(miro[i], 0, sizeof(int) * 1000);
//     }
//     string temp;
//     deque<pair<int, int>> Q;
//     for(int i = 0; i < x; i++)
//     {
//         cin >> temp;
//         for(int j = 0; j < y; j++)
//         {
//             if(temp[j]=='#') miro[i][j]=-2;
//             else if(temp[j]=='J') {miro[i][j]=1; visited[i][j]=1; Q.push_back({i,j});}
//             else if(temp[j]=='F'){ miro[i][j]=-1; Q.push_back({i,j});}
//             else continue;
//         }
//     }
//     while(!Q.empty())
//     {
        
//         auto f = Q.front();
//         if(miro[f.X][f.Y] > 0)
//         {
//             if(f.X == 0 || f.X == x-1 || f.Y == 0 || f.Y == y-1)
//             {
//                 cout << miro[f.X][f.Y];
//                 return 0;
//             }
//             for(int i = 0; i < 4; i++)
//             {
//                 int A = f.X+dx[i];
//                 int B = f.Y+dy[i];
//                 if(A < 0 || A >= x || B < 0 || B >= y)
//                     continue;
//                 if(visited[A][B])
//                     continue;
//                 if(miro[A][B] < 0)
//                     continue;
//                 miro[A][B] = miro[f.X][f.Y] + 1;
//                 Q.push_back({A,B});
//                 visited[A][B] = 1;
//             }
//         }
//         else
//         {
//             for(int i = 0; i < 4; i++)
//             {
//                 int A = f.X+dx[i];
//                 int B = f.Y+dy[i];
//                 if(A < 0 || A >= x || B < 0 || B >= y)
//                     continue;
//                 if(miro[A][B] < 0)
//                     continue;
//                 miro[A][B] = miro[f.X][f.Y];
//                 Q.push_back({A,B});
//             }
//         }
//         Q.pop_front();
//     }
//     cout << "IMPOSSIBLE";
// }
// #include <iostream>
// #include <bits/stdc++.h>
// #include <algorithm>
// #include <utility>
// #include <queue>
// #define X first
// #define Y second
// using namespace std;
// int main(void) {
//     ios::sync_with_stdio(0);
//     cin.tie(0);
//     queue<pair<int, int>> q;
//     int visited[100001] = {0,};
//     int subin, sister, temp, deep = 0;
//     cin >> subin >> sister;
//     q.push({deep, subin});
//     visited[subin]++;
//     while(!q.empty())
//     {
//         temp = q.front().Y;
//         deep = q.front().X;
//         q.pop();
//         if(temp == sister)
//         {
//             cout << deep;
//             break;
//         }
//         else
//         {
//             if((temp-1) >= 0)
//                 if(visited[temp-1]==0)
//                 {
//                     q.push({deep+1, temp-1});
//                     visited[temp-1]++;
//                 }
//             if((2*temp)<=100000)
//                 if(visited[2*temp]==0)
//                 {
//                     q.push({deep+1, 2*temp});
//                     visited[2*temp]++;
//                 }
//             if((temp+1)<=100000)
//                 if(visited[temp+1]==0)
//                 {
//                     q.push({deep+1, temp+1});
//                     visited[temp+1]++;
//                 }
//         }
//     }
// }
// #include <iostream>
// #include <bits/stdc++.h>
// #include <algorithm>
// #include <utility>
// #include <queue>
// #include <string>
// #define X first
// #define Y second
// using namespace std;
// int main(void) {
//     ios::sync_with_stdio(0);
//     cin.tie(0);
//     queue<pair<int, int>> q;
//     int dx[4] = {0, 1, 0, -1};
//     int dy[4] = {1, 0, -1, 0};
//     int size, m, n, ji;
//     int a ,b;
//     int tx, ty;
//     int count = 0;
//     int farm[51][51] = {0,};
//     int visited[51][51] = {0,};
//     cin >> size;
//     while(size--)
//     {
//         count = 0;
//         cin >> m >> n >> ji;
//         for(int i = 0; i < m; i++)
//         {
//             memset(farm[i], 0, sizeof(int) * n);
//             memset(visited[i], 0, sizeof(int) * n);
//         }
//         while(ji--)
//         {
//             cin >> a >> b;
//             farm[a][b]=1;
//         }
//         for(int i = 0; i < m; i++)
//             for(int j = 0; j < n; j++)
//             {
//                 if(visited[i][j]) continue;
//                 if(farm[i][j] == 0) continue;
//                 count++;
//                 q.push({i, j});
//                 while(!q.empty())
//                 {
//                     tx = q.front().X;
//                     ty = q.front().Y;
//                     q.pop();
//                     for(int k = 0; k < 4; k++)
//                     {
//                         if(tx+dx[k] < 0 || tx+dx[k] >= m || ty+dy[k] < 0 || ty+dy[k] >=n)
//                             continue;
//                         if(farm[tx+dx[k]][ty+dy[k]]==0) continue;
//                         if(visited[tx+dx[k]][ty+dy[k]]) continue;
//                         visited[tx+dx[k]][ty+dy[k]]=1;
//                         q.push({tx+dx[k],ty+dy[k]});
//                     }
//                     visited[tx][ty]=1;
//                 }
//             }
//         cout << count <<'\n';
//     }
// }
// #include <iostream>
// #include <bits/stdc++.h>
// #include <algorithm>
// #include <utility>
// #include <queue>
// #include <string>
// #define X first
// #define Y second
// using namespace std;
// int main(void) {
//     ios::sync_with_stdio(0);
//     cin.tie(0);
//     queue<pair<int, int>> q;
//     int dx[4] = {0, 1, 0, -1};
//     int dy[4] = {1, 0, -1, 0};
//     int size, count1 = 0, count2 = 0;
//     int tx, ty;
//     string s;
//     int eyes[101][101] = {0,};
//     int visited[101][101] = {0,};
//     cin >> size;
//     for(int i = 0; i < size; i++)
//     {
//         cin >> s;
//         for(int j = 0; j < size; j++)
//         {
//             eyes[i][j] = s[j];
//         }
//     }
//     for(int i = 0; i < size; i++)    
//     {
//         for(int j = 0; j < size; j++)
//         {
//             if(visited[i][j]) continue;
//             q.push({i,j});
//             count1++;
//             while(!q.empty())
//             {
//                 tx = q.front().X;
//                 ty = q.front().Y;
//                 q.pop();
//                 for(int k = 0; k < 4; k++)
//                 {
//                     if(tx+dx[k] < 0 || tx+dx[k] >= size || ty+dy[k] < 0 || ty+dy[k] >=size)
//                         continue;
//                     if(eyes[tx+dx[k]][ty+dy[k]]!=eyes[tx][ty]) continue;
//                     if(visited[tx+dx[k]][ty+dy[k]]) continue;
//                     visited[tx+dx[k]][ty+dy[k]]=1;
//                     q.push({tx+dx[k],ty+dy[k]});
//                 }
//                 visited[tx][ty]=1;
//             }
//         }
//     }
//     for(int i = 0; i < size; i++)
//         memset(visited[i], 0, sizeof(int) * size);
//     for(int i = 0; i < size; i++)    
//     {
//         for(int j = 0; j < size; j++)
//         {
//             if(visited[i][j]) continue;
//             q.push({i,j});
//             count2++;
//             while(!q.empty())
//             {
//                 tx = q.front().X;
//                 ty = q.front().Y;
//                 q.pop();
//                 for(int k = 0; k < 4; k++)
//                 {
//                     if(tx+dx[k] < 0 || tx+dx[k] >= size || ty+dy[k] < 0 || ty+dy[k] >=size)
//                         continue;
//                     if(eyes[tx][ty]=='R'||eyes[tx][ty]=='G')
//                         if(eyes[tx+dx[k]][ty+dy[k]]=='B') continue;
//                     if(eyes[tx][ty]=='B' && eyes[tx+dx[k]][ty+dy[k]]!=eyes[tx][ty])
//                         continue;
//                     if(visited[tx+dx[k]][ty+dy[k]]) continue;
//                     visited[tx+dx[k]][ty+dy[k]]=1;
//                     q.push({tx+dx[k],ty+dy[k]});
//                 }
//                 visited[tx][ty]=1;
//             }
//         }
//     }
//     cout << count1 << " " << count2;
// }
// #include <iostream>
// #include <bits/stdc++.h>
// #include <algorithm>
// #include <utility>
// #include <tuple>
// #include <queue>
// #include <string>
// #define X first
// #define Y second
// using namespace std;
// int tomato[101][101][101]={0,};
// int visited[101][101][101]={0,};
// int main(void) {
//     ios::sync_with_stdio(0);
//     cin.tie(0);
//     int dx[4] = {0, 1, 0, -1};
//     int dy[4] = {1, 0, -1, 0};
//     int dz[2] = {1, -1};
//     int x, y, z, ans, count = 0;
//     int tx, ty, tz;
//     queue<tuple<int,int,int>>q;
//     cin >> x >> y >> z;
//     for(int i = 0; i < z; i++)
//         for(int j = 0; j < y; j++)
//             for(int k = 0; k < x; k++)
//             {
//                 cin >> tomato[i][j][k];
//                 if(tomato[i][j][k]==1)
//                     q.push(make_tuple(i,j,k));
//                 if(tomato[i][j][k]==0)
//                     count++;
//             }
//     while(!q.empty())
//     {
//         tz = get<0>(q.front());
//         ty = get<1>(q.front());
//         tx = get<2>(q.front());
//         q.pop();
//         // visited[tx][ty][tz]=1;
//         for(int i = 0; i < 4; i++)
//         {
//             if(tx+dx[i] < 0 || tx+dx[i] >= x || ty+dy[i] < 0 || ty+dy[i] >= y) continue;
//             // if(visited[tx+dx[i]][ty+dy[i]][tz]) continue;
//             if(tomato[tz][ty+dy[i]][tx+dx[i]] != 0) continue;
//             tomato[tz][ty+dy[i]][tx+dx[i]] = tomato[tz][ty][tx]+1;
//             // visited[tx+dx[i]][ty+dy[i]][tz] = 1;
//             count--;
//             q.push(make_tuple(tz, ty+dy[i], tx+dx[i]));
//         }
//         for(int i = 0; i < 2; i++)
//         {
//             if(tz+dz[i] < 0 || tz+dz[i] >= z) continue;
//             // if(visited[tx][ty][tz+dz[i]]) continue;
//             if(tomato[tz+dz[i]][ty][tx] != 0) continue;
//             tomato[tz+dz[i]][ty][tx] = tomato[tz][ty][tx]+1;
//             // visited[tx][ty][tz+dz[i]] = 1;
//             count--;
//             q.push(make_tuple(tz+dz[i], ty, tx));
//         }
//         if(q.empty()) ans = tomato[tz][ty][tx];
//     }
//     if(count)
//         cout << -1;
//     else
//         cout << ans-1;
// }
// #include <iostream>
// #include <bits/stdc++.h>
// #include <algorithm>
// #include <utility>
// #include <queue>
// #include <list>
// #include <string>
// #include <cstring>
// #define X first
// #define Y second
// using namespace std;
// int visited[1001][1001];
// int fire[1001][1001];
// int main(void) {
//     ios::sync_with_stdio(0);
//     cin.tie(0);
//     int dx[4] = {0, 1, 0, -1};
//     int dy[4] = {1, 0, -1, 0};
//     list<pair<int, int>> q;
//     int cases, sx, sy, count = -1;
//     int tx, ty;
//     string s;
//     cin >> cases;
//     while(cases--){
//         count = -1;
//         cin >> sy >> sx;
//         for(int i = 0; i < sx; i++){
//             memset(visited[i],0,sizeof(int)*sy);
//             memset(fire[i],0,sizeof(int)*sy);
//         }
//         for(int i = 0; i < sx; i++){
//             cin >> s;
//             for(int j = 0; j < sy; j++){
//                 if(s[j]=='.') fire[i][j]=0;
//                 if(s[j]=='#') fire[i][j]=-2;
//                 if(s[j]=='@') {fire[i][j]=1; q.push_front({i,j});}
//                 if(s[j]=='*') {fire[i][j]=-1; q.push_back({i,j});}
//             }
//         }
//         while(!q.empty()){
//             tx = q.front().X;
//             ty = q.front().Y;
//             q.pop_front();
//             visited[tx][ty]=1;
//             if((fire[tx][ty]>0)&&(tx==0||tx==sx-1||ty==0||ty==sy-1)){count = fire[tx][ty]; break;}
//             for(int i = 0; i < 4; i++){
//                 if(tx+dx[i] < 0 || tx+dx[i] >= sx || ty+dy[i] < 0 || ty+dy[i] >= sy) continue;
//                 if(fire[tx+dx[i]][ty+dy[i]] < 0) continue;
//                 if(fire[tx][ty]<0){
//                     fire[tx+dx[i]][ty+dy[i]] = -1;
//                     q.push_back({tx+dx[i], ty+dy[i]});
//                     visited[tx+dx[i]][ty+dy[i]] = 1;
//                 }
//                 else{
//                     if(visited[tx+dx[i]][ty+dy[i]] > 0) continue;
//                     fire[tx+dx[i]][ty+dy[i]] = fire[tx][ty]+1;
//                     q.push_back({tx+dx[i], ty+dy[i]});
//                     visited[tx+dx[i]][ty+dy[i]]=1;
//                 }
//             }
//         }
//         q = list<pair<int,int>>();
//         // while(!q.empty()) q.pop_back();
//         if(count < 0)
//             cout << "IMPOSSIBLE" << '\n';
//         else
//             cout << count << '\n';
//     }
// }
// #include <iostream>
// #include <bits/stdc++.h>
// #include <algorithm>
// #include <utility>
// #include <queue>
// #include <vector>
// #include <string>
// #include <cstring>
// #define X first
// #define Y second
// using namespace std;
// int visited[101][101]={0,};
// char pic[101][101]={0,};
// int main(void) {
//     ios::sync_with_stdio(0);
//     cin.tie(0);
//     int dx[4] = {0, 1, 0, -1};
//     int dy[4] = {1, 0, -1, 0};
//     queue<pair<int, int>>q;
//     vector<int>lists;
//     int sx, sy, sp;
//     int a, b, c, d;
//     int tx, ty, size = 0;;
//     cin >> sx >> sy >> sp;
//     while(sp--){
//         cin >> b >> c >> d >> a;
//         a = sx - a;
//         c = sx - c;
//         for(int i = a; i < c; i++)
//             memset(pic[i]+b, 1, sizeof(char)*(d-b));
//     }
//     for(int i = 0; i < sx; i++)
//         for(int j = 0; j < sy; j++){
//             if(visited[i][j]) continue;
//             if(pic[i][j]) continue;
//             q.push({i, j});
//             size = 0;
//             visited[i][j]++;
//             while(!q.empty()){
//                 size++;
//                 tx = q.front().X;
//                 ty = q.front().Y;
//                 q.pop();
//                 for(int i = 0; i < 4; i++){
//                     if(tx+dx[i]<0 || tx+dx[i]>=sx || ty+dy[i]<0 || ty+dy[i]>=sy) continue;
//                     if(visited[tx+dx[i]][ty+dy[i]]) continue;
//                     if(pic[tx+dx[i]][ty+dy[i]]) continue;
//                     visited[tx+dx[i]][ty+dy[i]]++;
//                     q.push({tx+dx[i], ty+dy[i]});
//                 }
//             }
//             lists.push_back(size);
//         }
//     sort(lists.begin(), lists.end());
//     cout << lists.size() << '\n';
//     for(auto it = lists.begin(); it != lists.end(); it++)
//         cout << *it << " ";
//     return 0;
// }
// #include <iostream>
// #include <bits/stdc++.h>
// #include <algorithm>
// #include <utility>
// #include <queue>
// #include <vector>
// #include <string>
// #include <cstring>
// #define X first
// #define Y second
// using namespace std;
// int visited[26][26]={0,};
// int mapa[26][26]={0,};
// int main(void) {
//     ios::sync_with_stdio(0);
//     cin.tie(0);
//     int dx[4] = {0, 1, 0, -1};
//     int dy[4] = {1, 0, -1, 0};
//     int size, ss, tx, ty;
//     queue<pair<int, int>>q;
//     vector<int>sizes;
//     string s;
//     cin >> size;
//     for(int i = 0; i < size; i++){
//         cin >> s;
//         for(int j = 0; j < size; j++)
//             mapa[i][j] = s[j] - '0';
//     }
//     for(int i = 0; i < size; i++)
//         for(int j = 0; j < size; j++){
//             if(visited[i][j]) continue;
//             if(mapa[i][j]==0) continue;
//             q.push({i, j});
//             visited[i][j]++;
//             ss = 0;
//             while(!q.empty()){
//                 ss++;
//                 tx = q.front().X;
//                 ty = q.front().Y;
//                 q.pop();
//                 for(int i = 0; i < 4; i++){
//                     if(tx+dx[i] < 0 || tx+dx[i]>=size || ty+dy[i]<0 || ty+dy[i]>=size) continue;
//                     if(visited[tx+dx[i]][ty+dy[i]]) continue;
//                     if(mapa[tx+dx[i]][ty+dy[i]]==0) continue;
//                     q.push({tx+dx[i], ty+dy[i]});
//                     visited[tx+dx[i]][ty+dy[i]]++;                    
//                 }
//             }
//             sizes.push_back(ss);
//         }
//     sort(sizes.begin(), sizes.end());
//     cout << sizes.size() << '\n';
//     for(auto it = sizes.begin(); it != sizes.end(); it++)
//         cout << *it << '\n';
//     return 0;
// }

// #include <iostream>
// #include <bits/stdc++.h>
// #include <algorithm>
// #include <utility>
// #include <queue>
// #include <vector>
// #include <string>
// #include <tuple>
// #include <cstring>
// #define X first
// #define Y second
// using namespace std;
// int visited[1000001]={0,};
// int main(void) {
//     ios::sync_with_stdio(0);
//     cin.tie(0);
//     queue<tuple<int,int,int>>q;
//     int F, S, G, U, D;
//     int ts, tu, td;
//     cin >> F >> S >> G >> U >> D;
//     q.push(make_tuple(S, 0, 0));
//     while(!q.empty()){
//         ts = get<0>(q.front());
//         tu = get<1>(q.front());
//         td = get<2>(q.front());
//         q.pop();
//         if(ts == G) break;
//         if(visited[ts]) continue;
//         if(ts-D >= 1) {
//             q.push(make_tuple(ts-D, tu, td+1));
//         }
//         if(ts+U <= F){
//             q.push(make_tuple(ts+U, tu+1, td));
//         }
//         visited[ts]++;
//     }
//     if(ts == G) {
//         cout << tu+td;
//     }
//     else{
//         cout << "use the stairs";
//     }

//     return 0;
// }

// #include <iostream>
// #include <bits/stdc++.h>
// #include <algorithm>
// #include <utility>
// #include <queue>
// #include <set>
// #include <tuple>
// #include <cstring>
// #define X first
// #define Y second
// using namespace std;
// int visited[101][101]={0,};
// int water[101][101]={0,};
// int main(void) {
//     ios::sync_with_stdio(0);
//     cin.tie(0);
//     int dx[4] = {0, 1, 0, -1};
//     int dy[4] = {1, 0, -1, 0};
//     int size, tx, ty, twater=0;
//     int count = 0;
//     queue<pair<int,int>>q;
//     set<int>s;
//     cin >> size;
//     for(int i = 0; i < size; i++)
//         for(int j = 0; j < size; j++){
//             cin >> water[i][j];
//             s.insert(water[i][j]);
//         }
//     auto it = s.begin();
//     while(s.end()!=it++)
//     {   
//         count = 0;
//         for(int i = 0; i < size; i++) memset(visited[i], 0, sizeof(int)*size);
//         for(int i = 0; i < size; i++)
//             for(int j = 0; j < size; j++){
//                 if(visited[i][j]) continue;
//                 if(water[i][j] < *it) continue;
//                 q.push({i,j});
//                 count++;
//                 while(!q.empty()){
//                     tx = q.front().X;
//                     ty = q.front().Y;
//                     q.pop();
//                     for(int i = 0; i < 4; i++){
//                         if(tx+dx[i]<0 || tx+dx[i]>=size || ty+dy[i]<0 || ty+dy[i]>=size) continue;
//                         if(visited[tx+dx[i]][ty+dy[i]]) continue;
//                         if(water[tx+dx[i]][ty+dy[i]] < *it) continue;
//                         visited[tx+dx[i]][ty+dy[i]] = 1;
//                         q.push({tx+dx[i],ty+dy[i]});
//                     }
//                 }
//             }
//         if(twater < count) twater = count;
//     }
//     cout << twater;
//     return 0;
// }
// #include <iostream>
// #include <bits/stdc++.h>
// #include <algorithm>
// #include <utility>
// #include <queue>
// #include <tuple>
// #include <cstring>
// #include <string>
// using namespace std;
// int visited[31][31][31]={0,};
// int tower[31][31][31]={0,};
// int main(void) {
//     ios::sync_with_stdio(0);
//     cin.tie(0);
//     int dx[4] = {0, 1, 0, -1};
//     int dy[4] = {1, 0, -1, 0};
//     int dz[2] = {1, -1};
//     int z, x, y;
//     int tz, tx, ty;
//     int zi, xi, yi;
//     int count = 0;
//     string s;
//     queue<tuple<int, int, int, int>> q;
//     cin >> z >> x >> y;
//     while(z+x+y){
//         for(int i = 0; i < z; i++)
//             for(int j = 0; j < x; j++)
//                 memset(visited[i][j],0,sizeof(int)*y);
//         for(int i = 0; i < z; i++)
//             for(int j = 0; j < x; j++){
//                 cin >> s;
//                 for(int k = 0; k < y; k++){
//                     tower[i][j][k] = s[k];
//                     if(tower[i][j][k]=='S'){
//                         q.push(make_tuple(0,i,j,k));
//                     }
//                 }
//             }
//         while(!q.empty()){
//             count = get<0>(q.front());
//             tz = get<1>(q.front());
//             tx = get<2>(q.front());
//             ty = get<3>(q.front());
//             q.pop();
//             if(tower[tz][tx][ty]=='E') break;
//             for(int i = 0; i < 4; i++){
//                 if(tx+dx[i]<0||tx+dx[i]>=x||ty+dy[i]<0||ty+dy[i]>=y) continue;
//                 if(visited[tz][tx+dx[i]][ty+dy[i]]) continue;
//                 if(tower[tz][tx+dx[i]][ty+dy[i]]=='#') continue;
//                 visited[tz][tx+dx[i]][ty+dy[i]]++;
//                 q.push(make_tuple(count+1, tz,tx+dx[i],ty+dy[i]));
//             }
//             for(int i = 0; i < 2; i++){
//                 if(tz+dz[i]<0||tz+dz[i]>=z) continue;
//                 if(visited[tz+dz[i]][tx][ty]) continue;
//                 if(tower[tz+dz[i]][tx][ty]=='#') continue;
//                 visited[tz+dz[i]][tx][ty]++;
//                 q.push(make_tuple(count+1, tz+dz[i],tx,ty));
//             }
//             visited[tz][tx][ty]++;
//         }
//         if(tower[tz][tx][ty]=='E')
//             cout << "Escaped in "<< count <<" minute(s)." <<'\n';
//         else
//             cout << "Trapped!" << '\n';
//         cin >> z >> x >> y;
//         q = queue<tuple<int,int,int,int>>();
//     }
//     return 0;
// }
// #include <iostream>
// #include <bits/stdc++.h>
// #include <algorithm>
// #include <utility>
// #include <queue>
// #include <tuple>
// #include <cstring>
// #include <string>
// using namespace std;
// int visited[31][31][31]={0,};
// int tower[31][31][31]={0,};
// int main(void) {
//     ios::sync_with_stdio(0);
//     cin.tie(0);
//     int dx[4] = {0, 1, 0, -1};
//     int dy[4] = {1, 0, -1, 0};
//     int dz[2] = {1, -1};
//     int z, x, y;
//     int tz, tx, ty;
//     int zi, xi, yi;
//     int count = 0;
//     string s;
//     queue<tuple<int, int, int, int>> q;
//     cin >> z >> x >> y;
//     while(z+x+y){
//         for(int i = 0; i < z; i++)
//             for(int j = 0; j < x; j++)
//                 memset(visited[i][j],0,sizeof(int)*y);
//         for(int i = 0; i < z; i++)
//             for(int j = 0; j < x; j++){
//                 cin >> s;
//                 for(int k = 0; k < y; k++){
//                     tower[i][j][k] = s[k];
//                     if(tower[i][j][k]=='S'){
//                         q.push(make_tuple(0,i,j,k));
//                     }
//                 }
//             }
//         while(!q.empty()){
//             count = get<0>(q.front());
//             tz = get<1>(q.front());
//             tx = get<2>(q.front());
//             ty = get<3>(q.front());
//             q.pop();
//             if(tower[tz][tx][ty]=='E') break;
//             for(int i = 0; i < 4; i++){
//                 if(tx+dx[i]<0||tx+dx[i]>=x||ty+dy[i]<0||ty+dy[i]>=y) continue;
//                 if(visited[tz][tx+dx[i]][ty+dy[i]]) continue;
//                 if(tower[tz][tx+dx[i]][ty+dy[i]]=='#') continue;
//                 visited[tz][tx+dx[i]][ty+dy[i]]++;
//                 q.push(make_tuple(count+1, tz,tx+dx[i],ty+dy[i]));
//             }
//             for(int i = 0; i < 2; i++){
//                 if(tz+dz[i]<0||tz+dz[i]>=z) continue;
//                 if(visited[tz+dz[i]][tx][ty]) continue;
//                 if(tower[tz+dz[i]][tx][ty]=='#') continue;
//                 visited[tz+dz[i]][tx][ty]++;
//                 q.push(make_tuple(count+1, tz+dz[i],tx,ty));
//             }
//             visited[tz][tx][ty]++;
//         }
//         if(tower[tz][tx][ty]=='E')
//             cout << "Escaped in "<< count <<" minute(s)." <<'\n';
//         else
//             cout << "Trapped!" << '\n';
//         cin >> z >> x >> y;
//         q = queue<tuple<int,int,int,int>>();
//     }
//     return 0;
// }
//2206
// #include <iostream>
// #include <bits/stdc++.h>
// #include <algorithm>
// #include <utility>
// #include <queue>
// #include <tuple>
// #include <cstring>
// #include <string>
// using namespace std;
// int visited[2][1001][1001]={0,};
// int maps[1001][1001]={0,};
// int main(void) {
//     ios::sync_with_stdio(0);
//     cin.tie(0);
//     int dx[4] = {0, 1, 0, -1};
//     int dy[4] = {1, 0, -1, 0};
//     int tx, ty, ts, N, M, min=100000000;
//     string s;
//     cin >> N >> M;
//     for(int i=0;i<N;i++){
//         cin >> s;
//         for(int j=0;j<M;j++)
//             maps[i][j]=s[j]-'0';
//     }
//     queue<tuple<int,int,int>>q;
//     q.push(make_tuple(0,0,0));
//     visited[0][0][0]++;
//     while(!q.empty()){
//         ts = get<0>(q.front());
//         tx = get<1>(q.front());
//         ty = get<2>(q.front());
//         q.pop();
//         if(tx==N-1 && ty==M-1){if(min>visited[ts][tx][ty])min=visited[ts][tx][ty]; continue;}
//         for(int i=0;i<4;i++){
//             if(tx+dx[i]<0||ty+dy[i]<0||tx+dx[i]>=N||ty+dy[i]>=M) continue;
//             if(visited[ts][tx+dx[i]][ty+dy[i]]) continue;
//             if(maps[tx+dx[i]][ty+dy[i]]){
//                 if(ts==0){
//                     q.push(make_tuple(ts+1,tx+dx[i],ty+dy[i]));
//                     visited[ts+1][tx+dx[i]][ty+dy[i]] = visited[ts][tx][ty]+1;
//                     continue;
//                 }
//                 else
//                     continue;
//             }
//             q.push(make_tuple(ts,tx+dx[i],ty+dy[i]));
//             visited[ts][tx+dx[i]][ty+dy[i]] = visited[ts][tx][ty]+1;
//         }
//     }
//     if(min==100000000) cout << -1;
//     else cout << min;
//     return 0;
// }
//
#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#include <utility>
#include <queue>
#include <tuple>
#include <cstring>
#include <string>
using namespace std;
int visited[2][1001][1001]={0,};
int maps[1001][1001]={0,};
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int dx[4] = {0, 1, 0, -1};
    int dy[4] = {1, 0, -1, 0};
    int tx, ty, ts, N, M, min=100000000;
    string s;
    cin >> N >> M;
    for(int i=0;i<N;i++){
        cin >> s;
        for(int j=0;j<M;j++)
            maps[i][j]=s[j]-'0';
    }
    queue<tuple<int,int,int>>q;
    q.push(make_tuple(0,0,0));
    visited[0][0][0]++;
    while(!q.empty()){
        ts = get<0>(q.front());
        tx = get<1>(q.front());
        ty = get<2>(q.front());
        q.pop();
        if(tx==N-1 && ty==M-1){if(min>visited[ts][tx][ty])min=visited[ts][tx][ty]; continue;}
        for(int i=0;i<4;i++){
            if(tx+dx[i]<0||ty+dy[i]<0||tx+dx[i]>=N||ty+dy[i]>=M) continue;
            if(visited[ts][tx+dx[i]][ty+dy[i]]) continue;
            if(maps[tx+dx[i]][ty+dy[i]]){
                if(ts==0){
                    q.push(make_tuple(ts+1,tx+dx[i],ty+dy[i]));
                    visited[ts+1][tx+dx[i]][ty+dy[i]] = visited[ts][tx][ty]+1;
                    continue;
                }
                else
                    continue;
            }
            q.push(make_tuple(ts,tx+dx[i],ty+dy[i]));
            visited[ts][tx+dx[i]][ty+dy[i]] = visited[ts][tx][ty]+1;
        }
    }
    if(min==100000000) cout << -1;
    else cout << min;
    return 0;
}