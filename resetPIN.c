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

    if (!pctlauthRegisterPasscode())
    {
        printf("Failed to change PIN. \n\n");
        consoleUpdate(NULL);
    }
    else
    {    
        printf("Succesfully changed PIN! \n\n");
        consoleUpdate(NULL);
    }  

    printf("Press any key to exit ... \n\n");
    consoleUpdate(NULL);

    hidScanInput();
    
    pctlInitialize();
    consoleExit(NULL);
    pctlExit();

    return 0;
}
