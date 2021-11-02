#include <climits>

int legmagasabb(const int* magassagok, int db) {
    int legmagasabb = INT_MIN;

    for (int i = 0; i < db;i++) {
        if (magassagok[i] >= legmagasabb) {
            legmagasabb = magassagok[i];
        }
    }

    return legmagasabb;
}
