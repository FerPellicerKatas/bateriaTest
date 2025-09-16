// Test 12: Uso de punteros inteligentes

// Uso de punteros básicos
int funcion1(size_t mem, bool booleano) {
  char* buffer = new char[mem];
  
  if(booleano){
    return 0;
  }
  
  delete[] buffer;
  return 0;
}
