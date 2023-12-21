#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
    int i;
    int num1,num2;
    int cnt=0,win=0,lose=0,draw=0;
    
    srand(time(NULL));

    while (num1!=4)
    {
        printf("바위는 1, 가위는 2, 보는 3 결과확인은 4\n");
        printf("선택: ");
        
        scanf("%d", &num1);
        num2=rand()%3+1;

        if(num1==1)printf("당신은 바위를 선택  ");
        if(num1==2)printf("당신은 가위를 선택  ");
        if(num1==3)printf("당신은 보를 선택  ");

        if(num2==1)printf("컴퓨터는 바위를 선택\n ");
        if(num2==2)printf("컴퓨터는 가위를 선택\n ");
        if(num2==3)printf("컴퓨터는 보를 선택\n ");

        if((num1==1&&num2==2)||(num1==2&&num2==3)||(num1==3&&num2==1)){ printf("이겼습니다\n\n"); win++; }
        else if(num1!=num2) 
        { printf("졌습니다\n\n"); lose++; }

        if(num1==num2){
            printf("비겼습니다\n\n");
            draw++;    
        }
        cnt++;
    }
    
    printf("게임의 결과 : %d판 %d승, %d무, %d패 \n\n",cnt, win, draw, lose);    

    return 0;
}