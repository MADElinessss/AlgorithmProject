//
//  1152.cpp
//  Algorithm
//
//  Created by Madeline on 2/8/24.
//

#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    
    int words = 0;
    string str;
    
    // getline: 공백 포함한 문자열 입력받는 함수
    getline(cin, str);
    
    for(int i=0; i<=str.length(); i++) {
        if(str[i] == ' ') {
            words += 1;
        }
    }
    
    if(str[0] != ' ' && str[str.length()-1] != ' ') {
        words += 1;
    } else if (str[0] == ' ' && str[str.length()-1] == ' ') {
        words -= 1;
    }
    
    cout << words;
    
    return 0;
}
