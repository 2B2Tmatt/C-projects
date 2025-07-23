#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


bool isPalindrome(int x) {
    if (x < 0) return false; // Negative numbers are not palindromes
    if (x == 0) return true; // 0 is a palindrome
    int temp =x, digits = 0; 
    while(temp != 0){
        digits++; 
        temp /= 10; 
    }
    int *numarr = malloc(digits * sizeof(int)); 
    for(int i = 0; i < digits; i++) {
        numarr[i] = x%10; // Initialize the array
        x/= 10; 
    }
    for(int i = 0; i<digits;i++){
        printf("%d ", numarr[i]);
    }

    int *pLeft = numarr; 
    int *pRight = numarr + digits -1; 
    while (pLeft < pRight){
        if(*pRight==*pLeft){
            pLeft++; 
            pRight--; 
        }
        else{
            free(numarr); 
            return false; 
        }
    }
    free(numarr); 
    return true; 
}



int main(){
    printf("%s", isPalindrome(1231) ? "true" : "false"); 
     


    return 0; 
}