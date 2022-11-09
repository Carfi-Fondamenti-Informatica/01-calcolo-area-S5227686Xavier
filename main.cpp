#include <iostream>
using namespace std;

int main(){
   float a=0,b=0,c=0;
    float area_triangolo,area_quadrato,area_rettangolo,area_trapezio;
    cout<<"scrivi i valori delle variabili:"<<endl;
cin >> a >> b >> c;

 area_triangolo=(a*b)/2;
    area_quadrato=a*a;
    area_rettangolo=a*b;
    area_trapezio=((a+b)*c)/2;
    cout<<area_triangolo<<endl<<area_quadrato<<endl<<area_rettangolo<<endl<<area_trapezio<<endl;


}
