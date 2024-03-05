//
//  main.cpp
//  10871
//
//  Created by Madeline on 3/5/24.
//

#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    
    /*
     10 5
     1 10 4 9 2 3 8 5 7 6
     */
    
    int total, num;
    cin >> total >> num;
    int array[10000];
    for(int i=0;i<total;i++) {
        cin >> array[i];
        if(array[i] < num) {
            cout << array[i] << " ";
        }
    }
    
    return 0;
}
