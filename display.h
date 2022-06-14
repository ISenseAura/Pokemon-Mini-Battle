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
