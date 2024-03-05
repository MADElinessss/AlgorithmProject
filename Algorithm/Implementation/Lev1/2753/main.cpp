//
//  main.cpp
//  2753
//
//  Created by Madeline on 3/3/24.
//

#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    
    int year;
    cin >> year;
    
    if (year % 4 == 0 && year % 100 != 0) {
        cout << 1;
        return 0;
    }
    
    if (year % 400 == 0) {
        cout << 1;
        return 0;
    }
    
    cout << 0;
    return 0;
}

