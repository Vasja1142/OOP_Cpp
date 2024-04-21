#include "Pair.h"

Pair::Pair()
{
    first = 0;
    second = 0;
}

Pair::Pair(int f, int s){
    first = f;
    second = s;
}

Pair::Pair(Pair& p)
{
    first = p.getFirst();
    second = p.getSecond();
}

int Pair::getFirst()
{
    return first;
}

int Pair::getSecond()
{
    return second;
}

bool Pair::ecualityCheck()
{
    return first == second;
}

int Pair::multiplication()
{
    return first * second;
}

void Pair::print()
{
    cout << "Значения: " << first << " и " << second << endl;
    cout << "Произведение = " << multiplication() << endl;
    cout << "Равенство чисел: " << ecualityCheck() << endl;
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
}

Pair& Pair::subtract(Pair& pr)
{
    first -= pr.first;
    second -= pr.second;
    return *this;
}


