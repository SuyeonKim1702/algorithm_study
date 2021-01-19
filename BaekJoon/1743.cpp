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

int n,m,num, cnt = 0, largest = 0;
int arr[101][101] ={0};
bool visited[101][101] = {false};
int m_x[4] = {0, 0, 1, -1};
int m_y[4] = {1, -1, 0, 0};
int cur_x, cur_y, new_x, new_y;

using namespace std;


int go(int w, int h, int count){
    count ++;
    visited[w][h] = true;
    for(int i=0; i<4; i++){
            new_x = w + m_x[i];
            new_y = h + m_y[i];
        
        if(new_x <=0 || new_x > n || new_y <=0 || new_y > m || visited[new_x][new_y]) continue;
        if(arr[new_x][new_y] == 1){
            visited[new_x][new_y] = true;
           int a = go(new_x, new_y, count);
            
            if(a > largest) largest = a;
           
            count = a;
        }
    }
    return count;
}



int main() {
  cin.tie(0);
  cout.tie(0);
  ios::sync_with_stdio(false);
    
   
    cin >> n >> m >> num;
    
    for(int i= 0; i< num; i++){
        int a,b;
        cin >> a >> b;
        arr[a][b] = 1;
    }
    
    
    for(int i=1; i<=100; i++)
    for(int j=1; j<=100; j++){
        if(arr[i][j] == 1 && !visited[i][j]){
            int a = go(i,j,cnt);
            if(a > largest) largest = a;
            cnt = 0;
        }
    }
    
   
    cout << largest << '\n';
    
    
  return 0;
}
