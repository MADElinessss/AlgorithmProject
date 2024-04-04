//
//  main.cpp
//  2231
//
//  Created by Madeline on 3/26/24.
//

#include <iostream>

using namespace std;

int numberCount(int N) {
    int tmp = 10;
    int count = 0;
    
    while(N>0) {
        count += N % tmp;
        // cout << "N= " << N << "\n";
        // cout << N%tmp << "\n";
        
        tmp *= 10;
        // cout << "나누는거 " << tmp << "\n";
        
        N /= 10;
        // cout << "i = " << N << "\n";
    }
    
    return count;
}


int main() {
    
    int N;
    int M = 1;// 가장 작은 생성자
    int count = 0;
    
    cin >> N;
    
    for(int i=1;i<N;i++) {
        
        count = numberCount(i);
        cout << count << "\n";
        if(count + i == N) {
            cout << i;
            return 0;
        }
    }
    
    cout << "0";
    
    
    return 0;
}
// 1+9+3 = 13 + 193 = 206
