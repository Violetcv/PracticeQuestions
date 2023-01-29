/*Write a program to count the number of alphabets, digits, and special characters in the given string.*/
#include<stdio.h>
#include<string.h>

int main(){
    char text[20];
    int alpha=0, digit=0, special=0, i=0;

    printf("Enter the string: ");
    gets(text);

    while (text[i]!='\0'){
        if((text[i]>='a' && text[i]<='z')||(text[i]>='A' && text[i]<='Z')){
            alpha++;
        }
        else if(text[i]>='1'&&text[i]<='9'){
            digit++;
        }
        else{
            special++;
        }
        ++i;
    }

    printf("There are %d letters", alpha);
    printf("\nThere are %d numbers", digit);
    printf("\nThere are %d special characters", special);
}
