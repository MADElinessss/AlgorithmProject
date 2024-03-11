//
//  main.cpp
//  10809
//
//  Created by Madeline on 3/12/24.
//

#include <cstring>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    
    char word[101];
    cin.getline(word, 101);
    
    int length = strlen(word);
    
    int flag;
    for(int i=0;i<26;i++) {
        flag = -1;
        char alphabet = 'a' + i;
        for(int j=0;j<length;j++) {
            if(word[j] == alphabet) {
                flag = j;
                break;
            }
        }
        cout << flag << " ";
    }
    
    return 0;
}
