/****************************************************************************
 *  SELF WRITTEN (PRACTICE PROJECT)                                        *
 *                                                                         *
 *  @desc Main File This file initializes pokemons and moves              *
 *  @author Mayur (mayurhiwale2451982@gmail.com)                           *
 *  @required include required header files                                *
 *  @license MIT license                                                   *
 *  @git https://github.com/Zerapium/Pokemon-Mini-Batttle                  *
 *                                                                         *
 **************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "structs.h"
#include "display.h"
#include "pokedex.h"
#include "RNG.h"
#include "battle.h"

void main() {
    // Initialize the data
    importPokemons();
    importMoves();
    Battle bt = newBattle(*pokeDex[0]);
    printf("%s", bt.players[0].mon->name);
}
