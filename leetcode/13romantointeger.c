#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <stdbool.h>



int romanToInt(char* s);

int main(){
    char *str = "MDCXCV"; 
    printf("%d",romanToInt(str));

    return 0; 
}

int change_val(char* s, int i){
    switch(s[i]){
            case 'I':
                return 1; 
            case 'V': 
                return 5;
            case 'X':
                return 10; 
            case 'L':
                return 50; 
            case 'C': 
                return 100; 
            case 'D': 
                return 500; 
            case 'M': 
                return 1000; 
            return 0; 

    }
}

int romanToInt(char* s) {
    int n = strlen(s); 
    int sum = 0; 
    int i = 0;

    while (i < n) {
        if (i < n - 1 && change_val(s, i) < change_val(s, i + 1)) {
            sum += change_val(s, i + 1) - change_val(s, i);
            i += 2;
        } else {
            sum += change_val(s, i);
            i++;
        }
    }
    return sum;
}