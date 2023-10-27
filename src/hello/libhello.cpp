#include <cstdio>
#include <hello/hello.h>

int factorial(int n) {
    if (n == 0) return 1;
    return n * factorial(n - 1);
}
void printHello() { std::puts("Hello world."); }

