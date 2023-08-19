#include<stdio.h>
int main()
{
    struct pockimon 
    {
        int attack;
        char name;
        int hp;
        int speed;
    }mewtwo,due,yue;
    
    printf("enter strength of attack by mewtwo:");
    scanf("%d",&mewtwo.attack);
    
    mewtwo.hp=100;
    mewtwo.speed=50;

    
    due.attack=60;
    due.hp=70;
    due.speed=80;

   
    yue.attack=79;
    yue.hp=80;
    yue.speed=70;

    printf("the strenght of attack by mewtwo :%d\n",mewtwo.attack);
    printf("%d\n",due.attack);
    printf("%d\n",yue.attack);
    
}