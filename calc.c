#include <stdio.h>
#include <stdlib.h>

int choice ();
int userInput();

int main ()
{
    int ch,a,b;float res;char c,sign,it; 
    printf("Welcome to The Calculator user !! \n");
    ch=choice();
    while(1){
        a=userInput();
        b=userInput();
        
        switch (ch)
        {
            case 1:res=a+b;sign='+';
            break;
            case 2:res=a-b;sign='-';
            break;
            case 3:res=a*b;sign='*';
            break;
            case 4:res=(float)a/b;sign='/';
            break;
            default:printf("Come on ! Enter a valid choice \n");
        }
        if (ch<5){
        printf("The result of %d %c %d is %f \n", a, sign, b, res);}

        printf("Do you want to run the calculator again? Y|N: ");
        scanf("%c", &it);
        
        if ((it=='N')||(it=='n')){
            printf("\n Have a nice day !! \n");
            exit(0);
        }
        else{
            ch=choice();}
    }
    return 0;
}

int choice()
{
    int chT;
    printf("Please enter a choice from the menu => \n");
    printf(" 1. Addition \n 2. Subtraction \n 3.Multiplication \n 4. Division \n Your choice please : ");
    scanf("%d", &chT);
    return(chT);

}

int userInput()
{
    int ui;
    printf("Please enter a number : ");
    scanf("%d", &ui);
    printf("\n");
    return(ui);
}