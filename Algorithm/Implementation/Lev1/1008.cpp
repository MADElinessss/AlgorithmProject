//
//  main.cpp
//  Algorithm
//
//  Created by Madeline on 2/8/24.
//

#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    
    int a,b;
    double result;
    
    cin >> a >> b;
    result = (double)a/(double)b;
    // 실제 정답과 출력값의 절대오차 또는 상대오차가 10^-9 이하이면 정답이다.
    cout.precision(9);
    cout << fixed;
    
    cout << result;
    
    return 0;
}
