double convert_farenheit_celsius(double original_temperature){
    return (original_temperature - 32) / 1.8;
}

double convert_celsius_farenheit(double original_temperature){
    return (original_temperature * 1.8) + 32;
}

double convert_celsius_kelvin(double original_temperature){
    return original_temperature + 273.15 ;
}

double convert_kelvin_celsius(double original_temperature){
    return original_temperature - 273.15;
}

double convert_farenheit_kelvin(double original_temperature){
    return ((original_temperature - 32) / 1.8) + 273.15;
}

double convert_kelvin_farenheit(double original_temperature){
    return (((original_temperature - 273.15) * 1.8)) + 32;
}