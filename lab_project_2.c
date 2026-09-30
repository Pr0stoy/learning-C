#include <stdio.h>
#include <stdbool.h>
#include <windows.h>
#include <math.h>

int main(){
    SetConsoleOutputCP(65001); //Виведення тексту країнською мовою
    SetConsoleCP(65001); //Виведення тексту країнською мовою
    float a, x, sum = 0.0f, eps, R;
    int n=1;
    inputX:
    printf("\nВведіть х (-1<=x<1): ");
    scanf("%f",&x);
    if(x < -1.0f || x >= 1.0f){
        printf("Ви неправильно ввели x, спробуйте ще раз");
        goto inputX;
    }
    inputEPS:
    printf("\nВведіть точність (0<eps<1): ");
    scanf("%f",&eps);
    if(eps <= 0.0f || eps >= 1.0f){
        printf("Ви неправильно ввели точність, спробуйте ще раз");
        goto inputEPS;
    }
    a = x/2.0f;
    while(fabs(a)>=eps){
        sum += a;
        R = x*((float)(n+1)/(float)(n+2));
        a *= R;
        n++;
    }
    printf("x = %f\n",x);
    printf("Точність(eps) = %g\n",eps);
    printf("Результат\n");
    printf("Підрахована сума ряду -- %g\n",sum);
    printf("Кількість ітерацій -- %d\n",n-1);
    return 0;
}