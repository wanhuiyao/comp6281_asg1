#include "tools.h"
char mainMenu(){
    system("stty raw");
    char selection;

    while(1){
        system("clear");
        printf("\n\r+++++++++++++++++++++++\n\r");
        printf("Sys Admin Utility\n\r");
        printf("  1. File Explorer\n\r");
        printf("  2. Find and Replace\n\r");
        printf("  3. Show the Log\n\r");
        printf("  4. Exit\n\r");
        printf("+++++++++++++++++++++++\n\r");
        printf("Selection:");
        selection = getchar();
        if(selection >= '1' && selection <= '4'){
            break;
        }
    }
    system("stty cooked");
    return selection;
}
