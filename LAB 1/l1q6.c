// Volume and Surface Area of sphere
#include <stdio.h>

int main()
{
    int radius, area, volume;
    printf("Enter radius: \n");
    scanf("%d", &radius);
    area = 4 * 3.14 * radius * radius;
    volume = (4 * 3.14 * radius * radius * radius) / 3;
    printf("Area is %d and Volume is %d\n", area, volume);
    return 0;
}
// end main
