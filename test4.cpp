// Test 4: Limite de arrays

// Escritura en posiciones que no existen en el array 
int funcion1()  {
  int array1[5] = {0, 0, 0, 0, 0};
  for (int i = 0; i<=5; i++){
    array1[i] = 1;
  }
  return array1[1];
}

// Lectura de posiciones que no existen en el array
int funcion2() {
  int array2[5] = {0, 0, 0, 0, 0};
  return array2[8];
}
