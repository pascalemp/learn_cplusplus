// #include <library> is known as a 'preprocessor directive'
// this tells the compiler to look for the contents of the
// given library in order to use it within our code.

#include <iostream>

// Below are different types of initialisation
// of variables in C++. An initialiser is a value that
// can be assigned to a variable. I.e. int height = 1; 1
// is the "initialiser."

int width; // No initialisation

int height = 1; // "Copy" initialisation - initialisation of
// value 1 is assigned to variable "height". This is good
// for simple data types, such as int, but is not as efficient
// for more complex data types.

int weight(3); // "Direct" (parenthesis) initialisation; this acts
// effectively the same for simple datatypes, but is far more
// efficient than copy initialisation for complex datatypes.

int depth{6}; // "List" (also Direct but with braces) initialisation;
// same as direct initialisation but with braces - this is sometimes used 
// for arrays.

// One major advantage to using (direct) list initialisation over copy
// initialisation is that compiler errors are generated when 
// values are initialised to a variable that do not obey the 
// strict type assigned to the variable.

// For example, by copy initialising a float to an int variable
// we will end up with a truncated integer, i.e 4.5 becomes 4:

int notanint = 4.5; // returns 4 - not the same value!

// Whereas, if we use (direct) list initialisation, we will end up
// with a compiler error or warning. This is known as disallowing
// "narrowing" conversations.

// Another common initialisation type is "value" initialisation, 
// otherwise known as "zero initialisation" whereby no value is
// given as an initialiser and instead just empty braces are used:

int new_width{}; // Zero initialisation since this variable set to 0.

// But when should zero initialisation be explicityly used (vs implicit
// as described above?)

// If we are immediately going to use the variable, then we must
// explicitly initialise it:
//int new_width{0};

// If we are going to immediately replace the variable value, then
// we can initialise it implicitly:
//int new_width;
//new_width = 10;

int main(){

    std::cout << "Hello World!";
    std::getchar();
    return 0;

}