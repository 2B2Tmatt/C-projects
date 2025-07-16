#include <stdio.h> 
#include <stdlib.h> 


int strlen1(char *p);
int main(){

    char friend[] = "eg guo"; 
    printf("%d", strlen1(friend));


    return 0; 
}

int strlen1(char *p){
    int len = 0; 
    while(*p!='\0'){
        p++; 
        len++;  
    }
    return len; 
}