int sum(int num) {
  //return sum
  static int sum;
  
  sum += num;
  
  return sum;
}

int main() {
  printf("%d ", sum(25));
  printf("%d ", sum(15));
  printf("%d ", sum(30));
  
  return 0;
}
