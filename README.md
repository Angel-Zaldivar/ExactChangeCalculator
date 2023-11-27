**Author: Angel Zaldivar**

**Goal: Giving the Best Possible Change Amount**

This C++ program, authored by Angel Zaldivar, is designed to calculate and display the best possible change amount using various coin denominations for a given input amount (less than one euro). The goal is to provide an optimal distribution of coins for the given change amount.

**Code Explanation:**

The program begins by declaring two integer variables, `change_amount` and `total_change`. The user is prompted to input a change amount (less than one euro), and the input is stored in the variable `change_amount`. The `total_change` variable is initialized to 0.

The main processing and output are performed within a series of conditional statements. If the input `change_amount` is greater than or equal to 100, the program outputs an error message, as the input must be less than one euro or 100 cents. Otherwise, the program proceeds to calculate the optimal distribution of coins.

The program uses a series of conditional statements to determine the number of coins for each denomination (50, 20, 10, 5, 2, 1 cents). It calculates the number of each coin denomination that can be used to make up the change amount. The `round` function is used to round the calculated number of coins to the nearest integer.

For each coin denomination, the program outputs the number of coins used or indicates that no coins of that denomination are used. The total number of coins used is accumulated in the variable `total_change`.

Finally, the program outputs the total change, which consists of the sum of all the individual coin denominations used.

In summary, the program is designed to provide the best possible change amount for a given input, utilizing various coin denominations. It outputs the distribution of coins and the total number of coins used to make up the change amount. The goal is to optimize the use of coins for the given change amount.
