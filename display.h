/****************************************************************************
 *  SELF WRITTEN (PRACTICE PROJECT)                                        *
 *                                                                         *
 *  @desc Works as terminal-based UI                                       *
 *  @author Mayur (mayurhiwale2451982@gmail.com)                           *
 *  @required include required header files                                *
 *  @license MIT license                                                   *
 *  @git https://github.com/Zerapium/Pokemon-Mini-Batttle                  *
 *                                                                         *
 **************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void debug(char *msg)
{
    printf("\n [DEBUGGING] --- %s", msg);
}

void *back();

void showMoveInfo();
void showKeypad();

void showMainMenu()
{
    printf("\n           --------------------SCREEN-------------------- \n");
    printf("          |                                               \n");
    printf("          |                                               \n");

    printf("          |     Welcome,                                  \n");

    printf("          |     This is a mini pokemon battle game built  \n");
    printf("          |     in C language. We haven't really put that \n");
    printf("          |     much thought in development of this game.  \n");
    printf("          |                                               \n");

    printf("          |     Enter single digit number to perform the   \n");
    printf("          |     required operations. Refer following screen.  \n");

    printf("          |                                               \n");
    printf("          |                                               \n");

    // printf("          |       \n");

    printf("           --------------------SCREEN-------------------- \n");
    showKeypad(1);
}

void showPokeInfo(Pokemon *pkmn)
{
    printf("\n           --------------------SCREEN-------------------- \n");
    printf("          |                                               \n");

    printf("          |     PokeDex Entry #%d                          \n", pkmn->dexEntry);
    printf("          |             NAME : %s                       \n", pkmn->name);
    printf("          |             TYPES : %s                       \n", types[pkmn->types[0]]);
    printf("          |             ATTACK : %d                       \n", pkmn->stats.ATK);
    printf("          |             DEFENCE : %d                       \n", pkmn->stats.DEF);
    printf("          |             SPEED : %d                       \n", pkmn->stats.SPE);
    printf("          |                                               \n");

    printf("           --------------------SCREEN-------------------- \n");
    showKeypad(1);
}

void showAllMoves()
{
    printf("\n           -----------------------SCREEN----------------------- \n");
    printf("          |                                               \n");
    printf("          |    ALL POKEMON MOVES                          \n");
    printf("          |       Enter the digit  given next to \n");
    printf("          |       the move to view more information \n");
    printf("          |                                               \n");

    for (int i = 0; i <= moveEntry; i += 3)
    {
        printf("          |    (%d) %s    (%d) %s     (%d) %s    \n", i + 1, moves[i]->name, i + 2, moves[i + 1]->name, i + 3, moves[i + 2]->name);
    }

    /*
    printf("          |      NAME             POWER            TYPE             \n");
    printf("          |                                               \n");


    for (int i = 0; i <= moveEntry; i++)
    {

    printf("          |      %s         %d            %s              \n",moves[i]->name,moves[i]->power,types[moves[i]->type]);
    }

    */
    printf("          |                                               \n");
    printf("          |                                               \n");

    printf("          |   Your Input :    ");
    int inp;
    scanf("%d", &inp);

    printf("           -----------------------SCREEN----------------------- \n");

    showMoveInfo(moves[inp - 1]);
}

void showMoveInfo(Move *pkmn)
{
    printf("\n           --------------------SCREEN-------------------- \n");
    printf("          |                                               \n");

    printf("          |     Move Details                            \n");
    printf("          |             NAME : %s                       \n", pkmn->name);
    printf("          |             TYPE : %s                       \n", types[pkmn->type]);
    printf("          |             POWER : %d                       \n", pkmn->power);
    printf("          |             ACCURACY : %d                       \n", pkmn->accuracy);
    printf("          |                                               \n");

    printf("           --------------------SCREEN-------------------- \n");
    showKeypad(2);
}

void showKeypad(int SCREEN)
{
    switch (SCREEN)
    {
    case 1:
    {
        printf("           ----------------------------------------------- \n");
        printf("          |               -OPERATIONS-                    \n");
        printf("          |   (0) Exit   (1) All Pokemon   (2) All Moves  \n");
        printf("          |   (4) Battle                                  \n");
        printf("           ----------------------------------------------- \n");
        printf("            Your Input :  ");
        int inp;
        scanf("%d", &inp);
    }
    break;

    case 2:
    {
        printf("           ----------------------------------------------- \n");
        printf("          |               -OPERATIONS-                    \n");
        printf("          |   (0) Exit   (1) All Pokemon   (2) All Moves  \n");
        printf("          |   (4) Battle (5) Back                  \n");
        printf("           ----------------------------------------------- \n");
    }
    break;

    case 3:
    {
        printf("           ----------------------------------------------- \n");
        printf("          |               -OPERATIONS-                    \n");
        printf("          |   (0) Exit   (1) All Pokemon   (2) All Moves  \n");
        printf("          |   (4) Battle (5) Back                  \n");
        printf("           ----------------------------------------------- \n");
    }
    break;

    default:
        printf("Invalid Screen");
    }
}
