//Velasco Torres Patricia Jazmín
#include <stdio.h>
using namespace std; 
double CalculaFila(int n[]);
double CalculaPag(double d, int r);
int main()
{
	int  registros = 35, paginas = 1446497; 
	double fila = 0.0, totpag = 0.0, totbase = 0.0;
	int id = 4, notrab = 2, horario = 1, paciente = 4, camas = 3, salas = 3, elevadores = 1, edificios = 1, 
	hospital = 702, direccion = 10002, especialidad = 301, servicio = 1, extension = 4, telefono = 11, 
	correo = 201, paginaweb = 301, nomdirec = 402, ranking = 3, fecha = 3;
	int datosf[] = {id, notrab, horario, paciente, camas, salas, elevadores, edificios, 
	hospital, direccion, especialidad, servicio, extension, telefono, 
	correo, paginaweb, nomdirec, ranking, fecha}; 
	
	fila = CalculaFila(datosf); 
	totpag = CalculaPag(fila,registros); 
	totbase = totpag*paginas;
	
	printf("Calcula el tamaño de una base de datos \n\n");
	printf("El espacio requerido para una fila es de %.0f bytes \n\n",fila); 
	printf("En cada pagina hay %d registros, entonces en una pagina se emplean %.0f bytes \n\n", registros, totpag); 
	printf("En total son %d paginas en la Base de Datos, por tanto, la Base de Datos ocupa \n en total %.1f bytes de almacenamiento", paginas, totbase); 
}
double CalculaFila(int n[])
{
	int aux = 0; 
	for(int i=0; i<19; i++)
	{
		aux+= n[i]; 
	}
	return aux;
}
double CalculaPag(double d, int r)
{ 
	return d*r;  
}

