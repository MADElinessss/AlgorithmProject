//
//  main.cpp
//  1157
//
//  Created by Madeline on 2/8/24.
//

#include <iostream>
#include <string>

using namespace std;

int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    string str;
    int alphabet[26] = {0};
    int max = 0;
    int length;
    char mostCharacter = '?';
    
//    getline(cin, str);
    cin >> str;
    
    length = (int)str.size();
    
    // 대문자로 다 바꿔
    for(int i=0;i<length;i++) {
        if('a' <= str[i] && str[i] <= 'z') {
            str[i] -= 32;
        }
    }
    
    for(int i=0;i<length;i++) {
        alphabet[str[i]-65] += 1;
    }
    
    for(int i=0;i<26;i++) {
        if(max < alphabet[i]) {
            max = alphabet[i];
            mostCharacter = 'A' + i;
        } else if (max == alphabet[i]) {
            mostCharacter = '?';
        }
    }
    
    cout << mostCharacter;
    
    return 0;
}
