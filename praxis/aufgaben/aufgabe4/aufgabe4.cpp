/* AUFGABENSTELLUNG: Vervollständigen Sie die unten stehende Funktion.
 * ERREICHBARE PUNKTE: 10
 */

#include "aufgabe4.h"

// Erwartet zwei Vektoren und liefert true, falls diese die gleichen Elemente
// enthalten. Die Reihefolge der Elemente muss dabei nicht gleich sein.
bool same_elements(std::vector<int> a, std::vector<int> b)
{
    if (a.empty() && b.empty())
    {
        return true;
    }
    
    if (a.empty() || b.empty())
    {
        return false;
    }
    
    auto bigger = a.size() > b.size() ? a : b; 
    auto smaller = a.size() > b.size() ? b : a; 

    for (auto el : bigger)
    {

        if (std::find(smaller.begin(), smaller.end(), el) == smaller.end())
        {
            return false;
        }


    }

    return true;
}
