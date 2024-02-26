//
//  main.cpp
//  2739
//
//  Created by Madeline on 2/26/24.
//

#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    
    int N;
    cin >> N;
    
    for(int i=1;i<=9;i++) {
        cout << N << " * " << i << " = " << N*i << "\n";
    }
    
    return 0;
}
