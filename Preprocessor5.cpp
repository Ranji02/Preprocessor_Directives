/* 
Other Directives:
#error
#line: Supplies a line number for compiler messages
#pragma: It specifies implementation-defined instructions to the compiler  */

/* The directive ‘#error’ causes the preprocessor to report a fatal error. 
The tokens forming the rest of the line following ‘#error’ are used as the error message. 

You might use ‘#warning’ in obsolete header files, with a message directing the 
user to the header file which should be used instead.*/

#include<bits/stdc++.h>

#line 5 
/* #line
The #line directive is used to change the value of the __LINE__ and __FILE__ macros. 
(Note: the filename is optional.) The __LINE__ and __FILE__ macros represent the line 
being read and the file being read.

	#line 50 "myfile.cpp"

This will set the __LINE__ to 50 and __FILE__ to myfile.cpp */

//Pragma
int display();
#pragma startup display
#pragma exit display

using namespace std;

#define ONE 1

int main()
{   
/* 
    Preprocessor5.cpp:16:3: error: #error Compilation Error: A C++ compiler is required to compile this program!
16 |  #error Compilation Error: A C++ compiler is required to compile this program!
   |   ^~~~~
PS E:\AJR\C++\Array> cd "e:\AJR\C++\Array\" ; if ($?) { g++ Preprocessor5.cpp -o Preprocessor5 } ; if ($?) { .\Preprocessor5 }       
Preprocessor5.cpp:16:3: warning: #warning Compilation Error: A C++ compiler is required to compile this program! [-Wcpp]
16 |  #warning Compilation Error: A C++ compiler is required to compile this program!
       ^~~~~~~
TWOTHREE 
*/
    #ifdef ONE
    //#error Compilation Error: A C++ compiler is required to compile this program!
	#warning Compilation Error: A C++ compiler is required to compile this program!
	#endif
    #ifndef ONE
	#error Compilation Error: A C++ compiler is required to compile this program!
	#endif
    cout << "TWOTHREE"<<endl;

    return 0;
}

int display() {
   printf("\nI am in display function");
   return 0;
}