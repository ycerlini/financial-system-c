#include <stdio.h>

//Criamos os vetores de recebimento e despesas com 1000
// fontes de renda e despesa.
// Alem disso, ele possui dois campos, sendo 1 para o ida 
//para o valor da operacao.
void add_recebimento()
{
    float recebimentos[1000] [2];
    

    int num_recebimento = 0;
    int num_operacao = 0;

    float valores;

    print("%f, Entre o valor recebido");
    scanf("%f", &valores);


        printf("A operacao foi realizada!");
    }else if (valores == 0); 
    

        printf("A operacao foi realizada!");

    {

        printf("A operecao teve valor zero e nao computada");
    }    

   

void add_despesa()
{
    
    float despesas [1000] [2];

    int num_despesa = 0;
    int num_operacao = 0;

    float valores;

    print("%f, Entre o valor recebido");
    scanf("%f", &valores);

    }else if (valores < 0); 
    {
        despesa[num_operacao] [0] = num_despesa;
        despesa[num_operacao] [1] = valores;
        printf("Voce teve uma despesa de %.2f reais na operacao");
         num_despesa++;

        printf("A operacao foi realizada!");
    }else if (valores == 0)
    {

        printf("A operecao teve valor zero e nao computada");
    }    
    void saldo(float recebimentos[1000] [2], float despesas [1000] [2]);
{

    int num_recebimento = 0;
    int num_operacao = 0;
    int num_operacao = 0;
    int i = 0;

    float saldo = 0;

    float valores;

    for (i = 0; i < num_recebimento; i++)
    {
        saldo = saldo + recebimentos[i] [1];
    }
    or (i = 0; i < num_despesa; i++)
    {
        saldo = saldo - despesas[i] [1];
    }

    printf("O seu saldo e de %f", saldo);
    printf("Operacao concluida com sucesso!");
}
void saldo(float recebimentos[1000] [2], float despesas [1000] [2]);
            (int num_recebimento, int num_despesa)
{

    int num_operacao = 0;
    int i = 0;
    int j = 0;

    float saldo_total = 0;

    float vet_extrato [2000] [2];

    float valores;

    for (i = 0; i < num_recebimento; i++)
    {
        saldo_total = saldo_total + recebimentos[i] [1];
        vet_extrato[i] = recebimentos[i] [1];
        num_operacao++;

    }
    for (j = 0; j < num_despesa; j++)
    {
        saldo_total = saldo_total - despesas[i] [1];
        vet_extrato[i + j] =  0 - recebimentos[i] [1];
        num_operacao++;
    }

    for (j = 0; j <num_operacao; j++)
}   
        printf("Transacao numero %d no valor de %.2f n\", j+1, vet_extrato[j])
                j + 1,
                vet_extrato[j]);
    }
    printf("O seu saldo e de %f", saldo_total);
    printf("Operacao concluida com sucesso!");
}
    void calculo_irpf(float recebimentos)[1000] [2]
{
    float salario, recolhimento;
    int num_recebimento = 0;
    int i = 0;
    salario = 0;

    for(i=0, i < num_recebimento; i++)
    {
        salario = salario + recebimentos[i] [1];
    }

    if (salario <= 1903.98)
    {
        printf("\nVoce esta isento de recolhimento.");
    }else if (salario > 1903.98 && salario <= 2826.65)
    {
        recolhimento = (salario*7.5/100) - 142.80;
        printf("Voce devera recolher %f reais", recolhimento);    
    }else if (salario > 2826.65 && salario <= 3751.05)
    {
        recolhimento = (salario*15/100) - 354.80;
        printf("Voce devera recolher %f reais", recolhimento);
    }else if (salario > 3751.05 && salario <= 4664.68)
    {
        recolhimento = (salario*22.5/100) - 636.13;
        printf("Voce devera recolher %f reais", recolhimento);
    }else
    {
        recolhimento = (salario*27.5.100) - 869.36;
        printf("Voce devera recolher %f reais", recolhimento);

    }
    
}   
    void menu()
{
    int tmp = 1;
    int opcao = 0;
    while (tmp == 1)
    {
        printf("\n\nEntre a opcao desejada.");
        printf("\nDigite 1 para adicionar um recebimento;");
        printf("\nDigite 2 para adicionar uma despesa;");
        printf("\nDigite 3 para o saldo;");
        printf("\nDigite 4 para o extrato;");
        printf("\nDigite 5 para o calculo do IRPF;");
        printf("\nDigite 6 para sair;");
        
        scanf("%d", &opcao);

        switch(opcao)
        {
            case 1:
                add_recebimento();
                break;
            case 2:
                add_despesa();
                break;
            case 3:
                saldo():
                break;
            case 4:
                extrato();
                break;
            case 5: IPRF();
                break;
            case 6:
                printf("A aplicacao esta sendo finalizada!");
                tmp = 0;
            default:
                printf("A opcao insedira esta errada.");
                menu();
                break;
        }
    }
}