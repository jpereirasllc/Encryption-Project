
#include <stdio.h>
#include <stdlib.h>
#include "../prototypes/header.h"

void userDataEntry(int option)
{
    char message[151];
    char secretKey[151];

    system("clear");
    if(option == 1){
        printf("Encryption process\n");
    }
    else{
        printf("Decryptyon process\n");
    }
    printf("*************************\n"
           "Message: ");
    fgets(message,151,stdin);
    setbuf(stdin,NULL);
    printf("Secret Key: ");
    fgets(secretKey,151,stdin);
    setbuf(stdin,NULL);

    defNumbers(option,message,secretKey);
}
