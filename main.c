
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int n_nodos;
int n_aristas;
int nodo_inicial;
int nodo_final;
int **Matriz=NULL;

void Lectura_Archivo(void){


  FILE *archivo;
  char n_archivo[100];
  int condicion = 0,i;

  while( condicion == 0 ){
    printf("Ingrese nombre del archivo: ");
    scanf("%s", n_archivo);
    archivo = fopen(n_archivo,"r");

    if( archivo!= NULL ){
      fscanf(archivo, "%d", &n_nodos);
      fscanf(archivo, "%d", &n_aristas);
      fscanf(archivo, "%d", &nodo_inicial);
      fscanf(archivo, "%d", &nodo_final);
      /*Casteo Matriz dinamica*/
      Matriz = (int **)malloc(n_nodos*sizeof(int));

      for (i=0;i<n_nodos;i++){
        Matriz[i] = (int *) malloc (n_nodos*sizeof(int));
      }

      if ( Matriz == NULL ){
        printf("NO hay suficiente espacio en memoria\n\n");
        condicion++;
      }
      else{
        printf("Se asigno memoria\n\n");
      }
      /*Casteo Matriz dinamica*/

      /*Se carga la matriz*/
      
      /*Se carga la matriz*/

    }
    else{
      printf("No se encontr%c el archivo.\n\n", 162);
      condicion++;
    }
    condicion++;
  }

}

void main(void){
  Lectura_Archivo();
}
