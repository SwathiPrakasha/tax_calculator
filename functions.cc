/****************************
* ZID     : Z1817929        *
* Name    : Swathi Prakasha *
* Course  : CSCI 689        *
* Section : 1               *
* Assign  : 2               *
* duedate : 02/08/2017      *
* TA Name : Nithin Devang   *
****************************/



// This source file only collection of the functions used in the main program, the file has 4 functions.
 

/* This function below calculates the Tax for "Single Filing", 
   takes the income as a argument and returns the tax */   
    float singleTax(float income)
     {

       float tax=0.0 ;

       if (income > 0.0 && income <= 9275.00)
            tax = ((0.1)*income) ;
 
       else if (income > 9275.00 && income <= 37650.00)
               tax = (927.50 +((0.15)*(income - 9275.00)));
  
       else if (income > 37650.00 && income <= 91150.00)
               tax = (5183.75 +((0.25)*(income -37650.00)));
  
       else if (income > 91150.00 && income < 190150.00)
               tax = (18558.75 +((0.28)*(income -91150.00)));
 
       else if (income > 190150.00 && income < 413350.00)
                tax =(46278.78 +((0.33)*(income - 190150.00)));
 
       else if (income > 413350.00 && income < 415050.00)
               tax =(119934.75 +((0.35)*(income - 413350.00)));
  
       else if (income > 415050.00)
               tax =(120529.75 +((0.396)*(income - 415050.00)));
 
   
          return tax;
 
      }



/*This function calcuates the tax for "Married Filing Jointly or Qualifying Widow(er), 
 the function takes income as argument and returns the tax calculated */
    float jointTax(float income)
     {

       float tax=0.0 ;

       if (income > 0.0 && income <= 18550.00)
            tax = ((0.1)*income) ;
  
       else  if (income > 18550.00 && income <= 75300.00)
                 tax = (1855.00 +((0.15)*(income - 18550.00)));

       else  if (income > 75300.00 && income <= 151900.00)
                 tax = (10367.50 + ((0.25)*(income -75300.00)));

       else if (income > 151900.00 && income < 231450.00)
                tax = (29517.50 +((0.28)*(income - 151900.00)));
  
       else if (income > 231450.00 && income < 413350.00)
                tax =(51791.50 +((0.33)*(income - 231450.00)));

       else if (income > 413350.00 && income < 466950.00)
                tax =(111818.50 +((0.35)*(income - 413350.00)));

       else  if (income > 466950.00)
                 tax =(130578.50 +((0.396)*(income - 466950.00)));

       return tax; 
      } 

   


/*This below function caluclates the Tax for "Married Filing Separately", 
 the function takes the income as argument and returns the calculated tax*/
    float separateTax(float income)
      {

         float tax=0.0 ;

         if (income > 0.0 && income <= 9275.00)
                   tax = ((0.1)*income) ;

         else  if (income > 9275.00 && income <= 37650.00)
                   tax = (927.50 +((0.15)*(income - 9275.00)));
 
         else  if (income > 37650.00 && income <= 75950.00)
                  tax = (5183.75 +((0.25)*(income -37650.00)));
  
         else  if (income > 75950.00 && income < 115725.00)
                   tax = (14758.75 +((0.28)*(income - 75950.00)));
 
         else  if (income > 115725.00 && income < 206675.00)
 		   tax =(25895.75 +((0.33)*(income - 115725.00)));
   
         else  if (income > 206675.00 && income < 233475.00)
                   tax =(55909.25 +((0.35)*(income - 206675.00)));
         
         else  if (income > 233475.00)
                   tax =(65289.25 +((0.396)*(income - 233475.00)));
  

      return tax;
 
     }



/*This function below calculates the Tax for "Head of Household"
  the function takes the income as argument and retuns the calculated tax */
    float headHouseTax(float income)
      {

         float tax=0.0 ;

         if (income > 0.0 && income <= 13250.00)
                   tax = ((0.1)*income) ;

         else  if (income > 13250.00 && income <= 50400.00)
                   tax = (1325.00 +((0.15)*(income - 13250.00)));
 
         else  if (income > 50400.00 && income <= 130150.00)
                  tax = (6897.50 +((0.25)*(income - 50400.00)));
  
         else  if (income > 130150.00 && income < 210800.00)
                   tax = (26835.00 + ((0.28)*(income - 130150.00)));
 
         else  if (income > 210800.00 && income < 413350.00)
 		   tax =(49417.00 +((0.33)*(income - 210800.00)));
  
         else  if (income > 413350.00 && income < 441000.00)
                   tax =(116258.00 +((0.35)*(income - 413350.00)));
         
         else  if (income > 441000.00)
                   tax =(125936.75 +((0.396)*(income - 415050.00)));
  

      return tax;
 
     }
