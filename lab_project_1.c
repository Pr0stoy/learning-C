    #include <stdio.h>
    #include <math.h>
    #include <windows.h>
    void func_x_y_table(){
        float x,y,a = 4.125f,b = -1.234f,c = 0.487f;
        x = 3.0f - pow((a+sqrt(fabs(b))),1.0f/a);
        y = pow((pow(exp(1.0),(a-(1.0f/sin(c))))),1.0f/4.0f);
        printf("%f\n",x);
        printf("%f\n",y);
    }

    void func_loop_table(){
        float x,y,a=2.5f;
        for (x = 1.0f; x<5.5f; x+=0.5f){
            if (x>a){
                y = x * cbrt(x-a);
                printf("%f\n",y);
            }
            else if(fabs(x-a)<0.00001f){
                y = x*sin(a*x);
                printf("%f\n",y);
            }
            else{
                y = pow(exp(1.0f),(-1*a*x))*cos(a*x);
                printf("%f\n",y);
            }
        }
    }
    void func_x_y_input(){
        float x,y,a,b,c;
        printf("Введіть a: ");
        scanf("%f",&a);
        printf("Введіть b: ");
        scanf("%f",&b);
        printf("Введіть c: ");
        scanf("%f",&c);
        if(fabs(sin(c))<0.0000001f || (fmodf(a,2.0) < 0.000001f && (a+sqrt(fabs(b))) < 0 ) || fabs(a)<0.00001f){ 
            printf("Невірно введені дані");
        }
        else{
            x = 3.0f - pow((a+sqrt(fabs(b))),1.0f/a);
            y = pow((pow(exp(1.0),(a-(1.0f/sin(c))))),1.0f/4.0f);
            printf("%f\n",x);
            printf("%f\n",y);
        }
    }
    void func_loop_input(){
        float x,y,a,left_bord,right_bord,step;
        printf("Введіть a: ");
        scanf("%f",&a);
        printf("Введіть ліву границю: ");
        scanf("%f",&left_bord);
        printf("Введіть праву границю: ");
        scanf("%f",&right_bord);
        printf("Введіть крок: ");
        scanf("%f",&step);
        if (step > 0){
            for (x = left_bord; x<right_bord+0.000001f; x+=step){
                if (x>a){
                    y = x* cbrt(x-a);
                    printf("%f\n",y);
                }
                else if(fabs(x-a)<0.000001f){
                    y = x*sin(a*x);
                    printf("%f\n",y);
                }
                else{
                    y = pow(exp(1.0f),(-1*a*x))*cos(a*x);
                    printf("%f\n",y);
                }
            }
        }
        else{
            printf("Невірно введені дані");
        }
    }   

    int main(){
        SetConsoleOutputCP(65001); 
        SetConsoleCP(65001);
        int choice_programm, choice_input;
        printf("Введіть яку хочете побачити програму, 1 чи 2: ");
        scanf("%d",&choice_programm);
        printf("Вводити самостійно(1) чи брати дані з таблиці(2)?(1;2): ");
        scanf("%d",&choice_input);
        if (choice_programm==1 && choice_input==2){
            func_x_y_table();
        }
        else if(choice_programm==2 && choice_input==2){
            func_loop_table();
        }
        else if(choice_programm==1 && choice_input==1){
            func_x_y_input();
        }
        else if(choice_programm==2 && choice_input==1){
            func_loop_input();
        }
        else{
            printf("\nВи щось неправильно ввели, спробуйте знову");
        }
        return 0;
    }
