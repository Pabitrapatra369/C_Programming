#include<stdio.h>
int main()
{
	int n ;
        //console.log(n);
        scanf("%d",&n);
        int m = n;
        int d;
        int s = 0;
        int f,j;
        for (; m >= 0; m / 10) {
          d = m % 10;
          if (d == 0) f = 1;
          else for ( j = 1, f = 1; j <= d; j++) f *= j;
          s += f;
        }
        if (s == n) printf("strong Number");
        else printf( "Not a strong Number");
}
