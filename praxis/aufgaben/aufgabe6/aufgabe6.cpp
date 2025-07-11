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
    if (is_empty()) {
        return "X";
    }

    if (key_ == key) {
        return "";
    }

    if (key_ < key) {
        auto left_result = left->path(key_);
        return left_result == "X" ? "X" : "L" + left_result;
    }
    auto right_result = right->path(key_);
    return right_result == "X" ? "X" : "R" + right_result;
}
