#include <iostream>
#include <fstream>
#include <vector>
#include <map>
#include <string>

using namespace std;




int main() {
/*
    string valor;

    load_from(load_from("bid_example.txt", valor))
    if (valores.is_open())
    {
        while (valores >> valor)
        {
            while (valores >> valor)
            {

            }
        }
    }*/



    map<string, int> usuario_oferta0;

    usuario_oferta0.insert(pair<string,int>("alias9",10));
    usuario_oferta0.insert(pair<string,int>("alias2",11));
    usuario_oferta0.insert(pair<string,int>("alias3",20));
    usuario_oferta0.insert(pair<string,int>("alias8",10));
    usuario_oferta0.insert(pair<string,int>("alias2",9));
    usuario_oferta0.insert(pair<string,int>("alias1",10));




   /* map<string, int> usuario_oferta1;
    usuario_oferta1.insert(pair<string,int>("alias4",50));
    usuario_oferta1.insert(pair<string,int>("alias5",20));
    usuario_oferta1.insert(pair<string,int>("alias7",10));
    usuario_oferta1.insert(pair<string,int>("alias1",20));
    usuario_oferta1.insert(pair<string,int>("alias6",10));


    map<string, int> usuario_oferta2;

    usuario_oferta2.insert(pair<string,int>("alias10",20));
    usuario_oferta2.insert(pair<string,int>("alias11",50));
    usuario_oferta2.insert(pair<string,int>("alias2",20));
    usuario_oferta2.insert(pair<string,int>("alias12",40));
    usuario_oferta2.insert(pair<string,int>("alias13",20));


    map<string, int> usuario_oferta3;

    usuario_oferta3.insert(pair<string,int>("alias14",11));
    usuario_oferta3.insert(pair<string,int>("alias15",10));
    usuario_oferta3.insert(pair<string,int>("alias1a",11));
    usuario_oferta3.insert(pair<string,int>("alias2b",10));



    map<string, map< string, int>> producto_persona;
    producto_persona.insert(pair<string, map<string, int>>("MACBOOK PRO",usuario_oferta0));
    producto_persona.insert(pair<string, map<string, int>>("THINKPAD P50",usuario_oferta1));
    producto_persona.insert(pair<string, map<string, int>>("IPHONE 11",usuario_oferta2));
    producto_persona.insert(pair<string, map<string, int>>("SAMSUNG TV 50",usuario_oferta3));
*/

   /* int var = 0;
    int mayor = 0, menor1 = 0, suma = 0;

    //Contiene las apuestas de usuario_oferta0
    vector <int> numeros;
    //Contiene los que apostaron solo una vez
    vector <string> apostados;
    //variable para comparar
    string repetido;

    for (auto it = usuario_oferta0.begin(); it != usuario_oferta0.end(); it++)
    {
        //igualo a var el mayor numero apostado por el objeto
        if (var < it->second)
        {
            var = it->second;
        }

        numeros.push_back(it->second);

        repetido = it->first ;

        for (auto & it2 : usuario_oferta0)
        {
            if (repetido == it2.first)
            {
                apostados.push_back(repetido);
            }
        }
        auto it2 = usuario_oferta0.begin();

    }

//Obtengo el mayor y menor valor de apuesta.
    for (int i = 0; i != numeros.size(); i++)
    {
        suma = suma + numeros[i];
        mayor = numeros[i];
        menor1 = numeros[i];

        for (i=0; i<10; i++){
            if (numeros[i] > mayor){
                mayor=numeros[i];
            }
            if (numeros[i]< menor1){
                menor1 = numeros[i];
            }
        }
    }

float promedio = suma/numeros.size();

cout << "IPHONE" << mayor << "," << promedio << "," << menor1;*/



   map<string, map< string, int> > producto_persona;
   producto_persona.insert(pair<string, map<string, int> >("MACBOOK PRO",usuario_oferta0));


   for (auto it = producto_persona.begin(); it != producto_persona.end(); it++)
   {
       cout << it->first <<endl;
       for(auto it2 = usuario_oferta0.begin(); it2 != usuario_oferta0.end(); it2++)
       {
           cout << it2->first <<" "<< it2->second << endl;
       }
   }



















    return 0;
}