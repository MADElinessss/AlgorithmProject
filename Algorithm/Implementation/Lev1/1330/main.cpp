//
//  main.cpp
//  1330
//
//  Created by Madeline on 2/27/24.
//

#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    
    int A, B;
    
    cin >> A >> B;
    
    if (A>B) {
        cout << ">";
    } else if (A<B) {
        cout << "<";
    } else {
        cout << "==";
    }
    
    return 0;
}
