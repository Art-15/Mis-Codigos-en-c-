#include<iostream>
 #include<mcfgthread/gthr.h>
using namespace std;
 
int main(){

float importeBruto;
float valorNeto;
float montoITBIS;

cout<<"En este programa se calculara el total del ITBIS a pagar y el valor neto de una factura"<<endl;

cout<<"Instroduzca el importe bruto: ";
cin>>importeBruto;
 
montoITBIS = 0.18 * importeBruto;
 valorNeto = importeBruto + montoITBIS;

cout<<"El valor del Monto Bruto = "<<importeBruto<<endl;
cout<<"Resultado"<<endl;

cout<<"ITBIS: "<<ITBIS<<endl;
cout<<"Neto Facturado: "<<valorNeto;
 


  return 0;
}