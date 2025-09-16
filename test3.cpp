// Test 3: Punteros colgantes

// Se libera la memoria del puntero, y se devuelve igualmente
int funcion1(){
  int* variable1 = new int(1);
  delete variable1;
  return *variable1;
}

