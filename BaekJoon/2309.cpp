//
//  main.cpp
//  algorithm512
//
//  Created by 코드잉 on 2021/01/02.
//

#include <iostream>
#include <algorithm>
using namespace std;

int main(int argc, const char * argv[]) {
    
    cin.tie(0);
    cout.tie(0);
    ios::sync_with_stdio(false);
    
    int sum =0, diff = 0;
    int a_i, a_j;
    
    int arr[9];
    for(int i=0; i<9; i++){
        cin >> arr[i];
        sum+=arr[i];
    }
    
  

    diff = sum - 100;
   
    sort(arr, arr+9);
    
    
    for(int i = 0; i < 9; i++)
    for(int j =i+1; j < 9; j++){
        if(arr[i]+arr[j] > diff) break;
        else if(arr[i]+arr[j] == diff){ a_i = i; a_j = j; goto EXIT;}
            
    }
    
EXIT:
    
    for(int i =0; i<9; i++){
        if(i != a_i && i !=a_j) cout << arr[i] << endl;
    }
    
    
    
    return 0;
}



