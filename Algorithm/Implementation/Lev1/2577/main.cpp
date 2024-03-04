//
//  main.cpp
//  2577
//
//  Created by Madeline on 2/13/24.
//

#include <iostream>
#include <algorithm>
#include <string>
#include <cmath>

using namespace std;

int main() {
    
    int a,b,c;
    cin >> a >> b >> c;
    
    
    int number, tmp;
    int count = 0;
    
    number = a*b*c;
    tmp = number;
    // cout << number << "\n";
    
    string total = to_string(number);
    char index;
    
    for(int i=0;i<10;i++) {
        index = i + '0';
        int result = std::count(total.begin(), total.end(), index);
        
        cout << result << "\n";
    }
    
    return 0;
}
// 17037300
