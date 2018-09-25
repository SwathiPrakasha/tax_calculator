
/* This program is to calculate the tax based on the taxpayers  marital and family status.
 All th caluations are held at functions.cc source file. */

#include<iostream>
#include<iomanip>
#include<cmath>
#include "header.h"
#define W 12                          // defining the constant for width to be used in setw()
#define W2 30 

using std::cout;
using std::cin;
using std::endl;
using std::setprecision;
using std::fixed;
using std::setw;
using std::left;
using std::right;
using std::string; 


/* The Main function is takes a input and calls to functions required for the tax calcuations 
and prints the result obtained from the function, as wells prints the table */ 
    
    int main()
    {
      float income=0.0;
      float single_tax=0.0, joint_tax=0.0, separate_tax=0.0,head_tax=0.0;
    
      cout<<"Income ? ";
      cin>>income; 
   
      // error handling for a non positive integer   
      if (income <= 0)
       { 
         cout<<"Invalid Input"<<endl;
         cout<<"Tax applies only when income is greater than 0"<< endl;   
         return 1; 
       }


      // calls the functions for tax calculation and saves the functions returned values
      single_tax = singleTax(income);
      joint_tax = jointTax(income);
      separate_tax = separateTax(income);
      head_tax = headHouseTax(income);



      //below codes prints the exact tax for all 4 conditions
      cout<<"Exact tax"<<endl;
    
      cout<<left<<setw(W2)<<"Single"<<": " ;
      cout<<fixed<<setprecision(2)<<single_tax<<endl;

      cout<<left<<setw(W2)<<"Married filling jointly"<<": " ;
      cout<<fixed<<setprecision(2)<<joint_tax<<endl;
    
      cout<<left<<setw(W2)<<"Married filling separately"<<": " ;
      cout<<fixed<<setprecision(2)<<separate_tax<<endl;
    
      cout<<left<<setw(W2)<<"Head of household"<<": " ;
      cout<<fixed<<setprecision(2)<<head_tax<<endl<<endl;
  
       
      // codes to print the table start here
       int start_value = (income/1000);
       start_value *=  1000;
       int end_value = start_value + 1000 ; 

      // The if & for loop is to find the length of the highest possible income range
       int  i = end_value; 
       int len; 
       if (i >0)
	{
	for (len =0; i>0; len++)
          {
            i = i/10; 
          }
        }



      int len2 = (len*2) + 3; 
       
      // set 3 line of code prints the table header
      cout<<setw(len2)<<"Income"<<"|"<<setw(W)<<right<<" "<<setw(W)<<"Marrried"<<setw(W)<<"Married"<<setw(W)<<"Head"<<endl;
      cout<<setw(len2)<<left<<"Range"<<"|"<<setw(W)<<right<<" "<<setw(W)<<"Filing"<<setw(W)<<"Filing"<<setw(W)<<"of"<<endl;  
      cout<<setw(len2)<<" "<<"|"<<setw(W)<<"Single"<<setw(W)<<"Jointly"<<setw(W)<<"Separately"<<setw(W)<<"Household"<<endl;

      char c = '-';
      int n = (12*4) + len2 + 1; 
      cout<<string(n,c)<<endl;
       
      // while loop is used to print the table contents
       while (start_value < end_value)
        {
           cout<<setw(len)<<start_value<<" - ";
           int second_value =  start_value + 50;
           float value = start_value + 25 ;
 
           cout<<setw(len)<<second_value<<"|";  
    	
           int tax = round (singleTax(value));
           int joint_tax = round (jointTax(value));
           int sep_tax = round (separateTax(value));      
           int headHouse_tax = round (headHouseTax(value));

           cout<<right<<setw(W)<<fixed<<tax;
           cout<<right<<setw(W)<<fixed<<joint_tax;  
           cout<<right<<setw(W)<<fixed<<sep_tax;
           cout<<right<<setw(W)<<fixed<<headHouse_tax<<endl;
     
           start_value = second_value;
        }
        
       
           return 0;

    }
