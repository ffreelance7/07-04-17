#include <iostream>
using namespace std;

int suma(int [],int );
int promedio(int [],int );
void invertir(int [],int);
void ordenar(int [],int);
int tamanocadena(char[]);
int multarra(int[][3],int[][3],int [][3]);

int main()
{
    char cadena[]="hello";
    int n=8;
    int arra[]={5,8,4,3,9,10,2,15};
   // cout<<suma(arra,8)<<endl;
   //cout<<promedio(arra,8)<<endl;
    //cout<<invertir(arra,8)<<endl;
    int P1[3][3]={{4,6,2},
              {8,1,7},
              {9,10,16}
    };
    int P2[3][3]={{8,9,1},
              {1,19,2},
              {7,20,9}
    };
    int resul[3][3];

   // invertir(arra,8);
    multarra(P1,P2,resul);
    //ordenar(arra,8);
   /* for(int i=0;i<n;i++){
        cout<<arra[i]<<endl;
    }*/
    for(int i=0;i<3;i++){
         for(int j=0;j<3;j++){
            cout<<resul[i][j]<<"||";
        }
            cout<<'\n';
    }
    cout<<"-----------";
   // cout<<tamanocadena(cadena)<<endl;
    return 0;
}
int suma(int arr[],int tam){
    int sum=0;
    for(int i=0;i<tam;i++){
        sum=sum+arr[i];
    }
    return sum;
}
int promedio(int arr[],int tam){
    int prom=0;
    prom=suma(arr,tam)/tam;
    return prom;
}
void invertir(int arr[],int tam){
    int temp;
    for(int i=0,j=tam-1 ;i<j; i++,j--){
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
}
void ordenar(int arr[],int tam){
    int temp;
    for(int i=1;i<tam;i++){
        for(int j=0;j<tam-i;j++){
                if(arr[j]>arr[j+1]){
                    temp=arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=temp;
                }

        }
    }
}
int tamanocadena(char cadena[]){
    int cont=0;
    for(int i=0;cadena[i]!='\0';i++){
        cont++;
    }
    return cont;

}
int multarra(int p1[][3], int p2[][3],int resul[][3]){
    int sum=0;
    for(int t=0;t<3;t++){
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                sum=sum+(p1[t][j]*p2[j][i]);
            }
            resul[t][i]=sum;
            sum=0;
        }
    }

}
