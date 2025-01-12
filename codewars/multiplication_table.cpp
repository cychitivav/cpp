/**
 * @file multiplication_table.cpp

 * @brief Solution for the kata "Multiplication table"
 * @link https://www.codewars.com/kata/534d2f5b5371ecf8d2000a08
 *
 * @date 12.01.2025
 * @author Cristian Chitiva <cychitivav@unal.edu.co>
 */

#include <iostream>
#include <vector>

std::vector<std::vector<int>> multiplication_table(const int n)
{
  std::vector<std::vector<int>> table;
  for (int i = 1; i <= n; i++)
  {
    std::vector<int> row;
    for (int j = 1; j <= n; j++)
    {
      row.push_back(i * j);
    }
    table.push_back(row);
  }

  return table;
}

int main()
{
  int input = 3;
  std::vector<std::vector<int>> result = multiplication_table(input);

  std::cout << "Result: " << std::endl;
  for (int i = 0; i < result.size(); i++)
  {
    for (int j = 0; j < result[i].size(); j++)
    {
      std::cout << result[i][j] << " ";
    }
    std::cout << std::endl;
  }

  std::cin.get();
  return 0;
}