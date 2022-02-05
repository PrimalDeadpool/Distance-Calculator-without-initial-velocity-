/*Programa para calcular la distancia de la caida de un melon dependiendo de un punto en tiempo.
David A. Martinez
Kenneth
Eddie
Jan
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

	float distancia = 0.0, counter = 0.0, tiempo = 0.0, tiempofinal = 0.0, gravedad = 9.8, altura = 0.0; //variables
	cout << setprecision(2) << fixed << showpoint; //para formatear todo decimal a dos posciciones despues del punto

	cout << "Cual es la altura del puente hasta el agua?" << endl; //prompt por altura del puente
	cin >> altura; //recopilacion de altura

		if (altura > 0.0 && !cin.fail()) //uso de if para buscar solamente numeros validos para distancia, !cin.fail() por si introducen un char en vez de un numero
		{

			cout << "Introduzca cuanto segundos tardo en caer el melon." << endl; //prompt por segundos
			cin >> tiempo; //recopilacion de tiempo
			tiempofinal = tiempo; //asignacion de tiempo a otra variable

			if (tiempo >= 0.0 && !cin.fail()) //uso de if para validar tiempo, !cin.fail() por si introducen un char en vez de un numero
			{
				
				while (counter <= tiempofinal) //loop para calcular distancia por cada punto en tiempo hasta tiempo final
				{

					tiempo = counter; //asignacion de counter en tiempo para actualizar variable en cada loop
					distancia = 0.5 * gravedad * pow(tiempo, 2);//formula de distancia

					if (distancia > altura) //uso de if para validar que distancia de la caida no sea mayor que la altura del puente al agua
					{

						cout << "Su distancia es mayor que la altura del puente. Por favor introduzca de nuevo." << endl; //prompt de error

					}

					else //else para usar la distancia ya validada
					{	

							cout << "La altura desde el puente: " << altura << endl << "El tiempo que tardo en caer es: " << tiempofinal << endl << "Su distancia es: "  << distancia << " en el segundo " << counter << endl; //prompt de resultados
							counter++; //expresion para anadirle 1 a counter
							cout << endl;

					}

				}

			}

			else //validacion de tiempo
			{
				cout << "Por favor, entre un valor de tiempo valido." << endl; //prompt error

			}

		}

		else //validacion de altura
		{
			cout << "Por favor, entre un valor de altura valido." << endl; //prompt error
		}

	return 0; //end

}