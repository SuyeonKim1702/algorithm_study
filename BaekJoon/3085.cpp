//
//  base.cpp
//  algorithm512
//
//  Created by 코드잉 on 2021/01/03.
//


#include <iostream>
#include <algorithm>
#include <vector>
#include <iostream>
#include <cstring>

using namespace std;

int n, cnt =1, max_ =1;
char arr[51][51];

void horizontal(){
    for(int i=0;i<=n-1;i++){
    for(int j =0;j<n-1;j++){
        if(arr[i][j] == arr[i][j+1]){
            cnt ++;
            if(cnt > max_) max_ = cnt;
            
        }
        else cnt = 1;
    }
        cnt = 1;
    
    }
    
}

void vertical(){
    for(int j = 0; j<=n-1; j++){
        
    
    for(int i = 0; i<n-1; i++){
        if(arr[i][j] == arr[i+1][j]){
            cnt ++;
            if(cnt > max_) max_ = cnt;
        }
        else cnt = 1;
    }
    cnt = 1;
    }
}


int main(int argc, const char * argv[]) {
    
    cin.tie(0);
    cout.tie(0);
    ios::sync_with_stdio(false);
    
   
    
    cin >> n;
    
    for(int i=0; i<n; i++)
    for(int j =0; j<n; j++)
    cin >> arr[i][j];
    
 
    
    for(int i = 0; i<n; i++)
    for(int j = 0; j<n-1; j++){
        
        swap(arr[i][j], arr[i][j+1]);
        
        horizontal();
        cnt = 1;
        vertical();
        cnt = 1;
        
        swap(arr[i][j+1], arr[i][j]);
        
        
    }
    
    
    for(int j = 0; j<n; j++)
    for(int i = 0; i<n-1; i++){
        
        swap(arr[i][j], arr[i+1][j]);
        
        horizontal();
        cnt = 1;
        vertical();
        cnt = 1;
        
        swap(arr[i+1][j], arr[i][j]);
        
    }
    
    cout << max_ << '\n';
    
    return 0;
}


