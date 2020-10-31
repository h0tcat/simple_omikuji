#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <time.h>

//おみくじサンプル

typedef enum {
    MAIN,
    EXIT,
}MODE;

typedef enum{
    DAIKYO=0,
    KYO=1,
    SUEKICHI=2,
    SHOKICHI=3,
    CHUKICHI=4,
    DAIKICHI=5,
}OMIKUJI_RESULT;

void get_omikuji(){
    srand((unsigned)time(0UL));
    int rnd=rand() % 6;
    OMIKUJI_RESULT omikuji=rnd;
    switch(omikuji){
        case DAIKYO:
            printf("結果は大凶です\n");
            break;
        case KYO:
            printf("結果は凶です\n");
            break;
        case SUEKICHI:
            printf("結果は末吉です\n");
            break;
        case SHOKICHI:
            printf("結果は小吉です\n");
            break;
        case CHUKICHI:
            printf("結果は中吉です\n");
            break;
        case DAIKICHI:
            printf("結果は大吉です\n");
            break;
    }
}
int main(void){

    MODE omikuji_mode=MAIN;
    int yesno;
    while(omikuji_mode==MAIN){
        printf("おみくじへようこそ!!\n");
        
        printf("何かキーを入力してください\n");
        getchar();
        
        get_omikuji();

        printf("\n\nもう一度引きますか? y=1/n=0 >");
        scanf("%d",&yesno);
        if(yesno==0){
            omikuji_mode=EXIT;
        }
    }


    printf("また遊んでね!\n");
    return 0;
}