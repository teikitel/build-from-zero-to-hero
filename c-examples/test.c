#include <stdio.h>
#include "hellolib.h"

int hello_world_should_say_hello(void)
{
    char * message = hello();
    printf("hello_world_should_say_hello  : ");
    if (strcmp(message, "Hello, World!\n") == 0) {
        printf("Success\n");
        return 0;
    } else {
        printf("Failure\n");
        printf("Expected: Hello, World!\n");
        printf("But was : ");
        printf(message);
        return 1;
    }
}

int hello_world_should_not_say_bye(void)
{
    char * message = hello();
    printf("hello_world_should_not_say_bye: ");
    if (strcmp(message, "Bye, World!\n") != 0) {
        printf("Success\n");
        return 0;
    } else {
        printf("Failure\n");
        printf("Expected different than: Bye, World!\n");
        printf("But was                : ");
        printf(message);
        return 1;
    }
}

int main(void)
{
    int res = 0;
    res += hello_world_should_say_hello();
    res += hello_world_should_not_say_bye();
    return ;
}