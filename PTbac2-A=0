#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float a,b,c,denta;
    printf("Nhap he so cua phuong trinh bat 2: ");
    scanf("%f%f%f",&a,&b,&c);
    if (a==0)
    {
        if(b==0 && c!=0)
            printf("Phuong trinh vo nghiem");
        else if (b!=0 && c!=0)
            printf("Phuong trinh co nghiem don x = %.3f",-c/b);
        else
            printf("Phuong trinh vo so nghiem");
    }
    else
    {
        denta= bb-4ac;
        if (denta < 0)
            printf("Phuong trinh vo nghiem");
        else if (denta == 0)
            printf("Phuong trinh co nghiem kep x1 = x2= %.3f",-b/(2a));
        else
            printf("Phuong trinh co 2 nghiem phan biet\nx1 = %.3f\nx2 = %.3f",(-b+sqrt(denta))/(2a),(-b-sqrt(denta))/(2a));
    }
    return 0;
}
