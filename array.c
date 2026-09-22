#include <stdio.h>
#include <stdbool.h>

int main() {
    char  cities[100][100]; // Масив для 3 міст, кожне ім'я до 50 символів
    int indx = 0;
    char el[100];
    while (true){
        printf("enter city: ");
        scanf("%99s",el);
        if (el[0] == 'e' && el[1] == 'x' && el[2] == 'i' && el[3] == 't' && el[4] == '\0'){
            break;
        }
        else{
            int i=0;
            while(el[i] != '\0'){
                cities[indx][i] = el[i];
                i++;
            }
            cities[indx][i] = el[i];
            indx++;
        }
    }
    for(int k = 0; k < indx;k++){
        printf("%d: %s\n",k+1,cities[k]);
    }
    return 0;
}