/*
#include <iostream>
using namespace std;    
int main(){
    int x = 0;  
    int y = 2; 

    int &ref = y; //2
    ref++; //3
    cout<<x++<<endl; //0
    cout<<++y<<endl; //4
    cout<<++ref<<endl; //5

    int arr[] = {10,0,1,4,9,10}; //6

    while (arr[x]) //1-->0 no entra , // 
    {
        if(--ref){
            arr[ref] = 10;
        }
        else{
            --x;
        }
        cout << arr[x] << endl;
    }
    cout << arr[x] << endl; // 0,

    return 0;
}
*/





/*
#include <iostream>
using namespace std;

void bublesort(int arr[], const int t){

    for(int i = 0; i < t ; i++){
        for(int b = 0; b < t; b++){
            if(arr[b] > arr[b+1]){
                int temp = arr[b];
                arr[b] = arr[b+1];
                arr[b+1]= temp;
            }
        }
        cout<<arr[i]<<endl;
    }

}

int main(){

    int a[] = {23,3,22,323,3312,123};
    const int t = 6;

    bublesort(a,t);

    return 0;
}



*/


/*implemente una funcion que reciba un arreglo de cadenas 
y ordene dichas cadenas alfabeticamente. 
Implemente una funcion principal main para invocar dicha funcion
*/
/*
#include <iostream>
#include <string>

using namespace std;
 
void print(string a[] , const int t){
    for (int i = 0; i < t; i++)
    {
        cout<<a[i]<< " ";
    }

}

void bublesort(string arr[], const int t){
    for(int i = 0; i < t; i++){
        for(int b = 0; b < t -1 ; b++){
            if(arr[b] > arr[b+1]){
                string temp = arr[b];
                arr[b] = arr[b+1];
                arr[b+1]= temp;
            }
        }
    }
    print(arr,t);

}

int main(){

    string a[] = {"pato", "come","a" , "ganzo" ,"b"};
    const int t = 5;

    bublesort(a,t);

    return 0;

}


*/



/*voltear array de enteros 
#include <iostream>

using namespace std;

void voltear(int arr[], int t, int i = 0) {
    if (i == t / 2) {
        return; // Caso base: hemos invertido la mitad del arreglo
    }

    // Intercambia los elementos en las posiciones i y t - 1 - i
    int temp = arr[i];
    arr[i] = arr[t - 1 - i];
    arr[t - 1 - i] = temp;

    // Llama recursivamente a la función para el siguiente par de elementos
    voltear(arr, t, i + 1);
}

int main() {
    int a[] = {4, 3, 7, 1, 1};
    int t = 5;

    voltear(a, t);

    for (int i = 0; i < t; i++) {
        cout << a[i];
    }
    cout << endl;

    return 0;
}
*/

