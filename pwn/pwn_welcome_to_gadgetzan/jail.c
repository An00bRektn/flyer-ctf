#include <stdio.h>
#include <unistd.h>

void ignore_me_init_buffering() {
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stdin, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
}

void printheader(){
    char* header = 
        " __        __   __   ___ ___ __          \n"    
        "/ _`  /\\  |  \\ / _` |__   |   /  /\\  |\\ |\n"    
        "\\__> /~~\\ |__/ \\__> |___  |  /_ /~~\\ | \\|\n\n"    
        " __    ___         __   __     __   __       \n"
        "/  ` |  |  \\ /    |__) |__) | /__` /  \\ |\\ |\n"
        "\\__, |  |   |     |    |  \\ | .__/ \\__/ | \\|\n";
    printf(header);                                         
}

void breakout(long first, long second){
    if (first == 0xc0ffeecafec0ffee && second == 0xdeadbeefdeadbeef){
        FILE* fd = fopen("./flag.txt", "r");
        if (fd == NULL){
            printf("[!] Failed to open flag, please contact a CTF admin.\n\n");
        }
        else {
            printf("Thermaplugg: Explosions! MORE explosions! I got to have more explosions! We're free!\n");
            char line[256];
            char* flag = fgets(line, sizeof(line), fd);
            printf("You find a note outside: %s\n", flag);
            fclose(fd);
        }
    }else{
        printf("ZAAAAAP! The locking mechanism on the jail cell electocutes you and you go unconcious\n");
        printf("Druz (Goblin): Better luck next time bub.\n");
    }
}

void u_up(){
    char buffer[32];
    printf("\nDruz (Goblin): Well, well, well. Look who's finally up...\n");
    sleep(1); 
    printf("Druz (Goblin): Got anything you wanna say before you're moved to solitary?\n");
    printf("> ");
    scanf("%s", buffer);

    printf("Druz (Goblin): You make a good point.\n");
    sleep(1);
    printf("Druz (Goblin): HAH! Who am I kidding, you're staying here for a while bub.\n");
}

int main(){
    ignore_me_init_buffering();
    printheader();
    u_up();
    return 0;
}
