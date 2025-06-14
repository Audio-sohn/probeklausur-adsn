/* AUFGABENSTELLUNG: Vervollständigen Sie die unten stehende Funktion.
 *ERREICHBARE PUNKTE : 10
 */

#include "aufgabe6.h"

// Sucht einen Knoten mit dem gegebenen Schlüssel im Baum.
// Liefert einen Pfad zu diesem Knoten als String.
// Der Pfad besteht aus den Buchstaben 'L' und 'R' für links und rechts.
// Er beschreibt den Weg vom Wurzelknoten zum gesuchten Knoten.
// Ist der gesuchte Knoten der Wurzelknoten, wird ein leerer String
// geliefert. Wenn der Knoten nicht gefunden wird, wird ein "X" geliefert.
std::string Node::path(int key_)
{
    // anchor
    if (this->is_empty())
    {
        return "X";
    }

    // anchor
    if (this->key == key_)
    {
        return "";
    }

    // steer left
    if (this->key > key_)
    {
        auto left_res = left->path(key_);
        return left_res == "X" ? "X" : "L" + left_res;
    }

    // steer right
    if (this->key < key_)
    {
        auto right_res = right->path(key_);
        return right_res == "X" ? "X" : "R" + right_res;
    }

    return "";
}
