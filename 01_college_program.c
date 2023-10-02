#include<stdio.h>
void main(){


int f(int x, int *py, int**ppz)
{
    int y, z;
    **ppz += 1;
    z = **ppz;
    *py += 2;
    y = *py;
    x += 3;
    return x + y + z;
}
}
/*{
    int c, *b, **a;
    c = 4;
    b = &c;
    a = &b;
    printf("%d", f(c, b, a));
    return 0;
    int k = 5;
    int *p = &k;
    int **m = &p;
    printf("%d%d%d",k,*p,**m);
}*/