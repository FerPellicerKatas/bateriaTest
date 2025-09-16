#include <cstdio>
#include <cstring>

// Test 10: Uso de funciones obsoletas

// Uso de la funcion gets
int funcion1() {
  char buffer[5];
  std::strcpy(buffer, "123456789");
  return buffer[1];
}

