/* AUFGABENSTELLUNG: Vervollständigen Sie die unten stehende Funktion.
 * ERREICHBARE PUNKTE: 10
 */

#include "aufgabe1.h"

// Prüft, ob die Werte in v in absteigender Reihenfolge sortiert sind.
bool is_sorted_ascending(std::vector<int> const& v)
{
    if (v.size() == 0)
    {
        return true;
    }

    int last = v[0];
    for (auto el : v) {

        if (last > el){

            return false;
        }

        last = el;
    }
    return true;
}
