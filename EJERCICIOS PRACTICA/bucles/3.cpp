#include <iostream>

using namespace std;

int main()  

{   /*//imprimir los n primeros 
    //numeros apartir de intruducir n hasta p introducido
    int n;
    int p;

    cout<< "ingrese n -->"; cin >> n ;
    cout << "ingrese p que sea mayor a n --> " ; cin >> p;

    while( n <= p)
    {
        cout << n << endl;
        n++ ;

    }*/

    /*
    int i = 1; //con el do while

    do{
        cout << i <<endl;
        i++;
    }while(i<=20);
    */



    /*// con el for
    for (int i=1; i <= 10 ; i++){
        cout << i <<endl;
    }
    cout << "-------------------"<< endl;
    for (int i=10; i >= 1 ; i--){
        cout << i <<endl;
    }*/
    
    /*//tabla de multiplicar
    int n;
    cout << "ingrese la n para la tabla de mult--> " ;cin >> n;
    for(int i = 1 ; i <= 10 ; i ++)
    {
        cout << i <<"*"<< n<< "="<< i*n << endl;  
    }*/

    /*int suma = 0;
    int cuadrado;

    for(int i=1 ; i <= 10 ;i++)
    {
       cuadrado=i*i;
       suma = suma + cuadrado;
    }
    cout<<"la suma es--> " << suma <<endl;
    */
    
    /*int i;          //sin bucle
    cin >> i ;
    int suma = (i*(i+1)*(2*i+1))/6;
    cout << "la suma es --> " << suma << endl;*/

    //temperatura
    /*
    float temperatura1 ,temperatura2 , temperatura3, temperatura4, temperatura5, temperatura6; 
    
    for(int i = 1 ; i <= 24 ; i=i+4)
    {
        cout<< "ingrese su temperatura de ahora--> " << i << "horas " ;
        
        if(i == 1){
            cin >> temperatura1;
        }
        else if(i == 5){
            cin >> temperatura2;
        }
        else if(i == 9){
            cin >> temperatura3;
        }
        else if(i == 13){
            cin >> temperatura4;
        }
        else if(i == 17){
            cin >> temperatura5;
        }
        else if(i == 21){
            cin >> temperatura6;
        }
    }
    int promedio = (temperatura1 + temperatura2 + temperatura3 + temperatura4 + temperatura5 + temperatura6)/ 6;
    cout << "la temperatura promedio es -->" << promedio << endl;

    float temperaturaMaxima = temperatura1;
    if (temperatura2 > temperaturaMaxima) {
        temperaturaMaxima = temperatura2;
    }
    if (temperatura3 > temperaturaMaxima) {
        temperaturaMaxima = temperatura3;
    }
    if (temperatura4 > temperaturaMaxima) {
        temperaturaMaxima = temperatura4;
    }
    if (temperatura5 > temperaturaMaxima) {
        temperaturaMaxima = temperatura5;
    }
    if (temperatura6 > temperaturaMaxima) {
        temperaturaMaxima = temperatura6;
    }
    cout << "La temperatura maxima es --> " << temperaturaMaxima << endl;

    float temperaturaMinima = temperatura1;
    if (temperatura2 < temperaturaMinima) {
        temperaturaMinima = temperatura2;
    }
    if (temperatura3 < temperaturaMinima) {
        temperaturaMinima = temperatura3;
    }
    if (temperatura4 < temperaturaMinima) {
        temperaturaMinima = temperatura4;
    }
    if (temperatura5 < temperaturaMinima) {
        temperaturaMinima = temperatura5;
    }
    if (temperatura6 < temperaturaMinima) {
        temperaturaMinima = temperatura6;
    }
    cout << "La temperatura minima es --> " << temperaturaMinima  << endl;
    */


   //

    int numero; 
    int suma;

    do{
        cout << "digite un numero cualquiera " ; cin >>numero ;
        if(numero > 0){
            suma =suma+numero;
        }
        
    } while((numero < 20 || numero > 30) && numero!=0);
    

    cout << "la suma es --> " << suma << endl;

    return 0;   
}