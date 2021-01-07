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
#include <map>
#include <string.h>

using namespace std;
int n, a, b, m = 0, mini = 10001, sum =0;

bool p = false;


bool check(int num){
    p = false;
  
    if(num == 1) p = true;
    
    int i = 2;
    m = num/2;
    
    while(true){
        if(i > m) break;
        if(num%i == 0){
        p = true;
        break;
        }
        i++;
        m = num/i;
        
       
    }
    
    
    if(p == false){ return true; } //소수임
    else return false;
}





int main(int argc, const char * argv[]) {
    
    cin.tie(0);
    cout.tie(0);
    ios::sync_with_stdio(false);
    
    cin >> n >> b;
    
    for(int i =n; i<=b; i++){
        if(check(i)){
            cout << i << '\n';
        }
        
        
    }
    
   
    

    return 0;
}


