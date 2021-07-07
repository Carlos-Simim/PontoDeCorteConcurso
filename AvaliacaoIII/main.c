#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
    char controle = 'S';
    float nota;
    int aprovados = 0;

    while(controle=='S')
    {
        nota = 0;
        printf("Forneça a nota do candidato: ");
        scanf (" %f",&nota);

        if (nota>=750)
        {
            aprovados = aprovados + 1;
        }

Erro:
        printf("\nDeseja fornecer mais uma nota? Responda com S ou N.\n");
        scanf(" %c",&controle);

        if(controle!='S'&&controle!='N')
        {
            printf("\nEntrada inválida. Favor responder com S para Sim ou N para não.");
            goto Erro;
        }


    }

    if (aprovados==1){
        printf("Neste concurso apenas %d candidato foi aprovado.",aprovados);
    }

    if (aprovados==0){
        printf("Nenhum candidato foi aprovado no concurso.");
    }

    if(aprovados>=2){
        printf("Neste concurso %d candidatos foram aprovados.",aprovados);
    }

    sleep (4);

}
