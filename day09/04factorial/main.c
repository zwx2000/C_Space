#include <stdio.h>

#if 0
n! = n * (n-1)!
5! = 5 * 4!;
4! = 4 * 3!;
3! = 3 * 2!;
2! = 2 * 1!;
1! = 1 * 0!;
0! = 1;

f(5) = 5 * f(5-1);
.
.
.
f(1) = 1 * f(1-1);

f(n) = n * f(n-1) n>=1;
f(0) = 1;         n = 0;
#endif

//请注意，递归条件参不参与运算，如果参与， n-- n++ => n-1 n+1

int fact(int n)
{
    if(n == 0)
        return 1;
    else
        return n* fact(n-1);
}

int main()
{
    int a = fact(5);
    printf("%d\n", a);
    return 0;
}
