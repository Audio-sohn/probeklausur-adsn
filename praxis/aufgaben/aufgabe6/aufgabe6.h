#ifndef AUFGABE_6_H
#define AUFGABE_6_H

#include <cstddef>
#include <string>

/// Repräsentiert einen Knoten in einem binären Suchbaum.
struct Node {
    int key;
    int value;
    Node* left = nullptr;
    Node* right = nullptr;

    /// Konstruiert einen neuen leeren Node.
    Node() = default;

    /// Konstruiert ein neues Node-Objekt mit dem gegebenen Schlüssel und Wert.
    Node(int key_, int value_)
        : key(key_)
        , value(value_)
        , left(new Node())
        , right(new Node())
    {
    }

    /// Liefert true, wenn der Knoten leer ist.
    /// D.h. wenn die Kind-Pointer nullptr sind.
    bool is_empty() const { return left == nullptr && right == nullptr; }

    /// Setzt den gegebenen Schlüssel und Wert in den Knoten ein.
    /// Ein vorhandener Schlüssel/Wert wird überschrieben.
    /// Wenn der Knoten leer ist, werden leere Kind-Knoten erzeugt.
    void set(int key_, int value_)
    {
        key = key_;
        value = value_;
        if (is_empty()) {
            left = new Node();
            right = new Node();
        }
    }

    /// Fügt einen neuen Knoten in den Baum ein.
    void insert(int key_, int value_)
    {
        if (is_empty()) {
            return set(key_, value_);
        }
        if (key_ <= key) {
            return left->insert(key_, value_);
        }
        if (key_ > key) {
            return right->insert(key_, value_);
        }
        set(key_, value_);
    }

    /// Sucht einen Knoten mit dem gegebenen Schlüssel im Baum.
    /// Liefert einen Pfad zu diesem Knoten als String.
    /// Der Pfad besteht aus den Buchstaben 'L' und 'R' für links und rechts.
    /// Er beschreibt den Weg vom Wurzelknoten zum gesuchten Knoten.
    /// Ist der gesuchte Knoten der Wurzelknoten, wird ein leerer String
    /// geliefert. Wenn der Knoten nicht gefunden wird, wird ein "X" geliefert.
    std::string path(int key_);
};

#endif
