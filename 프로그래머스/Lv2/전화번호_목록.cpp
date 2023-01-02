#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;
bool isSame(string s, string l){
    string s1, l1;
    if(s.length() > l.length()){
        s1 = l;
        l1 = s;
    } else if(s.length() < l.length()){
        s1 = s;
        l1 = l;
    } else {
        return s == l;
    }
    for(int i=0;i<s1.length();i++)
        if(s1[i] != l1[i])
            return false;
    return true;
}
bool cmp(string s1, string s2){
    return s1.length() < s2.length();
}
bool solution(vector<string> phone_book) {
    sort(phone_book.begin(), phone_book.end());
    for(int i=0;i<phone_book.size();i++)
        for(int j=i+1;j<phone_book.size();j++){
            if(isSame(phone_book[i], phone_book[j]))
                return false;
            else
                break;
        }
    return true;
}
