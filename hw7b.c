/*
  Felicia Villalobos
  hw7b.c
  gcc -o hw7b hw7b.c
  ./hw7b
*/

#include <stdio.h>
#include <stdlib.h>
#define SIZE 10


int main (int argc, char *argv[] ){
  int i,j,k, sum,f,p;
  int Pascal[15];
  Pascal[0] = 1;
 
  //get number of rows from user
  if ( argc <= 1 ){
    printf ( "Syntax %s N/n", argv[0] );
    printf ( "where N is the number of rows to be printed\n");
    return 0;
  }
  int N = atoi( argv[1] );
  printf( "command line parameter = %d\n", N);

  // populate the "pascal" array 
  for( i = 0; i <= N; i++){
    Pascal[i+1] = 0;   
    }

   for (p = 0; p <= N-1; p++) {
    printf(" %5d", Pascal[p]);
  }
   printf("\n");
 
   //calculate the sums of pascal for n generations
  for ( j = 0; j <  N-1; j++ ){
    for ( k = N; k >=1; k--) {
      sum = Pascal[k]+Pascal[k-1];
      Pascal[k] = sum; 
     } //k loop 
  for ( f = 0; f <= N-1; f++){
    printf( " %5d", Pascal[f]);

 }// f loop 
  printf("\n");

}// j loop 
 
  return 0; 

} //close main 
