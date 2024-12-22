#include <stdio.h>
#include <string.h>

int main(){
    char password[20]="andeptrai";
    char input[20];

    printf("Nhap mat khau: ");
    scanf("%s", input);

    if(strcmp(password, input) == 0){
        printf("Mat khau dung.\n");
    } else {
        printf("Mat khau sai.\n");
    }

    return 0;
}

