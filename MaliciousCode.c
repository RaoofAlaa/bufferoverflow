#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void function(char *arg1) {
    char buffer[6];
    strcpy(buffer,arg1);
    if (buffer) {
        printf("hacked!\n Let's get some Info about network settings\n");
        system("/usr/sbin/ifconfig");
    }

    printf("Still in Function\n");
}


int main()
{
    char *input ="AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA";
    //32 characters + Null Terminator
    function(input);
    printf("returned to main safely");

}
