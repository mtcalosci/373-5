#include <stdio.h>
#include <stdlib.h>
#define N 5
int main(){
int conta = 0;
int i = 0;
int x = 0;
int v[N];
int vsec[N];


    for(i = 0; i < N; i++)          //Inserimento valori nell'array.
             {
              printf("Inserisci l'elemento %d dell'array: \n",i);
              scanf("%d",&v[i]);
             }
             
             
             
    for(x = 0; x < N; x++)      //Ciclo esterno,
             {
             conta = 0;
             for(i = 0; i < N; i++) // Ciclo interno che mi permette di contare quanti valori sono minori del valore Xesimo.
                      {
                       if(v[x] > v[i])
                               {
                                    conta++;
                               }
                       
                      
                      }
    vsec[conta] = v[x]; //Posiziono il valore Xesimo del primo vettore (v) in un altro vettore, precisamente nella posizione CONTAesima.
}
       
       
    for(i = 0; i < N; i++)          //Stampa dell'array ordinato.
             {
              printf("Elemento %d del vettore ordinato : %d\n",i, vsec[i]);
             }
             

    
    
system("pause");
return 0;

}
