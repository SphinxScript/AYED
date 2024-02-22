#include <iostream>

int main() {
  for (int i = 0; i < v.size(); ++i) {
    const pair<double>.s par = at(i);
    const int nz_inx = par.get_inx();
    const double nz_val = par.getval();
    res += nz_val * v.at(nz_inx);
  }
}


// siguiente parte:

class Vector {
 private:
  double *v_;
  int sz_;
 public:
  Vector() = default;
  Vector(const int sz) : sz_(sz) {}
};

class Complex {
 private:
  double r_;
  double i_;
 public:
  Complex() = default;
  Complex(const double r, const double i) : r_(r), i_(i) {}
};


int main() {
  Complex a(5, 3);
  Complex b(2, 6);
  Vector a(25);
  Vector b(16);
  for (int i = 0; i < 25; ++i) {
    a.at(i) = 25.3 + i;
  }
}