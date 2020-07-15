private double seed = 42;
private double m = 2147483647;
private double a = 48271;
double lehmer_num_btwn_0_and_1() {
  
  //X_(n + 1) = (a * X_n) mod m
  seed = (seed * a) % m;
  return seed;
  
}
