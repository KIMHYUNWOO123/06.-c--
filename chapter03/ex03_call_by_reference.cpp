#include <iostream>
#include <string>
using namespace std;

void swqp(int &x, int &y){
    int t;
    t = x;
    x = y;
    y = t;
}

int main(int argc, char const *argv[])
{
    int a = 100, b = 200;

    printf("a=%d, b=%d\n", a, b);
    swqp(a, b);
    printf("a=%d, b=%d\n", a, b);
    return 0;
}