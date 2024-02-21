//
//  main.cpp
//  11720
//
//  Created by Madeline on 2/21/24.
//

#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    
    int N;
    cin >> N;
    
    string number;
    cin >> number;
    
    int result = 0;
    for (char digit : number) {
        result += digit - '0';
    }
    
    cout << result;
    
    return 0;
}
