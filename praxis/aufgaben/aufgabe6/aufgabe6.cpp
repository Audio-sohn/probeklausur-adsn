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



    // found
    if (this->key == key_)
    {
        return "";
    }
    
    // not found
    if(this->is_empty()) 
    {
        return"X";

    }
    
    // steer right
    if(key_ > this->key)
    {
        std::string rec_res = right->path(key_);
        return rec_res == "X" ? "X" : "R" + rec_res;
    }
    
    // steer left
    
    std::string rec_res = left->path(key_);
    return rec_res == "X" ? "X" : "L" + rec_res;

}
