#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h> 
//come back to it

char* longestCommonPrefix(char** strs, int strsSize) {
    
    int shortest = strlen(strs[0]);
    for(int i = 1; i<strsSize; i++){
        if(strlen(strs[i])<shortest){
            shortest = strlen(strs[i]);
        }
    }
    char *longest = malloc((shortest+1) * sizeof(char));
  
    for(int i = 0; i < shortest; i++){
        char current = strs[0][i];
        for(int j = 0; j < strsSize; j++){
            if(strs[j][i]==current){
                printf("This is working and the character is %c\n", current); 
                
            }
            else{
                longest[i]='\0';
                return longest; 
            }
        }
        longest[i]=
        current;
    }
    longest[strlen(longest-1)]='\0';
    return longest;
}


int main(){

    char *arr[] = {
                    "henlo",
                    "henry",
                    "hen"};
    char *str = longestCommonPrefix(arr, 3);
    printf("%s", str);

    return 0; 
}