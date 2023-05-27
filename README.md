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
After the inputs are obtained, the program displays the input results using cout with appropriate labels. The values of angka, karakter, and kata are printed on separate lines. Finally, the program ends by returning 0.

## 007_ConvertToHex.cpp
The given program allows the user to input values, and the integer input will be displayed in hexadecimal format.

## 008_InputAndManipulator.cpp
The provided program is a simple C++ program that prompts the user to input a number and then displays the inputted value with 2 decimal places.
The program begins by declaring a variable bilangan of type double to store the inputted value. It then uses cout to display the message "Silahkan Input bilangan: " to prompt the user for input. The user's input is read using cin and stored in the variable bilangan.
Next, the program utilizes the setiosflags function from the iomanip library to set the output format to fixed-point notation. This ensures that the number is displayed with a fixed number of decimal places.
Finally, the program uses cout to display the message "Nilai yang di inputkan: " followed by the inputted value stored in the bilangan variable. The setprecision function is used to specify that the number should be displayed with 2 decimal places. The output is then followed by an endline character. The program concludes by returning 0.

## 009_IfOneCondition.cpp
The provided program is a basic C++ program that prompts the user to enter an integer and then determines if the entered value is a positive number.
In the program, a variable nilai of type integer is declared to store the input value. The program then uses cout to display the message "Masukkan sebuah bilangan bulat: " to instruct the user to input an integer. The inputted value is read using cin and stored in the variable nilai.
Next, an if statement is used to check if the value stored in nilai is greater than 0. If it is, the program uses cout to display the message "Nilai yang anda masukkan adalah bilangan positif".

## 010_IfTwoCondition.cpp
The given program is a simple C++ program that prompts the user to enter an integer and then determines if the entered number is even or odd.
In the program, a variable bilangan of type integer is declared to store the input value. The program then uses cout to display the message "Masukkan bilangan bulat yang akan diperiksa: " to instruct the user to input an integer. The inputted value is read using cin and stored in the variable bilangan.
Next, an if statement is used to check if the value stored in bilangan is divisible by 2. This is done by checking the remainder of the division using the modulus operator %. If the remainder is 0, it means the number is even, and the program uses cout to display the message bilangan followed by " adalah bilangan genap". If the remainder is not 0, it means the number is odd, and the program uses cout to display the message bilangan followed by " adalah bilangan ganjil".

## 011_IfThreeCondition.cpp
The given program is a simple C++ program that prompts the user to enter an integer and then identifies whether the entered number is positive, negative, or zero.
In the program, a variable bil of type integer is declared to store the input value. The program uses cout to display the message "Masukkan sebuah bilangan bulat yang akan diperiksa: " to instruct the user to input an integer. The inputted value is read using cin and stored in the variable bil.
Next, the program uses an if-else statement to identify the nature of the input number. If the value stored in bil is greater than 0, it means the number is positive, and the program uses cout to display the message bil followed by " adalah bilangan POSITIF,". If the value stored in bil is less than 0, it means the number is negative, and the program uses cout to display the message bil followed by " adalah bilangan NEGATIF,". If the value stored in bil is equal to 0, it means the number is zero, and the program uses cout to display the message "Anda memasukkan bilangan Nol,".

## 012_Switch.cpp
The given program is a simple C++ program that prompts the user to enter a number representing a day of the week (1..7) and then displays the corresponding day's name.
In the program, a variable nohari of type integer is declared to store the input value. The program uses cout to display the message "Masukkan nomor hari (1..7): " to instruct the user to input a number representing a day of the week. The inputted value is read using cin and stored in the variable nohari.
Next, the program uses a switch statement to identify the value of 'nohari' and execute the corresponding case. Each case represents a specifiec day of the week and uses 'cout' to display the corresponding day's name. If 'nohari' is not 1..7, the program enters the default case and display the message "Tidak terdapat nama hari ke-'nohari'".

## 013_IfTwoConditionTemperature.cpp
The given program is a simple C++ program that prompts the user to enter a temperature value and then determines the state of water at that temperature (whether it is in solid, liquid, or gas form).
In the program, a variable suhu of type integer is declared to store the temperature value. The program uses cout to display the message "Masukkan besarnya suhu: " to instruct the user to input a temperature value. The inputted value is read using cin and stored in the variable suhu.
Next, the program uses an if-else statement to check the value of suhu and determine the state of water at that temperature. If suhu is less than or equal to 0, the program displays the message "Pada suhu 'suhu' derajat Celcius, air akan berwujud es,". If suhu is greater than 0 and less than 100, the program displays the message "Pada suhu 'suhu' derajat Celcius, air akan berwujud air,". If suhu is greater than or equal to 100, the program displays the message "Pada suhu 'suhu' derajat Celcius, air akan berwujud gas,".
