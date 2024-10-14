#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int lvl,intInput,count,intRand,intRandHard;
    char charInput, charRand;

    srand(time(NULL));
    intRand = rand() % 101;
    intRandHard = rand() % 101 + 10;
    charRand = rand() % 26 + 'a';


    do{
        printf("-------------Welcome To Guessing Game-------------\n");
        printf("-------------Choose difficulty level-------------\n");
        printf("-------------1 : Easy level-------------\n");
        printf("-------------2 : Medium level-------------\n");
        printf("-------------3 : Hard level-------------\n");
        printf("-------------0 : Quit-------------\n");
        scanf("%d",&lvl);
    }while(lvl > 3 || lvl < 0);


    switch(lvl){
        case 1 : {
            count = 1;
            printf("Easy Level : The Number is between 0 and 100\n");
            while(count <= 15){
               do{
                printf("Choose Number Between 0 and 100\n");
                scanf("%d",&intInput);
               }while(intInput < 0 || intInput > 100);
                if(intInput < intRand){
                    printf("The Number is greater then your input, %d attempts left\n", 15 - count);
                } else if(intInput > intRand){
                    printf("The Number is lower then your input, %d attempts left\n", 15 - count);
                } else {
                    printf("Good Job ! you win the game in %d attempts\n",count);
                    break;
                }
                count++;
            }

            break;
        }
        case 2 : {
            count = 1;
            printf("Easy Level : The Number is between 0 and 10000\n");
            while(count <= 10){
               do{
                printf("Choose Number Between 0 and 10000\n");
                scanf("%d",&intInput);
               }while(intInput < 0 || intInput > 10000);
                if(intInput < intRand * 100){
                    printf("The Number is greater then your input, %d attempts left\n", 10 - count);
                } else if(intInput > intRand){
                    printf("The Number is lower then your input, %d attempts left\n", 10 - count);
                } else {
                    printf("Good Job ! you win the game in %d attempts\n",count);
                    break;
                }
                count++;
            }

            break;
        }
         case 3 : {
            count = 1;
            printf("Hard Level : The Number is between 10 and 100\n");
            while(count <= 10){
               do{
                printf("Choose Number Between 10 and 100\n");
                scanf("%d",&intInput);
               }while(intInput < 10 || intInput > 100);

               do{
                printf("Choose Char Between a and z\n");
                fflush(stdin);
                scanf("%c",&charInput);
               }while(charInput < 'a' || charInput > 'z');

                if(intInput < intRandHard ){
                    printf("The Number is greater then your input\n");
                } else if(intInput > intRandHard){
                    printf("The Number is lower then your input\n");
                } else {
                    printf("You got the number right !\n");
                }

                if(charInput < charRand ){
                    printf("The Char is greater then your input\n");
                } else if(charInput > charRand){
                    printf("The Char is lower then your input\n");
                } else {
                    printf("You got the char right !\n");
                }
                 printf("%d attempts left\n", 10 - count);
                 if(charInput == charRand && intInput == intRandHard){
                     printf("Good Job ! You won the game in attempts %d\n",count);
                    break;
                 }


                count++;
            }

            break;
        }
    }

    return 0;
}
