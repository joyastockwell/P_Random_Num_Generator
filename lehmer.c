#include<stdio.h>

private double seed = 42;
private double m = 2147483647;
private double a = 48271;

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

long double schrage_lehmer_num_btwn_0_and_1() {



}

int main() {
  
  printf("Hi, welcome. We will be comparing the performance of various implementations of lehmer's PRNG.")
}
