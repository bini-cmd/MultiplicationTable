/*
*Author: Biniyam Abera
*Date: Dec 8, 2024
*This program dispays a multiplication table based on the number a user enter
*/
#include <iostream>
using namespace std;

int main() {
    int num;
    //asks the user for a number and take input.
    cout<<"Enter a number: ";
    cin>>num;
    cout<<endl;

    cout<<"       ";//space between row and colomn.

    for (int i = 0; i <= num; i++) {
        cout<<"   "<<i<<"   ";//colmn header.
    }
    cout<<endl;

    //adds horizontal separetor to make the table visualy distinct.
    for (int i = 0; i <= num+1; i++) {
            cout<<"+------";
        }
    cout<<endl;

    //multipli and print the numbers.
    for (int j = 0; j <= num; j++) {
        cout<<"   "<<j<<"   ";//row header.
        for (int i = 0; i <= num; i++) {
            if (i*j<=9) {
                cout<<"|  "<<i*j<<"   ";//single digit alagnment.
            }
            else {
                cout<<"|  "<<i*j<<"  ";//double digit alagnment.
            }
        }

        //add my name at the end of the table.
        switch(j){
            case 1:
            cout<<"B";
            break;
            case 2:
            cout<<"i";
            break;
            case 3:
            cout<<"n";
            break;
            case 4:
            cout<<"i";
            break;
            default:
            cout<<"|";
        }
        cout<<endl;

        for (int i = 0; i <= num+1; i++) {
            cout<<"+------";
        }
        cout<<endl;
    }

    return 0;
}
