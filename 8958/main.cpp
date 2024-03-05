//
//  main.cpp
//  8958
//
//  Created by Madeline on 3/5/24.
//

#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main() {
    
    int N;
    cin >> N;
    int score = 0;
    int total = 0;
    int successive = 0;
    
    string quiz;
    
    for(int i=0;i<N;i++) {
        cin >> quiz;
        total = 0;
        score = 0;
        for(int j=0;j<quiz.size();j++) {
            if(quiz[j] == 'O') {
                score += 1;
                total += score;
            } else {
                score = 0;
            }
        }
        
        cout << total << "\n";
    }
    
    
    
//    for(int i=0;i<N;i++) {
//        cin >> quiz;
//        score = 0;
//        total = 0;
//        successive = 1;
//        for(int j=0;j<quiz.size();j++) {
//            
//            if(quiz[j] == 'O') {
//                score = 1;
//                if(j > 0 && quiz[j-1] == 'O') {
//                    successive += 1;
//                }
//                if(successive > 1) {
//                    total += successive;
//                } else {
//                    total += score;
//                }
//            } else {
//                successive = 1;
//            }
//        }
//        cout << total << "\n";
//    }

    
    
    
    
    return 0;
}
/*
 5
 OOXXOXXOOO
 OOXXOOXXOO
 OXOXOXOXOXOXOX
 OOOOOOOOOO
 OOOOXOOOOXOOOOX
 */
