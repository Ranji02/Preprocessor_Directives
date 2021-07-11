/*Preprocessing is carried out before the compilation process and the 
special features are preprocessed. As a result, an expanded C++ program 
is obtained and then it is passed to the compiler.

Note that in C++ all preprocessor directives begin with a “#” symbol. 
The moment the preprocessor (part of the compiler) encounters the # symbol, 
the information following the # symbol is preprocessed before passing the program to the compiler.
 There are 4 main types of preprocessor directives:  
        1. Macros
        2. File Inclusion
        3. Conditional Compilation
        4. Other directives */
/* Inclusion Directives:
#include: specifies the files to be included, especially header-files

Macro Definition Directives:
#define: define a macro substitution
#undef: It is used for undefining a macro
*/

#include<bits/stdc++.h>
/* 2. File Inclusion - tells the compiler to include a file in the source code program. 
Two types of files can be included by the user in the program:  
    1. Header File or Standard files - These files contains definition of pre-defined functions 
    like printf(), scanf() etc. These files must be included for working with these functions. 
    Different function are declared in different header files. 
    For example standard I/O functions are in ‘iostream’ file whereas functions which perform 
    string operations are in ‘string’ file.       SYNTAX : #include< file_name >
        where file_name is the name of file to be included. 
        The ‘<‘ and ‘>’ brackets tells the compiler to look for the file in standard directory. 
    
    2. user defined files - When a program becomes very large, it is good practice to divide 
    it into smaller files and include whenever needed. These types of files are user defined files. 
    These files can be included as:             SYNTAX  :  #include"filename"

    #include< file_name > - look for the file in standard directory. 
    #include "filename"   - look for the file in local directory. 

*/
using namespace std;

    //   MACRO   //
    // syntax : #define macro-name replacement-text  //
#define SIZE 20
// #define - macro definition
// SIZE - macro Template
// 20 - macro Expansion

/* Note: There is no semi-colon(‘;’) at the end of macro definition. 
Macro definitions do not need a semi-colon to end.because this is not a statement in C++. */

#define RADIUS 5

#define AREA(r) (M_PI * pow(r,2))
/* Macros with arguments: We can also pass arguments to macros. 
Macros defined with arguments works similarly as functions. 
Let us understand this with a program:  */

/* #undef AREA  after the integer declarations, then the program 
will give a compilation error.*/
//#undef AREA

int main()
{
    cout <<SIZE<<endl;

    float area = AREA(RADIUS);
    cout << "Area of Circle :" << area;

    return 0;



}