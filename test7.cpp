// Test 7: División por cero

// Posible division entre 0 por una variable booleana
int funcion1(bool booleano) {
  int variable1 = 1;
  if (booleano == true){
    variable1 = 0;
  }
  
  return 1/variable1;
}
