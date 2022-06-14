/****************************************************************************
  *  SELF WRITTEN (PRACTICE PROJECT)                                        *
  *                                                                         *
  *  @desc Main File, This file initializes pokemons and moves              *
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


Pokemon *pokeDex[100];
int pokeDexEntry = -1;

Pokemon *newPokemon(char name[20], int dets[5], int pkdexEntry,Move *mo)
{
    Pokemon pkmn;
    pokeDex[pokeDexEntry + 1] = (Pokemon *)malloc(sizeof(Pokemon));
    // strcpy(pkmn.name, name);
    strcpy(pokeDex[pokeDexEntry + 1]->name, name);
    pokeDex[pokeDexEntry + 1]->dexEntry = pkdexEntry;
    pokeDex[pokeDexEntry + 1]->moves[0] = mo;
    pokeDex[pokeDexEntry + 1]->stats.ATK = dets[0];
    pokeDex[pokeDexEntry + 1]->stats.DEF = dets[1];
    pokeDex[pokeDexEntry + 1]->stats.SPE = dets[2];
    pokeDex[pokeDexEntry + 1]->types[0] = dets[3];
    pokeDex[pokeDexEntry + 1]->types[1] = dets[4];

    // pokeDex[pokeDexEntry + 1] = pkmn;

    return pokeDex[pokeDexEntry + 1];
};

Move *newMove(char name[20], int power, int accuracy, int type)
{
    Pokemon pkmn;
    moves[moveEntry + 1] = (Move *)malloc(sizeof(Move));
    // strcpy(pkmn.name, name);
    strcpy(moves[moveEntry + 1]->name, name);
    moves[moveEntry + 1]->power = power;
    moves[moveEntry + 1]->accuracy = accuracy;
    moves[moveEntry + 1]->type = type;

    return moves[moveEntry + 1];
};


void main()
{
    int X[5] = {30, 40, 60, 4};
    

 Move *tackle = newMove("Pikachu", 20, 100,1);
Pokemon *pikachu = newPokemon("Pikachu", X, 5,moves[0]);

   // char *ss = pokeDex[0]->name;
    // printf("%s",ss);
    //printf("\n %d",pikachu->power);
    // printf("%s",ss);
    printf("\n %d",pikachu->moves[0]->power);
   showPokeInfo(pikachu);
    
}