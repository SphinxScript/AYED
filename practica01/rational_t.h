/**
 * AUTOR: Ricardo David Rodríguez Pane
 * FECHA: 14/02/2024
 * EMAIL: alu0101643137@ull.edu.es
 * VERSION: 1.0
 * ASIGNATURA:
 * PRÁCTICA Nº: 1
*/

#pragma once

#include <iostream>
#include <cassert>
#include <cmath>

#define EPSILON 1e-6

using namespace std;

class rational_t
{
 public:
  rational_t(const int = 0, const int = 1);
  ~rational_t() {}
  // getters
  int get_num() const;
  int get_den() const;  
  // setters
  void set_num(const int);
  void set_den(const int);
  // metodo para obtener el valor;
  double value(void) const;

  // FASE II
  bool is_equal(const rational_t&, const double precision = EPSILON) const;
  bool is_greater(const rational_t&, const double precision = EPSILON) const;
  bool is_less(const rational_t&, const double precision = EPSILON) const;
  
  // FASE III
  rational_t add(const rational_t&);
  rational_t substract(const rational_t&);
  rational_t multiply(const rational_t&);
  rational_t divide(const rational_t&);
  
  void write(ostream& = cout) const;
  void read(istream& = cin);
  
 private:
  int num_;
  int den_;
};