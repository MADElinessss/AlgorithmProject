//
//  main.cpp
//  2920
//
//  Created by Madeline on 3/5/24.
//

#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    
    int note[8];
    int ascendingFlag = 0, descendingFlag = 1;
    
    for(int i=0;i<8;i++) {
        cin >> note[i];
    }
    
    int j=0;
    for(int i=0;i<7;i++) {
        j = i+1;
        if (note[i]>note[j]) {
            descendingFlag += 1;
        } else {
            ascendingFlag += 1;
        }
    }
    
    if (descendingFlag == 8) {
        cout << "descending";
    } else if (ascendingFlag == 7) {
        cout << "ascending";
    } else {
        
        cout << "mixed";
    }
    
    
    
    return 0;
}
