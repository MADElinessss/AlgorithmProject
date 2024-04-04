//
//  main.swift
//  1259
//
//  Created by Madeline on 4/4/24.
//

import Foundation

solve()

// 0, 1, 2 <- 0&2, 1&1 i:0~count-1, j:count-1-i
// 0, 1, 2, 3 <- 0&3, 1&2

func solve() {
    while(true) {
        var count = 0
        let number = readLine()!.map { Int(String($0))! }
        if number[0] == 0 {
            break
        }
        for i in 0...number.count-1 {
            let index = number.count - 1 - i
            if index != i && number[i] == number[index] {
                count += 1
            }
        }
        count /= 2
        if count == number.count/2 {
            print("yes")
        } else {
            print("no")
        }
    }
}
