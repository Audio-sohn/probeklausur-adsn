/* AUFGABENSTELLUNG: Vervollständigen Sie die unten stehende Funktion.
 * ERREICHBARE PUNKTE: 10
 */

#include "aufgabe4.h"
#include <cstdlib>

// Erwartet zwei Vektoren und liefert true, falls diese die gleichen Elemente
// enthalten. Die Reihefolge der Elemente muss dabei nicht gleich sein.
bool same_elements(std::vector<int> a, std::vector<int> b)
{
    std::sort(a.begin(), a.end());
    std::sort(b.begin(), b.end());

    if (a.size() > b.size()){

        for (auto el : a)
        {
            if (std::find(b.begin(),b.end(), el) == b.end())
            {
                return false;
            }

        }

    }
    else 

        for (auto el : b)
        {
            if (std::find(a.begin(),a.end(), el) == a.end())
            {
                return false;
            }
        }


    return true;
}
