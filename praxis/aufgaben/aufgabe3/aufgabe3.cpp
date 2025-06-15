/* AUFGABENSTELLUNG: Vervollständigen Sie die unten stehende Funktion.
 * ERREICHBARE PUNKTE: 10
 */

#include "aufgabe3.h"

// Liefert einen Vektor mit den Werten der Liste, beginnend mit `this`.
// Falls `this` ein leeres Element ist, wird ein leerer Vektor geliefert.
std::vector<int> Element::values()
{
    std::vector<int> result{};
    
    if (this->is_empty())
    {
        return {};
    }
    
    result.push_back(this->value);

    auto recursive_result = next->values();

    result.insert(result.end(), recursive_result.begin(), recursive_result.end());

    return result;
}
