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

## 021_CalculateNumberFromOneToInput.cpp
The given program calculates the sum of numbers from 1 to the input number using a for loop.
In the program, integer variables a, b, c, and d are declared. a is used to store the input number, b and d are loop control variables, and c is used to store the sum.
The program prompts the user to enter a number using cout and cin statements.
A for loop is then used to calculate the sum. The loop iterates from 1 to a, and in each iteration, the value of b is added to c, updating the sum.
After the loop, the program displays the sum by using a second for loop. This loop starts with the value of a and iterates down to 1, printing each number followed by a "+" sign. Finally, the number 1 is printed.

## 022_PowerCalculation.cpp
The given program calculates the power of a number using a for loop.
In the program, integer variables a, b, c, and d are declared. a is used to store the base number, b is used to store the exponent, c is a loop control variable, and d is used to store the result of the power calculation.
The program prompts the user to enter the base number and the exponent using cout and cin statements.
A for loop is then used to calculate the power. The loop iterates from 1 to b-1, and in each iteration, the value of d is multiplied by a, updating the result.
After the loop, the program displays the result of the power calculation using d and returns 0, indicating successful execution.

## 023_LeastCommonMultiple.cpp
The program calculates the least common multiple (KPK) of two numbers entered by the user. It prompts the user to input two numbers, 'a' and 'b'. It initializes 'c' with the value of 'a'. Then, using a do-while loop, it repeatedly adds 'a' to 'c' until 'c' becomes a multiple of 'b'. Finally, it displays the calculated least common multiple (KPK) as the output.

## 024_ArrayWithLoop.cpp
The program creates an array called "TabInt" of size 10 and initializes it with values. It uses a for loop to assign values to each element of the array, where each element is set as the index multiplied by 10. Then, it uses another for loop to display the values of the array. Each element of the array is printed on a new line. Finally, the program returns 0 to indicate successful execution.

## 025_ArrayMatriksTwoD.cpp
The program declares a 2-dimensional array called "matriks" with 2 rows and 4 columns. It initializes the array with the given values. It also declares variables "baris" and "kolom" for the loop iterations.
The program then uses nested for loops to iterate through each element of the array. The outer loop iterates over the rows, and the inner loop iterates over the columns. Inside the loops, it prints the value of each element of the array followed by a space.
After printing all the elements of a row, it moves to a new line by using cout << endl;.

## 026_ArrayMonth.cpp
The program declares a string array called "bulan" that stores the names of the months in Indonesian. Each element of the array represents a month.
The program also declares an integer variable "masukkan" to store user input.
In the main function, it prompts the user to enter a number corresponding to a month. The input is stored in the "masukkan" variable.
Then, it prints the name of the month based on the user's input by accessing the corresponding element in the "bulan" array. Since arrays are zero-indexed, it subtracts 1 from the user's input to retrieve the correct element.
Finally, it displays the name of the month using the "cout" statement.

## 027_ArrayInput.cpp
The program declares a string array called "daftar_mahasiswa" to store the names of students. The size of the array is set to 39, indicating it can store up to 39 names.
The program also declares an integer variable "jml_mahasiswa" to store the number of students to be stored in the array.
In the main function, it prompts the user to enter the number of student names to be stored. The input is stored in the "jml_mahasiswa" variable.
Next, the program initializes a loop that runs "jml_mahasiswa" times. In each iteration, it prompts the user to enter a student name, which is stored in the "nama" variable. Then, it assigns the value of "nama" to the corresponding element in the "daftar_mahasiswa" array.
After the loop, the program displays the stored student names by iterating over the array and printing each element using the "cout" statement.

## 027_ArrayMax.cpp
The program declares an integer array called "daftar_bilangan" with a size of 10 and initializes it with some values.
In the main function, the program declares an integer variable "indeks" to represent the index of the array and another integer variable "maks" to store the maximum value found.
The program then enters a loop that iterates through each element of the "daftar_bilangan" array. It compares each element with the current maximum value stored in the "maks" variable. If the element is greater than the current maximum, it updates the value of "maks" to the new maximum value.
After the loop, the program displays the maximum value found using the "cout" statement.

## 028_ArrayMatrixSum.cpp
The program declares two 2-dimensional integer arrays, "a" and "b," each with dimensions 3x5, and initializes them with some values.
It also declares another 2-dimensional integer array "c" with the same dimensions to store the result of the addition of arrays "a" and "b".
In the main function, the program displays the matrix "a" by iterating through each element and printing its value. It then displays the matrix "b" in the same manner.
After that, it displays the result of the addition of matrices "a" and "b" by iterating through each element, performing the addition, and printing the equation and its result.

## 029_ArrayOddNumber.cpp
This program allows the user to input 5 numbers into an array called "bil". It then checks the array for odd numbers and displays them.
In the main function, the program uses a while loop to iterate 5 times and prompts the user to enter a number each time. The numbers are stored in the array "bil".
After that, the program uses another while loop to iterate through the array and check if each number is odd (remainder when divided by 2 is 1). If a number is odd, it is displayed, and the variable "b" is incremented.
Finally, the program checks if any odd numbers were found by checking if the variable "b" is still 0. If so, it displays the message "Tidak ada nilai ganjil" (No odd numbers found).

## 030_ArrayMenu.cpp
This program presents a menu with different options for manipulating an array. Let's go through the program step by step:
Variables and Initialization:
- Variables a, b, c, and e are declared to store user choices and intermediate values.
  Array d of size 10 is declared to store integer values.
- Input Loop:
  The program starts with a label awal that serves as the entry point to the program.
  The menu options are displayed using cout, and the user is prompted to enter their choice.
  If the user selects option 1, they will be asked to input 10 numbers into the array d using a while loop and cin.
  Once the input is complete, the program displays a message confirming the successful input and clears the screen.
  The program then returns to the menu.
- Display Array:
  If the user selects option 2, the program displays the contents of array d using a while loop.
  After displaying the array, the program waits for user input and clears the screen before returning to the menu.
- Find Minimum:
  If the user selects option 3, the program initializes variables b and c to 0 and sets c as the first element of array d.
  Using a while loop, the program compares each element of array d with c and updates c if a smaller value is found.
  Finally, the program displays the minimum value of array d, waits for user input, clears the screen, and returns to the menu.
- Find Maximum:
  If the user selects option 4, the program initializes variables b and c to 0 and sets c as the first element of array d.
  Using a while loop, the program compares each element of array d with c and updates c if a larger value is found.
  Finally, the program displays the maximum value of array d, waits for user input, clears the screen, and returns to the menu.
- Calculate Average:
  If the user selects option 5, the program initializes variables b and e to 0.
  Using a while loop, the program adds up all the elements of array d and stores the sum in e.
  The sum is then divided by 10 (the number of elements) to calculate the average.
  The average is displayed with 2 decimal places using setprecision, and the program waits for user input, clears the screen, and returns to the menu.
- Invalid Choice:
If the user selects an option other than 1-5, the program displays "Tidak valid" (Not valid) and exits the program.
The program uses labels and goto statements to create a loop that allows the user to re-enter choices. While goto can be a useful tool in some cases, it is generally discouraged in modern programming practices.

## 031_ArrayCheck.cpp
This program allows the user to input a number and checks whether that number exists in an array. Let's go through the program step by step:
- Variables and Initialization:
  Array daftar of size 5 is initialized with values 1, 2, 3, 4, and 5.
  Variables a, b, and c are declared to store user input and intermediate values.
  Variable b is set to 0.
- Display Available Data:
  The program displays the contents of the array daftar using a while loop and increments b for each element.
  The displayed values are separated by spaces.
  After displaying the array, there are two newlines for spacing.
- Input Number:
  The program prompts the user to enter a number using cout and reads the input into variable a using cin.
- Search Number in Array:
  The program uses a while loop to iterate through the elements of the array.
  Inside the loop, it checks if the current element is equal to the input number a.
  If a match is found, the program displays a message indicating the position (index) of the number in the array and increments c.
  The variable b is incremented for each iteration.
- Display Result:
  After the loop, the program checks the value of c.
  If c is still 0, it means that the input number does not exist in the array, and a corresponding message is displayed.
  Two newlines are added for spacing.
- Program Termination:
The program ends by returning 0.
Overall, this program allows the user to input a number and checks whether that number exists in the array. It provides feedback indicating whether the number is present in the array and its position if it exists, or a message indicating that the number is not in the array.

## 032_ArrayMatrixAdditionAndSubtraction.cpp
This program performs matrix addition and subtraction. Let's break down the code:
- Matrices Initialization:
  Five matrices, a, b, c, d, e, and f, are declared and initialized with their respective values.
  Matrices a, b, c, and d are 3x3 matrices, while matrices e and f will store the results of addition and subtraction operations.
  Variables g, h, and i are declared.
- Menu Display and Input:
  The program displays a menu for the user to choose between matrix addition and subtraction.
  The user input is stored in variable g using cin.
- Matrix Addition (Case 1):
  If the user selects option 1 (matrix addition), the program executes the code under case 1 in the switch statement.
  Matrix a is displayed first using nested while loops.
  Matrix b is then displayed using similar nested loops.
  The program performs matrix addition by adding corresponding elements of matrices a and b and stores the result in matrix e.
  Finally, the resulting matrix e is displayed using nested loops.
- Matrix Subtraction (Case 2):
  If the user selects option 2 (matrix subtraction), the program executes the code under case 2 in the switch statement.
  Matrix c is displayed first using nested while loops.
  Matrix d is then displayed using similar nested loops.
  The program performs matrix subtraction by subtracting corresponding elements of matrices c and d and stores the result in matrix f.
  Finally, the resulting matrix f is displayed using nested loops.
- Default Case:
  If the user selects an option other than 1 or 2, the program executes the code under default in the switch statement and displays "Tidak Valid!" (Not Valid!).
- Program Termination:
  The program ends by returning 0.
Overall, this program allows the user to select between matrix addition and subtraction. It displays the input matrices, performs the chosen operation, and displays the resulting matrix.

## 033_FunctionSquare.cpp
This program calculates the perimeter and area of a square. Let's go through the code:
- Function Declarations:
  The program declares two functions: hitung_keliling and hitung_luas. Both functions take an integer parameter s representing the length of a side.
- Global Variable:
  The program declares a global variable s which will store the length of the side of the square.
- Main Function:
  The program starts the execution from the main function.
  It prompts the user to enter the length of the side of the square using the cout statement.
  The user's input is stored in the s variable using the cin statement.
- Perimeter Calculation:
  The program calls the hitung_keliling function and passes the value of s as an argument.
  The hitung_keliling function calculates the perimeter of the square by multiplying the length of a side by 4 and returns the result.
  The calculated perimeter is displayed using the cout statement.
- Area Calculation:
  The program calls the hitung_luas function and passes the value of s as an argument.
  The hitung_luas function calculates the area of the square by squaring the length of a side and returns the result.
  The calculated area is displayed using the cout statement.
- Program Termination:
  The program ends by returning 0 from the main function.
Overall, this program allows the user to enter the length of a side of a square and calculates its perimeter and area using separate functions. The calculated values are then displayed on the screen.

## 034_FunctionCircle.cpp
This program calculates the perimeter and area of a square using a procedure. Let's go through the code:
- Global Variable:
  The program declares a global variable s which will store the length of the side of the square.
- Procedure Definition:
  The program defines a procedure named keliling_luas_lingkaran which takes an integer parameter s representing the length of a side.
- Perimeter and Area Calculation:
  Inside the keliling_luas_lingkaran procedure, the program calculates the area by squaring the length of a side and stores it in the luas variable.
  It calculates the perimeter by multiplying the length of a side by 4 and stores it in the keliling variable.
- Output:
  The program displays the calculated perimeter and area using the cout statement inside the keliling_luas_lingkaran procedure.
- Main Function:
  The program starts the execution from the main function.
  It prompts the user to enter the length of the side of the square using the cout statement.
  The user's input is stored in the s variable using the cin statement.
- Procedure Call:
  The program calls the keliling_luas_lingkaran procedure and passes the value of s as an argument.
  Inside the procedure, the perimeter and area of the square are calculated and displayed on the screen.
- Program Termination:
  The program ends by returning 0 from the main function.
Overall, this program allows the user to enter the length of a side of a square and calculates its perimeter and area using a procedure. The calculated values are then displayed on the screen.

## 035_ProcedureCompere.cpp
This program compares two numbers and displays the greater number. Let's go through the code:
- Global Variables:
  The program declares two global variables bil1 and bil2 which will store the two numbers to be compared.
- Procedure Definition:
  The program defines a procedure named banding which takes two integer parameters a and b.
- Comparison and Output:
  Inside the banding procedure, the program compares the values of a and b using an if statement.
  If a is greater than b, it displays the value of a using the cout statement.
  If a is equal to b, it displays the message "Tidak ada" using the cout statement.
  If none of the above conditions are true, it means b is greater than a, so it displays the value of b using the cout statement.
- Main Function:
  The program starts the execution from the main function.
  It prompts the user to enter the values of bil1 and bil2 using the cout statements.
  The user's inputs are stored in the bil1 and bil2 variables using the cin statements.
- Output:
  The program displays the message "Bilangan yang lebih besar adalah: " using the cout statement.
- Procedure Call:
  The program calls the banding procedure and passes the values of bil1 and bil2 as arguments.
  Inside the procedure, the numbers are compared and the greater number or appropriate message is displayed on the screen.
- Program Termination:
  The program ends by returning 0 from the main function.
Overall, this program allows the user to enter two numbers and compares them to determine the greater number. The greater number is then displayed on the screen. If the numbers are equal, it displays the message "Tidak ada" (None).

## 036_FunctionOddOrEven.cpp
This program allows the user to enter a number and determines whether it is odd or even. Here's how the code works:
- Variable Declaration:
  The program declares an integer variable a to store the user's input.
  It also declares a character variable b to store the user's choice of repeating the program.
  Lastly, it declares a string variable c to store the result of whether the number is odd or even.
- Function Definition:
  The program defines a function named cari which takes an integer parameter a.
- Odd or Even Check:
  Inside the cari function, the program uses an if statement to check if the number a is odd.
  If the remainder of a divided by 2 is 1, it means the number is odd, so the string variable c is assigned the value "Ganjil" (Odd).
  If the condition is not true, it means the number is even, so the string variable c is assigned the value "Genap" (Even).
- Main Function:
  The program starts the execution from the main function.
  It uses a label lagi to create a point for the goto statement.
- Output and Input:
  The program displays the initial messages and prompts the user to enter a number using the cout statements.
  The user's input is stored in the variable a using the cin statement.
- Function Call:
  The program calls the cari function and passes the value of a as an argument.
  Inside the function, the number is checked to determine whether it is odd or even, and the result is stored in the variable c.
- Result Display:
  The program displays the message "Bilangan yang anda masukkan adalah: " followed by the value of c using the cout statement.
- Repeat Prompt:
  The program prompts the user to enter 'y' or 't' (yes or no) to repeat the program using the cin statement and stores the input in the variable b.
- Repeat Execution:
  If the value of b is 'y' (yes), the program clears the screen using the system("cls") statement and jumps to the label lagi using the goto statement.
  This allows the program to repeat from the beginning.
  If the value of b is 't' (no), the program continues execution.
- Program Termination:
  The program ends by returning 0 from the main function.
Overall, this program repeatedly asks the user to enter a number, determines whether it is odd or even, and displays the result. The program provides an option to repeat the process as long as the user chooses to continue.

## 037_FunctionCircumference.cpp
This program calculates the circumference and area of a circle based on the given radius. Here's how the code works:
- Header and Variable Declaration:
  The program includes the necessary headers, iostream and iomanip.
  It declares a float variable a to store the radius entered by the user.
  It also declares a character variable b to store the user's choice of repeating the program.
- Function Definition:
  The program defines two functions: hitung_keliling and hitung_luas.
  Both functions take a float parameter a representing the radius of the circle.
- Calculation of Circumference and Area:
  The hitung_keliling function calculates the circumference of the circle using the formula (2 * 22 * a) / 7.
  The hitung_luas function calculates the area of the circle using the formula (22 * a * a) / 7.
- Main Function:
  The program starts the execution from the main function.
  It uses a label lagi to create a point for the goto statement.
- Output and Input:
  The program displays the initial messages and prompts the user to enter the radius of the circle using the cout statements.
  The user's input is stored in the variable a using the cin statement.
- Calculation and Output Display:
  The program uses setiosflags(ios::fixed) to set the output format to fixed decimal precision.
  It then calculates the circumference and area of the circle using the hitung_keliling and hitung_luas functions, respectively.
  The calculated values are displayed using setprecision(2) to format the output with two decimal places.
- Repeat Prompt:
  The program prompts the user to enter 'y' or 't' (yes or no) to repeat the program using the cin statement and stores the input in the variable b.
- Repeat Execution:
  If the value of b is 'y' (yes), the program clears the screen using the system("cls") statement and jumps to the label lagi using the goto statement.
  This allows the program to repeat from the beginning.
  If the value of b is 't' (no), the program continues execution.
- Program Termination:
  The program ends by returning 0 from the main function.
Overall, this program repeatedly asks the user to enter the radius of a circle, calculates its circumference and area, and displays the results. The program provides an option to repeat the process as long as the user chooses to continue.

## 038_ProcedureSwitchCalculator.cpp
This program is a calculator that performs various arithmetic operations based on the user's choice. Here's how the code works:
- Headers and Variable Declaration:
  The program includes the necessary headers, iostream, iomanip, and math.h.
  It declares an integer variable a to store the user's menu choice.
  It declares a character variable b to store the user's choice of repeating the program.
  It declares two float variables c and d to store the numbers entered by the user.
- Procedure Definition:
  The program defines a procedure satu() that handles input for options 1-4 and option 5.
  If the user's choice is 1-4, the procedure prompts the user to enter two numbers and stores them in variables c and d.
  If the user's choice is 5, the procedure prompts the user to enter a number and its exponent, which are stored in variables c and d, respectively.
- Main Function:
  The program starts the execution from the main function.
  It uses a label lagi to create a point for the goto statement.
- Menu Display and Input:
  The program displays the menu options using cout statements.
  The user is prompted to enter a choice by using the cin statement and storing the input in the variable a.
- Input Handling:
  The program calls the satu() procedure to handle the input for options 1-4 and option 5.
  Depending on the value of a, different actions are performed.
- Arithmetic Operations and Output Display:
  The program uses a switch statement to determine the selected menu option.
  For options 1-4, it performs the corresponding arithmetic operation and displays the result using cout.
  For option 5, it uses the pow function from the math.h library to calculate the power and displays the result.
  If the user's choice is not within the given menu options, a default message is displayed.
- Repeat Prompt:
  The program prompts the user to enter 'y' or 't' (yes or no) to repeat the program using the cin statement and stores the input in the variable b.
- Repeat Execution:
  If the value of b is 'y' (yes), the program clears the screen using the system("cls") statement and jumps to the label lagi using the goto statement.
  This allows the program to repeat from the beginning.
  If the value of b is 't' (no), the program continues execution.
- Program Termination:
  The program ends by returning 0 from the main function.
Overall, this program serves as a simple calculator that performs arithmetic operations based on the user's choice. It provides an option to repeat the calculation process as long as the user chooses to continue.

## 039_BubbleSort.cpp
This program demonstrates the Bubble Sort algorithm to sort an array of doubles in ascending order. Here's how the code works:
- Procedure Definition:
  The program defines a procedure bubble_sort that implements the Bubble Sort algorithm to sort an array.
  It takes two parameters: an array of doubles arr and the length of the array length.
- Sorting Algorithm:
  The Bubble Sort algorithm compares adjacent elements in the array and swaps them if they are in the wrong order.
  The algorithm iterates through the array multiple times until no more swaps are needed, indicating that the array is sorted.
  Within each iteration, the algorithm compares and swaps adjacent elements as necessary.
  The not_sorted boolean variable keeps track of whether any swaps occurred during an iteration. If no swaps occurred, the array is considered sorted, and the algorithm stops.
- Print Array Procedure:
  The program defines a procedure print_array that takes an array a and its length as parameters.
  It iterates through the array and prints each element separated by a tab character.
- Main Function:
  The program starts the execution from the main function.
  It declares an integer variable length to store the length of the array.
  It declares a double array a and initializes it with five double values.
  The program displays the unsorted array using the print_array procedure.
- Sorting the Array:
  The program calls the bubble_sort procedure to sort the array a.
- Displaying the Sorted Array:
  The program displays the sorted array using the print_array procedure.
- Program Termination:
  The program ends by returning 0 from the main function.
Overall, this program demonstrates the Bubble Sort algorithm by sorting an array of doubles and displaying the sorted array. It showcases the step-by-step swapping of adjacent elements until the array is sorted in ascending order.

## 040_InsertionSort.cpp
This program demonstrates the Insertion Sort algorithm to sort an array of characters in descending order. Here's how the code works:
- Procedure Definition:
  The program defines a procedure insertion_sort that implements the Insertion Sort algorithm to sort an array.
  It takes two parameters: an array of characters arr and the length of the array length.
- Sorting Algorithm:
  The Insertion Sort algorithm works by dividing the array into a sorted and an unsorted part.
  It iterates through the unsorted part of the array and inserts each element into its correct position in the sorted part.
  Within each iteration, the algorithm compares the current element with the elements in the sorted part from right to left.
  If an element in the sorted part is greater than the current element, it shifts that element one position to the right to make room for the current element.
  Once the correct position is found, the algorithm inserts the current element into its sorted position.
  The algorithm continues this process until the entire array is sorted.
- Print Array Procedure:
  The program defines a procedure print_array that takes an array a and its length as parameters.
  It iterates through the array and prints each element separated by a tab character.
- Main Function:
  The program starts the execution from the main function.
  It declares an integer variable length to store the length of the array.
  It declares a character array a and initializes it with six character values.
  The program displays the unsorted array using the print_array procedure.
- Sorting the Array:
  The program calls the insertion_sort procedure to sort the array a.
- Displaying the Sorted Array:
  The program displays the sorted array using the print_array procedure.
- Program Termination:
  The program ends by returning 0 from the main function.
Overall, this program demonstrates the Insertion Sort algorithm by sorting an array of characters in descending order. It showcases the step-by-step insertion of elements into the sorted part of the array until the entire array is sorted.

## 041_SelectionSort.cpp
This program demonstrates the Selection Sort algorithm to sort an array of double values in descending order. Here's how the code works:
- Procedure Definition:
  The program defines a procedure selectSort that implements the Selection Sort algorithm to sort an array.
  It takes two parameters: an array of double values b and the length of the array a.
- Sorting Algorithm:
  The Selection Sort algorithm works by repeatedly finding the maximum element from the unsorted part of the array and swapping it with the last element of the sorted part.
  Within each iteration, the algorithm selects the maximum element by comparing each element with the current maximum element and updating the index of the maximum element if a larger element is found.
  After finding the maximum element, the algorithm swaps it with the last element of the sorted part.
  The algorithm continues this process until the entire array is sorted.
- Print Array Procedure:
  The program defines a procedure print_array that takes an array b and its length as parameters.
  It iterates through the array and prints each element separated by a tab character.
  The precision of the output is set to 1 decimal place.
- Main Function:
  The program starts the execution from the main function.
  It declares an integer variable a to store the length of the array.
  It declares a double array b and initializes it with five double values.
  The program displays the unsorted array using the print_array procedure.
- Sorting the Array:
  The program calls the selectSort procedure to sort the array b.
- Displaying the Sorted Array:
  The program displays the sorted array using the print_array procedure.
- Program Termination:
  The program ends by returning 0 from the main function.
Overall, this program demonstrates the Selection Sort algorithm by sorting an array of double values in descending order. It showcases the step-by-step selection of the maximum element and its placement at the end of the sorted part of the array.

## 042_BubbleSortArray.cpp
This program demonstrates the Bubble Sort algorithm to sort an array of strings in ascending order. Here's how the code works:
- Procedure Definition:
  The program defines a procedure bubble_sort that implements the Bubble Sort algorithm to sort an array.
  It takes two parameters: an array of strings a and the length of the array b.
- Sorting Algorithm:
  The Bubble Sort algorithm works by repeatedly comparing adjacent elements and swapping them if they are in the wrong order.
  Within each iteration, the algorithm compares each element with its adjacent element and swaps them if the current element is greater than the next element.
  This process is repeated until the entire array is sorted.
  The algorithm also uses a boolean variable c to keep track of whether any swaps have been made in a particular iteration. If no swaps are made, it means the array is already sorted, and the algorithm can terminate early.
- Print Array Procedure:
  The program defines a procedure print_array that takes an array a and its length as parameters.
  It iterates through the array and prints each element separated by a tab character.
- Main Function:
  The program starts the execution from the main function.
  It declares an integer variable b to store the length of the array.
  It declares a string array a and initializes it with ten string values.
  The program displays the unsorted array using the print_array procedure.
- Sorting the Array:
  The program calls the bubble_sort procedure to sort the array a.
- Displaying the Sorted Array:
  The program displays the sorted array using the print_array procedure.
- Program Termination:
  The program ends by returning 0 from the main function.
Overall, this program demonstrates the Bubble Sort algorithm by sorting an array of strings in ascending order. It showcases the step-by-step comparison of adjacent elements and the swapping of elements to gradually move the larger elements towards the end of the array.

## 043_InsertionSortArrayInput.cpp
This program allows the user to input an array of characters and performs two types of sorting: ascending and descending. Here's how the code works:
1. Input Procedure:
- The program defines a procedure input that takes two parameters: an integer a (the size of the array) and a character array b.
- It uses a while loop to iterate a times and prompts the user to enter a character for each array element.
- The input characters are stored in the array b.
2. Sorting Procedures:
- The program defines two sorting procedures: sortinga for ascending sort and sortingb for descending sort.
- Both procedures use the insertion sort algorithm to sort the character array b.
- The procedures compare each element with its previous element and swap them if they are in the wrong order.
- The sorting process continues until the entire array is sorted.
3. Display Procedure:
- The program defines a procedure tampilan that takes two parameters: an integer a (the size of the array) and a character array b.
- It uses a while loop to iterate a times and prints each character separated by a tab character.
- The procedure provides a visual representation of the array.
4. Main Function:
- The program starts the execution from the main function.
- It prompts the user to enter the number of elements in the array and stores it in the integer variable a.
- It declares a character array b with size a.
- The program calls the input procedure to fill the array with user input characters.
- It displays the array before sorting using the tampilan procedure.
5. Ascending Sort:
- The program calls the sortinga procedure to sort the array b in ascending order.
- It displays the array after the ascending sort using the tampilan procedure.
6.Descending Sort:
- The program calls the sortingb procedure to sort the array b in descending order.
- It displays the array after the descending sort using the tampilan procedure.
7.Program Termination:
- The program ends by returning 0 from the main function.
Overall, this program allows the user to input an array of characters and demonstrates the sorting of the array in both ascending and descending order using the insertion sort algorithm.

## 044_SequentalSearch.cpp
This program implements sequential search to find a specific value in an array of doubles. Here's how the code works:
1. Sequential Search Function:
- The program defines a function named sequential_search that takes three parameters: an array of doubles data, an integer n (the size of the array), and a double k (the value to be searched).
- It initializes the variable posisi (position) to -1.
- If n is less than or equal to 0, it means the array is empty, so the function returns -1 to indicate that the value is not found.
- Otherwise, it sets the variable ketemu (found) to 0 and initializes i to 1.
- It enters a while loop that continues as long as i is less than n-1 and ketemu is false.
- Inside the loop, it compares each element of the array with the value k.
  - If a match is found, it updates the posisi variable with the index of the found value and sets ketemu to 1 to indicate a successful search.
- After the loop, if ketemu is still false, it means the value k is not found in the array, so posisi remains -1.
- Finally, the function returns the value of posisi.
2. Main Function:
- The program starts the execution from the main function.
- It declares an integer variable n with the size of the array.
- It declares a double array data and initializes it with some values.
- It declares a double variable k that represents the value to be searched.
- It calls the sequential_search function and assigns the returned value to the posisi variable.
- It checks the value of posisi:
  - If it is not equal to -1, it means the value k is found in the array, so it displays a message indicating the position of the value.
  - If it is -1, it means the value k is not found in the array, so it displays a message indicating that the value is not found.
- Finally, the main function returns 0 to indicate successful program execution.
Overall, this program demonstrates the implementation of sequential search to find a specific value in an array of doubles.

## 045_BinarySearch.cpp
This program implements binary search to find a specific value in an array of characters. Here's how the code works:
1. Binary Search Function:
- The program defines a function named function_binary_search that takes three parameters: an array of characters data, an integer n (the size of the array), and a character k (the value to be searched).
- It initializes variables atas (top), bawah (bottom), tengah (middle), and posisi (position).
- It sets the boolean variable ada (found) to false, bawah to 0, atas to n - 1, and posisi to -1.
- It enters a while loop that continues as long as bawah is less than or equal to atas.
- Inside the loop, it calculates the value of tengah as the average of atas and bawah.
- It performs comparisons to determine the position of the value k in the array:
  - If k is equal to data[tengah], it means the value is found, so it updates posisi with the index of the found value and breaks out of the loop.
  - If k is less than data[tengah], it means the value is in the lower half of the array, so it updates atas to tengah - 1.
  - If k is greater than data[tengah], it means the value is in the upper half of the array, so it updates bawah to tengah + 1.
- After the loop, it returns the value of posisi.
2. Main Function:
- The program starts the execution from the main function.
- It declares an integer variable n with the size of the array.
- It declares a character array data and initializes it with some values.
- It declares a character variable k that represents the value to be searched.
- It calls the function_binary_search function and assigns the returned value to the posisi variable.
- It checks the value of posisi:
  - If it is not equal to -1, it means the value k is found in the array, so it displays a message indicating the position of the value.
  - If it is -1, it means the value k is not found in the array, so it displays a message indicating that the value is not found.
- Finally, the main function returns 0 to indicate successful program execution.
Overall, this program demonstrates the implementation of binary search to find a specific value in an array of characters.

## 046_SequentalSearch2.cpp
This program implements a sequential search to find a specific license plate number in an array of strings. Here's how the code works:
1. Function isi():
- This function prompts the user to enter a license plate number and reads the input using getline.
- It returns the entered license plate number as a string.
2. Function sequential_search():
- This function takes three parameters: an integer a (the size of the array), an array of strings b, and a string c (the license plate number to be searched).
- It initializes variables d, e, and f.
- If a is less than or equal to 0, it sets d to -1.
- Otherwise, it sets f to 0 and enters a while loop.
- Inside the loop, it compares each element of the array with the search string c.
- If a match is found, it updates d with the index of the found license plate number and sets f to 1 to indicate a match.
- If no match is found, it increments e to continue searching.
- If no match is found after searching the entire array, it sets d to -1.
- Finally, it returns the value of d.
3. Procedure tampil():
- This procedure takes two parameters: a string c (the searched license plate number) and an integer d (the position of the license plate number in the array).
- It checks the value of d:
  - If it is not equal to -1, it means the license plate number is found, so it displays a message indicating its presence in the database.
  - If it is -1, it means the license plate number is not found, so it displays a message indicating its absence in the database.
4. Main Function:
- The program starts the execution from the main function.
- It declares a character variable j to store the user's choice to repeat the search.
- It declares an integer variable a with the size of the array.
- It declares an array of strings b and initializes it with some license plate numbers.
- It calls the isi() function to get the license plate number to be searched and assigns it to the string variable c.
- It calls the sequential_search() function to search for the license plate number in the array and assigns the returned value to the integer variable d.
- It calls the tampil() procedure to display whether the license plate number is found or not.
- It prompts the user if they want to repeat the search and reads the input into the variable j.
- If the user chooses to repeat (input 'y'), the program clears the screen using system("cls") and goes to the label 'i', which restarts the search.
- If the user chooses not to repeat (input 't'), the program terminates.
Overall, this program allows the user to search for a license plate number in an array using sequential search. It provides the option to repeat the search multiple times.

## 047_BinarySearch2.cpp
This program implements a binary search algorithm to search for a specific NIM (student ID) in an array of integers. Here's how the code works:
1.Function isi():
- This function prompts the user to enter an NIM and reads the input using cin.
- It returns the entered NIM as an integer.
2. Function function_binary_search():
- This function takes three parameters: an integer a (the size of the array), an array of integers b, and an integer c (the NIM to be searched).
- It initializes variables d, e, f, and g.
- It sets h (a boolean) to false and e to 0.
- It sets f to a - 1 to indicate the last index of the array.
- It sets d to -1 initially to indicate that the NIM is not found.
- It enters a while loop as long as e is less than or equal to f.
- Inside the loop, it calculates the middle index g as (f + e) / 2.
- If the NIM at index g matches the searched NIM c, it updates d to g and breaks out of the loop.
- If the searched NIM c is less than the NIM at index g, it updates f to g - 1 to search in the lower half of the array.
- If the searched NIM c is greater than the NIM at index g, it updates e to g + 1 to search in the upper half of the array.
- Finally, it returns the value of d.
3. Procedure tampil():
- This procedure takes two parameters: an integer c (the searched NIM) and an integer d (the position of the NIM in the array).
- It checks the value of d:
  - If it is not equal to -1, it means the NIM is found, so it displays a message indicating its presence in the class.
  - If it is -1, it means the NIM is not found, so it displays a message indicating its absence in the class.
4. Main Function:
- The program starts the execution from the main function.
- It declares a character variable j to store the user's choice to repeat the search.
- It declares an integer variable a with the size of the array.
- It declares an array of integers b and initializes it with some NIM values.
- It calls the isi() function to get the NIM to be searched and assigns it to the integer variable c.
- It calls the function_binary_search() function to search for the NIM in the array and assigns the returned value to the integer variable d.
- It calls the tampil() procedure to display whether the NIM is found or not.
- It prompts the user if they want to repeat the search and reads the input into the variable j.
- If the user chooses to repeat (input 'y'), the program clears the screen using system("cls") and goes to the label 'i', which restarts the search.
- If the user chooses not to repeat (input 't'), the program terminates.
Overall, this program allows the user to search for an NIM in an array using binary search. It provides the option to repeat the search multiple times.

## 048_BinarySearchBubbleSort.cpp
This program demonstrates a binary search algorithm to search for a specific number in an array. Here's how the code works:
1. Procedure tampil():
- This procedure takes two parameters: an integer a (the size of the array) and an array of integers b.
- It uses a while loop to iterate through the array and display each element.
- The loop continues until the variable c reaches the size of the array.
- The elements are displayed using cout.
2. Procedure bubble_sort():
- This procedure takes two parameters: an integer a (the size of the array) and an array of integers b.
- It initializes variables c to true, d to 0, and e.
- It enters a while loop with c as the condition.
- Inside the loop, it sets c to false and increments d.
- It then enters a for loop from 0 to a - d.
- Inside the for loop, it compares each element with the next element and swaps them if necessary to sort the array in ascending order.
- After sorting, it sets c to true if any swapping occurs, indicating that another pass is required.
- The loop continues until the array is sorted in ascending order.
3. Function isi():
- This function prompts the user to enter a number and reads the input using cin.
- It returns the entered number as an integer.
4. Function function_binary_search():
- This function takes three parameters: an integer a (the size of the array), an array of integers b, and an integer c (the number to be searched).
- It initializes variables d, e, f, g, and h (a boolean).
- It sets h to false, e to 0, f to a - 1, and d to -1 initially to indicate that the number is not found.
- It enters a while loop as long as e is less than or equal to f.
- Inside the loop, it calculates the middle index g as (f + e) / 2.
- If the number at index g matches the searched number c, it updates d to g and breaks out of the loop.
- If the searched number c is less than the number at index g, it updates f to g - 1 to search in the lower half of the array.
- If the searched number c is greater than the number at index g, it updates e to g + 1 to search in the upper half of the array.
- Finally, it returns the value of d.
5. Main Function:
- The program starts the execution from the main function.
- It declares a character variable j to store the user's choice to repeat the search.
- It declares an integer variable a with the size of the array.
- It declares an array of integers b and initializes it with some numbers.
- It calls the tampil() procedure to display the numbers before sorting.
- It calls the bubble_sort() procedure to sort the array in ascending order.
- It calls the tampil() procedure again to display the numbers after sorting.
- It calls the isi() function to get the number to be searched and assigns it to the integer variable c.
- It calls the function_binary_search() function to search for the number c in the sorted array b and assigns the returned value to the integer variable d.
- It calls the tampil() procedure to display whether the number is found or not.
- It prompts the user if they want to repeat the search and reads the input into the variable j.
- If the user chooses to repeat (input 'y'), the program clears the screen using system("cls") and goes to the label 'i' using the goto statement. This allows the program to restart the search process.
- If the user chooses not to repeat (input 't'), the program terminates.
In summary, this program sorts an array of numbers using the bubble sort algorithm and then performs a binary search to find a specific number in the sorted array. The program allows the user to repeat the search multiple times by clearing the screen and restarting the search process if desired.
