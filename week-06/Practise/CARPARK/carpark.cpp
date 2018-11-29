#include "carpark.h"

void Carpark::addCar(Car car) {  // (Car class --  car: kocsi tipus majd a mainben.)
    _kocsik.push_back(car);      // (addCar() function which add's a new car to the carPark)

}

void Carpark::modifyTicket(int id, bool validity) {  // modifyTicket() function to modify the parking ticket information of a car
    for (int i = 0; i < _kocsik.size(); ++i) {       // végigiterálnk a vectoron
        if(id == _kocsik[i].getId()) {              // id = az i-edik kocsi id-jével?????
            _kocsik[i].setHasParkingTicket(validity); // akkor az iedik kocsi jegyének az érvényességét beállítja (a megadott értékre)
        }
    }
}

void Carpark::removeCar(int id) {
    for (int i = 0; i < _kocsik.size(); ++i) {   // végigmegyünk rajta
        if(id == _kocsik[i].getId()) {          // Ha a megadott ID = a kocsik id-jével, jó helyen vagyunk.
            _kocsik.erase(_kocsik.begin() +i);  // akkor törli azt a bizonyos elemet. (Y)
        }
    }
}

std::string Carpark::getOldest() {                          //keressük, a legrégebbi elemet!!!!!!
    int oldest = _kocsik[0].getManufactureYear();           // HA KERESSÜK A LEGNAGYOBB/LEGKISEBB STB SZÁMOT,
                                                            //FELTÉTELEZZÜK, HOGY A 0. TAG AZ, ÉS AHHOZ VISZONYÍTUNK!!!!!!!!!!!!
    int index = 0;
        for (int i = 0; i < _kocsik.size(); ++i) {
            if(_kocsik[i].getManufactureYear() < oldest) {  //ha i-edik öregebb, mint a legöregebb, akkor kicseréli.
                oldest = _kocsik[i].getManufactureYear();

            } index = i;                                    // azért, hogy felimserje a for-on kívül is az i-t.
    }
    return _kocsik[index].getLicencePlate();
}

std::vector<Car> Carpark::getPenalties() {
    std::vector<Car> nincsjegye;                            //létrehoztunk egy új vectort, mert ez a feladat :D
    for (int i = 0; i < _kocsik.size(); ++i) {              //végigmegy
        if(!_kocsik[i].isHasParkingTicket()) {              //ha az i-edik tagnak nincs jegy, akkkor:::
            nincsjegye.push_back(_kocsik[i]);               //az új vectorba bepakolja, a jegy nélkülieket
        }
    } return nincsjegye;
}

std::map<int, int> Carpark::getPenaltiesByYear() {
    std::map<int, int> penaltiesByYear;

    for (int i = 0; i < _kocsik.size(); ++i) {
        if(!_kocsik[i].isHasParkingTicket()) {
            if(penaltiesByYear.find(_kocsik[i].getManufactureYear()) == penaltiesByYear.end()) { //kereste, de nem találta. :(
                penaltiesByYear.insert(std::pair<int, int>(_kocsik[i].getManufactureYear(), 1));
                // mivel üres volt, így hozzáadjuk pl. a 2012-t, és mögé ír +1-et. ha mégegyet talál, mégegyet odaír.
            }else {                                                   //HA MEGTALÁLTA MÁR A 2012-t, akkor::::::
                penaltiesByYear[_kocsik[i].getManufactureYear()]++;  //hivatkozik a 2012re, (kulcselem, és a párját növeli.!!!)
            }
        }
    } return penaltiesByYear;
}

const std::vector<Car> &Carpark::getKocsik() const {
    return _kocsik;
}
