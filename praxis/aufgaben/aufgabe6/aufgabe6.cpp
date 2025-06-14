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
    std::string result = path_rec(key_ root);

    return ;
}

std::string path_rec(int key_, Node* root)
{

    // anchor: found
    if (root->key == key_)
    {
        return "";
    }

    if (root->left->is_empty() && root->right->is_empty())



}