//global double var accessible only inside this file
static double y = 1.1;

//global float var accessible within in entire program
float z = 1.2;

//function only accessible within this file
static int add(int num1, int num2) {
  int total = num1 + num2;
  return total;
}

int main() {
  
  // int variable with block scope and temp storage
  int x = 0;
  
  //float local var with permanent storage
  static float a = 2.0;
  
  //register int variable
  register int b = 0;
   
  return 0;
}
