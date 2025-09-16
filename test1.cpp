// Test 1: Variables no inicializadas

// Uso de variable no inicializada para hacer una operacion aritmetica
int funcion1() {
  int variable1;
  return variable1 + 1;
}

// Uso de variable no inicializada como indice de array
int funcion2() {
  int variable2;
  int array[2] = {1, 2};
  return array[variable2];
}
