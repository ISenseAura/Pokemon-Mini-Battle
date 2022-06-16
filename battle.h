

typedef struct Player
{
    char name[10];
    Pokemon *mon;
} Player;

typedef struct Battle
{
    Player players[2];
    int turn;
    int curTurn;
    int wonBy;

} Battle;

Battle newBattle(Pokemon mon)
{
    Battle bt;
    Player p1;
    p1.mon = &mon;
    Player p2;
    int ran = randomNumber(3,1);
   p2.mon = pokeDex[ran];
    bt.players[0] = p1;
    bt.players[1] = p2;
    printf("%s",p2.mon->name);
    return bt;
}


