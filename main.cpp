/*
* Estrucrutra de Datos.
* Autor: Estudiante Torres LLivipuma Romulo Jesus <rtorresll@est.ups.edu.ec>
* Universidad Politecnica Salesiana
* Fecha: 28-04-2021
* Pilas
*/
#include<iostream>
#include<stack>
using namespace std;
int main(){
    char opc;
    int num;
    stack<int>stack;
    cout<<" = = Welcome = = "<<endl;
    do{
        cout<<"\n0) Exit"
              "\n1) Enter Data"
              "\n2) Get Data"
              "\n3) See Top"
              "\n4) See if it's empety"
              "\nEnter the number of the operation:";
        cin>>opc;
        switch (opc) {
        case '0':
            cout<<"Thanks for use this program"
                  "\nGoodBay!\n";
            break;
        case '1':
            cout<<"\nEnter number: ";
            cin>>num;
            stack.push(num);
            break;
        case '2':
            cout<<"\nPopping the number...\n ";
            stack.pop();
            break;
        case '3':
            if(stack.empty())
                cout<<"\nERROR: The stack is Empty!";
            else
                 cout<<"\nThe Top is:"<<stack.top();
            break;
        case'4':
            if(stack.empty())
                cout<<"\nIt's Empety!!";
            else
                cout<<"\nIt isn't Empety!!";
            break;
        default:
            cout<<"Sorry, I don't reccognize that option"
                  "\nplease,try again\n";
            break;

        }
    }while (opc !='0');

return 0;
}
