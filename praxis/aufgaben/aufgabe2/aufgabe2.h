#ifndef AUFGABE_2_H
#define AUFGABE_2_H

#include <cstddef>

/// Repräsentiert ein Element in einer verketteten Liste.
struct Element {
    int value;
    Element* next;

    /// Liefert `true`, wenn `this` ein Dummy, also this->next == nullptr ist.
    bool is_empty() { return next == nullptr; }

    /// Liefert die Laenge der Liste, beginnend mit `this`.
    size_t length();
};

#endif
