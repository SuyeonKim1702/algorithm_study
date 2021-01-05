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

int arr[10001];

int main(int argc, const char * argv[]) {
    
   
    cin.tie(0);
    cout.tie(0);
    ios::sync_with_stdio(false);
    
    
    
   
    int i = 1, sum = 0, tmp;
    
    while(true){
        
        tmp = i;
        sum += tmp;
        
        while(tmp!= 0){
            sum += tmp % 10;
            tmp = tmp / 10;
        }
        if(sum <= 10000) arr[sum] = 1;
        if(i > 10000) break ;
        
        sum = 0;
        i++;
    }
    
    
    
    for(int i=1; i<=10000; i++)
    if(arr[i] != 1) cout << i << '\n';
    
    
    

    
    return 0;
}


