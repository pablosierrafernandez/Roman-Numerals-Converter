# Roman-Numerals-Converter
↪This program allows the user to convert a given number between 1 and 3000 to its equivalent in Roman numerals.

## 🤔How to Use

1.  Run the program.
2.  Enter the number to be converted when prompted.
3.  The program will output the Roman numeral equivalent of the entered number.

## 😒Restrictions

The program only works for numbers between 1 and 3000. If a number outside this range is entered, an error message will be displayed.

## 😊Implementation Details

The program first takes input from the user, which is the number to be converted. It then uses the following algorithm to convert the number into its equivalent in Roman numerals:

1.  Divide the number by 1000 and store the quotient as `m`.
2.  Divide the remainder of step 1 by 100 and store the quotient as `c`.
3.  Divide the remainder of step 2 by 10 and store the quotient as `d`.
4.  Store the remainder of step 3 as `u`.
5.  Use a switch statement to convert `m` into its Roman numeral equivalent (M, MM, or MMM).
6.  Use a while loop to convert `c` into its Roman numeral equivalent by repeatedly using a switch statement to subtract from `c` until it reaches 0.
7.  Use a while loop to convert `d` into its Roman numeral equivalent by repeatedly using a switch statement to subtract from `d` until it reaches 0.
8.  Use a while loop to convert `u` into its Roman numeral equivalent by repeatedly using a switch statement to subtract from `u` until it reaches 0.

## Example

    Que numero desea convertir? 149
    CXLIX
