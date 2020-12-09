#include <stdio.h>

int main(){

int idade_casal[5][2];
int quantidade = 0;

for(int i=0;i<5;i++){

    for (int j=0;j<2;j++){

        printf("Digite a idade do casal numero %d: ", i+1);

        scanf("%d", &idade_casal[i][j]);

            if(idade_casal[i][j] >= 18 && idade_casal[i][j] <= 30){
                quantidade += 1;

    }
    }
    }

    printf("------------------------------------------------\n");
    printf("Quantidade de idades entre 18 e 30 anos: %d\n", quantidade);

return 0;
}
