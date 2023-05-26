# Programming-Algorithm
I learned programming algorithms with C++ language

## 001_HelloWord.cpp
This file contains C++ code to display Hello World

## 002_MyName.cpp
This file contains C++ code to display My Name

## 003_Manipulator.cpp
This file uses Manipulators that are used to control the display of data outputted by the program to the output device. Here, the manipulators used include endl, which is used to insert a newline, dec, which is used to convert the value of a variable to decimal, hex, which is used to convert the value of a variable to hexadecimal, oct, which is used to convert the value of a variable to octal, and setprecision, which is used to set the precision of floating-point numbers.

## 004_Input.cpp
This file uses cin for input from user and stored in a variable

## 005_FunctionGetchAndGetche().cpp
In C++, getch and getche are functions used to read character input from the user in console programs.
getch(): The getch() function is used to read character input from the user without displaying the character on the screen. The input character does not need to be terminated with the Enter key. This function is useful for receiving input without displaying the characters.
getche(): The getche() function is similar to getch(), but the character read is displayed on the screen. The input character also does not need to be terminated with the Enter key. This function is useful for receiving input while displaying the characters being inputted.

## 006_InputAndOutput.cpp
The given program is a simple C++ program that prompts the user to input an integer, a character, and a string. It then displays the inputted values on the screen.
First, the program declares variables angka (integer), karakter (character), and kata (string) to store the input values. The program then uses cout to display the message "Inputkan angka: " and cin to read the integer input into the variable angka. Similarly, it prompts for a character and a string input and stores them in the respective variables.
After the inputs are obtained, the program displays the input results using cout with appropriate labels. The values of angka, karakter, and kata are printed on separate lines. Finally, the program ends by returning 0.****

## 007_ConvertToHex.cpp
The given program allows the user to input values, and the integer input will be displayed in hexadecimal format.

## 008_InputAndManipulator.cpp
The provided program is a simple C++ program that prompts the user to input a number and then displays the inputted value with 2 decimal places.
The program begins by declaring a variable bilangan of type double to store the inputted value. It then uses cout to display the message "Silahkan Input bilangan: " to prompt the user for input. The user's input is read using cin and stored in the variable bilangan.
Next, the program utilizes the setiosflags function from the iomanip library to set the output format to fixed-point notation. This ensures that the number is displayed with a fixed number of decimal places.
Finally, the program uses cout to display the message "Nilai yang di inputkan: " followed by the inputted value stored in the bilangan variable. The setprecision function is used to specify that the number should be displayed with 2 decimal places. The output is then followed by an endline character. The program concludes by returning 0.
