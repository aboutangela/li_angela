#include <stdio.h>

// problem 1: multiples of 3 and 5
int p1(){
  int sum = 0;
  for( int x = 1; x < 1000; x++){
    if( x % 3 == 0 || x % 5 == 0)
      sum += x;
  }
  return sum;
}

// problem 5: smallest multiple
int p5(){
  int x,factor = 0;
  while( factor == 0){
    for( int i = 1; i <= 20; i++){
      if( x % i != 0){
        x++;
        factor = 0;
        break;
        }
      factor = 1;
      }
    }
  return x;
}

// problem 6: sum square difference
int p6(){
  int sum = 0;
  for( int n = 1; n <= 100; n++){
    sum += n * n;
  }
  int square = 0;
  for( int n = 1; n <= 100; n++){
    square += n;
  }
  square *= square;
  return square - sum;
}


int main(){
  printf("problem 1: %d \n", p1());
  printf("problem 5: %d \n", p5());
  printf("problem 6: %d \n", p6());
}
