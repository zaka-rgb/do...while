#include <stdio.h>
#include <stdlib.h>

int main()
{
  int note=1;
    do
    {
        printf("valide\n\n"); // au moins faire le test une fois
        note++;
    }
    while((note>=10)&&(note<=20));
}
