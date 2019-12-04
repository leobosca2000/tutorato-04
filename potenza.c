/***********************************************************************
 * 
 * TUTORATO 4: Verifica automatica
 * ===============================
 * 
 *
 * Primo esercizio: calcolo della potenza 
 * --------------------------------------
 *
 * 1) Completa il file inserendo le istruzioni per leggere i dati ed
 *    eseguire l'algoritmo richiesto.
 * 
 * 2) Compila il programma con il comando:
 * 
 *      gcc -Wall -o potenza potenza.c
 *    
 * 3) Esegui il programma digitando al terminale:
 * 
 *      ./potenza
 *
 * 4) Verifica la correttezza del programma con il comando:
 *     
 *      ./pvcheck -f potenza.test ./potenza
 *
 *    Se i test hanno rilevato errori cerca di capirne
 *    la causa, correggi il problema e riprova finche' il programma
 *    non passa tutti i test.
 * 
 ***********************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{
  /* Completa la funzione con la lettura dei dati e il calcolo della potenza . */
    float a;
    int b;
    float p=1;

   printf("Inserire il valore della base:\n");
   scanf("%f", &a);
   printf("Inserire valore dell'esponente:\n");
   scanf("%d", &b);

   if(a==0 && b==0){
       printf("[POTENZA]\n");
       printf("non calcolabile\n");
   }
   
   if(a==0 && b<0){
       printf("[POTENZA]\n");
       printf("non calcolabile\n");
   }
   
       if(b>0){
            do{
                if(b%2!=0){
                    p= p*a;
                }
                b=b/2;
                a=a*a;
            }while(b>0); 
            printf("[POTENZA]\n");
            printf("%f\n", p);
        }      else if(b<0 && a!=0){
                  do{
                if(b%2!=0){
                    p= p*a;
                    }
                    b=b/2;
                a=a*a;
            }while(b<0);
                p=1/p;
                printf("[POTENZA]\n");
                printf("%f\n", p);
            }       else if(b==0 && a!=0){
                    p=1;
                    printf("[POTENZA]\n");
                    printf("%f\n", p);
}    
  /* Il software pvcheck richiede che l'output sia formattato in un
     modo specifico.  Per questa volta le istruzioni di stampa sono
     gia` state scritte.*/
  
  return 0;
}
