#include <stdio.h>
#include <assert.h>

int qualityPoints(int); // function prtotype
void testQualityPoints(void);

int main(void)
{
    testQualityPoints();
    printf("Point = %d\n", qualityPoints(-50));
}

int qualityPoints(int num)
{
    if(num >= 90 && num <= 100)
        return 4;
    else if(num >= 80 && num <= 89)
        return 3;
    else if(num>= 70 && num <= 79)
        return 2;
    else if(num >= 60 && num <= 69)
        return 1;
    else if(num < 60 && num >= 0)
        return 0;
    else
        printf("invalid input\n");
        return -1;
}

void testQualityPoints(void)
{
    assert(qualityPoints(100) == 4);
    assert(qualityPoints(90) == 4);
    assert(qualityPoints(89) == 3);
    assert(qualityPoints(80) == 3);
    assert(qualityPoints(79) == 2);
    assert(qualityPoints(70) == 2);
    assert(qualityPoints(69) == 1);
    assert(qualityPoints(60) == 1);
    assert(qualityPoints(59) == 0);

}
