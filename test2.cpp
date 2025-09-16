// Test 2: Fugas de memoria

// Asignacion de punteros sin liberacion
int funcion1()  {
  int* variable1 = new int(1);
  int variable2 = *variable1;
  return variable2;
}

// Perdida del puntero inicial sin liberacion
int funcion2() {
  int* variable1 = new int(1);
  variable1 = new int(2);
  return *variable1;
}
