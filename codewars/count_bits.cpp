/**
 * @file count_bits.cpp

 * @brief Solution for the kata "Bit Counting"
 * @link https://www.codewars.com/kata/526571aae218b8ee490006f4
 *
 * @date 28.11.2024
 * @author Cristian Chitiva <cychitivav@unal.edu.co>
 */

#include <iostream>

unsigned int countBits(unsigned long long n){
    unsigned short counter = 0;
  
    while (n) {
        counter += n & 1;
        n = n >> 1;
    }
    return counter;
}

int main() {
    std::cout << countBits(1234) << std::endl;
    return 0;
}