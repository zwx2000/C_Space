#include <stdio.h>
#include <math.h>

//[100, 200]
//rand()%100  0-99  +100 100-199
//rand()%101  0-100 +100

int main()
{
    srand(time(NULL));
    rand()%101 +100;




    return 0;
}
