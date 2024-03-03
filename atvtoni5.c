#include <stdio.h>

int main() {
    int idade, maiorIdade = 0, menorIdade = 999, quantidadeMulheresSalario1800 = 0;
    char sexo, menorSalarioSexo;
    float salario, salarioTotal = 0, menorSalario = 999999;
    int numeroHabitantes;
    printf("Informe o numero de habitantes na regiao: ");
    scanf("%d", &numeroHabitantes);
    for (int i = 0; i < numeroHabitantes; i++) {
        printf("\nInforme a idade do habitante %d: ", i + 1);
        scanf("%d", &idade);
        printf("Informe o sexo do habitante %d (m/f): ", i + 1);
        scanf(" %c", &sexo);
        printf("Informe o salario do habitante %d: ", i + 1);
        scanf("%f", &salario);
        salarioTotal += salario;
        if (idade > maiorIdade) {
            maiorIdade = idade;
        }
        if (idade < menorIdade) {
            menorIdade = idade;
        }
        if (sexo == 'f' && salario == 1800) {
            quantidadeMulheresSalario1800++;
        }
        if (salario < menorSalario) {
            menorSalario = salario;
            menorSalarioSexo = sexo;
        }
    }
    float mediaSalarios = salarioTotal / numeroHabitantes;
    printf("\nA media dos salarios do grupo: %.2f", mediaSalarios);
    printf("\nA maior idade do grupo: %d", maiorIdade);
    printf("\nA menor idade do grupo: %d", menorIdade);
    printf("\nA quantidade de mulheres com salario de 1800: %d", quantidadeMulheresSalario1800);
    printf("\nA idade e o sexo da pessoa que possui o menor salario: %d anos, sexo %c\n", menorIdade, menorSalarioSexo);
    return 0;
}


