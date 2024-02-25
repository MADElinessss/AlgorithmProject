//
//  main.cpp
//  10818
//
//  Created by Madeline on 2/25/24.
//

#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int N;
    cin >> N;
    
    int num;
    int max = -1000000;
    int min = 1000000;
    for(int i=0;i<N;i++) {
        cin >> num;
        if (num > max) {
            max = num;
        }
        if (num < min) {
            min = num;
        }
    }
    
    cout << min << " " << max << "\n";
    
    return 0;
}
