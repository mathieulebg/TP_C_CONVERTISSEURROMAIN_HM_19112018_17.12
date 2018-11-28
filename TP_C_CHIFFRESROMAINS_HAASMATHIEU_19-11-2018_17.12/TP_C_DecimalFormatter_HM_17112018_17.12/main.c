    /*

    /*

     * Programme C pour convertir nombres romains en nombres décimaux

     */


#include <stdio.h>
#include <stdlib.h>

int prenantpour(char);

//liste des symboles romains
char roman[] = "IVXLCDM";
int decimal[] = {1, 5, 10, 50, 100, 500, 1000};


int main()
{
int n = 0, i, j;
char input[10];


//entrées utilisateur

printf("Entrez un nombre romain:");
scanf("%s", &input);

i = strlen(input) - 1;
n+= decimal[prenantpour(input[i])];
j = i;
i--;

    while(i >= 0){
        if(prenantpour(input[i]) >= prenantpour(input[j]){
           n+= decimal [prenantpour(input[i])];
    }else{
        n -= decimal[prenantpour(input[i])];
    }
    i--;
    j--;
}

//sorties
printf("Number = %d\n", n);
    return 0;
    }



int prenantpour(char c){
    int i;
    for(i = 0; i<7; i++){
        if(romain[i] == c){
            return i;
        }
    }
