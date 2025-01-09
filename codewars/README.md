# Codewars C++ Challenges

This folder contains solutions to various Codewars challenges (katas) in the C++ programming language. Each file in this folder represents a solution to a specific kata.

## 📂 Structure and Template

Each source code file in this folder follows a standard structure that includes information about the kata, such as the kata ID or link, the date of resolution, and the author of the solution (usually me). Below is a reusable template that should be followed for each solution file in C++:

```cpp
/**
 * @file [filename].cpp
 * @brief Solution for the kata [Name of the Kata]
 *
 * Kata: [Name of the Kata]
 * Link/ID: [Link or ID of the Kata]
 * Date: [Date of resolution (DD.MM.YYYY)]
 * Author: Cristian Chitiva - cychitivav@unal.edu.co
 */

#include <iostream>

// Main function of the solution
std::string solveKata(const std::string &input) {
    // Solution implementation
    return input; // Example return
}

int main() {
    std::string input = "example input";
    std::string result = solveKata(input);
    std::cout << "Result: " << result << std::endl;
    return 0;
}
```

> [!NOTE] 
> Replace the `[filename]`, `[Name of the Kata]`, `[Link or ID of the Kata]`, `[Date of resolution]`, and `[example input]` placeholders with the corresponding information.

> [!IMPORTANT]
> Files created in this folder should have the `.cpp` extension and be named with lowercase letters and underscores (snake_case).

## :hammer_and_wrench: Usage
To run any of the solution files, follow these steps:

1. Open a terminal or command prompt.
2. Navigate to the directory containing the solution file.
3. Compile the C++ file using a C++ compiler, for example:
    ```bash
    g++ [filename].cpp -o [filename]
    ```
4. Run the compiled executable:
    ```bash
    ./[filename]
    ```

> [!NOTE]
> If you are using Windows, you must have a C++ compiler installed (e.g., MinGW) and create a `.exe` file instead of a binary file.

## 📚 List of Solutions

- [Bit Counting](count_bits.cpp) - [Link](https://www.codewars.com/kata/526571aae218b8ee490006f4)
