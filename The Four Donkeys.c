#include <stdio.h>

#define DONKEY_1_SPEED 1
#define DONKEY_2_SPEED 2
#define DONKEY_3_SPEED 4
#define DONKEY_4_SPEED 6

/*
    This function displays the Game's Main Menu
*/
void displayGameMenu()
{
    printf("-------------------------------------------------\n");
    printf("                 The Four Donkeys\n");
    printf("-------------------------------------------------\n");
    printf("                 Press 1 to START\n");
    printf("                 Press 0 to EXIT\n\n");
    printf("             Press 2 to see MECHANICS\n");
    printf("          Press 3 to see ABOUT THE GAME\n");
    printf("-------------------------------------------------\n");
}
void displayMechanics()
{
    printf("    The game's obejective is to move all the\n");
    printf("            donkeys to another stable.\n");
    printf("         However, the owner can only move\n");
    printf("     two donkeys at a time, wherein he rid\n");
    printf("     one donkey to transport the said donkeys\n");
    printf("    to the other side. In this case, the owner\n");
    printf("   also needs one donkey as his ride to return\n");
    printf("             to the previous stable.\n\n");
    printf("  You can make use of power ups to speed up the\n");
    printf("    transport. Only two speed ups are allowed\n");
    printf("    per round. Strategize well and try to move\n");
    printf("      all the donkeys in less than 13 hours!\n");
}
void displayAboutGame()
{
    printf("              Name: The Four Donkeys\n");
    printf("        Creator: Jose Maria Angelo Guerra\n\n");
    printf("       This game is in partial fulfillment\n");
    printf("        of the requiurements for CCPROG1\n\n");
    printf("         Instructor: Mr. Louis Patrice Lu\n");
    printf("         De La Salle University - Manila\n");
    printf("               A.Y. 2021 - 2022\n");
}
/*
    This function displays the Game's Start Up Slate

    @param nSpeedUp - No. of available speed up medicine, 2 given
    @param nElapsed - Time that passed from start to finish, start at 0
*/
void displayStartUp(int nSpeedUp, int nElapsed)
{    
    printf("-------------------------------------------------\n");
    printf("                  🐴① | ~ ~ ~ |\n");
    printf("                  🐴② | ~ ~ ~ |\n");
    printf("                  🐴③ | ~ ~ ~ |\n");
    printf("                  🐴④ | ~ ~ ~ |\n");
    printf("                  👤🅞 | ~ ~ ~ |\n");
    printf("            Speed: D1=%d D2=%d D3=%d D4=%d\n", DONKEY_1_SPEED, DONKEY_2_SPEED, DONKEY_3_SPEED, DONKEY_4_SPEED);
    printf("            Speed Up: %d left\n", nSpeedUp); // Start at 2
    printf("            Elapsed: %d\n", nElapsed); // Start at 0
    printf("-------------------------------------------------\n");
}
/*
    This function displays the state of Donkey 1

    @param nDonkey1 - Value holder for first donkey input
    @param nDonkey2 - Value holder for second donkey input
    @return nCheckDonkey - Returns 1 if the Donkey has crossed the other stable
                         - Returns 0 if the Donkey remained / went back the initial stable
*/
int displayDonkey1(int nDonkey1, int nDonkey2, int nCheckDonkey)
{
    if(nDonkey1 != 1 && nDonkey2 != 1) // If Donkey# is not included in user input
    {
        switch(nCheckDonkey)
        {
            case 0: // Stay Back
                printf("                  🐴① | ~ ~ ~ |\n");
                break;
            case 1: // Stay Forward
                printf("                      | ~ ~ ~ | 🐴①\n");
                break;
        }   
    }
    else // If Donkey# is included in user input
    {
        if(nDonkey1 == 1 || nDonkey2 == 1)
        {
            switch (nCheckDonkey)
            {
                case 1: // Move Back
                    printf("                  🐴① | ~ ~ ~ |\n");
                    nCheckDonkey = 0;
                    break;
                case 0: // Move Forward
                    printf("                      | ~ ~ ~ | 🐴①\n");
                    nCheckDonkey = 1;
                    break;
            }
        }
    }
    return nCheckDonkey;
}
/*
    This function displays the state of Donkey 2

    @param nDonkey1 - Value holder for first donkey input
    @param nDonkey2 - Value holder for second donkey input
    @return nCheckDonkey - Returns 1 if the Donkey has crossed the other stable
                         - Returns 0 if the Donkey remained / went back the initial stable
*/
int displayDonkey2(int nDonkey1, int nDonkey2, int nCheckDonkey)
{
    if(nDonkey1 != 2 && nDonkey2 != 2) // If Donkey# is not included in user input
    {
        switch(nCheckDonkey)
        {
            case 0: // Stay Back
                printf("                  🐴② | ~ ~ ~ |\n");
                break;
            case 1: // Stay Forward
                printf("                      | ~ ~ ~ | 🐴②\n");
                break;
        }   
    }
    else // If Donkey# is included in user input
    {
        if(nDonkey1 == 2 || nDonkey2 == 2)
        {
            switch (nCheckDonkey)
            {
                case 1: // Move Back
                    printf("                  🐴② | ~ ~ ~ |\n");
                    nCheckDonkey = 0;
                    break;
                case 0: // Move Forward
                    printf("                      | ~ ~ ~ | 🐴②\n");
                    nCheckDonkey = 1;
                    break;
            }
        }
    }
    return nCheckDonkey;
}
/*
    This function displays the state of Donkey 3

    @param nDonkey1 - Value holder for first donkey input
    @param nDonkey2 - Value holder for second donkey input
    @return nCheckDonkey - Returns 1 if the Donkey has crossed the other stable
                         - Returns 0 if the Donkey remained / went back the initial stable
*/
int displayDonkey3(int nDonkey1, int nDonkey2, int nCheckDonkey)
{
    if(nDonkey1 != 3 && nDonkey2 != 3) // If Donkey# is not included in user input
    {
        switch(nCheckDonkey)
        {
            case 0: // Stay Back
                printf("                  🐴③ | ~ ~ ~ |\n");
                break;
            case 1: // Stay Forward
                printf("                      | ~ ~ ~ | 🐴③\n");
                break;
        }   
    }
    else // If Donkey# is included in user input
    {
        if(nDonkey1 == 3 || nDonkey2 == 3)
        {
            switch (nCheckDonkey)
            {
                case 1: // Move Back
                    printf("                  🐴③ | ~ ~ ~ |\n");
                    nCheckDonkey = 0;
                    break;
                case 0: // Move Forward
                    printf("                      | ~ ~ ~ | 🐴③\n");
                    nCheckDonkey = 1;
                    break;
            }
        }
    }
    return nCheckDonkey;
}
/*
    This function displays the state of Donkey 4

    @param nDonkey1 - Value holder for first donkey input
    @param nDonkey2 - Value holder for second donkey input
    @return nCheckDonkey - Returns 1 if the Donkey has crossed the other stable
                         - Returns 0 if the Donkey remained / went back the initial stable
*/
int displayDonkey4(int nDonkey1, int nDonkey2, int nCheckDonkey)
{

    if(nDonkey1 != 4 && nDonkey2 != 4) // If Donkey# is not included in user input
    {
        switch(nCheckDonkey)
        {
            case 0: // Stay Back
                printf("                  🐴④ | ~ ~ ~ |\n");
                break;
            case 1: // Stay Forward
                printf("                      | ~ ~ ~ | 🐴④\n");
                break;
        }   
    }
    else // If Donkey# is included in user input
    {
        if(nDonkey1 == 4 || nDonkey2 == 4)
        {
            switch (nCheckDonkey)
            {
                case 1: // Move Back
                    printf("                  🐴④ | ~ ~ ~ |\n");
                    nCheckDonkey = 0;
                    break;
                case 0: // Move Forward
                    printf("                      | ~ ~ ~ | 🐴④\n");
                    nCheckDonkey = 1;
                    break;
            }
        }
    }
    return nCheckDonkey;
}
/*
    This function displays the state of the owner

    @param nPosition - Place where the donkeys also went
*/
void displayOwner(int nPosition)
{

    if(nPosition == 0) // Go Back
        printf("                  👤🅞 | ~ ~ ~ |\n");
    if(nPosition == 1) // Move Forward
        printf("                      | ~ ~ ~ | 👤🅞\n");
}

/*
    This function validates the user's input

    @param nPosition - Place where the donkeys also went, Place where the owner is currently in
    @param nDonkey1 - Value holder for first donkey input
    @param nDonkey2 - Value holder for second donkey input
    @param nCheckDonkey1 - Status of Donkey 1 (1 = Crossed / 0 = Remained)
    @param nCheckDonkey2 - Status of Donkey 2 (1 = Crossed / 0 = Remained)
    @param nCheckDonkey3 - Status of Donkey 3 (1 = Crossed / 0 = Remained)
    @param nCheckDonkey4 - Status of Donkey 4 (1 = Crossed / 0 = Remained)
    @return nValid - 1 if Valid, 0 if not
*/
int checkInput(int nPosition, int nDonkey1, int nDonkey2, int nCheckDonkey1, int nCheckDonkey2, int nCheckDonkey3, int nCheckDonkey4)
{
    int nValid = 1;
    switch(nDonkey1) // Invalidates Inputs Calling Owner Left/Donkey Right, Owner Right/Donkey Left
    {
        case 1:
            if((nPosition == 1 && nCheckDonkey1 == 1) || (nPosition == 0 && nCheckDonkey1 == 0))
                nValid = 0;
            break;
        case 2:
            if((nPosition == 1 && nCheckDonkey2 == 1) || (nPosition == 0 && nCheckDonkey2 == 0))
                nValid = 0;
            break;
        case 3:
            if((nPosition == 1 && nCheckDonkey3 == 1) || (nPosition == 0 && nCheckDonkey3 == 0))
                nValid = 0;
            break;
        case 4:
            if((nPosition == 1 && nCheckDonkey4 == 1) || (nPosition == 0 && nCheckDonkey4 == 0))
                nValid = 0;
            break;
    }
    switch(nDonkey2) // Invalidates Inputs Calling Owner Left/Donkey Right, Owner Right/Donkey Left
    {
        case 1:
            if((nPosition == 1 && nCheckDonkey1 == 1) || (nPosition == 0 && nCheckDonkey1 == 0))
                nValid = 0;
            break;
        case 2:
            if((nPosition == 1 && nCheckDonkey2 == 1) || (nPosition == 0 && nCheckDonkey2 == 0))
                nValid = 0;
            break;
        case 3:
            if((nPosition == 1 && nCheckDonkey3 == 1) || (nPosition == 0 && nCheckDonkey3 == 0))
                nValid = 0;
            break;
        case 4:
            if((nPosition == 1 && nCheckDonkey4 == 1) || (nPosition == 0 && nCheckDonkey4 == 0))
                nValid = 0;
            break;
    }
    if((nDonkey1 == 1 && nDonkey2 == 1) || (nDonkey1 == 2 && nDonkey2 == 2) || (nDonkey1 == 3 && nDonkey2 == 3) || (nDonkey1 == 4 && nDonkey2 == 4) || (nDonkey1 == 0 && nDonkey2 == 0))
        nValid = 0; // Invalidates Repeated Inputs
    return nValid;
}
/*
    This function computes a donkey's speed rate

    @param nDonkey1 - Value holder for first donkey input
    @param nDonkey2 - Value holder for second donkey input
    @param nDonkeyNum - Values that are expected to be input (1,2,3, or 4)
    @param nPowerUp - Status SpeedUp Use (1 if To Be Used, 0 if not)
    @return nDonkeySpeed - Value holder for the donkey's speed rate
*/
int computeSpeed(int nDonkey1, int nDonkey2, int nDonkeyNum, int nPowerUp, int nDonkeySpeed)
{
    if(nDonkey1 == nDonkeyNum || nDonkey2 == nDonkeyNum)
    {
        if(nPowerUp == 0) // Not Using PowerUp
            nDonkeySpeed++;
        else // Using PowerUp
            nDonkeySpeed--;
    }
    return nDonkeySpeed;
}
/*
    This function gets the slower speed among the two donkeys
    
    @param nDonkey1 - Value holder for first donkey input
    @param nDonkey2 - Value holder for second donkey input
    @param nDonkey1Speed - Value holder for Donkey 1's Speed Rate
    @param nDonkey2Speed - Value holder for Donkey 2's Speed Rate
    @param nDonkey3Speed - Value holder for Donkey 3's Speed Rate
    @param nDonkey4Speed - Value holder for Donkey 4's Speed Rate
    @return nSlowSpeed - Returns the speed rate of the slower donkey
*/
int getSlowSpeed(int nDonkey1, int nDonkey2, int nDonkey1Speed, int nDonkey2Speed, int nDonkey3Speed, int nDonkey4Speed)
{
    int nNum1 = 0, nNum2 = 0, nSlowSpeed = 0;
    switch(nDonkey1)
    {
        case 1:
            nNum1 = nDonkey1Speed;
            break;
        case 2:
            nNum1 = nDonkey2Speed;
            break;
        case 3:
            nNum1 = nDonkey3Speed;
            break;
        case 4:
            nNum1 = nDonkey4Speed;
            break;
    }
    switch(nDonkey2)
    {
        case 1:
            nNum2 = nDonkey1Speed;
            break;
        case 2:
            nNum2 = nDonkey2Speed;
            break;
        case 3:
            nNum2 = nDonkey3Speed;
            break;
        case 4:
            nNum2 = nDonkey4Speed;
            break;
    }
    if(nNum1 > nNum2)
        nSlowSpeed = nNum1;
    else
        nSlowSpeed = nNum2;
    
    return nSlowSpeed;
}
/*
    This function computes for the elapsed time

    @param nPowerUp - Status of SpeedUp Usage (1 if To be Used, 0 if not)
    @param nSlowSpeed - Speed rate of the slower donkey
    @return nElapsed - Overall time it took to move all the donkeys to the other side
*/
int computeElapsed(int nPowerUp, int nElapsed, int nSlowSpeed)
{
    if(nPowerUp == 0) // No SpeedUp Used
        nElapsed = nElapsed + nSlowSpeed;
    else // Uses SpeedUp
        nElapsed = nElapsed + nSlowSpeed - 2;
    
    return nElapsed;
}

int main()
{
    int nGameMenu = 0,
        nSpeedUp = 2,
        nElapsed = 0,
        nDonkey1,
        nDonkey2,
        nPowerUp;
    
    int nCheckDonkey1 = 0,
        nCheckDonkey2 = 0,
        nCheckDonkey3 = 0,
        nCheckDonkey4 = 0;
    
    int nCounter = 1, // Counter variable for nPosition
        nPosition,
        nSlowSpeed = 0;
    
    int nDonkey1Speed = DONKEY_1_SPEED, // Start at 1
        nDonkey2Speed = DONKEY_2_SPEED, // Start at 2
        nDonkey3Speed = DONKEY_3_SPEED, // Start at 4
        nDonkey4Speed = DONKEY_4_SPEED; // Start at 6
    
    displayGameMenu();
    scanf("%d", &nGameMenu);
    
    while(nGameMenu != 0) // The game continues until the user wishes to exit
    {
        if(nGameMenu == 2) // Game Mechanics
        {
            displayMechanics();
            displayGameMenu();
            scanf("%d", &nGameMenu);
        }
        if(nGameMenu == 3) // Game Information
        {
            displayAboutGame();
            displayGameMenu();
            scanf("%d", &nGameMenu);
        }
        if(nGameMenu == 1) // Game Proper
        {
            displayStartUp(nSpeedUp, nElapsed);
            do // The game continues until all the donkeys have been moved to the other side
            {
                nPosition = nCounter % 2;
                do
                {
                    printf("Select First Donkey: ");
                    scanf("%d", &nDonkey1);
                    printf("Select Second Donkey: ");
                    scanf("%d", &nDonkey2);
                    
                    // Input Validation
                    if(checkInput(nPosition, nDonkey1, nDonkey2, nCheckDonkey1, nCheckDonkey2, nCheckDonkey3, nCheckDonkey4) == 0)
                        printf("Selection Error!\n");
                }   while(checkInput(nPosition, nDonkey1, nDonkey2, nCheckDonkey1, nCheckDonkey2, nCheckDonkey3, nCheckDonkey4) == 0);
                
                
                if(nSpeedUp > 0)
                {
                    printf("Use Power Up (Type 1)? ");
                    scanf("%d", &nPowerUp);
                    if(nPowerUp == 1)
                        nSpeedUp--;
                }

                nCheckDonkey1 = displayDonkey1(nDonkey1, nDonkey2, nCheckDonkey1);
                nCheckDonkey2 = displayDonkey2(nDonkey1, nDonkey2, nCheckDonkey2);
                nCheckDonkey3 = displayDonkey3(nDonkey1, nDonkey2, nCheckDonkey3);
                nCheckDonkey4 = displayDonkey4(nDonkey1, nDonkey2, nCheckDonkey4);
                displayOwner(nPosition);
                    nCounter++;

                nSlowSpeed = getSlowSpeed(nDonkey1, nDonkey2, nDonkey1Speed, nDonkey2Speed, nDonkey3Speed, nDonkey4Speed);
                nElapsed = computeElapsed(nPowerUp, nElapsed, nSlowSpeed);
                nDonkey1Speed = computeSpeed(nDonkey1, nDonkey2, 1, nPowerUp, nDonkey1Speed);
                nDonkey2Speed = computeSpeed(nDonkey1, nDonkey2, 2, nPowerUp, nDonkey2Speed);
                nDonkey3Speed = computeSpeed(nDonkey1, nDonkey2, 3, nPowerUp, nDonkey3Speed);
                nDonkey4Speed = computeSpeed(nDonkey1, nDonkey2, 4, nPowerUp, nDonkey4Speed);
                
                printf("            Speed: D1=%d D2=%d D3=%d D4=%d\n", nDonkey1Speed, nDonkey2Speed, nDonkey3Speed, nDonkey4Speed);
                printf("            Speed Up: %d left\n", nSpeedUp);
                printf("            Elapsed: %d hours\n", nElapsed);
                printf("-------------------------------------------------\n");

                if(nSpeedUp == 0)
                    nPowerUp = 0;

            }   while(nCheckDonkey1 == 0 || nCheckDonkey2 == 0 || nCheckDonkey3 == 0 || nCheckDonkey4 == 0);

            if(nElapsed > 13)
                printf("Too slow.\n");
            else
                printf("Quite fast!\n");

            displayGameMenu();
            scanf("%d", &nGameMenu);
        }
    }
    return 0;
}

/******************************************************************************
This is to certify that this project is my own work, based on my personal
efforts in studying and applying the concepts learned. I have constructed
the functions and their respective algorithms and corresponding code by
myself. The program was run, tested, and debugged by my own efforts. I
further certify that I have not copied in part or whole or otherwise
plagiarized the work of other students and/or persons.
Jose Maria Angelo C. Guerra - 12182346 - S14B
******************************************************************************/