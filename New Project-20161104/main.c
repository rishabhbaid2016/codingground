#include <stdio.h>

int main()
{
    int met;
    float km,yard,mile;
    scanf("%d", &met);
    km=met*0.001;
    yard=met*1.094;
    mile=0.0006215*met;
    printf("%.4f %.4f %.4f",km,yard,mile);
    return 0;
}

