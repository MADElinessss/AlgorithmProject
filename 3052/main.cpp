//
//  main.cpp
//  3052
//
//  Created by Madeline on 3/5/24.
//

#include <iostream>
#include <algorithm>
#include <cmath>
#include <set>

using namespace std;

int main() {
    
    int numbers[10];
    int tmp;
    set<int> count;
    
    for(int i=0;i<10;i++) {
        cin >> numbers[i];
        tmp = numbers[i] % 42;
        count.insert(tmp);
    }
    
    cout << count.size();
    
    
    
    return 0;
}
