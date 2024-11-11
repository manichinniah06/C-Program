#include <stdio.h>
int area1(int a);
int area2(int x, int y);
float area3(float a);

void main()
{
    printf("Area of a square:%d\n", area1(5));
    printf("Area of a square:%d\n", area2(5, 6));
    printf("Area of a square:%f", area3(5.0));
}
int area1(int a)
{
    return a * a;
}
int area2(int x, int y)
{
    return x * y;
}
float area3(float a)
{
    return 3.14 * a * a;
}