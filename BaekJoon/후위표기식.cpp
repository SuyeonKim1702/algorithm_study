//
//  base.cpp
//  algorithm512
//
//  Created by 코드잉 on 2021/01/03.
//


#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <map>
#include <set>
#include <stack>
#include <cstring>
#include <queue>



using namespace std;

int arr[1000];
int main() {
  cin.tie(0);
  cout.tie(0);
  ios::sync_with_stdio(false);
  string a;
  int n,i=0;
  stack<char> s;
  cin >> a;
  n = a.length();
  while(n>0){
    char c = a[i];
    switch (c) {
          case '(':
            s.push(c);
            break;
          case ')':
          while(s.top() != '('){
              cout << s.top();
              s.pop();
            }
            s.pop();
            break;
          case '*':
          case '/':
            while(!s.empty() && (s.top() == '*' || s.top() == '/')){ cout << s.top(); s.pop(); }
            s.push(c);
            break;
          case '+':
          case '-':
            while(!s.empty() && (s.top() == '*' || s.top() == '/' || s.top() == '+' || s.top() == '-')){ cout << s.top(); s.pop(); }
            s.push(c);
            break;
          default:
            cout << c;
            break;
        }
    i++;
    n--;
  }
  while(!s.empty()){
    cout << s.top();
    s.pop();
  }
  return 0;
}
