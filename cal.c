#include <stdio.h>
#include <cs50.h>

void Fase1(void);
void Fase2(void);
void Adição(void);
void Subtração(void);
void Multiplicação(void);
void Divisão(void);

int main (void)
{
    printf("\n");
    printf("Seja bem vindo ao calculador CAB!\n");
    printf("\n");
    Fase1();
    Fase2();
    printf("Obrigado por usar o CAB!\n");
}




void Subtração(void)
{
    printf("Subtração\n");
    float S = get_float("S: ");
    printf("MENOS -\n");
    float s = get_float("s: ");
    printf("RESPOSTA: %f\n", S - s);

}
void Adição(void)
{
    printf("Adição\n");
    float A = get_float("A: ");
    printf("MAIS +\n");
    float a = get_float("a: ");
    printf("RESPOSTA: %f\n", A + a);
    
}
void Multiplicação(void)
{
    printf("Multiplicação\n");
    float M = get_float("M: ");
    printf("VEZES x\n");
    float m = get_float("m: ");
    printf("RESPOSTA: %f\n", M * m);
}
void Divisão(void)
{
    printf("Divisão\n");
    float D = get_float("D: ");
    printf("DIVIDIDO POR \n");
    float d = get_float("d: ");
    printf("RESPOSTA: %f\n", D / d);
}

void Fase1(void)
{
    //--------------------------------------------------------------------------------------------------------------------------------------------------
   
    printf("S = para sim ou N = para não\n");
    
    char a = get_char("Deseja usar calculadora de Subtração? \n");
    printf("\n");
    
    if (a == 's'||a == 'S')
    {
        Subtração();
        printf("\n");
    }
    else if (a == 'n'||a == 'N')
    {
        printf("\n");
    }

//---------------------------------------------------------------------------------------------------------------------------------------------------   
    
    printf("S = para sim ou N = para não\n");

    char b = get_char("Deseja usar calculadora de Adição? \n");
    printf("\n");
    
    if (b == 's'||b == 'S')
    {
        Adição();
        printf("\n");
    }
    else if (b == 'n'||b == 'N')
    {
        printf("\n");
   
    }

//---------------------------------------------------------------------------------------------------------------------------------------------------
  
    printf("S = para sim ou N = para não\n");
    
    char c = get_char("Deseja usar calculadora de Multiplicação? \n");
    printf("\n");
   
    if (c == 's'||c == 'S')
    {
        Multiplicação();
        printf("\n");
    }
    else if (c == 'n'||c == 'N')
    {
        printf("R: \n");
    }

//---------------------------------------------------------------------------------------------------------------------------------------------------
   
    printf("S = para sim ou N = para não\n");
    
    char d = get_char("Deseja usar calculadora de Divisão? \n");
    printf("\n");
   
    if (d == 's'||d == 'S')
    {
        Divisão();
        printf("\n");
    }
    else if (d == 'n'||d == 'N')
    {
        printf("\n");
    }
    
//---------------------------------------------------------------------------------------------------------------------------------------------------    
}
void Fase2(void)
{
    printf("S = para sim ou N = para não\n");
    printf("\n");
    char a = get_char("Deseja voltar ao inicio? \n");
    printf("\n");
    
    if (a == 's'||a == 'S')
    {
        Fase1();
    }
    else if (a == 'n'||a == 'N')
    {
        printf("Ok, Volte sempre!\n");
    }
}