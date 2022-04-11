// cards.c - a format strings demo

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>

#define DEALER "\e[0;31m[Dealer]\e[0m"
#define YOU "\e[0;33m[You]\e[0m"

int printheader(){
    printf(".------.------.------.------.\n");
    printf("|A_  _ |A /\\  |A _   |A .   |\n");
    printf("|( \\/ )| /  \\ | ( )  | / \\  |\n");
    printf("| \\  / | \\  / |(_x_) |(_,_) |\n");
    printf("|  \\/ A|  \\/ A|  Y  A|  I  A|\n");
    printf("`------^------^------'------'\n");
    return 0;
}

int main(){
    char buffer[200];
    char user_input[8];
    printheader();
    char* cheat = "Dealer's Notes: Haha we're going to bleed them dry";
    char* codeword = "\n\nDealer's Notes: Tell the big man LUCTF{f4k3_f14g_f0r_t3st1ng} and he will let you in\n\n";
    printf("    Welcome to my casino!\n\n");
    printf(DEALER": Welcome to the table, we like to go all in on the first hand here...\n");
    sleep(1);
    printf("Your cards: 10 of spades, Q of hearts\n");
    sleep(1);
    printf(DEALER": Wow that's pretty good! I assume you'll stay? (y/n)\n");
    printf(YOU":");
    scanf("%s", user_input);

    if((strcmp("y", user_input) + strcmp("Y", user_input)) > 0){
        printf(DEALER": Well, here's my cards...\n");
        sleep(1);
        printf("Dealer's cards: A of spades, K of spades\n");
        sleep(1);
        printf(DEALER": BLACKJACK! Well, guess you're out of luck bud. Anything you have to say >:P ?\n");
    }
    else{
        printf("You draw a Jack of Spades...\n");
        sleep(1);
        printf(DEALER": BUST! Well, guess you're out of luck bud. Anything you have to say >:P ?\n");
    }

    printf(YOU":");
    scanf("%s", buffer);
    printf(DEALER": Look at this idiot, saying:\n");
    printf(buffer);
    printf("\n");
    sleep(1);
    printf(DEALER": Smell ya later! Maybe when you have more cash...\n");

    return 0;
}