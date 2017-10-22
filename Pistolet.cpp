#include<iostream>
#include<math.h>
#include<stdlib.h>
#include<time.h>

using namespace std;
  const int R1 = 500;
  const int R2 = 60;
  
  
void DisplayMass ( char Mass [ ] [ R2 ] , int R1, int R2 );


int main()
{    

   
  
   char Mass1 [ R1 ] [ R2 ] = {};
   char Mass2 [ R1 ] [ R2 ] = {};
   char Mass3 [ R1 ] [ R2 ] = {};
   char Mass4 [ R1 ] [ R2 ] = {};
   
   char MassEmp [ R1 ] [ R2 ] = {};
   
   char sym1 = '|';
   char sym2 = ' ';
   char symEmp = ' ';
 
 // иниц масс 1
	for ( int c1 = 0; c1 < R1; c1++){
 	  for ( int c2 = 0; c2 < R2/4;  c2++){
 	  	   Mass1 [ c1 ] [ c2 ] = sym1;
 	  	     Mass2 [ c1 ] [ c2 ] = sym2; 
 	  	      Mass3 [ c1 ] [ c2 ] = sym2;
 	  	      Mass4 [ c1 ] [ c2 ] = sym2;
 	  	     MassEmp [ c1 ] [ c2 ] = symEmp;
 	  }
 	  
 	  for ( int c2 = R2/4 ; c2 < R2/2; c2++){
 	  	   Mass1 [ c1 ] [ c2 ] = sym2;
 	  	   Mass2 [ c1 ] [ c2 ] = sym1;
 	  	    Mass3 [ c1 ] [ c2 ] = sym2;
 	  	    Mass4 [ c1 ] [ c2 ] = sym2;
 	  	   MassEmp [ c1 ] [ c2 ] = symEmp;
 	  }
 	  
 	  
 	  for ( int c2 = R2/2; c2 < R2*3/4; c2++){
 	  	   Mass1 [ c1 ] [ c2 ] = sym2;
 	  	   Mass2 [ c1 ] [ c2 ] = sym2;
 	  	    Mass3 [ c1 ] [ c2 ] = sym1;
 	  	    Mass4 [ c1 ] [ c2 ] = sym2;
 	  	   MassEmp [ c1 ] [ c2 ] = symEmp;
 	  }
 	  
 	   for ( int c2 = R2*3/4; c2 < R2; c2++){
 	  	   Mass1 [ c1 ] [ c2 ] = sym2;
 	  	   Mass2 [ c1 ] [ c2 ] = sym2;
 	  	    Mass3 [ c1 ] [ c2 ] = sym2;
 	  	    Mass4 [ c1 ] [ c2 ] = sym1;
 	  	   MassEmp [ c1 ] [ c2 ] = symEmp;
 	  }
 }
 



// вывод масс
while ( true ) {
   DisplayMass (Mass1, R1, R2);
   
   DisplayMass (MassEmp, R1, R2);
   
   DisplayMass (Mass2, R1, R2);
   
   DisplayMass (MassEmp, R1, R2);
   
   DisplayMass (Mass3, R1, R2);
   
   DisplayMass (MassEmp, R1, R2);
   
   DisplayMass (Mass4, R1, R2);
   
   DisplayMass (MassEmp, R1, R2);
   
   DisplayMass (Mass3, R1, R2);
   
   DisplayMass (MassEmp, R1, R2);
   
   DisplayMass (Mass2, R1, R2);
   
   DisplayMass (MassEmp, R1, R2);
   
}


        return 0;
}

void DisplayMass ( char Mass [ ] [ R2 ],  int R1, int R2 ) {
	
	for ( int c1 = 0; c1 < R1; c1++){
 	  for ( int c2 = 0; c2 < R2; c2++){
 	  	  cout << Mass [ c1 ] [ c2 ];
 	  }
 	  cout<< endl;
 }
}
