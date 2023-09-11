#include <stdio.h>

/*
main: This code print out Hello World!
Return 0 (Success)
*/

int main()
{
	printf("Hello World!\n");
	return 0;
}


/*
VARIABLES

DATA TYPES
Char (1 byte) | %c for printing - a data type that holds one character (letter, number, etc.) of data.
strings (1 byte) | %s for printing - a sequence of characters terminated with a null character '\0'.
Int (4 bytes) | %d for printing - is used in a type declaration to give a variable an integer type.
Float (4 bytes) | %f for printing - a fundamental data type built into the compiler that's used to define numeric values with floating decimal points.
Double (8 bytes) | %lf for printing - a data type that is used to store high-precision floating-point data or numbers (up to 15 to 17 digits).
Void (0 bytes #NULL) - the return type of a function that returns normally, but does not provide a result value to its caller. 
Boolean (2 bytes) - a data type in the C Standard Library which can store true or false.
Long (8 bytes) - stores integers like int , but gives a wider range of values at the cost of taking more memory.
*/

int main(void)
{
	// Integer Variable  / Data Type
	int age;

	age = 25;
	printf("\n Age is: %d",age);

	// Assign a variable to another variable
	int  firstnum;
	int secondnum;

	firstnum = 33;
	printf("\n First Number = %d", firstnum);

	secondnum = firstnum; //secondnum = firstnum = 33
	printf("\n Second Number = %d", secondnum);

	// Declaring Multiple Variables at once
	int variableOne, variableTwo = 25; // variableOne = 0

	variableOne = variableTwo + 5;

	printf("\n %d", variableOne); //will print 25 + 5 = 30
	printf("\n %d", variableTwo); // will print 25


	//Double Variable / Data Type 
	double number;

	number = 12.45;
	printf("\nMy favorite decimal number is: %lf.2", number); //output 12.450000
	// by default double print up to 6 decimals after the comma
	// so change %lf to %.2lf means up to 2 decimals after the comma

	double number2;

	number2 = 5.5e6; //e is exponential
	printf("\nexponential number is: %.0lf", number2);


	// Float variable / Data Type
	float number1;

	number1 = 10.9f; //f is a syntax to show that its a float
	printf("\nFloating Value is: %f.2", number1); // output 10.900000
	// by default float print up to 6 decimals after the comma
	// so change %f to %.1f means up to 1 decimals after the comma


	// Char(Character) variable / Data Type
	char firstCharacter;
	char lastCharacter;

	firstCharacter = 'A'; //for character use single quotation ('')
	lastCharacter = 'Z';
	printf("\nFirst letter of the alphabet is %c", firstCharacter);
	printf("\nLast letter of the alphabet is %c", lastCharacter);

	//SIZES
	printf("\nint size = %zu byte(s)", sizeof (age));
	printf("\ndouble size = %zu byte(s)", sizeof (number));
	printf("\nfloat size = %zu byte(s)", sizeof (number1));
	printf("\nchar size = %zu byte", sizeof (firstCharacter));

	return 0;
}


/*
* GET USER INPUT
*/

int main()
{

	//SINGLE INPUT
	int youngAge;

	printf("\n Enter the input value: ");
	scanf("%d", &youngAge);
	// scanf allows you to read input from the user or from a file and store that input in variables of different data types.
	// & (ampersand) represents the memory address of the variable
	printf("\n Young age is %d old", youngAge);
	//at the output, enter the value you want e.g 22 then press enter...


	//DOUBLE INPUT
	int youngAge1;
	int youngAge2;
  
	printf("\n Enter the minimum age: ");
	scanf("%d", &youngAge1);
  	printf("\n Enter the maximum age: ");
	scanf("%d", &youngAge2);
	// scanf allows you to read input from the user or from a file and store that input in variables of different data types.
	// & (ampersand) represents the memory address of the variable
	printf("\n Young age is between %d and %d years old", youngAge1, youngAge2);

	return 0;
}


/*
* CONVERSION
*/

int main(void) 
{
	// Normal

	int abc = 5;
	int cde = 6;
	int results;

	results = abc + cde;
	printf("\n %d", results); //output = 11

	//Converted

	char efg = '5'; //converted into a character, not a number anymore
	int ghi = 6;
	int results1;

	results1 = efg + ghi;
	printf("\n %d", results1); //output = 59
	// The compiler automatically converts character value (efg = '5') to it's ascii value which is 53
	// The ASCII value of the number '5' is 53 and for the letter 'A' is 65.
	// The ASCII value represents the character variable in numbers, and each character variable is assigned with some number range from 0 to 127. 

	return 0;
}


/*
* BOOLEAN & COMPARISON
*/
#include <stdbool.h>

int main(void)
{
	// Boolean
	bool value1;
	bool value2;

	value1 = true; // true or ON = 1
	value2 = false; // false or OFF = 0
	printf("\n %d and/or %d", value1, value2); //output 1 and/or 0
	//case sensitive... True vs true | False vs false

	// Comparison

	// Greater than
	bool value3;

	value3 = (12 > 9);
	printf("\n Is 12 greater than 9, answer is: %d (1 = True | 0 = False)", value3);

	// Less than
	bool value4;

	value4 = (12 < 9);
	printf("\n Is 12 greater than 9, answer is: %d (1 = True | 0 = False)", value4);

	// Equal to
	bool value5;

	value5 = (12 == 9);
	printf("\n Is 12 greater than 9, answer is: %d (1 = True | 0 = False)", value5);

	// Not Equal to
	bool value6;

	value6 = (12 != 9);
	printf("\n Is 12 greater than 9, answer is: %d (1 = True | 0 = False)", value6);

	// Greater than or Equal to
	bool value7;

	value7 = (12 >= 9);
	printf("\n Is 12 greater than 9, answer is: %d (1 = True | 0 = False)", value7);

	// Less than or Equal to
	bool value8;

	value8 = (12 <= 9);
	printf("\n Is 12 greater than 9, answer is: %d (1 = True | 0 = False)", value8);


	// comparing using variables

	int value9 = 12;
	int value10 = 9;

	bool varValue = value9 > value10;
	printf("\n Is Value9 greater than Value10, answer is: %d (1 = True | 0 = False)", varValue);

	
	// LOGICAL OPERATORS

	// Logical AND (&&)
	// returns true ONLY if both expressions are True
	int value11 = 12;
	int value12 = 9;

	bool varValue1 = (value11 >= 18) && (value12 > 6.0);
	printf("\n Is Value11 greater or Equal to 18 AND Is Value12 greater than 6.0, answer is: %d (1 = True | 0 = False)", varValue1);

	// Logical OR (||)
	// returns True if one the expression is True
	int value13 = 12;
	int value14 = 9;

	bool varValue2 = (value13 >= 18) || (value14 > 6.0);
	printf("\n Is Value13 greater or Equal to 18 OR Is Value14 greater than 6.0, answer is: %d (1 = True | 0 = False)", varValue2);

	// Logical Not
	// returns True if the expression is false (vice versa)
	int value15 = 12;

	bool varValue3 = !(value15 >= 18);
	printf("\n Is Value15 NOT greater or Equal to 18, answer is: %d (1 = True | 0 = False)", varValue3);


	return 0;
}


/*
* IF ELSE STATEMENTS
*/

int main(void)
{
	/*
	if (test_condition){
	//body of if statement
	}
	*/

	int votingAge;

	printf("\n Enter your age: ");
	scanf("%d", &votingAge);

	if (votingAge >= 18) {
		printf("\n You are eligible to vote. Please Proceed");
	}
	if (votingAge < 18) {
		printf("\n Sorry, You are not eligible to vote. Thank you for your time");
	}

	/*
	if (test_condition){
	//body of if statement
	}
	else {
	//statements inside else body
	}
	*/

	int votingAge1;

	printf("\n Enter your age: ");
	scanf("%d", &votingAge1);

	if (votingAge1 >= 18){
		printf("\n You are eligible to vote. Please Proceed");
	}
	else {
		printf("\n Sorry, You are not eligible to vote. Thank you for your time");
	}

	/*
	if (test_condition){
	//body of if statement
	}
	else if (test_condition2){
	//body of second if statement
	}
	else {
	//statements inside else body
	}
	*/

	int votingAge2;

	printf("\n Enter your age: ");
	scanf("%d", &votingAge2);

	if (votingAge2 > 120 || votingAge2 < 0){
		printf("\n Invalid Age");
	}
	else if (votingAge2 >= 18){
		printf("\n You are eligible to vote. Please Proceed");
	}
	else {
		printf("\n Sorry, You are not eligible to vote. Thank you for your time");
	}


	return 0;

}


/*
* TERNARY OPERATORS
*/

int main(void)
{
	// test_condition ? expression1 : expression2;

	int votingAge3;

	printf("\n Enter your age: ");
	scanf("%d", &votingAge3);

	(votingAge3 >= 18) ? printf("\nYou can vote") : printf("\nYou cannot vote");

	//using variables
	char operator = '+';

	int vNum1;
	int vNum2;

	printf("\n Enter the first value: ");
	scanf("%d", &vNum1);
	printf("\n Enter the second value: ");
	scanf("%d", &vNum2);

	int result = (operator == '+') ? (vNum1 + vNum2) : (vNum1 - vNum2);
	printf("\n %d", result);

	return 0;
}


/*
* SWITCH STATEMENTS
*/

int main(void)
{

	/*
	* A switch statement allows a variable to be tested for equality against a list of values.
	* Each value is called a case, and the variable being switched on is checked for each switch case.
	

	switch(variable/expression){
	case value1:
		//body of case 1
		break;
	case value2:
		//body of case 2
		break;
	case valueN:
		//body of case N
		break;

	default:
		//body of default
	}

	*/

	int usernumber;
	printf("\n Enter the number between 1 to 7: ");
	scanf("%d", &usernumber);

	switch(usernumber){
	case 1:
		printf("\nSunday ");
		break;

	case 2:
		printf("\nMonday ");
		break;

	case 3:
		printf("\nTuesday ");
		break;

	case 4:
		printf("\nWednesday ");
		break;

	case 5:
		printf("\nThursday ");
		break;

	case 6:
		printf("\nFriday ");
		break;

	case 7:
		printf("\nSaturday ");
		break;

	default:
		printf("\n Invalid Number");

	}


	char operator;
	printf("\n Choose an operator ['+', '-', '*', '/'] ");
	scanf("%c", &operator);

	double varNum1, varNum2;
	double varResults;

	printf("\n Enter first number: ");
	scanf("%lf", &varNum1);
	printf("\n Enter second number: ");
	scanf("%lf", &varNum2);

	switch(operator) {
	case '+':
		varResults = varNum1 + varNum2;
		printf("\n %.2lf", varResults);
		break;

	case '-':
		varResults = varNum1 - varNum2;
		printf("\n %.2lf", varResults);
		break;

	case '*':
		varResults = varNum1 * varNum2;
		printf("\n %.2lf", varResults);
		break;

	case '/':
		varResults = varNum1 / varNum2;
		printf("\n %.2lf", varResults);
		break;

	default:
		printf("\n Invalid Operator");
	}


	return 0;
}

/*
* WHILE LOOP
*/

int main(void)
{
	/*
	while (condition) {
	// statements inside while
	}
	*/
	int count = 1;
	while (count < 5) {
		printf("\n while loop in C");
		printf("\n Count = %d", count);
		count +=1;

	}

	int loopNumber;
	int product;
	int count = 1;

	printf("\n Enter the number: ");
	scanf("%d", &loopNumber);

	while (count <= 10){
		product = loopNumber * count;
		printf("\n Count = %d", count);
		printf("\n %d * %d", loopNumber, count);
		printf("\n %d", product);
		count +=1; //count = count + 1
	}

	// do while loop
	/*
	do {
	//body of loop
	} while(condition);
	*/

	int count = 1;

	do {
		printf("\n %d", count);
		count +=1;
	} while (count <5);

	return 0;
}



/*
* FOR LOOP
*/

int main(void)
{
	/*
	for (intializationExpression; testExpression; updateExpression) {
	//code inside the for loop
	}

	example
	for (int i = 0; i < 5; i++) {
	//code inside the for loop
	}

	*/
	int sum = 0;
	for(int i =1; i <= 101; i++) {
		sum +=1;
	}
	printf("\n %d", sum);
	return 0;
}



/*
* BREAK & CONTINUE
*/

int main(void)
{
	//using FOR (BREAK)
	for (int i = 1; i <= 5; i++){
		if (i == 3){
			break;
		}
		printf("\n %d", i);
	}

	//using WHILE (BREAK)
	while(1) {
		int numb_er;
		printf("\n Enter a number: ");
		scanf("%d", &numb_er);

		if (numb_er < 0) {
			break;
		}
		printf("\n %d", numb_er);
	}


	//using FOR (CONTINUE)
	for (int ii = 1; ii <= 5; ii++){
		if (ii == 3){
			continue;
		}
		printf("\n %d", ii);
	}

	//using WHILE (CONTINUE)
	while(1) {
		int numb_er1;
		printf("\n Enter a number: ");
		scanf("%d", &numb_er1);

		if (numb_er1 <= 0) {
			continue;
		}
		printf("\n %d", numb_er1);
	}


	// BREAK & CONTINUE
	while(1) {
		int numb_er2;
		printf("\n Enter a number: ");
		scanf("%d", &numb_er2);

		if (numb_er2 <= 0) {
			break;
		}
		if ((numb_er2 % 2) != 0) {
			continue;
		}

		printf("\n %d", numb_er2);
	}


	return 0;
}


/*
* FUNCTIONS
*/

/*
* Functions in C are the basic building blocks of a C program.
* A function is a set of statements enclosed within curly brackets ({}) that take inputs, do the computation, and provide the resultant output.
* You can call a function multiple times, thereby allowing reusability and modularity in C programming.
*/

/*
returnType functionName(){
	.............
	.............
}

example 
int get_number(){

	int number = 1;
	printf("%d", number); the output will be 1
	return 0;
}

returnType - Int 
functionName - get_number
*/

//function to greet
void greet(){
	printf("Good Morning");
}
int main() {

	greet(); //calling a function
	return 0;
}

void calculateSquare(int sq_number){ //sq_number - parameter
	int square;
	square = sq_number * sq_number;
	printf("\n Square of %d is %d", sq_number,sq_number);
int main() {

	calculateSquare(5); //calling a function & 5 acts as an arguments

return 0;
}

// FUNCTION PROTOTYPE
// a declaration of a function
// provides the information about the function names, parameters and return types
// however, it does include the body

int addNumbers(int num1, int num2); //function prototype

//calling the function before defining the function
int main() {
	int res_ult = addNumbers(8,9);
	printf("\n Result = %d", res_ult);

	return 0;
}

int addNumbers(int num1, int num2) {
		int sum = num1 + num2;
		return sum;
	}


//Return type
	int addNumbers(int num1, int num2) {
		int sum = num1 + num2;
		return sum;
	}
int main() {
	int res_ult = addNumbers(8,9);
	printf("\n Result = %d", res_ult);

	return 0;
}


/*
* VARIABLE SCOPE
*/

//lOCAL VARIABLE SCOPE - IN THE FUNCTION

//GLOBAL VARIABLE SCOPE - OUTSIDE THE FUNCTION




/*
* STANDARD LIBRARY FUNCTIONS
*/

/*
* C Standard library functions or simply C Library functions are inbuilt functions in C programming.
* The prototype and data definitions of these functions are present in their respective header files.
* To use these functions we need to include the header file in our program.
*
* Standard library functions allow the programmer to use the pre-existing codes available in the C compiler
* without the need for the user to define his own code by deriving the logic to perform certain basic functions.
*/


#include <math.h> //perfoms mathematical function
int main()
{
	int numm = 25;
	int nummb = 27;
	printf("\n Square root %.2lf", sqrt(numm));
	printf("\n Cube root %.2lf", cbrt(nummb));

	return 0;
}


/*
* RECURSION
Recursive function is a function that calls itself
*/

/*
void recurse(){
....
if (condition) {
	..........
} 
else {
	recurse();
}
....
}

int main(){
	....
	recursive();
	....
	return 0;
}

*/

int sum(int n);

int main(){
	int nummber, resultation;

	printf("\n Enter a positive integer: ");
	scanf("%d", &nummber);

	resultation = sum(nummber);
	printf("\n Sum = %d", resultation);

	return 0;
}

int sum(int n) {
	if (n != 0) {
		// sum() function calls itself
		return n + sum(n-1);
	}
	else {
		return n;
	}
}


/*
* ARRAYS
*/

// datatype arrayName[arraySize];
// example: int arrayAge[5];
int main(){

	//given elements/values
	int arrayAge[5] = {21, 29, 25, 32, 17};
	printf("\n %d", arrayAge[0]); // print 21
	printf("\n %d", arrayAge[1]); // print 29
	printf("\n %d", arrayAge[2]); // print 25
	printf("\n %d", arrayAge[3]); // print 21
	printf("\n %d", arrayAge[4]); // print 17
	
	//user enter the elements/values
	// loop & array

	int inputArrayAge[5];

	for (int aa = 0; aa <5; aa++) {
		printf("\n Enter the age values: ");
		scanf("%d", & inputArrayAge[aa]);
	}
	
	/*
	printf("\n Enter the First age: ");
	scanf("%d", &inputArrayAge[0]);
	printf("\n Enter the Second age: ");
	scanf("%d", &inputArrayAge[1]);
	printf("\n Enter the Third age: ");
	scanf("%d", &inputArrayAge[2]);
	printf("\n Enter the Forth age: ");
	scanf("%d", &inputArrayAge[3]);
	printf("\n Enter the Fifth age: ");
	scanf("%d", &inputArrayAge[4]);
	*/
	for (int aa = 0; aa < 5; aa++) {
		printf("\n %d", inputArrayAge[aa]); 
	}
	/*
	printf("\n %d", inputArrayAge[0]); 
	printf("\n %d", inputArrayAge[1]);
	printf("\n %d", inputArrayAge[2]);
	printf("\n %d", inputArrayAge[3]);
	printf("\n %d", inputArrayAge[4]);
	*/

	return 0;
}

/*
* MULTIDIMENSIONAL ARRAYS
*/

// int arr[2][3] = {{1, 3, 5} , {2, 4, 6}};
/*
for (int i = 0; i < 2; i++) {
	for (int j = 0; j < 3; j++) {
	printf("%d ", arr[i][j]);
	}
	printf("\n");
}

*/

/*
* STRINGS
*/

int main() {
	// strings are arrays of characters
	char str[] = "Programiz"; //stringname[index]
	printf("%s\n The string is: ", str);
	printf("\n indexes: %c", str[0]); // will print 'P'

	//User input
	char strName[20];
	printf("Enter your name: ");
	fgets(strName, sizeof(strName), stdin); //works as scanf but lets you get the full name
	printf("%s\n Your name is: ", strName); //string doesn't use &strName

	return 0;
}

/*
* STRING FUNCTIONS
*/

/*
1. puts() and gets()
2. strcat()
3. Function strlen()
4. Function strcpy()
5. Function strcmp()
6. Functions strlwr() / strupr()
7. Function strrev()
*/

#include <string.h>
//strlen() - find the length of a string

int main(){

	char language[] = "C Programming";
	printf("\n I'm using: %s language", language);
	printf("\n Length: %zu", strlen(language)); //the length of a string

	//Copy the string
	char OtherLanguage[strlen(language)];
	strcpy(OtherLanguage, language); //copy the string
	printf("\n the language is: %s", OtherLanguage);

	//join strings together
	char text[] = "Hey! ";
	char text2[] = "How Are You?";

	strcat(text, text2); //string concatination (Joining)
	printf("\n %s", text);

	//Strings comparison function 
	// Return 0 if strings are similar
	// Return other values if strings are different

	char text3[] = "abcd";
	char text4[] = "efgh";

	int output = strcmp(text3, text4); //strings comparison
	printf("\n %d", output);


	return 0;
}

/*
* POINTERS
*/

/*
A pointer can be used to store the memory address of other variables,
functions, or even other pointers.
The use of pointers allows low-level memory access, dynamic memory allocation,
and many other functionality in C.
*/

int main(){

	// int* ptr; - print the memory address
	// int *ptr; - print the variable
	/*
	int number;
	int* ptr;

	ptr = number; - Invalid way of code
	*ptr = &number; - Invalid way of code
	ptr = &number; - Correct way of coding
	*ptr = number; = Correct way of coding
	*/

	int myage = 25;
	printf("%p", &myage); // %p (Prints Memory Address) Format Specifier

	int* ptr = &myage;
	printf("\n %p", ptr);
	printf("\n Value: %d", *ptr); //accessing the value stored in the memory

	*ptr = 31; //changed the value in the memory
	printf("%d", myage); 

	return 0;
}

/*
* POINTERS AND ARRAYS
*/

int main(){

	int numbers[5] = {1, 3, 5, 7, 9};

	for (int inum = 0; inum < 5; inum++){
		printf("\n %d = %p", numbers[inum], &numbers[inum]);
		// modify
		printf("\n %d = %p", numbers[inum], &numbers[inum], numbers + inum);
		//Access array elements using pointers
		printf("\n %d = %p", *(numbers + inum), numbers + inum);
		

	}

	//Similarly to the modified printf
	printf("\nArray address: %p", numbers); // print the 1st array address
	printf("\nArray address: %p", numbers + 1); // print the 2nd array address
	printf("\nArray address: %p", numbers + 2); // print the 3rd array address
	printf("\nArray address: %p", numbers + 3); // print the 4th array address
	printf("\nArray address: %p", numbers + 4); // print the 5th array address

//change array elements using pointers
	*numbers = 2;
	*(numbers + 4);
	printf("\n First Element is: %d", *numbers);
	printf("\n Last Element is: %d", *(numbers + 4));

	return 0;
}

/*
POINTERS AND FUNCTIONS
*/


void findValue(int* num){
	*num = 39;
}

int* findSquare (int* sNumber) {
	int sq_uare = *sNumber * *sNumber;
	*sNumber = sq_uare;

	return sNumber;
}

int* addNumbers(int* numm1, int* numm2, int* summ) {
	*summ = *numm1 + *numm2;

	return summ;
}

int main(){

	int number = 21;
	findValue(&number)
	printf("\n Number %d", number);

	int sNumber = 21;
	int s_result = findSquare(&sNumber);
	printf("\n Result is %d", s_result);

	int nu_mber1 = 32;
	int nu_mber2 = 18;
	int s_um;

	int addResult = addNumbers(&nu_mber1, &nu_mber2, &s_um);
	printf("\n Sum is %d", *addResult);

	return 0;
}

/*
* STRUCT
*/

/*
A struct in the C programming language (and many derivatives)
is a composite data type (or record) declaration that defines a physically grouped list of variables under one name in a block of memory,
allowing the different variables to be accessed via a single pointer or by the struct declared name which returns the same address.
The struct data type can contain other data types so is used for mixed-data-type records such as a hard-drive directory entry (file length,
name, extension, physical address, etc.), or other mixed-type records (name, address, telephone, balance, etc.).

struct NameOfTheStruct {
	members of the struct

};
*/

struct Person {
	double salary;
	int hisAge;
}//person1, person2; //declaring variables but no need for struct under main function

typedef struct Person {
	double salary;
	int hisAge;
}person;

typedef struct Complex {
	double real;
	double imaginary;
} complex;

int main() {
	struct Person person1;
	struct Person person2;

	//for typedef function
	person person1; //no need for writing struct

	//OR

	struct Person person1 = {.hisAge = 27, .salary = 4327.78 };
	struct Person person2 = {.hisAge = 30, .salary = 6789.78 } ;

	person1.hisAge = 27;
	person1.salary = 4321.78;
	printf("\n Age of person1: %d", person1.hisAge);
	printf("\n Salary of person1: %.2lf", person1.salary);

	person2.hisAge = 30;
	person2.salary = 6789.78;
	printf("\n Age of person1: %d", person2.hisAge);
	printf("\n Salary of person1: %.2lf", person2.salary);

	//complex numbers
	complex c1 = {.real = 21.87, .imaginary = 30};
	complex c2 = {.real = 13,34, .imaginary = 112.23};

	complex compSum;
	compSum.real = c1.real + c2.real;
	compSum.imaginary = c1.imaginary + c2.imaginary;
	printf("\n Result is: %.2lf + %.2lfi", compSum.real, compSum.imaginary);


	return 0;
}


/*
* ENUMERATIONS (ENUMS)
*/

/*
Enumeration or Enum in C is a special kind of data type defined by the user.
It consists of constant integrals or integers that are given names by a user.
The use of enum in C to name the integer values makes the entire program easy to learn,
understand, and maintain by the same or even different programmer.
*/

/*
enum EnumName {
	enum constant
};
*/


enum Size {
	Small, // = 0
	Medium, // = 1
	Large, // = 2
	ExtraLarge // = 3
};

//change size
enum Size {
	Small = 27, 
	Medium = 31, 
	Large = 35, 
	ExtraLarge = 40 
};

int main(){

	enum Size ShoeSize;
	ShoeSize = Small;
	printf("\n %d", ShoeSize);

	//changed size
	enum Size ShoeSize1 = Small;
	enum Size ShoeSize2 = Medium;
	enum Size ShoeSize3 = Large;
	enum Size ShoeSize4 = ExtraLarge;
	printf("\n %d", ShoeSize1);
	printf("\n %d", ShoeSize2);
	printf("\n %d", ShoeSize3);
	printf("\n %d", ShoeSize4);

	return 0;

}


/*
* DYNAMIC MEMORY ALLOCATION
*/

/*
Allocation of memory at the time of execution (run time) is known as dynamic memory allocation.
The functions calloc() and malloc() support allocating of dynamic memory.
Dynamic allocation of memory space is done by using these functions when value is returned by
functions and assigned to pointer variables.
*/

int main() {

	int n = 10;

	int* ptr;
	ptr = (int*) malloc(n * sizeof(int)); //malloc function

	if (ptr == NULL) {
		printf("\n Memory cannot be allocated");
		return 0;
	}
	printf("\n Enter input values: ");
	for (int i = 0; i < n; ++i) {
		scanf("%d", ptr + i);
	}

	printf("\n Input Values: ");
	for (int i = 0; i < n; ++i) {
		printf("\n Value is: %d", *(ptr + i));
	}

	printf("\n Allocated Memory");
	for (int i = 0; i < n; ++i) {
		printf("\n %p", ptr + i);
	}
	n = 6;
	ptr = realloc(ptr, n * sizeof(int));
	printf("\n Newly Allocated Memory");
	for (int i = 0; i < n; ++i) {
		printf("\n %p", ptr + i);
	}


	free(ptr); //free function


	return 0;
}


/*
* FILE HANDLING
*/

/*
The process of file handling refers to how we store the available data or info in a file with the help of a program.
The C language stores all the data available in a program into a file with the help of file handling in C.
This data can be fetched/extracted from these files to work again in any program.
*/


int main() {

	//open the file
	//code this under main.c
	FILE* fptr;
	fptr = fopen("Format_Specifier.txt", "r"); //r - read mode

	if (fptr != NULL) {
		printf("\n File Open Successful");
	}
	else {
		printf("\n File Open Unsuccessful");
	}

	// Read file content
	FILE* fptr;
	fptr = fopen("Format_Specifier.txt", "r"); //r - read mode
	char content[1000];

	if (fptr != NULL) {
		fgets(content, 1000, fptr); //fgets read the first sentence
		printf("\n %s", content);
		while (fgets(content, 1000, fptr)) { //fgets read all content of the file
			printf("\n %s", content);
		}
	}
	else {
		printf("\n File Open Unsuccessful");


		// close the file
		fclose(fptr);

		//write content to our file
		//creates a new file called newFile.txt
		fptr = fopen("newFile.txt", "w"); //w - write mode
		fputs("C Programming is interesting", fptr);
		fputs("\n And I love it", fptr);
		fclose(fptr);

	return 0;
}

/*
* PREPROCESSOR AND MACROS
*/

/*
PREPROCESSOR
A C Preprocessor is just a text substitution tool and it instructs the compiler to do required pre-processing before the actual compilation.
We'll refer to the C Preprocessor as CPP. All preprocessor commands begin with a hash symbol (#).
e.g #include <stdio.h>
	#define PI 3.1415

MACROS
Macro in c is defined by the #define directive.
Macro is a name given to a piece of code, so whenever the compiler encounters a macro in a program,
it will replace it with the macro value.
*/

#define PI 3.1415 //PI is a Macro
#define circleArea(r) (PI * r * r)

int main( {

	//preprocessor
	double radius = 12.4;
	double area = PI * radius * radius;
	printf("\n %.2lf", area);

	//macros
	double radius = 12.4;
	double area = circleArea;
	printf("\n %.2lf", area);

	return 0;
})