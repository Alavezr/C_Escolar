
#include <stdio.h>
#include <stdlib.h>
#include<strings.h>


struct Fecha{
    int dia;
    int mes; 
    int anio;
};

struct lolo{
    int numero;
    char text;
    
};

typedef struct{
    
    char nombre[30];

}prba;

void nuser();
void menu();
void nuevo();
void esc();

int main() {
    
    int numero=65;
    int opc;
    char tex[100];
  
    struct Fecha marco;
    marco.anio=1999;
    marco.mes=11;
    marco.dia=29;
    
    struct Fecha eliel;
    eliel.anio=1998;
    eliel.mes=11;
    eliel.dia=1;
    
            
    FILE*binario;
    
    binario = fopen("Numeros.dat","wb");
     fwrite(&marco,sizeof(struct Fecha),1,binario);
     fwrite(&eliel,sizeof(struct Fecha),1,binario);
     fclose(binario);
     
     struct Fecha m;
     
    
    binario=fopen("Numeros.dat","rb");
    
    fread(&m,sizeof(m),1,binario);
    printf ("%d %d %d\n",m.dia, m.mes, m.anio);
    fread(&m,sizeof(m),1,binario);
    printf ("%d %d %d\n",m.dia, m.mes, m.anio);
    fread(&m,sizeof(m),1,binario);
    printf ("%d %d %d\n",m.dia, m.mes, m.anio);
    
    fclose(binario);
    
  nuser();
    menu();
    do{  
    
        printf("Tu opcion: ");
    
    scanf("%d", &opc);
    
    switch(opc){
        case 1:
            
            
            nuevo();
        
            
            if(binario == NULL){
                printf("Error!\n");
            }
            else{
                printf("Se ha creado con exito!\n");
            }
            
            break;
            
        case 2:
            printf("Hola");
            esc();
            
            break;
            
        case 3:
            
            printf("Aqui podremos escribir otra vez!\n");
            break;
            
        case 4:
            
            printf("Aqui podremos leer!\n");
            
            break;
            
        case 5:
            
            printf("Aqui podremos modificar\n");
            
            break;
            
            
 }
  
  
  
  
  }while(opc != 6);
    
    
    
    return 0;
}

void nuser(){
    printf("Esta es la prueba\n");
            
}

void menu(){
    printf("Hola persona elige una opcion!\n");
    printf("1.-Crear un archivo\n2.-Escritura en archivo nuevo\n3.-Escritura al final de un archivo existente\n");
    printf("4.-Lectura de un archivo\n5.-Modificar un archiivo\n6.-Salir\n");
}

void nuevo(){
    
    
    FILE*binario;
    
    binario = fopen("Numeros.dat","wb");
    
    fclose(binario);
}

void esc(){
    
    
 
    FILE*binario;
    
    binario = fopen("Numeros.dat", "ab");
    
    prba nom;
    
    puts ("Ingresa el nombre que quieres guardar:");
    
    gets(nom.nombre);
    
    fclose(binario);
    
    
    
}