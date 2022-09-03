 #include <stdio.h>
 int main () {
 char aux ;

 printf (" Digite um caracter : ");
 scanf ("%c", & aux );
 printf ("%d", aux ); //O NUMERO IMPRIMIDO É CORRESPONDENTE AO CODIGO
                      //DECIMAL DA TABELA ASCII QUE REPRESENTA
                      //O CARACTER INSERIDO (ISSO OCORRE DEVIDO AO %d)
                      //QUE IMPRIME A FORMA DECIMAL ARMAZENADA NA VARIAVEL
                      //QUE NO CASO CORRESPONDE AO CODIGO DA ASCII

return 0;
 }
