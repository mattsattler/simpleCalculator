#include <iostream>
 
using namespace std;
 
int main() {
   
   
 
   int a, b, result;
   char op;
   char Yes;
   char No;
  
   cout << "This program is designed to function as a simple calculator." << endl;
   cout << "You may add, subtract, multiply or divide." << endl;
 
   cout << "Enter two integers: ";
   
   //capture integers

   cin >> a >> b;
 
   cout << "Enter the operation you wish to use. (+, -, *, or /): ";
   cin >> op;
    
   switch (op)
   {
       case '+':
         result = a + b;
         break;
      
       case '-':
         result = a - b;
          break;
 
       case '*':
           result = a * b;
           break;
       
        // Accommodate for dividing by zero.
      
         case '/':
         if (b != 0 ) {
           result = a / b;
           break;}
         else {
           cout << "ERROR: Cannot divide by 0." << endl;
           break;
         }
 
   {
       if ((op == '/') && (b == 0))
       ;
     else
         cout << a  << ' ' << op << ' ' << b << " = " << result << endl;
  
       if ((op != '/') || (b !=0))
         cout << a  << ' ' << op << ' ' << b << " = " << result << endl;
   }
 
        

 
   }

}


