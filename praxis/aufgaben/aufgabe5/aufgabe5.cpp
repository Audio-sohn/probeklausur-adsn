/* AUFGABENSTELLUNG: Vervollständigen Sie die unten stehende Funktion.
 * ERREICHBARE PUNKTE: 10
 */

#include "aufgabe5.h"

// Liefert einen Pointer auf den Knoten mit dem kleinsten Wert im Baum.
// Liefert einen Nullpointer, wenn der Baum leer ist.
Node* Node::min_node()
{
    if (this->is_empty())
    {
        return nullptr;
    }
    
    return left->is_empty() ? this : left->min_node();
}
