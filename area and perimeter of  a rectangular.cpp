#include<stdio.h>
int main()
{

    int len,breath,perimeter,area;

    printf("Enter the length of the rectangular:  ");
    scanf("%d",&len);




    printf("Enter the breath of a rectangular: ");
    scanf("%d",&breath);


    perimeter = 2*(len + breath);

    printf("The perimeter of the rectangular is : %d\n" ,perimeter);

    area = len*breath;

    printf("The area of the rectangular is : %d" ,area);


    return 0;
}
