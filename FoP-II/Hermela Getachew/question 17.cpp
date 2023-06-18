#include <iostream>
#include <cmath>
using namespace std;
double calculateWindChill(double v, double t) {
    if (t > 10 || v < 4.8) {
        cout << "Invalid input! Temperature should be less than or equal to 10°C and wind speed should be greater than or equal to 4.8 km/h." << endl;
        return 0.0;
    }

    double w = 13.12 + 0.6215 * t - 11.37 * pow(v, 0.16) + 0.3965 * t * pow(v, 0.016);
    return w;
}

int main() {
    double windSpeed, temperature;

    cout << "Enter the wind speed (in km/h): ";
    cin >> windSpeed;

    cout << "Enter the temperature (in Celsius): ";
    cin >> temperature;

    double windChillIndex = calculateWindChill(windSpeed, temperature);

    if (windChillIndex != 0.0) {
        cout << "Windchill Index: " << windChillIndex << endl;
    }

    return 0;
}
