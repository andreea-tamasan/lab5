//
// Created by Home on 22.03.2022.
//
#include <iostream>
#include "Consola.h"
#include "Square.h"
#include "Repository.h"
using namespace std;

void Options(){
    cout << endl << "1.Read list of squares."<<endl;
    cout << "2.Show all entities of type Square."<<endl;
    cout << "3.Determinate the largest square."<<endl;
    cout << "4. Identify if the Square is in quadran I."<<endl;
    cout << "5. Get the longest subarray with equal squares."<<endl;
    cout << "x.Inchideti aplicatie."<<endl;
}

void readValuesForSquare(int &n,Square v[]) {
    int a, b, c, d, i = 0;
    cout<<"Dati nr. de patrate pe care doriti sa le introduceti: "; cin>>n;
    for (i =0; i < n; i++) {
        cout << "Square " << i << ":" << endl;
        cout << "Coordinates for down left point, x: ";
        cin >> a;
        cout << "Coordinates for up right point, x: ";
        cin >> b;
        cout << "Coordinates for down left point, y: ";
        cin >> c;
        cout << "Coordinates for up right point, y: ";
        cin >> d;
        if(abs(b-a)==abs(d-c) && b>a && d>c){
            Square S(a, c, b, d);
            v[i] = S;
        }
        else
        {
            i--;
            n--;
            cout<<"Square coordinates not good."<<endl;
        }
    }
}

void printSquares(int &n,Square v[]){
    for(int i=0;i<n;i++)
    {
        cout<<"Square "<< i<<" :";
        cout << v[i] << endl;
    }
}

void getTheLargestSquare(int n,Square v[],float &maxim){
    Square S;
    for(int i=0;i<n;i++)
        if(v[i].get_Length()>maxim){
            maxim = v[i].get_Length();
            S = v[i];
        }
    cout<<S;
}
void checkIfSquareInQuadranI(int n,Square v[],Square f[],int &j){
    j=0;
    for(int i=0;i<n;i++){
        if((v[i].get_x1()>0) && (v[i].get_y1()>0)){
            f[j] = v[i];
            j++;
    }}
}

void getLongestSubarrayOfEqualSquares(int n,Square v[], int &start, int &end){
    start=0;end=0;
    int l=0;
    int k = -1;
    for(int i=0;i<n-1;i++){
        if(v[i].get_x1() == v[i+1].get_x1() && v[i].get_x2() == v[i+1].get_x2() && v[i].get_y1() == v[i].get_y1() && v[i].get_y2() == v[i+1].get_y2()){
            l++;
            if(l>k)
            {
                k=l;
                start = i-l+1;
                end=i+1;
            }
            }
        else
            l=0;
        }
}

void runMenu(Square v[]){
    int ok=1,n;
    char option;
    while(ok==1)
    {
        Options();

        cout<<"Give option: ";
        cin>>option;
        switch(option)
        {
            case '1':{
                readValuesForSquare(n,v);
                break;
            }
            case '2': {
                printSquares(n,v);
                break;
            }
            case '3':{
                float maxim =0.0;
                getTheLargestSquare(n,v,maxim);
                break;
            }
            case '4':{
                Square f[10];
                int j=0;
                checkIfSquareInQuadranI(n,v,f,j);
                for(int k=0;k<j;k++)
                    cout<<"Square"<<k<<":"<<f[k]<<endl;
                break;
            }
            case '5':{
                int start,end;
                getLongestSubarrayOfEqualSquares(n,v,start,end);
                for(int i=start;i<=end;i++)
                    cout<<"Square "<<i<<" :"<<v[i]<<endl;
                break;
            }
            case 'x':
                ok = 0;
                break;
            default:
                cout<<"Try again!"<<endl;
        }
    }
}
