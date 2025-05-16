/*

    14/05/2025 18:49
*/
#include <stdio.h>
#include <stdlib.h>
#include "prototypes/header.h"

int main (void){

    int option;
    while(1){
        system("clear");
        printf("Hello World!\n"
               "******************\n"
               "1_Encrypter\n"
               "2_Decrypter\n"
               "3_Exit\n");
        scanf("%d",&option);
        setbuf(stdin,NULL);
        if(option == 1 || option == 2)
        {
            userDataEntry(option);
        }
        else if(option == 3)
        {
            system("clear");
            printf("Program closed...\n"
                   "Press 'Enter' to exit ");
            getchar();
            system("clear");
            break;
        }
    }
    return 0;
}
