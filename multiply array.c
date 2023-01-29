/*Write a program to multiply the two given matrices.*/
#include<stdio.h>

int main(){
    int arr1[3][3], arr2[3][3], sum[3][3];
    printf("Enter elements of matrix 1: ");
    for (int i=0; i<3; ++i){
        for (int j=0; j<3; ++j){
            scanf("%d", &arr1[i][j]);
        }
    }
    printf("Enter elements of matrix 2: ");
    for (int i=0; i<3; ++i){
        for (int j=0; j<3; ++j){
            scanf("%d", &arr2[i][j]);
        }
    }

    for (int i=0; i<3; ++i){
        for (int j=0; j<3; ++j){
            sum[i][j]=arr1[i][j]*arr2[i][j];
        }
    }

    for (int i=0; i<3; ++i){
        for (int j=0; j<3; ++j){
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}
