//
//  main.cpp
//  4153
//
//  Created by Madeline on 3/26/24.
//

#include <algorithm>
#include <iostream>

using namespace std;

int main() {
    
    int a,b,c;
    int num1, num2, num3;
    while(1) {
        
        cin >> a >> b >> c;
        if (a==0 && b==0 && c==0) {
            break;
        } else {
            if(a>b && b>c) { // a > b > c
                num1 = a;
                num2 = b;
                num3 = c;
            } else if(b > a && a > c) { // b > a > c
                num1 = b;
                num2 = a;
                num3 = c;
            } else if(b>c && c>a) { // b > c > a
                num1 = b;
                num2 = c;
                num3 = a;
            } else if(c > b && b > a) { // c > b > a
                num1 = c;
                num2 = b;
                num3 = a;
            } else if(c > a && a > b) { // c > a > b
                num1 = c;
                num2 = a;
                num3 = b;
            } else { // a > c > b
                num1 = a;
                num2 = c;
                num3 = b;
            }
            
            if(num3*num3 + num2*num2 == num1*num1) {
                cout << "right\n";
            } else {
                cout << "wrong\n";
            }
        }
    }
    
    
    return 0;
}
