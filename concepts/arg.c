#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

int main (){
    char *userInput  = NULL;

    printf("$ ");

    size_t bufferSize = 128;
    userInput = (char *)malloc(bufferSize * sizeof(char));

    if (userInput == NULL){
        return 1;
    }

    if (fgets(userInput, bufferSize, stdin) != NULL){
        printf("%s", userInput);
    }else{
        return -1;
    }



    return 0;

}

