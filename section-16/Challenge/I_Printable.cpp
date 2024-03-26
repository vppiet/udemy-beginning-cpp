//
// Created by Ville on 26.3.2024.
//

#include "I_Printable.h"

std::ostream &operator<<(std::ostream &os, const I_Printable &obj) {
  obj.print(os);
  return os;
}
