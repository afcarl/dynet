#include "cnn/dim.h"

#include <iostream>

using namespace std;

namespace cnn {

ostream& operator<<(ostream& os, const Dim& d) {
  os << '{';
  for (unsigned i = 0; i < d.nd; ++i) {
    if (i) os << ',';
    os << d.d[i];
  }
  return os << '}';
}

} // namespace cnn

