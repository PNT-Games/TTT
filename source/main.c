#include <stdio.h>
#include <stdlib.h>

#define RAND_MAX 12

int main()
{
    int input;
    int num1, num2;
    printf("Welcome to TTS, to exit this program please use a keybind, button, or answer 0.\n\n");
    while(1)
    {
        num1 = rand() % RAND_MAX + 1, num2 = rand() % RAND_MAX + 1;
        printf("%d x %d = ", num1, num2);
        scanf("%d", &input);
       
        if(input == 0) break;
       
        if(input == num1 * num2)
        {
            printf("Correct answer!\n\n");
        }
        else
        {
            printf("Wrong answer!\n\n");
        }
    }
}
