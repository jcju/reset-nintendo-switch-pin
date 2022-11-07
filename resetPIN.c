#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>
#include <switch.h>

int main(int argc, char *argv[])
{
    consoleInit(NULL);
    pctlInitialize();

    printf("Jumping to reset Parental Control PIN ... \n\n");
    consoleUpdate(NULL);
    
    sleep(1000);

    pctlExit();

    if (!pctlauthRegisterPasscode())
    {
        printf("Failed to change passcode.\n\n");
        consoleUpdate(NULL);
    }
            
    printf("Parental Control PIN is succesfully reset! \n\n");
    consoleUpdate(NULL);
            
    pctlInitialize();
        
    consoleExit(NULL);
    pctlExit();

    return 0;
}
