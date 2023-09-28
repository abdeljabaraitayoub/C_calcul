# C Calculator 🧮

## Overview 📝

This C calculator is a command-line program that allows users to perform basic arithmetic operations on two integers: addition ➕, subtraction ➖, multiplication ✖️, and division ➗. It provides a simple and interactive way to perform calculations.

## Features ✨

- Addition: Add two numbers together.
- Subtraction: Subtract one number from another.
- Multiplication: Multiply two numbers.
- Division: Divide one number by another (with error handling to prevent division by zero).

## How to Use 🚀

1. **Compile the Program**

   To compile the program, use the following command:

   ```shell
   gcc calculator.c -o calculator
   ```

2. **Run the Program**

   Execute the program with:

   ```shell
   ./calculator
   ```

3. **Perform Calculations**

   Follow the on-screen instructions to perform calculations:
   - Choose an operation (1-4).
   - Enter the first operand.
   - Enter the second operand (for division, ensure it's not zero).
   - View the result.

4. **Repeat or Exit**

   After each calculation, you will be asked if you want to perform another operation. Enter 'y' or 'Y' to continue or 'n' or 'N' to exit the program.

## How It Works ⚙️

The program utilizes a `do-while` loop to repeatedly perform operations based on user input. Here's a brief overview of its functionality:

- Display the available operations and prompt the user to choose one.
- Validate the user's input (1-4) and provide an error message for invalid choices.
- Prompt the user to enter two operands.
- Perform the selected operation and display the result.
- For division, check that the second operand is not zero to prevent division by zero errors.
- Ask the user if they want to perform another operation.
- Continue or exit the loop based on the user's choice.

## Author 🧑‍💻

- [AbdeljabarAitayoub]

## Contributions 🤝

Contributions, bug reports, and feedback are welcome. Feel free to open issues or create pull requests to enhance this calculator.

## Acknowledgments 🙏

The program is a simple educational project inspired by the need for a basic calculator tool.

---

**Happy Calculating! 🎉**
