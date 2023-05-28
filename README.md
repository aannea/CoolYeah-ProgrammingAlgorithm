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

## 014_LoopFor.cpp
The given program is a simple C++ program that uses a for loop to display the message "Saya sangat menyukai C++" five times.
In the program, a variable c of type integer is declared to act as the loop counter. The for loop is initialized with c set to 0. The loop condition is set to c<5, meaning the loop will continue as long as c is less than 5. After each iteration, c is incremented by 1.
Inside the loop, the message "Saya sangat menyukai C++" is displayed using cout. The endl is used to insert a newline character after each message, ensuring each message appears on a new line.
As a result, the message "Saya sangat menyukai C++" will be displayed five times, each on a separate line.

## 015_LoopWhile.cpp
The given program is a simple C++ program that uses a while loop to display the message "Saya sangat menyukai C++" five times.
In the program, a variable c of type integer is declared to act as the loop counter. Initially, c is set to 0.
The while loop continues as long as the condition c<5 is true. Inside the loop, the message "Saya sangat menyukai C++" is displayed using cout, and endl is used to insert a newline character after each message.
After displaying the message, the value of c is incremented by 1 using the c++ increment operator, ensuring that the loop progresses towards the termination condition.
As a result, the message "Saya sangat menyukai C++" will be displayed five times, each on a separate line.

## 016_LoopDoWhile.cpp
The given program is a simple C++ program that uses a do-while loop to display the message "saya sangat menyukai C++" five times.
In the program, a variable c of type integer is declared and initialized to 0.
The do-while loop is used, which ensures that the loop body is executed at least once before checking the loop condition. Inside the loop, the message "saya sangat menyukai C++" is displayed using cout, and endl is used to insert a newline character after each message.
After displaying the message, the value of c is incremented by 1 using the c++ increment operator.
The loop continues as long as the condition c<5 is true, meaning the loop will iterate five times.
As a result, the message "saya sangat menyukai C++" will be displayed five times, each on a separate line.

## 017_AscendingAndDescendingLoop.cpp
The given program demonstrates two types of loops in C++: an ascending loop and a descending loop.
In the first part of the program, an ascending loop is implemented using a for loop. The loop iterates from 0 to 4, with the loop counter c initially set to 0. Inside the loop, the current value of c+1 is displayed using cout, representing the ascending sequence. After each iteration, the loop counter c is incremented by 1. As a result, the numbers 1 to 5 are displayed, each on a separate line.
In the second part of the program, a descending loop is implemented using another for loop. The loop iterates from 5 to 1, with the loop counter j initially set to 5. Inside the loop, the current value of j is displayed using cout, representing the descending sequence. After each iteration, the loop counter j is decremented by 1. As a result, the numbers 5 to 1 are displayed in descending order, each on a separate line.

## 018_MultiplicationTableInADescendingPattern.cpp
The given program displays a multiplication table in a descending pattern.
In the program, two integer variables a and b are declared. The initial value of a is set to 10.
The program uses nested while loops. The outer while loop runs as long as a is greater than or equal to 1. Inside the outer loop, the inner while loop runs as long as b is less than or equal to a.
Inside the inner loop, the program calculates and displays the product of a and b using cout. The expression b*a represents the multiplication result. After displaying the product, the value of b is incremented by 1.
Once the inner loop completes, a newline character is inserted using cout << endl;, creating a new line for the next row of the multiplication table. Then, the value of a is decremented by 1.
This process continues until a becomes less than 1, at which point the outer loop terminates.
As a result, the program outputs a multiplication table in a descending pattern, where each row represents the products of the corresponding number (b) multiplied by the current value of a.

## 019_FactorialCalculator.cpp
The given program calculates the factorial of a given number.
In the program, an integer variable bil is declared to store the input number, and a long integer variable faktorial is initialized to 1 to store the factorial value.
The program prompts the user to enter a number to calculate its factorial using cout.
The program then enters a while loop that runs as long as bil is greater than or equal to 1. Inside the loop, the program performs the factorial calculation by multiplying faktorial with bil, and updates the value of faktorial accordingly.
The program includes an if statement to determine whether to display the multiplication symbol "x" or the equals sign "=" based on the current value of bil. If bil is not equal to 1, the program displays bil followed by "x" using cout. Otherwise, if bil is equal to 1, the program displays bil followed by "=".
After each iteration, the program decrements the value of bil by 1.
Once the loop is finished, the program displays the final value of faktorial, representing the factorial of the input number.

## 020_GreatestCommonDivisorCalculator.cpp
The given program calculates the greatest common divisor (GCD) of two input numbers using the Euclidean algorithm.
In the program, four integer variables a, b, c, and d are declared to store the input numbers and intermediate values.
The program prompts the user to enter the first number and the second number using cout and cin statements.
Next, an if statement is used to check if the value of a is less than the value of b. If true, the program swaps the values of a and b using the variable c as a temporary variable. This step ensures that a always holds the larger value.
The program then enters a do-while loop that performs the Euclidean algorithm. Inside the loop, the program calculates the remainder of a divided by b and stores it in d. The value of a is then updated to hold the value of b, and the value of b is updated to hold the value of d. This process continues until the remainder d becomes zero, indicating that the GCD has been found.
After the loop terminates, the program displays the GCD, which is stored in variable a, using cout.
