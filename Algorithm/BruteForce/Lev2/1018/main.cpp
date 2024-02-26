//
//  main.cpp
//  1018
//
//  Created by Madeline on 2/26/24.
//

#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    
    int N, M;
    cin >> N >> M;
    
    char board[50][50];
    int cnt = 0;
    int min = 2500;
    
    for(int i=0;i<N;i++) {
        for(int j=0;j<M;j++) {
            cin >> board[i][j];
        }
    }
    
    for(int n = 0; n <= N-8 ; n++) {
        for(int m = 0; m <= M-8; m++) {
            cnt = 0;
            if (board[n][m] == 'W') {
                for(int i=n;i<n+8;i++) {
                    for(int j=m;j<m+8;j++) {
                        
                        // cout << "1 - " << board[i][j] << "\n";
                        
                        if(((i+j) % 2 == 1) && board[i][j] != 'B') {
                            cnt ++;
                        } else if(((i+j) % 2 == 0) && board[i][j] != 'W') {
                            cnt++;
                        }
                    }
                }
                // cout << "1😇" << cnt << "\n";
                
            } else {
                for(int i=n;i<n+8;i++) {
                    for(int j=m;j<m+8;j++) {
                        // cout << "2 - " << board[i][j] << "\n";
                        
                        if(((i+j) % 2 == 1) && board[i][j] != 'B') {
                            cnt ++;
                        } else if(((i+j) % 2 == 0) && board[i][j] != 'W') {
                            cnt++;
                        }
                    }
                }
                // cout << "2😴" << cnt << "\n";
            }
            
            if (cnt > 32) {
                cnt = 64 - cnt;
            }
            
            if(cnt < min) {
                min = cnt;
            }
            
            if(cnt == 64) {
                min = 0;
            }
        }
    }
    
    cout << min;
    
    return 0;
}
