#include <stdio.h>

int main(){

char Estado[3];
char Codigo[5];
char Cidade[50];
int Habitantes;
float Area;
float PIB;
int Turismo;

printf("Digite a Sigla do estado: \n");
scanf("%s", Estado);

printf("Digite o Codigo: \n");
scanf("%s", Codigo);

printf("Digite a Cidade: \n");
scanf("%s", Cidade);

printf("digite o numero de habitantes: \n");
scanf("%i", &Habitantes);

printf("Digite a Area: \n");
scanf("%f", &Area);

printf("Digite o PIB: \n");
scanf("%f", &PIB);

printf("Digite a quantia de pontos turisticos: \n");
scanf("%i", &Turismo);

printf("Estado: %s\n", Estado);
printf("Codigo: %s\n", Codigo);
printf("Cidade: %s\n", Cidade);
printf("Numero de habitantes: %i\n", Habitantes);
printf("Area: %f\n", Area);
printf("PIB: %f\n", PIB);
printf("Turismo: %i\n", Turismo);

return 0;

}// Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
