// Test 5: Uso incorrecto de "const"

// Modificar variables cuando se indica lo contrario
struct estructura1 {
  int variable1{0};
  void metodo() const {
    ++variable1;
  }
};
