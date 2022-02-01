#include "main.h"
/*HOMEWORK 2
1. Lavorare in gruppi da 3/4 persone
2. Un membro crei una repository su github ed inviti gli altri membri del gruppo come collaboratori
3. Il progetto dovrà essere scritto in C
4. Completare il proprio task e pushare le modifiche
Ogni membro sceglierà uno dei seguenti task da completare
a) Output del menu e input per far scegliere la funzione all’utente
b) Funzione sottrazione, funzione addizione
c) Funzione moltiplicazione, funzione divisione
d) Funzione arrotondamento a intero di un input
*/
int main(){
    int a,b;
    float risultato;
    printf("Hello,World!!!\n");
    printf("Andrea Orru");

    addizione(10,5);

}
int sottrazione(int a, int b){
    int res;
    return res=a-b;
}
int addizione(int a, int b){
    int res;
    return res=a+b;
}
float moltiplicazione(int a, int b){
    float res;
    return res=a*b;
}
float divisione(int a, int b){
    float res;
    return res=a/b;
}

