//
//  main.cpp
//  1978
//
//  Created by Madeline on 3/26/24.
//

#include <iostream>

using namespace std;

int main() {
    
    int N,M;
    int count = 0;
    int result = 0;
    cin >> N;
    
    for(int i=1;i<=N;i++) {
        cin >> M;
        count = 0;
        for(int j=1;j<=M;j++) {
            if(M%j == 0) {
                count += 1;
            }
            // cout << i << j << count << "\n";
        }
        if(count == 2) {
            result += 1;
        }
    }
    
    cout << result;
    
    return 0;
}
