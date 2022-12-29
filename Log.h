#pragma once

#include<iostream>
#include<fstream>
#include<iostream>
#include<fstream>
#include<string>
#include <algorithm>
#include <ctime>


void logCoffee(int coffeeCups[], int coinsAmmount[],std::string coffeeNames[]){

    time_t rawDate = time(nullptr);// taking the time as second

    std::string date = ctime(&rawDate);


    //std::cout<< date <<"\n";


    std::ofstream dbW("dataBase.txt", std::ios_base::out);

    dbW<<date<<"\n";

    dbW<<"Coffee Left:\n";
    for(int i=0; i<5; i++)
        dbW<<coffeeNames[i]<<coffeeCups[i]<<'\n';
    

    dbW<<"\nCoin amounts:\n";

    double total = 0;

    for(int i=0; i<7; i++){
        switch (i){
        
        case 0:
                dbW<<"0.5: "<<coinsAmmount[i]<<'\n';
                total += 0.5*coinsAmmount[i];
            break;

        case 1:
                dbW<<"0.1: "<<coinsAmmount[i]<<'\n';
                total += 0.1*coinsAmmount[i];
            break;
        
        case 2:
                dbW<<"0.2: "<<coinsAmmount[i]<<'\n';
                total += 0.2*coinsAmmount[i];
            break;
        
        case 3:
                dbW<<"1: "<<coinsAmmount[i]<<'\n';
                total += 1*coinsAmmount[i];
            break;

        case 4:
                dbW<<"5: "<<coinsAmmount[i]<<'\n';
                total += 5*coinsAmmount[i];
            break;
        case 5:
                dbW<<"10: "<<coinsAmmount[i]<<'\n';
                total += 10*coinsAmmount[i];
            break;
        case 6:
                dbW<<"20: "<<coinsAmmount[i]<<'\n';
                total += 20*coinsAmmount[i];
            break;
        default:
            break;
        }
    }


    dbW<<"\nTotal: "<<total<<" KM.\n\nEnd of the File\n\n";


}
