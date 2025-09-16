#include <stdexcept>
// Test 6: Mal uso de excepciones

// No utilizar try/catch
void excepcion1(){
  throw std::runtime_error("Mal uso");
}

// Promesa de no lanzar excepciones no cumpplida
void excepcion2() noexcept {
  throw std::runtime_error("Parada del programa");
}
