// Gegeben ist eine Liste von Zahlen, es soll eine Liste von LEADERN erstellt werden.
// Ein Element der Liste ist ein Leader, wenn es grüßer oder gleich allen Elementen rechts von ihm ist.
// Bestiemmen sie auch die Laufzeit-Komplexität ihrer Lösung.

#include <vector>
#include <algorithm>

std::vector<int> getLeaders(std::vector<int> vec)
{
    
    std::vector<int> leaders{};
    int leader{0};

    auto index = vec.end();

    while (index > vec.begin())
    {
        index--;
        if (*index >= leader)
        {
            leaders.push_back(leader = *index);
        }

    }

    std::reverse(leaders.begin(), leaders.end());

    return leaders;
}