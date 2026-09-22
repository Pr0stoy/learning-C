#include <stdio.h>
#include <math.h>
#include <windows.h>
// void func_x_y_table(){
//     float x,y,a = 4.125f,b = -1.234f,c = 0.487f;
//     x = 3.0f - pow((a+sqrt(fabs(b))),1.0f/a);
//     y = pow((pow(exp(1.0),(a-(1.0f/sin(c))))),1.0f/4.0f);
//     printf("%f\n",x);
//     printf("%f\n",y);
// }
// void func_x_y_input(){
//     float x,y,a,b,c;
//     printf("Введіть a: ");
//     scanf("%f",&a);
//     printf("Введіть b: ");
//     scanf("%f",&b);
//     printf("Введіть c: ");
//     scanf("%f",&c);
//     if(fabs(sin(c))<0.0000001f || (fmodf(a,2.0) < 0.000001f && (a+sqrt(fabs(b))) < 0 ) || fabs(a)<0.00001f){ 
//         printf("Невірно введені дані");
//     }
//     else{
//         x = 3.0f - pow((a+sqrt(fabs(b))),1.0f/a);
//         y = pow((pow(exp(1.0),(a-(1.0f/sin(c))))),1.0f/4.0f);
//         printf("%f\n",x);
//         printf("%f\n",y);
//     }
// }


// void func_loop_table(){
//     float x,y,a=2.5f;
//     for (x = 1.0f; x<5.5f; x+=0.5f){
//         if (x>a){
//             y = x * cbrt(x-a);
//             printf("%f\n",y);
//         }
//         else if(fabs(x-a)<0.00001f){
//             y = x*sin(a*x);
//             printf("%f\n",y);
//         }
//         else{
//             y = pow(exp(1.0f),(-1*a*x))*cos(a*x);
//             printf("%f\n",y);
//         }
//     }
// }
// void func_loop_input(){
//     float x,y,a,left_bord,right_bord,step;
//     printf("Введіть a: ");
//     scanf("%f",&a);
//     printf("Введіть ліву границю: ");
//     scanf("%f",&left_bord);
//     printf("Введіть праву границю: ");
//     scanf("%f",&right_bord);
//     printf("Введіть крок: ");
//     scanf("%f",&step);
//     if (step > 0){
//         for (x = left_bord; x<right_bord+0.000001f; x+=step){
//             if (x>a){
//                 y = x* cbrt(x-a);
//                 printf("%f\n",y);
//             }
//             else if(fabs(x-a)<0.000001f){
//                 y = x*sin(a*x);
//                 printf("%f\n",y);
//             }
//             else{
//                 y = pow(exp(1.0f),(-1*a*x))*cos(a*x);
//                 printf("%f\n",y);
//             }
//         }
//     }
//     else{
//         printf("Невірно введені дані");
//     }
//}
void func_loop(){
    float x,y,a,left_bord,right_bord,step;
    int choice_input;
    printf("Вводити самостійно(1) чи брати дані з таблиці(2)?(1 або2): ");
    scanf("%d",&choice_input);
    if (choice_input == 2){
        a = 2.5f;
        left_bord = 1.0f;
        right_bord = 5.0f;
        step = 0.5f;
    }
    else if (choice_input == 1){
        printf("Введіть a: ");
        scanf("%f",&a);
        printf("Введіть ліву границю: ");
        scanf("%f",&left_bord);
        printf("Введіть праву границю: ");
        scanf("%f",&right_bord);
        printf("Введіть крок: ");
        scanf("%f",&step);
    }
    else{
        printf("Невірно введені дані, перезавантажте програму");
        return;
    }
    if (step > 0){
        printf("x             y\n");
        for (x = left_bord; x<right_bord+0.000001f; x+=step){
            if (x>a){
                y = x* cbrt(x-a);
                printf("%.2f          %f\n",x,y);
            }
            else if(fabs(x-a)<0.000001f){
                y = x*sin(a*x);
                printf("%.2f          %f\n",x,y);
            }
            else{
                y = pow(exp(1.0f),(-1*a*x))*cos(a*x);
                printf("%.2f          %f\n",x,y);
            }
        }
    }
    else{
        printf("Невірно введені дані, перезавантажте програму, крок < 0");
    }
}
void func_x_y(){
    float x,y,a,b,c;
    int choice_input;
    printf("Вводити самостійно(1) чи брати дані з таблиці(2)?(1 або 2): ");
    scanf("%d",&choice_input);
    if (choice_input == 2){
        a = 4.125f;
        b = -1.234f;
        c = 0.487f;
    }
    else if(choice_input == 1){
        printf("Введіть a: ");
        scanf("%f",&a);
        printf("Введіть b: ");
        scanf("%f",&b);
        printf("Введіть c: ");
        scanf("%f",&c);
        if(fabs(sin(c))<0.0000001f || (fmodf(a,2.0) < 0.000001f && (a+sqrt(fabs(b))) < 0 ) || fabs(a)<0.00001f){
            printf("Невірно введені дані, перезавантажте програму, ОДЗ не дотримано(дріб,корінь)");
            return;
        }
    }
    else{
        printf("Невірно введені дані, перезавантажте програму");
        return;
    }
    x = 3.0f - pow((a+sqrt(fabs(b))),1.0f/a);
    y = pow((pow(exp(1.0),(a-(1.0f/sin(c))))),1.0f/4.0f);
    printf("x = %f\n",x);
    printf("y = %f\n",y);
}
int main(){
    SetConsoleOutputCP(65001); //Виведення тексту країнською мовою
    SetConsoleCP(65001); //Виведення тексту країнською мовою
    int choice_programm;
    printf("Введіть яку хочете побачити програму, 1 чи 2: ");
    scanf("%d",&choice_programm);
    if (choice_programm==2){
        func_loop();
    }
    else if(choice_programm==1){
        func_x_y();
    }
    else{
        printf("\nВи щось неправильно ввели, перезавантажте програму");
    }
    return 0;
}