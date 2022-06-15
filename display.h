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

void showMoveInfo();

void showPokeInfo(Pokemon *pkmn)
{
    printf("\n           --------------------SCREEN-------------------- \n");
    printf("          |                                               \n");

    printf("          |     PokeDex Entry #%d                          \n", pkmn->dexEntry);
    printf("          |             NAME : %s                       \n", pkmn->name);
    printf("          |             TYPES : %s                       \n", types[pkmn->types[0]]);
    printf("          |             ATTACK : %d                       \n", pkmn->stats.ATK);
    printf("          |             DEFENCE : %d                       \n", pkmn->stats.ATK);
    printf("          |             SPEED : %d                       \n", pkmn->stats.ATK);
    printf("          |                                               \n");

    printf("           --------------------SCREEN-------------------- \n\n");
}

void showAllMoves()
{
    printf("\n           -----------------------SCREEN----------------------- \n");
    printf("          |                                               \n");
    printf("          |    ALL POKEMON MOVES                          \n");
    printf("          |       Enter the digit  given next to \n");
    printf("          |       the move to view more information \n");
    printf("          |                                               \n");




    for(int i = 0; i <= moveEntry;i += 3) {
    printf("          |    (%d) %s    (%d) %s     (%d) %s    \n",i+1,moves[i]->name,i+2,moves[i+1]->name,i+3,moves[i+2]->name);

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
    scanf("%d",&inp);

            printf("           -----------------------SCREEN----------------------- \n");

                showMoveInfo(moves[inp-1]);



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

    printf("           --------------------SCREEN-------------------- \n\n");
}
