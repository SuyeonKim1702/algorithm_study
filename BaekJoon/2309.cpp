//
//  base.cpp
//  algorithm512
//
//  Created by 코드잉 on 2021/01/03.
//


#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;


int main(){

    // 1부터 4까지 저장할 벡터 선언
    // 배열도 가능!
    vector <int> ini(9);
    vector <int> v;
    int k, two = 0;
    int sum =0, diff =0;
    for(int i =0; i<7; i++)
    ini[i] = 1;
    
    for(int i=0; i<9; i++){
        cin >> k;
        v.push_back(k);
        sum += v[i];
    }
    sort(v.begin(), v.end());
    
    diff = sum - 100;
    
    
    // prev_permutation을 통해서 다음 순열 구하기
    do{

        for(int i=0; i<9; i++){
            if(ini[i] == 0) two += v[i];
        }
        if(two == diff) break;
        
        two = 0;

        
        
       

    }while(prev_permutation(ini.begin(),ini.end()));
    
    
    for(int i=0; i<9; i++){
        if(ini[i] == 1) cout << v[i] <<endl;
    }

    return 0;

}
