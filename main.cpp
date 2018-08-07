#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 3; //1
    printf("1) a vale: %i\n", a);
    int i = a + 3; //2
    printf("2) i vale: %i\n", i);
    float i1 = i + 1; //3
    printf("3) i vale: %.2f\n", i1);
    int b = a + i1; //4 e 5
    printf("4 e 5) b vale: %i\n", b);
    int a1 = 2 * b + i1; //6
    printf("6) a vale: %i\n", a1);
    float a2 = 2*(b + i1); //7
    printf("7) a vale: %.2f\n", a2);
    int delta = b * b - 4*a2*i1; //8
    printf("8) delta vale: %i\n", delta);
    float b1 = a2/i1; //9
    printf("9) b vale: %.4f\n", b1);
    float b2 = 2 + a2/i1; //10 e 11
    printf("10 e 11) b vale: %.4f\n", b2);
    float c = a2 + b2/2; //12
    printf("12) c vale: %.4f\n", c);
    float c1 = (a2 + b2)/2; //13
    printf("13) c vale: %.4f\n", c1);
    float z = a2*(b2/2 + ((c1+1)/2)); //14
    printf("14) z vale: %.4f\n", z);


    return 0;
}
