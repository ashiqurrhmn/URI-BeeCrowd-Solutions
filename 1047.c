#include <stdio.h>
int main()
{
    int sh, sm, eh, em;
    scanf("%d %d %d %d", &sh, &sm, &eh, &em);

    int endTime = 60*eh + em;
    int startTime = 60*sh + sm;
    int duration= endTime-startTime;

    if(duration<=0)
    {
        duration= 24*60+duration;
    }

    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", duration/60, duration%60);
}
