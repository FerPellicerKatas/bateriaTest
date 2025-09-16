#include <cstring>
// Test 9: Desbordamiento de buffer

// Copiar en bufer mas bytes de los permitidos
int funcion1() {
  char buffer[5];
  std::strcpy(buffer, "123456789");
  return buffer[1];
}
