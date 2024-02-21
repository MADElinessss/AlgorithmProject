//
//  main.cpp
//  2439
//
//  Created by Madeline on 2/13/24.
//

#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    
    int star;
    
    cin >> star;
    
    for(int i=0;i<star;i++) {
        for(int j=i+1;j<star;j++) {
            cout << " ";
        }
        for(int j=-1;j<i;j++) {
            cout << "*";
        }
        
        cout << "\n";
    }
    
    return 0;
}


