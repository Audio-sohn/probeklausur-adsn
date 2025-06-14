/* AUFGABENSTELLUNG: Vervollständigen Sie die unten stehende Funktion.
 * ERREICHBARE PUNKTE: 10
 */

#include "aufgabe3.h"

// Liefert einen Vektor mit den Werten der Liste, beginnend mit `this`.
// Falls `this` ein leeres Element ist, wird ein leerer Vektor geliefert.
std::vector<int> Element::values()
{
    if (this->is_empty())
    {
        return {};
    }

    std::vector<int> v = {this->value};

    for (auto el : next->values())
    {

        v.push_back(el);

    }
    
    return v;

}

