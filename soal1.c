#include <stdio.h>

int main (void){
    int izin;
    int input_suhu;
    int radiasi;
    int jam;

    scanf("%d %d %d %d",&izin, &input_suhu, &radiasi, &jam );

    if (radiasi>=6){
        printf("TOLAK\n");
    }
    else if (input_suhu>=390){
        printf("KARANTINA\n");
    }

    else if (izin==1 && jam<6 || jam>20){
        printf("TOLAK\n");
    }

    else if (izin==1){
        printf("MASUK\n");
    }

    else if (izin==2 &&radiasi <=2 && 8<=jam<=18){
        printf("MASUK\n");
    }

    else if (izin==2){
        printf("PEMERIKSAAN\n");
    }

    else if (izin==3 && radiasi ==0 && input_suhu<380){
        printf("MASUK\n");
    }

    else {
        printf("TOLAK\n");
    }

    return 0;
}
