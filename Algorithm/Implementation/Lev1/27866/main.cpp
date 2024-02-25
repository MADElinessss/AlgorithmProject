//
//  main.cpp
//  27866
//
//  Created by Madeline on 2/25/24.
//

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    
    string words;
    int num;
    cin >> words;
    cin >> num;
    
    cout << words[num - 1] << "\n";

    return 0;
}
