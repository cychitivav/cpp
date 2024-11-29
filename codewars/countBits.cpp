unsigned int countBits(unsigned long long n){
  unsigned short counter = 0;
  
  while (n) {
    counter += n & 1;
    n = n >> 1;
  }
  return counter;
}