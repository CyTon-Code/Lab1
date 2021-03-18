#include <iostream>

using namespace std;

// самольотік:
struct AVIA {
    char city[20]; // мысце призначення рейсу.
    int number_flight; // номер рейсу.
    char type_of_plane[20]; // тип самольота.
};

int main() {
    // чувак создав самольоту:
    int length = 10;

    // создаем ангар самольотів:
    AVIA array_flight[] = {
            {"uzhorod", 5,  "boeing"},
            {"uzhorod", 4,  "airbus"},
            {"uzhorod", 2,  "boeing"},
            {"uzhorod", 1,  "Concorde"},
            {"uzhorod", 3,  "Fighter"},
            {"uzhorod", 7,  "Jets"},
            {"uzhorod", 8,  "Piper"},
            {"uzhorod", 6,  "Pilatus"},
            {"uzhorod", 10, "Robinson"},
            {"uzhorod", 9,  "Cessna Caravan"}
    };

    // остортировано?:
    int if_array_sort;


    // процес сортировака массива:


    do { // быгати до тех поор пока не отсорттерован масив:
        if_array_sort = 0; //  массив отсортерован.

        for (int i = 0; i < length; i++) { // читаю массив - быгаю по массиві:

            // якщо тип предедущего самольота більше за тип настпуного самольота:
            if (array_flight[i].number_flight > array_flight[i + 1].number_flight) {

                // мыняю предедущий зы слудующим елменти в масивы:
                swap(array_flight[i], array_flight[i + 1]);


                if_array_sort++; // массив не отсорnерован - бо ізмінився.
            }
        }

    } while (if_array_sort > 0);// якщо массив отсортирован я виходжу, інакше біжу далі по коду.

    cout << length << endl;
    for (int i = 0; i < length; i++) {
        cout << array_flight[i].city << " ";
        cout << array_flight[i].number_flight << " ";
        cout << array_flight[i].type_of_plane << endl;
    }

    return 0;
}