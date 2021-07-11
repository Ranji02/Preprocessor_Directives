// Conditional Compilation Directives //

//#if(expression)   #elif(expression)   #endif   #ifdef(identifier)   #ifndef(identifier)   #else

/*  #if: It tests a compile-time condition
    #elif
    #endif: It specifies the end of #if
    #ifdef: It is used to test for macro definition
    #ifndef: It tests whether a macro is not defined
    #else: It provides an alternative option when #if fails*/

#include <bits/stdc++.h>

using namespace std;

#define ONE 1

#define ISODD(num) ((num%2==0) ? 0 : 1)

int main()
{

    #if defined(ONE)   //Keyword
        cout << "True"<<endl;
    #endif
    
    #if !(defined(ONE)==defined(ONE))
        cout << "False"<<endl;
    #elif (defined(ONE)!=defined(ONE))
        cout << "False"<<endl;
    #else
        cout << "True"<<endl;
    #endif

    /* #ifdef identifier statement is equivalent to #if 1 when identifier has been defined. 
    It's equivalent to #if 0 when identifier hasn't been defined, 
    has been undefined by the #undef directive. 
    These directives check only for the presence or absence of identifiers defined with #define, 
    not for identifiers declared in the C or C++ source code. */
    
    #ifdef ISODD
        cout <<"This Function defined" <<endl;
    #else 
        cout << "Not Defined"<<endl;
    #endif

    #undef ISODD
    
    #ifdef ISODD
        cout <<"This Function defined" <<endl;
    #else 
        cout <<"Not Defined"<<endl;
    #endif

/*  #ifndef checks whether HEADERFILE_H is not declared.
    #define will declare HEADERFILE_H.
    #endif is to know the scope of #ifndef i.e end of #ifndef */
    #ifndef K
        cout<<"Not Exist..."<<endl;
    #else
        cout<<"Already Exist...Value of K is "<<K<<endl;
    #endif

    #define K 5

    #ifndef K
        cout<<"Not Exist..."<<endl;
    #else
        cout<<"Already Exist...Value of K is "<<K<<endl;
    #endif

    /* ifdef means "if the following is defined" 
       ifndef means "if the following is not defined" 
       
        #define one 0
        +--- #ifdef one
        |    printf("one is defined ");     // Everything in here is included.
        | +- #ifndef one
        | |  printf("one is not defined "); // Everything in here is excluded.
        | |  :
        | +- #endif
        |    :                              // Everything in here is included again.
        +--- #endif
    */

    /*cout <<true/false;
    warning: division by zero [-Wdiv-by-zero]
    cout <<true/false;
    */

    return 0;
}