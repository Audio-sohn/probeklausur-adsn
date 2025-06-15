/* AUFGABENSTELLUNG: Vervollständigen Sie die unten stehende Funktion.
 * ERREICHBARE PUNKTE: 10
 */

#include "aufgabe2.h"

// Liefert die Laenge der Liste, beginnend mit `this`.
size_t Element::length()
{
    if (next == nullptr)
    {
        return 0;
    }

    return this->is_empty() ? 1 : 1 + next->length();
}
