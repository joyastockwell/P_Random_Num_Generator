#include<stdio.h>

private seed = 42;
private double m = 2147483647;
// This is the recommended a value from Communications of the ACM, but its square is 2330089441
// Since 2330089441 > m, we cannot use it with Schrage's method
private double a = 48271;
private double schrage_a = 16807;

float float_lehmer_num_btwn_0_and_1() {
  
  //X_(n + 1) = (a * X_n) mod m
  double un_moded = seed * a;
  seed = un_moded % m;
  return seed;
  
}

double double_lehmer_num_btwn_0_and_1() {
  
  //X_(n + 1) = (a * X_n) mod m
  double un_moded = seed * a;
  seed = un_moded % m;
  return seed;
  
}


long double long_double_lehmer_num_btwn_0_and_1() {
  
  //X_(n + 1) = (a * X_n) mod m
  long double un_moded = seed * a;
  seed = un_moded % m;
  return seed;
  
}

float schrage_lehmer_num_btwn_0_and_1() {

   return 0;

}

int main() {
  
  printf("Hi, welcome. We will be comparing the performance of various implementations of Lehmer's PRNG.\n");
  printf("size of float: ");
  printf(sizeof(float));
  printf("\n");;
  printf("size of double: ");
  printf(sizeof(double));
  printf("\n");;
  printf("size of long double: ");
  printf(sizeof(long double));
  printf("\n");
  
  
}
