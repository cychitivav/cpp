/**
 * @file multiples_of_3_or_5.cpp

 * @brief Solution for the kata "Multiples of 3 or 5"
 * @link https://www.codewars.com/kata/514b92a657cdc65150000006
 *
 * @date 12.01.2025
 * @author Cristian Chitiva <cychitivav@unal.edu.co>
 */

#include <iostream>

int solution(const int number)
{
  if (number < 0)
    return 0;

  int sum = 0;
  for (int n = 0; n < number; n++)
    if (n % 3 == 0 || n % 5 == 0)
      sum += n;

  return sum;
}

int main()
{
  int input = 10;
  int result = solution(input);

  std::cout << "Result: " << result << std::endl;

  std::cin.get();
  return 0;
}