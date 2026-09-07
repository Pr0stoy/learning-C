#include <stdio.h>
#include <stdbool.h>
int main(){
    int arr[]= {5,4,2,3,1};
    bool is_sorted = false;
    for (int j = 0; j<5; j++){
        printf("%d",arr[j]);
    }
    printf("\n");
    while (is_sorted == false){
        is_sorted = true;
        for(int i = 0; i<4; i++){
            if (arr[i]>arr[i+1]){
                int temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
                for (int j = 0; j<5; j++){
                    printf("%d",arr[j]);
                }
                is_sorted = false;
                printf("\n");
            }
            
        }
    }
    return 0;
}