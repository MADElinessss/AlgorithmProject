//
//  main.cpp
//  2562
//
//  Created by Madeline on 2/13/24.
//

#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    
    int numbers[9];
    int num, max = 0, index = 0;
    
    for(int i=0;i<9;i++) {
        cin >> num;
        numbers[i] = num;
    }
    
    for(int i=0;i<9;i++) {
        if(numbers[i] > max) {
            max = numbers[i];
            index = i;
        }
    }
    
    cout << max << "\n" << index+1;
    
    
    return 0;
}
