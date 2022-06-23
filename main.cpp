#include "Cliente.cpp"
#include <iostream>
using namespace std;
main(){
	string nit,nombres,apellidos,direccion,fn;
	int telefono;
	
	cout<<"Ingrese Nit: ";
	cin>>nit;
	cout<<"Ingrese Nombres: ";
	cin>>nombres;
	cout<<"Ingrese Apellidos: ";
	cin>>apellidos;
	cout<<"Ingrese Direccion: ";
	cin>>direccion;
	cout<<"Ingrese Fecha de nacimiento: ";
	cin>>fn;
	cout<<"Ingrese Telefono: ";
	cin>>telefono;
	// instanciar un objeto
	Cliente obj = Cliente(nombres,apellidos,direccion,fn,telefono,nit);
	obj.mostrar();
	cout<<"Ingrese Nit: ";
	cin>>nit;	
	obj.setNit(nit);
	obj.setNombres(nombres);
	obj.setApellidos(apellidos);
	obj.setDireccion(direccion);
	obj.setFn(fn);
	obj.setTelefono(telefono);
	obj.mostrar();
	
	cout<<"Nit: "<<obj.getNit()<<endl;
}
