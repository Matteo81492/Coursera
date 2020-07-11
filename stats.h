#include <stdio.h>

   /* void print_array(unsigned char *x); // prints all the current elements in the array
                // This function prints each element one by one thanks to a for loop, 
                // its input is an array of unsignand characters and it returns nothing. (void)
  
   unsigned char find_minimum(unsigned char *x); //finds the minimum value in an array
                //given an array of unsigned characters the function returns its minimum,
                //which is also an unsigned character.

   unsigned char find_maximum(unsigned char *x); //finds the maximum value in an array
                //given an array of unsigned characters the function returns its maximum,
                //which is also an unsigned character.
  
   void sort_array(unsigned char *x); //orders an array in a specific manner
                // given an array of unsigned characters the function will order its value
                //from biggest to smallest and return nothing. (void)

   unsigned char find_mean(unsigned char *x); //finds the mean value in an array;
               //given an array of unsigned characters the function returns its mean value
               //which is expressed as floating point number.
              
   unsigned char find_median(unsigned char *x); //finds the median value in an array;
               //given an array of unsigned characters the function returns its median value
               //which is expressed as a floating point number.

   void print_statistics(); //prints values relative to an array;
               //the function has no input, and no output, it simply prints the values for
               //maximum, minimum, mean and median previously calculated.*/
             
unsigned char minimum, maximum, median, mean;                                   //Variable declaration.
int loop, total, j, i, temp;
               
               
void print_array(unsigned char *x){

   for(loop = 0; loop < SIZE; loop++){                                          // selecting each element and then printing it
     printf("%u ", x[loop]);                                                    // on screen.
      
 }
}
 
unsigned char find_minimum(unsigned char *x){                                   
 minimum=x[0];
	 for(loop = 1; loop < SIZE; loop++)
	 {
        if (x[loop] < minimum)                                                  // comparing each element with the previous one,                                                  // in order to find the on screen;
          {                                                                     // in order to find the global minimum.
			 minimum = x[loop];
		  }
	  } 

return minimum;
}

unsigned char find_maximum(unsigned char *x){
 maximum=x[0];
	 for(loop = 0; loop < SIZE; loop++)
	 {
        if (x[loop] > maximum)                                                  // comparing each element with the previous one,
          {                                                                     //in order to find the global maximum.
			 maximum = x[loop];
		  }
	  } 

return maximum;
}

unsigned char find_mean(unsigned char *x){
  
	 for(loop = 0; loop < SIZE; loop++)
	 {
	    total+=x[loop];                                                         // adding each element together in order to find
	 }                                                                          // the total, and then divide it to get mean.
		 mean = total/SIZE;

return mean;
}
unsigned char find_median(unsigned char *x){

int j=0 , temp=0; i=0;
     
      for(i=0 ; i<SIZE ; i++)                                                   // The for loops allow to compare every element with.
                                                                                 // respect to each other.
       {
        for(j=0 ; j<SIZE ; j++)
        {
            if(x[j]>x[j+1])
            {
                temp        = x[j];                                             // before looking for the median, I sorted the values
                x[j]    = x[j+1];                                               // in an ascending order.
                x[j+1]  = temp;
            }
        }
    }


unsigned char median;
    
    if(SIZE%2 == 0)
    {
        median = (x[(SIZE-1)/2] + x[SIZE/2])/2;                                 // for an even number of elements the median is 
    }                                                                           // the sum of the two centre values, while in 
    else                                                                        // an odd sequence,it's simply the centre value.
    {
        median = x[SIZE/2];
    }
    
    return median;
}

void sort_array(unsigned char *x){
    int j=0 , temp=0; i=0;
     
      for(i=0 ; i<SIZE ; i++)
       {
        for(j=0 ; j<SIZE ; j++)
        {
            if(x[j]<x[j+1])                                                     // by checking for values smaller than the current
              {                                                                  // I arranged the sequence in a discending order. 
                temp    = x[j];
                x[j]    = x[j+1];
                x[j+1]  = temp;
            }
        }
    
    }
}

void print_statistics()
{
  printf("\n the minimum is :%u \n the maximum is :%u ", minimum, maximum);
  printf("\n the mean is : %u \n the median is : %u ", mean, median);
  
}