/*Write a program to print the following number pattern.*/
#include<stdio.h>
#include<math.h>

int main(){
    for (int i=1; i<=7; i+=2){
        for (int j=0; j<=(7-i); ++j){
            printf(" ");
            if(j==(7-i)/2){
                for (int k=1; k<=i; ++k){
                printf("%d", k);
                }
            }  
        }
        printf("\n");
    }

    return 0;
}
