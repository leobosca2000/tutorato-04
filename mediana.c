/***********************************************************************
 * 
 * TUTORATO 4: Verifica automatica
 * ===============================
 * 
 *
 * Primo esercizio: mediana di tre numeri
 * --------------------------------------
 *
 * 1) Completa il file inserendo le istruzioni per leggere tre numeri
 *    e calcolarne la mediana.
 * 
 * 2) Compila il programma con il comando:
 * 
 *      gcc -Wall -o mediana mediana.c
 *    
 * 3) Esegui il programma digitando al terminale:
 * 
 *      ./mediana
 *
 * 4) Verifica la correttezza del programma con il comando:
 *     
 *      ./pvcheck ./mediana
 *
 *    Dopo aver esaminato il risultato, termina il programma premendo
 *    il tasto 'Q'.  Se i test hanno rilevato errori cerca di capirne
 *    la causa, correggi il problema e riprova finche' il programma
 *    non passa tutti i test.
 * 
 ***********************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{
  /* Variabile che conterra` il risultato. */
  int mediana;
  int a, b, c;
  /* Completa la funzione con la lettura dei dati e il calcolo della mediana . */
    printf("Inserire 3 valori:\n");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    
    if((a>=b && b>=c) || (c>=b && b>=a)){
        mediana = b;
    }else if((b>=a && a>= c) || (c>=a && a>=b)){
        mediana= a;
    }else if((a>=c && c>= b) || (b>=c && c>=a)){
        mediana= c;
    }
  
  /* Il software pvcheck richiede che l'output sia formattato in un
     modo specifico.  Per questa volta le istruzioni di stampa sono
     gia` state scritte.*/
  printf("[MEDIANA]\n");
  printf("%d\n", mediana);
  
  return 0;
}
