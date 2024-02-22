#include <iostream>

int main() {
  for (int i = 0; i < v.size(); ++i) {
    const pair<double>.s par = at(i);
    const int nz_inx = par.get_inx();
    const double nz_val = par.getval();
    res += nz_val * v.at(nz_inx);
  }
}