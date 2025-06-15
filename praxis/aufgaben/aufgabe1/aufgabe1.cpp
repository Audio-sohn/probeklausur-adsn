/* AUFGABENSTELLUNG: Vervollständigen Sie die unten stehende Funktion.
 * ERREICHBARE PUNKTE: 10
 */

#include "aufgabe1.h"

// Prüft, ob die Werte in v in absteigender Reihenfolge sortiert sind.
bool is_sorted_ascending(std::vector<int> const& v)
{
    if (v.size() < 2)
    {
        return true;
    }

    auto index = v.begin();

    while (index < v.end()-1)
    {
        auto last = index++; 
        if (*index < *last)
        {
            return false;
        } 
    }

    return true;
}
