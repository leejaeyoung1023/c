#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
    int i1,i2;
    int com[3],num[3];
    int strike=0,ball=0,cnt=0;
    
    srand(time(NULL));

    
    
    for(i1=0;i1<3;i1++){
        com[i1]=rand()%9;
        for(i2=0;i2<i1;i2++){
            if(com[i1]==com[i2])i1--;
        }        
    }
    printf("%d", com[0]);    
    printf("%d", com[1]);
    printf("%d", com[2]);
    printf("start game\n\n");
    
    while(strike!=3){
        cnt++; strike=ball=0;
        printf("3개의 숫자 선택: ");
        
        for(i1=0;i1<3;i1++){
            scanf("%d", &num[i1]);
        }
        
        for(i1=0;i1<3;i1++){
            if(com[i1]==num[i1])strike++; 
            else 
            for(i2=0;i2<3;i2++){
                if(com[i1]==num[i2])ball++;
            }
        }
        
        printf("%d번째 도전 결과: ", cnt);
        printf("%dstrike, %dball \n\n", strike, ball);
    }
    
    printf("game set\n\n");

    return 0;




    // git status
    // git commit -am "'파일이름"
    // git push
}