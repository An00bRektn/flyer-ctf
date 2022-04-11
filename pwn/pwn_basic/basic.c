// basic.c - a stack based buffer overflow challenge

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void ignore_me_init_buffering() {
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stdin, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
}

int printheader(){
    printf("      ___________\n     /=//==//=/  \n    |=||==||=|    |\n    |=||==||=|~-, |\n    |=||==||=|^.`;|\n     \=\\==\\=\`=.:\n      `\"\"\"\"\"\"\"`^-,`.\n               `.~,\'\n              \',~^:,\n              `.^;`.\n               ^-.~=;.\n                  `.^.:`.");
    printf("Oh no! You knocked over my bucket!\n\n");
    return 0;
}

int error(){
    char buffer[80];
    printf("DEBUG: Loading in response field, %p\n", buffer);
    printf("Do you want to report the problem?\n> ");
    gets(buffer);
    if((buffer[0] == 'y') || (buffer[0] == 'Y')){
        printf("Problem reported.\n");
    } else {
        printf("Problem ignored.\n");
    }
}

int main(){
    ignore_me_init_buffering();
    printheader();
    sleep(1);
    printf("What do you have to say for yourself?\n");
    sleep(1);
    error();
    return 0;
}
