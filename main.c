#include <stdio.h>
//Maybe include functions here to make some cool code
int main () {
    
    int menu;
    int rotate;
    
    printf("Select an option: \n");
    printf("1) Encrypt using a rotational cipher \n");
    printf("2) Decrypt a message using a rotational cipher \n");
    printf("3) Encrypt using a substitution cipher \n");
    printf("4) Decrypt a message using a substitution cipher \n\n");
    printf("Selection: ");
    menu = 2; //Using a set value to automatically select an option
    
    switch(menu) {
        case(1) : 
            printf("1) Get ready to encrypt boyo\n"); //Chuck some words to test if the code is effectively reaching each selection
            printf("What level of rotation do you want to use?\n");
            rotate = 1;
            printf("Rotating letters by %d\n", rotate);
            printf("What message do you want encrypted?\n");
            //add the char code and what not and encrypt it, printing the encrypted code
            break;
        case(2) :
            printf("2) Here comes the hackery\n"); //Eventually some functions will be in place here to run the encryption/decryption code
            printf("What is the message\n?");
            printf("Do you know the level of rotation?\n");
            break; //Will probably just slap the code here instead
        case(3) :
            printf("3) They'll never know your secrets now haha\n");
            printf("What are the substitutions used?\n");
            break;
        case(4) :
            printf("4) Ghee whiz I've got some work to do now\n");
            printf("What is the message\n?");
            printf("Do you know the substitutions?")
            break;
        default :
            printf("Good one, you managed to not pick one of the above numbers, please try again\n"); 
    }
    
return 0;
}