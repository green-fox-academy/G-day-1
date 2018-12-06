#ifndef EXAM2FILE_WEATHERINCITIES_H
#define EXAM2FILE_WEATHERINCITIES_H
#include <iostream>

enum class Weather {
    RAINY,
    CLOUDY,
    SUNNY

};
class WeatherInCities {
public:
    WeatherInCities(const std::string &date, const std::string &city, Weather type);
    const std::string &getDate() const;
    const std::string &getCity() const;
    Weather getType() const;

protected:
    std::string _date;
    std::string _city;
    Weather  _type;
};


#endif