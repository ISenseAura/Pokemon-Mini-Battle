/****************************************************************************
  *  SELF WRITTEN (PRACTICE PROJECT)                                        *
  *                                                                         *
  *  @desc Define entities for Pokemon and Moves                            *
  *  @author Mayur (mayurhiwale2451982@gmail.com)                           *
  *  @required include required header files                                *
  *  @license MIT license                                                   *
  *  @git https://github.com/Zerapium/Pokemon-Mini-Batttle                  *
  *                                                                         *
  **************************************************************************/



char *types[] = {
   "Normal", "Grass", "Water", "Fire", "Ground", "Electric", "Flying", "Ghost", "Psychic", "Dark"};

typedef struct PokemonStats
{
    int ATK;
    int DEF;
    int SPE;
} PokemonStats;

typedef struct Move {
    int power;
    char name[20];
    int accuracy;
    int id;
    int type;
} Move;

Move *moves[20] = {};
int moveEntry = -1;

typedef struct Pokemon
{
    long int id;
    int dexEntry;
    char name[20];
    int types[2];
    PokemonStats stats;
    Move *moves[4];
} Pokemon;
