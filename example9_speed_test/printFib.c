extern "C" {

int fibonacci(int n) {
  return n < 1 ? 0 : n <= 2 ? 1 : fibonacci(n - 1) + fibonacci(n - 2);
}

}
