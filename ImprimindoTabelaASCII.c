#include <stdio.h>
#include <locale.h>

int main(){

    //alterando idioma para portugues
    setlocale(LC_ALL, "Portuguese");
    // declarando a variavel
    int ch;

    // iniciando comando de repeticao
    do {
          // sa�da para o usuario
          printf("------------------------------------------\n");
          printf("Digite o codigo da tabela ASCII (32 - 127)\nSair, digite -1\n ");
          scanf ("%d", &ch );
          // condicao
        if (ch != -1){

            if (ch >= 32 && ch <= 127){

          printf ("O caracter correspondente e: %c\n\n",ch);

          }else {

          printf ("O caractere digitado n�o � imprimivel, digite novamente!\n\n");

          }
          }

      }while (ch != -1);
      printf("----------------------\n");
      printf("**Voc� escolheu sair**\n");
   // retorna o valor
       return 0;
       }
