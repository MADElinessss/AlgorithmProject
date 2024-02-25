//
//  main.cpp
//  1436
//
//  Created by Madeline on 2/25/24.
//

#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main() {
    
    int N;
    cin >> N;
    
    int intNum = 666;
    int index = 1;
    string number;

    while(1) {
        if (N == 1) {
            break;
        }
        
        intNum += 1;
        number = to_string(intNum);
        if (number.find("666") != string::npos) {
            index += 1;
            if (index == N) {
                break;
            }
        }
        
    }
    
    cout << intNum << "\n";
    
    return 0;
}
