#include "../includes/Zombie.hpp"

Zombie *zombieHorde(int N, std::string name)
{
    Zombie  *horde = new Zombie[N];

    for (int i = 0; i < N; i++)
        horde[i].setName(name);

    return (horde);
}

int main (void)
{
    int count = 3;
    Zombie  *horde = zombieHorde(count, "Waffle");

    for (int i = 0; i < count ; i ++)
        horde[i].sayBrainz();
    
    delete[] horde;
    return (0);
}
