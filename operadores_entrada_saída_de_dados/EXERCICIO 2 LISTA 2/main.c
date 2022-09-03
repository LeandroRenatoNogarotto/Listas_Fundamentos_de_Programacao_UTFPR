# include <stdio.h>
int main ()
{
    float n1 , n2 , aux ;

    printf (" Digite o primeiro valor : \n");//recebendo os valores
    scanf ("%f", & n1 ); //armazenando os valores

    printf (" Digite o segundo valor : \n");//recebendo os valores
    scanf ("%f", & n2 ); //armazenando os valores

    aux= n1+n2; //aux recebe o valor da soma de n1 e n2

    printf ("%.2f + %.2f = %.2f", n1, n2, aux );// imprimindo os numeros e a soma
    return 0;
}

