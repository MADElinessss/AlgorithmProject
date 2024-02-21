//
//  main.cpp
//  2577
//
//  Created by Madeline on 2/13/24.
//

#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
    
    int a,b,c;
    cin >> a >> b >> c;
    
    
    int number, tmp;
    int count = 0;
    
    number = a*b*c;
    tmp = number;
    cout << number << "\n";
    while(number > 0){
        number /= 10;
        
        count++;
    }
    
    cout << count << "\n";
    
    for(int i=0;i<count;i++){
        double divider = pow(10, i);
        cout << "divider = " << divider << "\n";
        int result = tmp / (int)divider;
        result %= (int)divider;
        cout << result << "\n";
    }
    
    
    return 0;
}
