#include "weatherincities.h"

WeatherInCities::WeatherInCities(const std::string &date, const std::string &city, Weather type) : _date(date),
                                                                                                   _city(city),
                                                                                                   _type(type) {}

const std::string &WeatherInCities::getDate() const {
    return _date;
}

const std::string &WeatherInCities::getCity() const {
    return _city;
}

Weather WeatherInCities::getType() const {
    return _type;
}
