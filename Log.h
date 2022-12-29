#pragma once

#include<iostream>
#include<fstream>
#include<iostream>
#include<fstream>
#include<string>
#include <algorithm>
#include <ctime>


void logCoffee(std::string coffeeNames[], int coffeePrices[], int coinsValue[], int coffeeCups[], int coinsAmmount[]){

    time_t rawDate = time(nullptr);// taking the time as second

    std::string date = ctime(&rawDate);

    std::ofstream dbW("dataBase.txt", std::ios_base::out);

    dbW<<date<<"\n\n";

    dbW<<"Coffee types:\n";
    for(int i=0; i<5; i++)
        dbW<<coffeeNames[i]<<"\n";

    dbW<<"\nCoffee prices:\n";
    for(int i=0; i<5; i++)
        dbW<<coffeePrices[i]<<"\n";
    
    dbW<<"Valid Coin Types:\n";
    for(int i=0; i<5; i++)
        dbW<<coinsValue[i]<<"\n";

    dbW<<"\nNumber of each coffee:\n";
    for(int i=0; i<5; i++)
        dbW<<coffeeNames[i]<<" -> "<<coffeeCups[i]<<'\n';

    

    dbW<<"\nCoin amounts:\n";

    double total = 0;

    for(int i=0; i<7; i++){
        dbW<<coinsValue[i]<<": "<<coinsAmmount[i]<<'\n';
        total += coinsValue[i] * coinsAmmount[i];
    }

    dbW<<"\nTotal: "<<total<<" KM.\n\nEnd of the Log file\n\n";
}