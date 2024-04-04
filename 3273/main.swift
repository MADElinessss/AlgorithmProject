//
//  main.swift
//  3273
//
//  Created by Madeline on 4/4/24.
//

import Foundation

solve2()

//func solve1() {
//    var count = 0
//    let capacity = readLine()!
//    let array = readLine()!.split(separator: " ").map { Int(String($0))! }
//    let x = Int(readLine()!)!
//    
//    for i in 0...array.count-1 {
//        for j in i...array.count-1 {
//            if array[i] + array[j] == x {
//                count += 1
//            }
//        }
//    }
//    print(count)
//}
// 시간초과: 범위가 1000000까지 && 1초 여서?

// 🦅
func solve2() {
    /*
     9
     5 12 7 10 9 1 2 3 11
     13
     */
    let n = Int(readLine()!)!
    let arr = readLine()!.split(separator: " ").map { Int($0)! }
    let x = Int(readLine()!)!
    
    var flag: [Bool] = .init(repeating: false, count: 2000002) // 배열에 있는 숫자에만 true 해줄거임
    for i in arr {
        flag[i] = true
    }
    var answer = 0
    for i in arr {
//        if i < x && flag[x - i] {// 아 flag[a] + flag[b] == 13 여야 되는데, flag[13 - a]가 true이면 그 배열에 있다는 거니깐
//            answer += 1
//        }
        if i < x {
            if flag[x-i] {
                answer += 1
            }
        }
    }
    answer /= 2
    print(answer)
}


final class Node<T: Equatable> {
    var value: T
    var next: Node?
    
    init(value: T, next: Node? = nil) {
        self.value = value
        self.next = next
    }
}

