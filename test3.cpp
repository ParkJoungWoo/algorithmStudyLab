// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// const int MX = 1000005;
// int dat[MX], pre[MX], nxt[MX];
// int unused = 1;

// void insert(int addr, int num){
//     int count = 0;
//     int temp = 0;
//     for(int i = 0; i < addr; i++)
//         count = nxt[count];
//     if(nxt[count] < 0)//다음이 존재하지 않을 경우
//     {    
//         nxt[count]=unused;
//         dat[unused]=num;
//         pre[unused]=count;
//         unused++;
//     }   
//     else//다음이 존재하는 경우
//     {
//         temp = nxt[count];
//         nxt[count]=unused;
//         dat[unused]=num;
//         pre[unused]=count;
//         nxt[unused]=temp;
//         pre[temp]=unused;
//         unused++;
//     }
// }   

// void erase(int addr){
//   nxt[pre[addr]] = nxt[addr];
//   pre[nxt[addr]] = pre[addr];
// }

// void traverse(){
//   int cur = nxt[0];
//   while(cur != -1){
//     cout << dat[cur] << ' ';
//     cur = nxt[cur];
//   }
//   cout << "\n\n";
// }

// void insert_test(){
//   cout << "****** insert_test *****\n";
//   insert(0, 10); // 10(address=1)
//   traverse();
//   insert(0, 30); // 30(address=2) 10
//   traverse();
//   insert(2, 40); // 30 40(address=3) 10
//   traverse();
//   insert(1, 20); // 30 40 10 20(address=4)
//   traverse();
//   insert(4, 70); // 30 40 10 20 70(address=5)
//   traverse();
// }

// void erase_test(){
//   cout << "****** erase_test *****\n";
//   erase(1); // 30 40 20 70
//   traverse();
//   erase(2); // 40 20 70
//   traverse();
//   erase(4); // 40 70
//   traverse();
//   erase(5); // 40
//   traverse();
// }

// int main(void) {
//   fill(pre, pre+MX, -1);
//   fill(nxt, nxt+MX, -1);
//   insert_test();
//   erase_test();
// }
// #include <bits/stdc++.h>
// using namespace std;

// const int MX = 1000005;
// int dat[MX], pre[MX], nxt[MX];
// int unused = 1;

// void insert(int addr, int num){
//   dat[unused] = num;
//   pre[unused] = addr;
//   nxt[unused] = nxt[addr];
//   if(nxt[addr] != -1) pre[nxt[addr]] = unused;
//   nxt[addr] = unused;
//   unused++;
// }

// void erase(int addr){
//   nxt[pre[addr]] = nxt[addr];
//   if(nxt[addr] != -1) pre[nxt[addr]] = pre[addr];
// }

// void traverse(){
//   int cur = nxt[0];
//   while(cur != -1){
//     cout << dat[cur] << ' ';
//     cur = nxt[cur];
//   }
//   cout << "\n\n";
// }

// void insert_test(){
//   cout << "****** insert_test *****\n";
//   insert(0, 10); // 10(address=1)
//   traverse();
//   insert(0, 30); // 30(address=2) 10
//   traverse();
//   insert(2, 40); // 30 40(address=3) 10
//   traverse();
//   insert(1, 20); // 30 40 10 20(address=4)
//   traverse();
//   insert(4, 70); // 30 40 10 20 70(address=5)
//   traverse();
// }

// void erase_test(){
//   cout << "****** erase_test *****\n";
//   erase(1); // 30 40 20 70
//   traverse();
//   erase(2); // 40 20 70
//   traverse();
//   erase(4); // 40 70
//   traverse();
//   erase(5); // 40
//   traverse();
// }

// int main(void) {
//   fill(pre, pre+MX, -1);
//   fill(nxt, nxt+MX, -1);
//   insert_test();
//   erase_test();
// }
// #include <iostream>
// #include <bits/stdc++.h>
// #include <string>
// #include <sstream>
// using namespace std;
// int main(void) {
//   ios::sync_with_stdio(0);
//   int num[100000];
//   fill(num, num+100000, -1);
//   int pos = 0;
//   int how = 0;
//   string s;
//   cin >> how;
//   for(int i = 0; i < how+1; i++)//이거 왜 how + 1해야 맞는지 모르겠넹
//   {
//     getline(cin, s);
//     if(s.compare("pop")==0){if(pos > 0) {pos -= 1; cout << num[pos] << '\n'; num[pos]=-1;} else cout << -1 << '\n';}
//     if(s.compare("top")==0){if(pos > 0) {cout << num[pos-1] << '\n';} else cout << num[0] << '\n';}
//     if(s.compare("empty")==0){if(pos == 0){cout << 1 << '\n';}else cout << 0 << '\n';}
//     if(s.compare("size")==0){cout << pos << '\n';}
//     if(s.find("push")==0){istringstream ss(s); ss >> s; ss >> s; num[pos++]=stoi(s);}
//   }
// }
// #include <bits/stdc++.h>
// using namespace std;

// const int MX = 1000005;
// int dat[MX];
// int head = 0, tail = 0;

// void push(int x){
//   if(tail == (MX -1))
//     tail = 0;
//   dat[tail] = x; tail++;
// }

// void pop(){
//   if(head == (MX -1))
//     head = 0;
//   head++;
// }

// int front(){
//   return dat[head];
// }

// int back(){
//   return dat[tail-1];
// }

// void test(){
//   push(10); push(20); push(30);
//   cout << front() << '\n'; // 10
//   cout << back() << '\n'; // 30
//   pop(); pop();
//   push(15); push(25);
//   cout << front() << '\n'; // 30
//   cout << back() << '\n'; // 25
// }

// int main(void) {
//   test();  
// }
// #include <iostream>
// #include <bits/stdc++.h>
// #include <string>
// #include <sstream>
// using namespace std;
// int main(void) {
//   ios::sync_with_stdio(0);
//   cin.tie(0);
//   int num[100000];
//   fill(num, num+100000, -1);
//   int head = 0;
//   int tail = 0;
//   int how = 0;
//   string s;
//   cin >> how;
//   for(int i = 0; i < how+1; i++)//이거 왜 how + 1해야 맞는지 모르겠넹
//   {
//     getline(cin, s);
//     if(s.compare("pop")==0){if(head < tail) cout << num[head++] << '\n'; else cout << -1 << '\n';}
//     if(s.compare("front")==0){if(head < tail) cout << num[head] << '\n'; else cout << -1 << '\n';}
//     if(s.compare("back")==0){if(head < tail) cout << num[tail-1] << '\n'; else cout << -1 << '\n';}
//     if(s.compare("empty")==0){if(head == tail){cout << 1 << '\n';}else cout << 0 << '\n';}
//     if(s.compare("size")==0){cout << tail - head << '\n';}
//     if(s.find("push")==0){istringstream ss(s); ss >> s; ss >> s; num[tail++]=stoi(s);}
//   }
// }
// #include <bits/stdc++.h>
// using namespace std;

// const int MX = 1000005;
// int dat[2*MX+1];
// int head = MX, tail = MX;

// void push_front(int x){
//   if(head == tail) tail++;
//   dat[head--] = x;
// }

// void push_back(int x){
//   if(head == tail) head--;
//   dat[tail++] = x;
// }

// void pop_front(){
//   head++;
// }

// void pop_back(){
//   tail--;
// }

// int front(){
//   return dat[head+1];
// }

// int back(){
//   return dat[tail-1];
// }

// void test(){
//   push_back(30); // 30
//   cout << front() << '\n'; // 30
//   cout << back() << '\n'; // 30
//   push_front(25); // 25 30
//   push_back(12); // 25 30 12
//   cout << back() << '\n'; // 12
//   push_back(62); // 25 30 12 62
//   pop_front(); // 30 12 62
//   cout << front() << '\n'; // 30
//   pop_front(); // 12 62
//   cout << back() << '\n'; // 62
// }

// int main(void){
//   test();
// }
// #include <iostream>
// #include <bits/stdc++.h>
// #include <string>
// #include <sstream>
// using namespace std;
// int main(void) {
//   ios::sync_with_stdio(0);
//   cin.tie(0);
//   int num[100000];
//   fill(num, num+100000, -1);
//   int head = 50000;
//   int tail = 50000;
//   int how = 0;
//   string s;
//   cin >> how;
//   for(int i = 0; i < how+1; i++)//이거 왜 how + 1해야 맞는지 모르겠넹
//   {
//     getline(cin, s);
//     if(s.find("push_front")==0){istringstream ss(s); ss >> s; ss >> s; num[--head]=stoi(s);}
//     if(s.find("push_back")==0){istringstream ss(s); ss >> s; ss >> s;  num[tail++]=stoi(s);}
//     if(s.compare("pop_front")==0){if(head < tail) cout << num[head++] << '\n'; else cout << -1 << '\n';}
//     if(s.compare("pop_back")==0){if(head < tail) cout << num[-1+tail--] << '\n'; else cout << -1 << '\n';}
//     if(s.compare("size")==0){cout << tail - head << '\n';}
//     if(s.compare("empty")==0){if(head == tail){cout << 1 << '\n';}else cout << 0 << '\n';}
//     if(s.compare("front")==0){if(head < tail) cout << num[head] << '\n'; else cout << -1 << '\n';}
//     if(s.compare("back")==0){if(head < tail) cout << num[tail-1] << '\n'; else cout << -1 << '\n';}
//   }
// }
// #include <iostream>
// #include <bits/stdc++.h>
// #include <algorithm>
// using namespace std;
// int main(void) {
//   ios::sync_with_stdio(0);
//   cin.tie(0);
//   int arr[6];
//   int temp = 0;
//   int temp2 = 0;
//   int temp3 = 0;
//   fill(arr, arr+6, 0);
//   for(int i = 0; i < 3; i++)
//   {
//     cin >> temp;
//     ++arr[temp-1];
//     if(arr[temp-1] > 1)
//       temp2 = temp;
//     else
//       if(temp > temp3)
//         temp3 = temp;
//   }
//   temp = *max_element(arr, arr+6);
//   if(temp == 3){cout << 10000+temp2*1000;}
//   else if(temp == 2){cout << 1000+temp2*100;}
//   else{cout << temp3 * 100;}
// }
// #include <iostream>
// #include <bits/stdc++.h>
// #include <algorithm>
// using namespace std;
// int main(void) {
//   ios::sync_with_stdio(0);
//   cin.tie(0);
//   int sum = 0;
//   int temp = 0;
//   for(int k = 0; k < 3; k++)
//   {
//     for(int i = 0; i < 4; i++)
//     {
//       cin >> temp;
//       sum += temp;
//     }
//     switch(sum)
//     {
//       case 0:
//       cout << 'D' << '\n';
//       break;
//       case 1:
//       cout << 'C'<< '\n';
//       break;
//       case 2:
//       cout << 'B'<< '\n';
//       break;
//       case 3:
//       cout << 'A'<< '\n';
//       break;
//       case 4:
//       cout << 'E'<< '\n';
//     }
//     sum = 0;
//   }
// }
// #include <iostream>
// #include <bits/stdc++.h>
// #include <algorithm>
// using namespace std;
// int main(void) {
//   ios::sync_with_stdio(0);
//   cin.tie(0);
//   int temp = 0;
//   int sum = 0;
//   int arr[7];
//   fill(arr, arr+7, 0);
//   for(int i = 0; i < 7; i++)
//   {
//     cin >> temp;
//     if(temp % 2 == 1)
//     {
//       sum += temp;
//       arr[i] = temp;
//     }
//     else
//       arr[i] = 100;
//   }
//   if(sum == 0)
//     cout << -1;
//   else
//     cout << sum << '\n' << *min_element(arr, arr+7);
// }
// #include <iostream>
// #include <bits/stdc++.h>
// #include <algorithm>
// using namespace std;
// int main(void) {
//   ios::sync_with_stdio(0);
//   cin.tie(0);
//   int temp = 0;
//   int size = 0;
//   int sumM = 0;
//   int sumY = 0;
//   cin >> size;
//   for(int i = 0; i < size; i++)
//   {
//     cin >> temp;
//     sumY += ((temp / 30) + 1) * 10;
//     sumM += ((temp / 60) + 1) * 15;
//   }
//   if(sumM < sumY) cout << 'M' << ' ' << sumM;
//   else if(sumY < sumM) cout << 'Y' << ' ' << sumY;
//   else cout << "Y M " << sumY;
// }
// #include <iostream>
// #include <bits/stdc++.h>
// #include <algorithm>
// using namespace std;
// int main(void) {
//   ios::sync_with_stdio(0);
//   cin.tie(0);
//   int arr[20];
//   for(int i = 1; i < 21; i++)
//     arr[i-1] = i;
//   int temp1 = 0;
//   int temp2 = 0;
//   int sub;
//   for(int k = 0; k < 10; k++)
//   {
//     cin >> temp1;
//     cin >> temp2;
//     for(int i = temp1-1; i <= (temp1+temp2)/2 - 1; i++)
//     {
//       sub = arr[i];
//       arr[i] = arr[temp2 -i+temp1-2];
//       arr[temp2 -i+temp1-2] = sub;
//     }
//   }
//   for(int i = 0; i < 20; i++)
//     cout << arr[i] << ' ';
// }
// #include <iostream>
// #include <bits/stdc++.h>
// #include <algorithm>
// using namespace std;
// void star(int num){for(int i = 0; i < num; i++)cout << '*';}
// void space(int num){for(int i = 0; i < num; i++)cout << ' ';}
// int main(void) {
//   ios::sync_with_stdio(0);
//   cin.tie(0);
//   int change = 1;
//   int size = 0;
//   cin >> size;
//   for(int i = 1; i < size+1; i+=change)
//   {
//     if(i == 0)
//       break;
//     space(i-1);
//     star(2*(size+1-i)-1);
//     cout << '\n';
//     if(i == size)
//     {
//       i = size;
//       change *= -1;
//     }
//   }
// }
// #include <iostream>
// #include <bits/stdc++.h>
// #include <string>
// #include <list>
// using namespace std;
// int main(void) {
//   ios::sync_with_stdio(0);
//   cin.tie(0);
//   int size = 0;
//   cin >> size;
//   list<int>lists;
//   string s = "";
//   for(int i = 0; i < size; i++)
//   {
//     cin >> s;
//     auto cur = lists.begin();
//     for(int j = 0; j < s.size(); j++)
//     {
//       if(s[j] == '<') 
//       {
//         if((cur != lists.begin())  && (lists.size() > 0))
//           cur--;
//       }
//       else if(s[j] == '>')
//       {
//         if((cur != lists.end())  && (lists.size() > 0))
//           cur++;
//       }
//       else if(s[j] == '-')
//       {
//         if(cur != lists.begin())
//         {
//           --cur;
//           cur = lists.erase(cur);
//         }
//       }
//       else
//         lists.insert(cur, s[j]);
//     }
//     for (auto it = lists.begin(); it != lists.end(); it++)
//       if(*it != '\0')
//         cout << (char)*it;
//     cout << '\n';
//     lists.clear();
//   }
// }
// #include <iostream>
// #include <bits/stdc++.h>
// #include <algorithm>
// #include <list>
// using namespace std;
// int main(void) {
//   ios::sync_with_stdio(0);
//   cin.tie(0);
//   int size;
//   int check;
//   cin >> size;
//   cin >> check;
//   list<int> lists;
//   list<int> finaler;
//   for(int i = 0; i < size; i++)
//     lists.push_back(i+1);
//   auto cur = lists.begin();
//   while(lists.size() != 0)
//   {    
//       for(int i = 0; i < check-1; i++)
//       {
//         if(*cur == lists.back())
//           cur = lists.begin();
//         else
//           cur++;
//       }
//       finaler.push_back(*cur);
//       if(*cur == lists.back())
//       {
//         lists.erase(cur);
//         cur = lists.begin();
//       }
//       else
//         cur = lists.erase(cur);
//   }
//   cout << "<";
//   for(auto it = finaler.begin(); it != finaler.end();)
//   {
//     cout << *it;
//     if(++it == finaler.end())
//       cout << ">";
//     else
//       cout << ", ";
//   }
// }
// #include <iostream>
// #include <bits/stdc++.h>
// #include <algorithm>
// #include <stack>
// #include <vector>
// #include <list>
// using namespace std;
// int main(void) {
//   ios::sync_with_stdio(0);
//   cin.tie(0);
//   int size;
//   int check;
//   stack<int>s;
//   list<char>answer;
//   vector<int>v;
//   cin >> size;
//   for(int i = 0; i < size; i++)
//   {
//     cin >> check;
//     v.push_back(check);
//   }
//   check = 0;
//   for(int i = 0; check < v.size(); i++)
//   {
//     if(i > size){ cout << "NO"; return 0;}
//     if(s.size() > 0)
//     {
//       if(v[check]==s.top()){answer.push_back('-'); s.pop(); i--; check++;}
//       else{s.push(i+1);answer.push_back('+');}
//     }
//     else{s.push(i+1);answer.push_back('+');}
//   }
//   for(auto it = answer.begin(); it != answer.end(); it++)
//     cout << *it << '\n';
// }
// #include <iostream>
// #include <bits/stdc++.h>
// #include <stack>
// #include <vector>
// using namespace std;
// int main(void) {
//   ios::sync_with_stdio(0);
//   cin.tie(0);
//   long long answer = 0;
//   int size;
//   long long max;
//   cin >> size;
//   vector<long long>v;
//   stack<long long>s;
//   while(size--){cin >> max; v.push_back(max);}
//   for(int i = 0; i < v.size(); i++)
//   {
//     if(s.empty())
//       s.push(v[i]);
//     else
//     {
//       if(s.top() > v[i])
//         answer += s.size();
//       else
//       {
//         while(!s.empty())
//         {
//           if(s.top() > v[i])
//             break;
//           else
//             s.pop();
//         }
//         answer += s.size();
//       }
//       s.push(v[i]);
//     }
//   }
//   cout << answer;
// }
// #include <iostream>
// #include <bits/stdc++.h>
// #include <stack>
// #include <list>
// using namespace std;
// int main(void) {
//   ios::sync_with_stdio(0);
//   cin.tie(0);
//   list<int>answer;
//   stack<int>s;
//   stack<int>r;
//   int size, d;
//   cin >> size;
//   while(size--)
//   {
//     cin >> d;
//     s.push(d);
//   }
//   while(!s.empty())
//   {
//     if(r.empty())
//     {
//       r.push(s.top());
//       answer.push_front(-1);
//     }
//     else
//     {
//       while(!r.empty())
//       {
//         if(s.top() < r.top()){answer.push_front(r.top());break;}
//         else{r.pop();}
//       }
//       if(r.empty())
//       {
//         r.push(s.top());
//         answer.push_front(-1);
//       }
//       else
//         r.push(s.top());      
//     }
//     s.pop();
//   }
//   for(auto it = answer.begin(); it != answer.end(); it++)
//     cout << *it << " ";
// }
// #include <iostream>
// #include <bits/stdc++.h>
// #include <string>
// #include <vector>
// using namespace std;
// int main(void) {
//   ios::sync_with_stdio(0);
//   cin.tie(0);
//   vector<int>num(2000000);
//   fill(num.begin(), num.end(), -1);
//   // int num[2000000];
//   // fill(num, num+2000000, -1);
//   long long head = 0;
//   long long tail = 0;
//   int how = 0;
//   string s;
//   cin >> how;
//   for(int i = 0; i < how; i++)//이거 왜 how + 1해야 맞는지 모르겠넹
//   {
//     cin >> s;
//     if(s.compare("pop")==0){if(head < tail) cout << num[head++] << '\n'; else cout << -1 << '\n';}
//     if(s.compare("front")==0){if(head < tail) cout << num[head] << '\n'; else cout << -1 << '\n';}
//     if(s.compare("back")==0){if(head < tail) cout << num[tail-1] << '\n'; else cout << -1 << '\n';}
//     if(s.compare("empty")==0){if(head == tail){cout << 1 << '\n';}else cout << 0 << '\n';}
//     if(s.compare("size")==0){cout << tail - head << '\n';}
//     if(s.find("push")==0){cin >> s; num[tail++]=stoi(s);}
//   }
// }
// #include <iostream>
// #include <bits/stdc++.h>
// #include <string>
// #include <list>
// using namespace std;
// int main(void) {
//   ios::sync_with_stdio(0);
//   cin.tie(0);
//   int size = 0;
//   cin >> size;
//   list<int>lists;
//   while(size--)
//     lists.push_front(size+1);
//   while(lists.size() != 1)
//   {
//     lists.pop_front();
//     size = lists.front();
//     lists.push_back(size);
//     lists.pop_front();
//   }
//   cout << lists.front();
// }
// #include <iostream>
// #include <bits/stdc++.h>
// #include <stack>
// #include <list>
// using namespace std;
// int main(void) {
//   ios::sync_with_stdio(0);
//   cin.tie(0);
//   int size, d, answer = 0;
//   stack<int>left;
//   stack<int>right;
//   cin >> size;
//   while(size--){cin >> d; right.push(d);}
//   while(!right.empty())
//   {
//     int check = 1;
//     while(!left.empty() && (left.top()<right.top()))
//     {
//       answer+=check++;
//       left.pop();
//     }
//     left.push(right.top());
//     right.pop();
//   }
//   d = 0;
//   size = 0;
//   while(!left.empty())
//   {
//     d = left.top();
//     left.pop();
//     if(left.top() == d) {size++;}
//     else {answer += size * (size - 1) / 2; size = 0;}
//   }
//   cout << answer;
// }
#include <iostream>
#include <bits/stdc++.h>
#include <list>
#include <vector>
#include <string>
#include <sstream>
#include <deque>
using namespace std;
vector<string> split(string input, char delimiter) {
    vector<string> answer;
    stringstream ss(input);
    string temp;
 
    while (getline(ss, temp, delimiter)) {
        answer.push_back(temp);
    }
    return answer;
}
int main(void) {
  ios::sync_with_stdio(0);
  cin.tie(0);
  deque<int>dq;
  vector<string>v;
  int size, t;
  string s, n;
  cin >> size;
  while(size--){
    cin >> s;
    cin >> t;
    if(t==1){
      cin >> n;
      n = n.substr(0);
      n = n.substr(0,n.length()-1);
      stringstream si(n);
      si >> t;
      dq.push_back(t);
    }
    else if(t==0){
      dq = deque<int>();
    }
    else{
      cin >> n;
      v=split(n,',');
      v[0] = v[0].substr(0);
      v[v.size()-1] = v[v.size()-1].substr(0,v[v.size()-1].length()-1);
      for(int i =0; i<v.size(); i++){
        stringstream si(v[i]);
        si >> t;
        dq.push_back(t);
      }
    }
    cout <<"ye";
    if(dq.empty()){
      cout << "error" << '\n';
      continue;
    }
    auto it = dq.begin();
    for(int i=0;i<s.size();i++){
      if(dq.empty()){
        cout << "error" << '\n';
        break;
      }
      if(s[i]=='D'){
        if(it==dq.begin()){
          it = dq.erase(it);
        }
        else{
          it = dq.erase(it);
        }
      }
      if(s[i]=='R'){
        if(it==dq.begin()){
          it = dq.end();
          it--;
        }
        else
          it = dq.begin();

      }
    }
    cout << '[';
    for(;it!=dq.end();){
      cout << *it;
      it++;
      if(it!=dq.end())
        cout << ',';
    }
    cout << ']'<<'\n';
  }
}