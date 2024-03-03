//
//  main.cpp
//  2475
//
//  Created by Madeline on 3/3/24.
//

#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    
    int a,b,c,d,e;
    cin >> a >> b >> c >> d >> e;
    
    cout << (a*a+b*b+c*c+d*d+e*e) % 10;
    
    return 0;
}
