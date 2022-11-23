//1
// #include <iostream>
// using namespace std;
// int main () {
//     int result = 0;
//     int N = 0;
//     cin >> N;
//     for(int i = 0; i < N; i++)
//         if((i + 1)%3 == 0 || (i + 1)%5 == 0)
//             result += i+1;
//     cout << result;
//     return 0;
// }
//2
// #include <iostream>
// using namespace std;
// int func2(int * arr, int size);
// int main () {
//     int temp[3] = {1, 52, 48};
//     cout << func2(temp, 3);
//     return 0;
// }
// int func2(int * arr, int size)
// {
//     for(int i = 0; i < size; i++)
//         for(int j = i; j < size; j++){
//             if(i == j) continue;
//             else
//                 if((arr[i] + arr[j]) == 100)
//                     return 1;
//         }
//     return 0;
// }
// #include <iostream>
// using namespace std;
// int func3(int num);
// int main () {
//     cout << func3(59);
//     return 0;
// }
// int func3(int num)
// {
//     for(int i = 1; i <= num; i++)
//     {
//         if(i * i > num)
//             break;
//         if(i * i == num)
//             return 1;
//     }
//     return 0;
// }
// #include <iostream>
// using namespace std;
// int func4(int num);
// int main () {
//     cout << func4(1024);
//     return 0;
// }
// int func4(int num)
// {
//     int temp = 1;
//     for(; temp <= num; temp *=2);
//     if(temp > num)
//         temp /=2;
//     return temp;
// }

// #include <iostream>
// #include <vector>
//  using namespace std;
//  int main () {
//      int N = 0;
//      int temp = 0;
//      int max = 0;
//      cin >> N >> max;
//      vector<int>v(N);
//      for(int i = 0; i < N; i++){
//          cin >> v[i];
//          if(v[i] < max)
//             cout << v[i] << ' ';
//      }
//      return 0;
// }

// "\    /\"
//  ")  ( ')"
// "(  /  )"
//  "\(__)|"
// #include <iostream>
//  using namespace std;
//  int main () {
//      cout << "\\    /\\" << '\n' <<  " )  ( ')" << '\n' << "(  /  )" << '\n' << " \\(__)|";
//      return 0;
// }
// #include <iostream>
//  using namespace std;
//  int main () {
//      int a, b;
//      cin >> a >> b;
//      cout << a + b << '\n' << a - b << '\n' << a * b << '\n' << a / b << '\n' << a % b;
//      return 0;
// }

// #include <iostream>
// #include <algorithm>
//  using namespace std;
//  int main () {
//      int num1, num2;
//      int arr[9];
//      int sum = 0;
//      for(int i = 0; i < 9; i++)
//      {
//          cin >> arr[i];
//          sum += arr[i];
//      }
//      sort(arr, arr + 9);
//      sum -= 100;
//      for(int i = 0; i < 9; i++)
//          for(int j = 0; j < 9; j++)
//          {
//              if((arr[i] + arr[j]) == sum)
//              {
//                  num1 = i;
//                  num2 = j;
//                  i = 10;
//                  break;
//              }
//          }
//      for(int i = 0; i < 9; i++)
//      {
//          if(i == num1)
//              continue;
//          if(i == num2)
//              continue;
//          cout << arr[i] << '\n';
//      }
//      return 0;
// }
// #include <iostream>
//  using namespace std;
//  int main () {
//      int a, b;
//      cin >> a >> b;
//      cout << a + b << '\n' << a - b << '\n' << a * b << '\n' << a / b << '\n' << a % b;
//      return 0;
// }
// #include <iostream>
// using namespace std;
// int func2(int * arr, int size);
// int main () {
//     int temp[3] = {1, 52, 41};
//     cout << func2(temp, 3);
//     return 0;
// }
// int func2(int * arr, int size)
// {
//     int temp[50];
//     fill(temp, temp+50, 0);
//     for(int i = 0; i < size; i++)
//     {
//         if(arr[i] > 50)
//             temp[100 - arr[i]-1]++;
//         else
//             temp[arr[i] - 1]++;
//     }
//     for(auto a : temp)
//         if(a == 2)
//             return 1;
//     return 0;
// }
// #include <iostream>
// #include <algorithm>
// using namespace std;
// int main () {
//     int check[10];
//     fill(check, check+10, 0);
//     int num = 0;
//     string str = "";
//     cin >> num;
//     str = to_string(num);
//     for(auto a: str)
//     {
//         if((a - 48) == 6 || (a - 48) == 9)
//             check[6]++;
//         else
//             check[a - 48]++;
//     }
//     if(check[6] % 2 != 0)
//         check[6] = (check[6] + 1) / 2;
//     else
//         check[6] /= 2;
//     cout << *max_element(check, check+10) << ' ';
//     return 0;
// }
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
int main () {
    int num = 1000000, my, result = 0;
    cin >> num;
    int v[num];
    int check[1000000];
    for(int i = 0; i < num; i++)
        cin >> v[i];
    // cin >> my;
    // for(int i = 0; i < 1000000; i++)
    //     check[v[i]-1]++;
    // for(int i = 0; i <= my; i++)
    // {
    //     if((my - i - 1)== i)
    //         break;
    //     if((check[i] + check[my - i - 1]) == 2)
    //         result++;
    // }    
    // cout << result;
    return 0;
}