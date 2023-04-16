#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero, d=0, m=0, c=0, u=0;
    printf("Que numero desea convertir?");
    scanf("%i",&numero);
    if((numero<1)||(numero>3000))
    {
        printf("El numero introducido no es correcto");
    }
    else
    {
        m=numero/1000;
        c=(numero-m*1000)/100;
        d=(numero-c*100-m*1000)/10;
        u=numero-(d*10+c*100+m*1000);
        switch(m)
        {
        case 1:
            printf("M");
            break;
        case 2:
            printf("MM");
            break;
        case 3:
            printf("MMM");
            break;
        }
        while(c!=0)
        {
            switch(c)
            {
            case 1:
                printf("C");
                c=c-1;
                break;
            case 2:
                printf("CC");
                c=c-2;
                break;
            case 3:
                printf("CCC");
                c=c-3;
                break;
            case 4:
                printf("CD");
                c=c-4;
                break;
            default:
                if(c==9)
                {
                    printf("CM");
                    c=c-9 ;
                }
                else
                {
                    printf("D");
                    c=c-5;
                }
                break;
            }
        }
        while(d!=0)
        {
            switch(d)
            {
            case 1:
                printf("X");
                d=d-1;
                break;
            case 2:
                printf("XX");
                d=d-2;
                break;
            case 3:
                printf("XXX");
                d=d-3;
                break;
            case 4:
                printf("XL");
                d=d-4;
                break;
            default:
                if(d==9)
                {
                    printf("XC");
                    d=d-9;
                }
                else
                {
                    printf("L");
                    d=d-5;
                }
                break;
            }
        }
        while(u!=0)
        {
            switch(u)
            {
            case 1:
                printf("I");
                u=u-1;
                break;
            case 2:
                printf("II");
                u=u-2;
                break;
            case 3:
                printf("III");
                u=u-3;
                break;
            case 4:
                printf("IV");
                u=u-4;
                break;
            default:
                if(u==9)
                {
                    printf("IX");
                    u=u-9;
                }
                else
                {
                    printf("V");
                    u=u-5;
                }
                break;
            }
        }

    }
}
