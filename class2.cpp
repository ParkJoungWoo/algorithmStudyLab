// #include <iostream>
// #include <bits/stdc++.h>
// #include <string>
// #include <vector>
// #include <math.h>
// using namespace std;
// int main(void) {
//   ios::sync_with_stdio(0);
//   cin.tie(0);
//   int x, y;
//   vector<vector<int>> v(51, vector<int>(51));
//   vector<string> ss(51);
//   string s;
//   string w = "WBWBWBWB";
//   string b = "BWBWBWBW";
//   cin >> x >> y;
//   int answer = 64;
//   int temp = 0;
//   for(int i = 0; i < x; i++)
//   {
//     cin >> s;
//     ss.push_back(s);
//   }
//   cout << answer / 2;
// }
// #include <iostream>
// #include <algorithm>
// #include <bits/stdc++.h>
// using namespace std;
// int main(void) {
//   ios::sync_with_stdio(0);
//   cin.tie(0);
//   int answer[4];
//   cin >> answer[0] >> answer[1] >> answer[2] >> answer[3];
//   answer[2] -= answer[0]; answer[3] -= answer[1];
//   cout << *min_element(answer, answer+4);
// }
// #include <iostream>
// #include <algorithm>
// #include <vector>
// #include <string>
// #include <bits/stdc++.h>
// using namespace std;
// int main(void) {
//   ios::sync_with_stdio(0);
//   cin.tie(0);
//   string s;
//   int size = 0;
//   vector<vector<string>> v(51);
//   cin >> size;
//   while(size--)
//   {
//     cin >> s;
//     v[s.size()-1].push_back(s);
//   }
//   for(int i = 0; i < 51; i++)
//     if(v[i].size()) 
//     {
//       sort(v[i].begin(), v[i].end());
//       v[i].erase(unique(v[i].begin(), v[i].end()), v[i].end());
//     }
//   for(int i = 0; i < 51; i++)
//   {
//     if(!v[i].size()) continue;
//     for(auto it = v[i].begin(); it != v[i].end(); it++)
//         cout << *it << '\n';
//   }
// }
// #include <iostream>
// #include <math.h>
// #include <string>
// #include <bits/stdc++.h>
// using namespace std;
// int main(void) {
//   ios::sync_with_stdio(0);
//   cin.tie(0);
//   int tri[3];
//   while(true)
//   {
//     cin >> tri[0] >> tri[1] >> tri[2];
//     if((tri[0]+tri[1]+tri[2]) == 0) break;
//     else if((int)(pow(tri[0],2)+pow(tri[1],2)+pow(tri[2],2))-2*(int)(*max_element(tri, tri+3)**max_element(tri, tri+3)))
//       cout << "wrong" << '\n';
//     else
//       cout << "right" << '\n';
//   }
// }
// #include <iostream>
// #include <math.h>
// #include <string>
// #include <bits/stdc++.h>
// using namespace std;
// int main(void) {
//   ios::sync_with_stdio(0);
//   cin.tie(0);
//   int num;
//   int num2;
//   string temp;
//   while(true)
//   {
//     cin >> num;
//     num2 = 0;
//     if(num)
//     {
//       temp = to_string(num);
//       for(int i = 0; i < temp.size(); i++)
//         num2 += (pow(10, i)) * (temp[i] -'0');
//       if(num - num2) cout << "no" <<'\n';
//       else cout << "yes" << '\n';
//     }
//     else break;
//   }
// }
// #include <iostream>
// #include <math.h>
// #include <string>
// #include <bits/stdc++.h>
// using namespace std;
// int main(void) {
//   ios::sync_with_stdio(0);
//   cin.tie(0);
//   int num, count = 0, mo = 665;
//   string tmp;
//   cin >> num;
//   while(mo++)
//   {
//     tmp = to_string(mo);
//     if(tmp.find("666") != string::npos)
//       count++;
//     if(num == count)
//     {
//       cout << mo;
//       break;
//     }
//   }
// }
// #include <iostream>
// #include <math.h>
// #include <set>
// #include <algorithm>
// #include <string>
// #include <bits/stdc++.h>
// using namespace std;
// int main(void) {
//   ios::sync_with_stdio(0);
//   cin.tie(0);
//   set<int>s;
//   int size, temp;
//   cin >> size;
//   for(int i = 0; i < size; i++){ cin >> temp; s.insert(temp);}
//   cin >> size;
//   while(size--){ 
//     cin >> temp; 
//     auto it = s.find(temp);
//     if(it != s.end())
//       cout << 1 << '\n';
//     else
//       cout << 0 << '\n';
//   }
// }
// #include <iostream>
// #include <math.h>
// #include <vector>
// #include <algorithm>
// #include <numeric>
// #include <bits/stdc++.h>
// using namespace std;
// int main(void) {
//   // ios::sync_with_stdio(0);
//   // cin.tie(0);
//   int temp, n, size;
//   while(1)
//   {
//     cin >> size;
//     cin >> n;
//     cout << size / n << '\n';
//     if(size == 0) break;

//   }
// }
// #include <iostream>
// #include <algorithm>
// #include <bits/stdc++.h>
// #define ll long long 
// ll nums[1000001] ={0,};
// using namespace std;
// int main(void) {
//   ios::sync_with_stdio(0);
//   cin.tie(0);
//   int a, b;
//   cin >> a >> b;
//   nums[1]=1;
//   for(ll i = 2; i <= (ll)b; i++)
//       for(ll j = 2; i*j <= (ll)b; j++)
//         nums[i*j]=1;
//   for(int i = a; i <= b; i++)
//     if(nums[i] == 0) cout << i << '\n';
// }
// #include <iostream>
// #include <algorithm>
// #include <bits/stdc++.h>
// int nums[1001];
// using namespace std;
// int main(void) {
//   ios::sync_with_stdio(0);
//   cin.tie(0);
//   fill(nums, nums+1001, 1);
//   nums[1] = 0;
//   for(int i = 2; i < 1001; i++)
//   {
//     if(nums[i]==1)
//       for(int j = i+1; j < 1001; j++)
//         if(j % i == 0) nums[j] = 0;
//   }
//   int size, temp, answer = 0;
//   cin >> size;
//   while(size--)
//   {
//     cin >> temp;
//     answer += nums[temp];
//   }
//   cout << answer;
// }

// #include <iostream>
// #include <algorithm>
// #include <string>
// #include <math.h>
// #include <bits/stdc++.h>
// using namespace std;
// int main(void) {
//   ios::sync_with_stdio(0);
//   cin.tie(0);
//   int want, start,  sum = 0;
//   string s, t;
//   cin >> want;
//   s = to_string(want);
//   if(s.size() >= 2)
//     start = (int)pow(10, s.size()-2);
//   else
//     start = 1;
//   for(int i = start; i <= want; i++)
//   {
//     sum = i;
//     t = to_string(sum);
//     for(int j = 0; j < t.size(); j++)
//       sum += t[j] - '0';
//     if(sum == want) {sum = i; break;}
//     sum = 0;
//   }
//   cout << sum;
// }
// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// int main(void) {
//   ios::sync_with_stdio(0);
//   cin.tie(0);
//   int a, b, c, d;
//   cin >> a >> b;
//   d = a * b;
//   c = a > b ? b : a;
//   a = a > b ? a : b;
//   b = c;
//   for(c = a % b ;c != 0;a = b, b = c, c = a%b);
//   cout << b << '\n';
//   cout << d / b;
//   }
// #include <iostream>
// #include <bits/stdc++.h>
// #include <vector>
// #include <algorithm>
// using namespace std;
// int v[15][15] = {0,};
// int main(void) {
//   ios::sync_with_stdio(0);
//   cin.tie(0);
//   int size, a, b, sum = 0;
//   for(int i = 0; i <= 14; i++) v[0][i] = i+1;
//   for(int i = 1; i <= 14; i++)
//   {
//     sum = 0;
//     for(int j = 0; j <= 14; j++)
//     {
//       sum += v[i-1][j];
//       v[i][j] = sum;
//     }
//   }
//   cin >> size;
//   while(size--)
//   {
//     cin >> a >> b;
//     cout << v[a][b-1] <<'\n';
//   }
    
//   }
// #include <iostream>
// #include <bits/stdc++.h>
// #include <algorithm>
// using namespace std;
// int nums[10001] = {0,};
// int main(void) {
//   ios::sync_with_stdio(0);
//   cin.tie(0);
//   cout.tie(0);
//   int size, temp;
//   cin >> size;
//   while(size--){cin >> temp; nums[temp]++;}
//   for(int i = 0; i < 10001; i++)
//     if(nums[i])
//       for(int j = 0; j < nums[i]; j++)
//         cout << i << '\n';
//   }
// #include <iostream>
// #include <bits/stdc++.h>
// #include <algorithm>
// #include <vector>
// #include <string>
// using namespace std;
// bool cmp(pair<string, int> left, pair<string, int> right){return left.second < right.second;}
// int main(void) {
//   ios::sync_with_stdio(0);
//   cin.tie(0);
//   cout.tie(0);
//   vector<pair<string, int>> v;
//   int size, temp;
//   string s;
//   cin >> size;
//   while(size--){cin >> temp >> s; v.push_back(pair<string, int>(s, temp));}
//   stable_sort(v.begin(), v.end(), cmp);
//   for(auto it = v.begin(); it!=v.end(); it++) cout << it->second << " "<< it->first << '\n';
// }
// #include <iostream>
// #include <algorithm>
// #include <bits/stdc++.h>
// using namespace std;
// int main(void) {
//   ios::sync_with_stdio(0);
//   cin.tie(0);
//   int n, k, a=1;
//   cin >> n >> k;
//   for(int i = 0; i < k; i++, n--) a *= n;
//   for(int j = k; j > 0; j--) a/= j;
//   cout << a;
// }

// #include <iostream>
// #include <algorithm>
// #include <vector>
// #include <stack>
// #include <bits/stdc++.h>
// using namespace std;
// int main(void) {
//   ios::sync_with_stdio(0);
//   cin.tie(0);
//   int size, max, temp, real = 0;
//   vector<int> v;
//   cin >> size >> max;
//   while(size--){cin >> temp; v.push_back(temp);}
//   for(int i = 0; i < v.size(); i++)
//     for(int j = i + 1; j < v.size(); j++)
//       for(int k = j + 1; k < v.size(); k++)
//       {
//         real += v[i]
//       }
// }
// #include <iostream>
// #include <algorithm>
// #include <vector>
// #include <stack>
// #include <bits/stdc++.h>
// using namespace std;
// int main(void) {
//   ios::sync_with_stdio(0);
//   cin.tie(0);
//   int size, max, temp, real = 0;
//   cin >> size >> max;
//   vector<int>v;
//   vector<int>per;
//   for(int i = 0; i < size; i++){cin >> temp; v.push_back(temp);}
//   for(int i = 0; i < size; i++) per.push_back(0);
//   per[0] = per[1] = per[2] = 1;
//   sort(per.begin(), per.end());
//   do {
//       temp = 0;
//       for(int i = 0; i < per.size(); i++)
//         if(per[i])  
//           temp += v[i];
//       if((temp <= max) && (temp > real))
//         real = temp;
//     } while(next_permutation(per.begin(), per.end()));
//   cout << real;
// }
// #include <iostream>
// #include <bits/stdc++.h>
// #include <algorithm>
// #include <vector>
// #include <string>
// using namespace std;
// bool cmp(pair<int, int> left, pair<int, int> right){
//   if(left.second < right.second) return left.second < right.second;
//   else if(left.second > right.second) return left.second < right.second;
//   else
//   {
//     return left.first < right.first;
//   }
// }
// int main(void) {
//   ios::sync_with_stdio(0);
//   cin.tie(0);
//   cout.tie(0);
//   vector<pair<int, int>> v;
//   int size, temp1, temp2;
//   cin >> size;
//   while(size--){cin >> temp1 >> temp2; v.push_back(pair<int, int>(temp1, temp2));}
//   sort(v.begin(), v.end(), cmp);
//   for(auto it = v.begin(); it!=v.end(); it++) cout << it->first << " "<< it->second << '\n';
// }
// #include <iostream>
// #include <bits/stdc++.h>
// #include <algorithm>
// #include <vector>
// #include <string>
// using namespace std;
// int main(void) {
//   ios::sync_with_stdio(0);
//   cin.tie(0);
//   cout.tie(0);
//   int size = 8, count = 0;
//   string s;
//   while(size--)
//   {
//     cin >> s;
//     if(size % 2 == 0)
//       for(int i = 0; i < 8; i++)
//       {
//         if(i % 2 == 1)
//           if(s[i] == 'F')
//             count++;
//       }
//     else
//     for(int i = 0; i < 8; i++)
//       {
//         if(i % 2 == 0)
//           if(s[i] == 'F')
//             count++;
//       }
//   }
//   cout << count;
// }
// #include <iostream>
// #include <bits/stdc++.h>
// #include <algorithm>
// #include <stack>
// #include <string>
// using namespace std;
// int main(void) {
//   ios::sync_with_stdio(0);
//   cin.tie(0);
//   cout.tie(0);
//   stack<char> s;
//   stack<char> t;
//   string temp;
//   char ct;
//   while(true)
//   {
//     // cin >> temp;
//     getline(cin, temp);
//     if(temp.size() == 1 && temp[0] =='.')break;
//     for(int i=0; i<temp.size(); i++)
//     {
//         if(temp[i] =='(')
//             s.push(temp[i]);
//         if(temp[i] ==')')
//             s.push(temp[i]);
//         if(temp[i] =='[')
//             s.push(temp[i]);
//         if(temp[i] ==']')
//             s.push(temp[i]);
//     }
//     if(temp[temp.size()-1]=='.')
//     {
//         if(s.empty()) {cout << "yes"<<'\n'; while(!s.empty())s.pop();}
//         else
//         {
//            while(!s.empty())
//            {
//                t.push(s.top());
//                s.pop();
//                while(!s.empty()&&!t.empty())
//                {
//                 if((t.top() == ')' && s.top() =='(') || (t.top() == ']' && s.top() =='['))
//                 {
//                     t.pop();
//                     s.pop();
//                 }
//                 else break;
//                }
//            }
//            if(t.empty()) cout << "yes"<< '\n';
//            else {cout << "no"<< '\n'; while(!t.empty())t.pop();}
//         }
//     }
//   }
// }
// #include <iostream>
// #include <bits/stdc++.h>
// #include <algorithm>
// #include <stack>
// #include <string>
// using namespace std;
// int main(void) {
//   ios::sync_with_stdio(0);
//   cin.tie(0);
//   cout.tie(0);
//   stack<char> s;
//   stack<char> t;
//   string temp;
//   int size;
//   cin >> size;
//   while(size--)
//   {
//     cin >> temp;
//     for(int i = 0; i < temp.size(); i++)
//         s.push(temp[i]);
//     while(!s.empty())
//     {
//         t.push(s.top());
//         s.pop();
//         while(!s.empty()&&!t.empty())
//         {
//             if((t.top()-s.top())==1){s.pop(); t.pop();}
//             else break;
//         }
//     }
//     if(t.empty()) cout << "YES" <<'\n';
//     else {cout << "NO" << '\n'; while(!t.empty())t.pop();}
//   }
// }
// #include <iostream>
// #include <bits/stdc++.h>
// #include <algorithm>
// #include <stack>
// #include <string>
// using namespace std;
// int main(void) {
//   ios::sync_with_stdio(0);
//   cin.tie(0);
//   cout.tie(0);
//   stack<char> s;
//   stack<char> t;
//   string temp;
//   int size;
//   cin >> size;
//   while(size--)
//   {
//     cin >> temp;
//     for(int i = 0; i < temp.size(); i++)
//         s.push(temp[i]);
//     while(!s.empty())
//     {
//         t.push(s.top());
//         s.pop();
//         while(!s.empty()&&!t.empty())
//         {
//             if((t.top()-s.top())==1){s.pop(); t.pop();}
//             else break;
//         }
//     }
//     if(t.empty()) cout << "YES" <<'\n';
//     else {cout << "NO" << '\n'; while(!t.empty())t.pop();}
//   }
// }
// #include <iostream>
// #include <algorithm>
// #include <vector>
// #include <set>
// #include <bits/stdc++.h>
// using namespace std;
// int main(void) {
//   ios::sync_with_stdio(0);
//   cin.tie(0);
//   int N, M, B, temp;
//   int md, min=10000000;
//   int count1, count2;
//   int arr[501][501]={0,};
//   int check[257] = {0,};
//   set<int>s;
//   cin >> N >> M >> B;
//   for(int i = 0; i < N; i++)
//     for(int j = 0; j < M; j++)
//     {
//       cin >> temp;
//       arr[i][j] = temp;
//       check[temp]++;
//       s.insert(arr[i][j]);
//     }
//   for(auto it = s.begin(); it != s.end(); it++)
//   {
//     md = *it;
//     count1=-1;
//     count2=-1;
//     for(auto t = s.begin(); t != s.end(); t++)
//     {
//       if(md == *t) continue;
//       else if(md > *t)
//       {
//         count1 += (md-*t)*check[*t];
//       }
//       else
//       {
//         cout << *t << '\n';
//         count1 += 2 * (*t-md)*check[*t];
//         count2 += (*t-md)*check[*t];
//       }
//     }
//     cout << count1 << " " << count2 << '\n';
//     if(count1 < min)
//       min = count1;
//     if(count2 <= B)
//       if(count2 <= min)
//         min = count2;
//   }
//   cout << min;
// }
// #include <iostream>
// #include <algorithm>
// #include <vector>
// #include <stack>
// #include <bits/stdc++.h>
// using namespace std;
// int nums[8001] = {0,};
// int main(void) {
//   ios::sync_with_stdio(0);
//   cin.tie(0);
//   vector<int> v;
//   stack<int>s;
//   int size, temp, max;
//   long long sum = 0;
//   cin >> size;
//   while(size--)
//   {
//     cin >> temp;
//     v.push_back(temp);
//     sum += temp*10;
//     nums[temp+4000]++;
//   }
//   sort(v.begin(), v.end());
//   //산술평균
//   if(sum >= 0)
//   {
//       sum /= v.size();
//       if(sum % 10 > 4)
//         sum += 10;
//       cout << (double)(sum / 10) << '\n';
//   }
//   else
//   {
//     sum *= -1;
//     sum /= v.size();
//     if(sum % 10 > 4)
//         sum += 10;
//     cout << (double)(-1 * (sum / 10)) << '\n';
//   }
//   //중앙값
//   cout << v[(v.size()-1)/2] << '\n';
//   //최빈값
//   max = *max_element(nums, nums+8001);
//   for(int i = 0; i < 8001; i++)
//   {
//       if(nums[i]==max)
//         s.push(i-4000);
//   }
//   while(s.size() > 2)
//     s.pop();
//   cout << s.top() << '\n';
//   //범위
//   cout << v[v.size()-1] - *v.begin();
// }
// #include <iostream>
// #include <algorithm>
// #include <vector>
// #include <string>
// #include <bits/stdc++.h>
// using namespace std;
// int main(void) {
//   ios::sync_with_stdio(0);
//   cin.tie(0);
//   string s; 
//   cin >> s;
//   vector<int>v;
//   for(int i = 0; i < s.size(); i++)
//     v.push_back(s[i]-'0');
//   sort(v.begin(), v.end());
//   for(int i = v.size()-1; i >= 0; i--)
//     cout<<v[i];
// }
// #include <iostream>
// #include <algorithm>
// #include <list>
// #include <vector>
// #include <string>
// #include <bits/stdc++.h>
// using namespace std;
// int main(void) {
//     ios::sync_with_stdio(0);
//     cin.tie(0);
//     list<int>li;
//     int size, cur;
//     string s, temp;
//     cin >> s >> size;
//     cur = s.size()-1;
//     for(int i = 0; i < s.size(); i++)
//         li.push_back(s[i]);
//     auto it = li.end();
//     while(size--)
//     {
//         cin >> s;
//         if((s[0] == 'D') && it != li.end() && li.size())
//             it++;
//         if((s[0] == 'L') && it != li.begin() && li.size())
//             it--;
//         if((s[0] == 'B') && it != li.begin() && li.size())
//             it = li.erase(--it);
//         if(s[0] == 'P')
//         {
//             cin >> temp;
//             li.insert(it, temp[0]);
//         }
//     }
//     it = li.begin();
//     while(it != li.end())
//     {
//         cout << (char)*it;
//         it++;
//     }
// }
// #include <iostream>
// #include <algorithm>
// #include <string>
// #include <bits/stdc++.h>
// using namespace std;
// int main(void) {
//     ios::sync_with_stdio(0);
//     cin.tie(0);
//     unsigned long long l1, l2, l3;
//     int n[10] = {0,};
//     string s;
//     cin >> l1 >> l2 >> l3;
//     l1 *= l2 *= l3;
//     s = to_string(l1);    
//     for(int i = 0; i < s.size(); i++)
//         n[s[i]-'0']++;
//     for(int i = 0; i < 10; i++)
//         cout << n[i] << '\n';
// }
// #include <bits/stdc++.h>
// #include <iostream>
// #include <utility>
// #include <vector>
// #include <algorithm>
// using namespace std;
// #define X first
// #define Y second
// int main()
// {
//     ios::sync_with_stdio(0);
//     cin.tie(0);
//     pair<int, int> p = {0,0};
//     vector<pair<int, int>> weight;
//     int size, tempw, temph, count=0, ans=1;
//     int rank[51] = {0,};
//     cin >> size;
//     while(size--)
//     {
//         cin >> tempw >> temph;
//         weight.push_back({tempw, temph});
//     }
//     for(int i = 0; i < weight.size(); i++)
//     {
//         p = weight[i];
//         count = 0;
//         for(int j = 0; j < weight.size(); j++)
//         {
//             if(i == j) continue; 
//             if((weight[j].X > p.X) && (weight[j].Y > p.Y))
//                 continue;
//             else
//                 count++;
//         }
//         rank[i] = weight.size()-count;
//     }
//     for(int i = 0; i < weight.size(); i++)
//         cout << rank[i] << " ";
// }
// #include <iostream>
// #include <algorithm>
// #include <utility>
// #include <bits/stdc++.h>
// using namespace std;
// int num[1000001] = {0,};
// int main(void) {
//     ios::sync_with_stdio(0);
//     cin.tie(0);
//     num[2] = 1;
//     num[3] = 1;
//     int number;
//     int ans = 0;
//     cin >> number;
//     for(int i = 4; i <= number; i++)
//     {
//         if(i%6==0){num[i] = min(num[i/2], num[i/3])+1;}
//         else if(i%2==0){num[i] = min(num[i-1], num[i/2])+1;}
//         else if(i%3==0){num[i] = min(num[i-1], num[i/3])+1;}
//         else{num[i] = num[i-1]+1;}
//     }
//     cout << num[number] << '\n';
//     for(int i = number; i > 0;)
//     {
//         cout << i << " ";
//         if(i%6==0){i = num[i/2] > num[i/3]? i/3 : i/2;}
//         else if(i%2==0){i = num[i/2] > num[i-1]? i-1 : i/2;}
//         else if(i%3==0){i = num[i/3] > num[i-1]? i-1 : i/3;}
//         else{i--;}
//     }
// }

// #include <iostream>
// #include <numeric>
// #include <algorithm>
// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long
// int main(void) {
//     ios::sync_with_stdio(0);
//     cin.tie(0);
//     int size, min = 1000000, max = 0;
//     ll be = 1, temp, num = 1;
//     cin >> size;
//     if(size == 1)
//     {
//         cin >> temp;
//         cout << temp * temp;
//         return 0;
//     }
//     while(size--)
//     {
//         cin >> temp;
//         if(max < temp) max = temp;
//         if(min > temp) min = temp;
//     }
//     cout << min*max;
// }

// #include <iostream>
// #include <algorithm>
// #include <vector>
// #include <utility>
// #include <bits/stdc++.h>
// using namespace std;
// int main(void) {
//     ios::sync_with_stdio(0);
//     cin.tie(0);
//     vector<int>num = {0,};
//     int size, index = 0, temp, count = 0;
//     cin >> size;
//     cin >> num[0];
//     for(int i = 1; i < size; i++)
//     {
//         cin >> temp;
//         num.push_back(temp);
//     }
//     cin >> temp;
//     sort(num.begin(), num.end());
//     for(index = 0; index < size; index++)
//     {
//         if(num[index] > temp)
//             break;
//         if(num[index]==temp)
//         {
//             index = -1;
//             break;
//         }
//     }
//     if(index == 0)
//         count = num[index] - temp -1 + temp - 1 + (temp - 1)*(num[index]-temp-1);
//     else if(index < 0) count = 0;
//     else
//     {
//         count = temp-num[index-1]-1 + num[index]-temp-1 + (temp-num[index-1]-1)*(num[index]-temp-1);
//     }
//     cout << count;
// }
// #include <iostream>
// #include <vector>
// using namespace std;
// #define ll long long
// int main()
// {
//     ios::sync_with_stdio(0);
//     cin.tie(0);
//     int count = 0;
//     ll T, size, a, b, c, d;
//     ll ta, tb, tr;
//     bool win, wout;
//     cin >> T;
//     while(T--){
//         cin >> a >> b >> c >> d;
//         count = 0;
//         cin >> size;
//         while(size--){
//             cin >> ta >> tb >> tr;
//             win = tr*tr > ((ta-a)*(ta-a)+(tb-b)*(tb-b));
//             wout = tr*tr > ((ta-c)*(ta-c)+(tb-d)*(tb-d));
//             if(win!=wout) count++;
//         }
//         cout << count <<'\n';
//     }
//     return 0;
// }
// #include <iostream>
// #include <vector>
// #include <string>
// using namespace std;
// #define ll long long
// int main()
// {
//     ios::sync_with_stdio(0);
//     cin.tie(0);
//     int count;
//     string s, t;
//     cin >> count;
//     cin >> s;
//     count--;
//     while(count--){
//         cin >> t;
//         for(int i=0;i<s.size();i++){
//             if(s[i]!=t[i]){
//                 s[i]='?';
//             }
//         }
//     }
//     cout << s;
//     return 0;
// }
// #include <iostream>
// #include <vector>
// #include <string>
// using namespace std;
// #define ll long long
// int main()
// {
//     ios::sync_with_stdio(0);
//     cin.tie(0);
//     ll num = 0;
//     string s;
//     cin >> s;
//     if(s.compare("black")==0){num+=0;}
//     else if(s.compare("brown")==0){num+=1;}
//     else if(s.compare("red")==0){num+=2;}
//     else if(s.compare("orange")==0){num+=3;}
//     else if(s.compare("yellow")==0){num+=4;}
//     else if(s.compare("green")==0){num+=5;}
//     else if(s.compare("blue")==0){num+=6;}
//     else if(s.compare("violet")==0){num+=7;}
//     else if(s.compare("grey")==0){num+=8;}
//     else{num+=9;}
//     num*=10;
//     cin >> s;
//     if(s.compare("black")==0){num+=0;}
//     else if(s.compare("brown")==0){num+=1;}
//     else if(s.compare("red")==0){num+=2;}
//     else if(s.compare("orange")==0){num+=3;}
//     else if(s.compare("yellow")==0){num+=4;}
//     else if(s.compare("green")==0){num+=5;}
//     else if(s.compare("blue")==0){num+=6;}
//     else if(s.compare("violet")==0){num+=7;}
//     else if(s.compare("grey")==0){num+=8;}
//     else{num+=9;}
//     cin >> s;
//     if(s.compare("black")==0){num*=1;}
//     else if(s.compare("brown")==0){num*=10;}
//     else if(s.compare("red")==0){num*=100;}
//     else if(s.compare("orange")==0){num*=1000;}
//     else if(s.compare("yellow")==0){num*=10000;}
//     else if(s.compare("green")==0){num*=100000;}
//     else if(s.compare("blue")==0){num*=1000000;}
//     else if(s.compare("violet")==0){num*=10000000;}
//     else if(s.compare("grey")==0){num*=100000000;}
//     else{num*=1000000000;}
//     cout << num;
//     return 0;
// }

#include <iostream>
#include <vector>
#include <string>
using namespace std;
#define ll long long
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll num, k, r=2;
    cin >> num >> k;   
    for(int i = 1; (k*i - k*i%100) < (num - num%100); i++){
        r=i;
    }
    r++;
    r = k*r%100;
    if(r < 10)
        cout << '0'<< r;
    else
        cout << r;
    return 0;
}