#include <stdio.h>
#include <string.h>
typedef struct pokemon
{
    int hp;
    int attack;
    char tier;
}pokemon;
void fun(pokemon p)
{
    printf("%d",p.hp);
    return;
}
int main()
{
    pokemon e;
    e.hp=5;
    fun(e);
}