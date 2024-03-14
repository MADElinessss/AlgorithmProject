//
//  main.cpp
//  10250
//
//  Created by Madeline on 3/15/24.
//

#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    
    int test;
    cin >> test;
    
    int H,W,N;// 층, 방, 몇번째손님
    int Y, X;
    
    for(int i=0;i<test;i++) {
        cin >> H >> W >> N;
        
        Y = (N % H == 0) ? H : N % H;
        X = (N % H == 0) ? (N / H) : (N / H) + 1;
        cout << Y << (X < 10 ? "0" : "") << X << "\n";

    }
    
    // 1~72 /
    // 0~H만큼은 i 01 호 i = H*W /
    // H+1~2H: i 02호
    // 10N % 6H == Y 4
    // 10 / 6 = 1
    
    
    return 0;
}
