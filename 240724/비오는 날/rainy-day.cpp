#include <iostream>
#include <string>
using namespace std;

class WeatherInformation {
    public:
        string Date;
        string Day;
        string Weather;

        WeatherInformation(string Date = "", string Day = "", string Weather = "") {
            this->Date = Date;
            this->Day = Day;
            this->Weather = Weather;
        }
};

int main() {
    int n;
    cin >> n;
    WeatherInformation WeatherArray[100];

    int Min_num = 0;
    string Min_Date = "2101";

    for (int i = 0; i < n; i++) {
        string Date, Day, Weather;
        cin >> Date >> Day >> Weather;

        WeatherArray[i] = WeatherInformation(Date, Day, Weather);
        if (WeatherArray[i].Weather == "Rain" && WeatherArray[i].Date < Min_Date) {
            Min_num = i;
            Min_Date = WeatherArray[i].Date;
        }
    }

    cout << WeatherArray[Min_num].Date << " " << WeatherArray[Min_num].Day << " " << WeatherArray[Min_num].Weather;
    return 0;
}