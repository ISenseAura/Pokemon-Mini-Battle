#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int randomNumber(int max, int min)
{
    srand(time(0));
    int num = rand() % (max + 1 - min) + min;
    return num;
}

int isLucky(int acc) {
    int outcomes[10] = {0,1,2,3,4,5,6,7,8,9};
    int num = randomNumber(9,0);
    printf("NUM : %d \n", num);
    for(int i = 0;i < (acc/10); i++) {
        if(outcomes[i] == num) return 1;
    }
    return 0;
}

int damage(int lvl,int power, float ATK,float DEF,float super,float critical) {
    float f1 = (float) (lvl * 2 / 5) * power;
    float f2 =  (ATK/DEF);
    
    if(f2 > 0) f1 = f1 * f2;
    f1 = f1 / 50;
    if(super) f1 = f1 * super;
    if(critical) f1 = f1 * 2;
    
    return (int) round(f1);
    //(round(lvl * 2 / 5) * power * round(ATK/DEF) / 50)+ 2;
}


