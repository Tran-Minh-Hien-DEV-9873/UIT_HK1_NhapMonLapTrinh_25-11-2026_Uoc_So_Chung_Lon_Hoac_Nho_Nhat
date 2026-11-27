#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a,b;
    printf("Nhap a vao day: ");
    scanf("%d", &a);
    
    printf("Nhap b vao day: ");
    scanf("%d", &b);
    
    while(a != b)
    {
        if(a > b)
        {
            a = a - b;
        }
        else
        {
            b = b - a;
        }
    
    }
    printf("Uoc so chung lon nhat la: %d \n",a);
    printf("Uoc so chung nho nhat la: %d \n",b);
    
	return 0;
}
