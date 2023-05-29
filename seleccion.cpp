#include <iostream>
using namespace std;
main()
{
	//ARRAY = arreglo o coleccion o matriz
	//se utilizan para almacenar varios valores en una sola variable
	int tam=0,suma=0,promedio=0;
	int notas[tam];
	char res;
	do{
		tam++;
		cout<<"Ingrese nota "<<tam<<":";
		cin>>notas[tam-1];
		cout<<"Desea ingresar otra nota(s/n):";
		cin>>res;
	}while(res=='s'||res=='S');
	
	for(int i=0;i<tam;i++){
		suma+=notas[i];
		cout<<notas[i]<<endl;
	}
	promedio=suma/tam;
	cout<<"El promedio es: "<<promedio<<endl;
	/*int notas[tam];
	cout<<"Cuantas notas desea ingresar: ";
	cin>>tam;
	for(int i=0;i<tam;i++){
		cout<<"Ingrese Nota "<<i+1<<":";
		cin>>notas[i];
	}
	for(int i=0;i<tam;i++){
		suma += notas[i]; //suma = suma + notas[i]
	}
	promedio = suma/tam;
	cout<<"El promedio es: "<<promedio<<endl;
	int notas[4]{80,65,60,75}; //nota1,nota2,nota3,nota4; indice o posicion del arreglo inicia en 0
	notas[0]=80;//nota1
	notas[1]=65;//nota2
	notas[2]=60;//nota3
	notas[3]=75;//nota4
	for(int i=0;i<4;i++)
	{
		cout<<i<<": "<<notas[i]<<endl;
	}*/
	//0-3=0,1,2,3
	system("pause");
}
