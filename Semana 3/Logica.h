/* Construir una clase llamada Logica, la cual tiene los siguientes atributos edad_min, edad_max y rango. La clase tiene un método llamado introducir_edades(), donde se agregan las edades de n estudiantes, se guarda la mínima, la máxima y el rango (edad_máxima-edad_mínima) hasta que se introduce el número 99. Si la edad está por encima de 50 o por debajo de 10, debe volver a preguntar la edad para el mismo estudiante mostrando un mensaje de error. Por último, incluir un método mostrar_datos(), el cual muestra la edad mínima, la edad máxima ingresada y el rango. */ 


#include<iostream>


using namespace std;

class Logica
{
    public:
        int edad_min, edad_max, rango;
        void introducirEdades();
        void inicializar();
        void mostrarDatos();

    
};

void Logica::inicializar(){
    edad_min=0;
    edad_max=0;
    rango=0;
}

void Logica::introducirEdades(){
    int edad;
    bool band=true;
	while(band){
		cout << "Ingrese la edad: ";
		cin >> edad;
		if (edad==99)
		{
            rango=edad_max-edad_min;
			band=false;
		}
        else if(edad<10 || edad>50){
            cout<<"Error en la edad ingresada!!!"<<endl;
        }
        else{
            //edadmin=21412521;
            //edadmin=12 edad=12
            //edad=11
            //edadmin > edad
            //edadmin = edad
            cout<<"Edad ingrasada correctamente"<<endl;
            if(edad_min==0 || edad_min>edad){
                edad_min=edad;
            }   
            if(edad_max==0 || edad_max<edad){
                edad_max=edad;
            }  

        }
	}

}

void Logica::mostrarDatos(){
    cout<<"La edad minima es: "<<edad_min<<endl;
}

