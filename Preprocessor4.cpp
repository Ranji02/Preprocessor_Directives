/* The #(Stringizing operator)  & ##(Token-pasting operator) Operators
The # and ## operators are two special operators that are respectively used to convert 
a text token into a string to be displayed and concatenate two tokens. */

#include<bits/stdc++.h>

using namespace std;

#define mkstr(val) #val

#define concat(a,b) \
    a##b

int main()
{
    /* This operator causes the corresponding actual argument to be enclosed 
    in double quotation marks. The # operator, which is generally called 
    the stringize operator, turns the argument it precedes into a quoted string. */
    
    /* The following preprocessor turns the line cout <<mkstr(This is Ranjani) 
    into cout <<"This is Ranjani"  */
    cout <<mkstr(This is Ranjani)<<endl;

    /* ## - Allows tokens used as actual arguments to be concatenated to form other tokens.
       It is often useful to merge two tokens into one while expanding macros. 
       This is called token pasting or token concatenation. 
       The ‘##’ pre-processing operator performs token pasting. 
       When a macro is expanded, the two tokens on either side of each ‘##’ operator 
       are combined into a single token, which then replaces the ‘##’ and the two original 
       tokens in the macro expansion.*/

    /*The preprocessor transforms cout <<concat(te,mp) into cout <<temp */
    int temp = 10;
    cout <<concat(te,mp)<<endl;

}
