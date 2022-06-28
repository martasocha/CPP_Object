#include "Knapsack.hpp"
#include <random>
#include<iostream>

Item Shop::steal(int index)
{
    Item result;
    result.value = items[index].value;
    result.weight = items[index].weight;
    items[index].value = 0;
    items[index].weight = 0;
    return result;
}

Item Shop::peek(int index)
{
    Item result;
    result.value = items[index].value;
    result.weight = items[index].weight;
    return result;
}

int Backpack::put(Item item)
{
    stolen[firstAvailableIndex].value = item.value;
    stolen[firstAvailableIndex].weight = item.weight;
    firstAvailableIndex++;
    currentCapacity += item.weight;
    return 0;
}

Item* Shop::getItems() const
{
    return (Item*)items;
}

int Shop::findMostEfficient()
{
    float efficientTab[10];
    int max = 0;
    int maxIndex = 0;
    for (int i = 0; i < 10; i++)
    {
        efficientTab[i] = static_cast<float>(items[i].value)/ static_cast<float>(items[i].weight);
        if (efficientTab[i] > max)
        {
            maxIndex = i;
            max = efficientTab[i];
        }
    }
    return maxIndex;
}

int Robber::getValue()
{
    return 0; //to fix
}

Item* Robber::getBackpackItems() const
{
    return backpack.getItems();
}

void Robber::robWhatever(Shop& shop)
{
    for (int i = 0; i < 10; i++)
    {
        Item item = shop.peek(i);
        if (backpack.fits(item.weight))
        {
            Item item = shop.steal(i);
            backpack.put(item);
        }
    }
}


void Robber::robMostEfficient(Shop& shop)
{
    int index = 0;
    for (int i = 0; i < 10; i++)
    {
        index = shop.findMostEfficient();
        Item item = shop.peek(index);
        if (backpack.fits(item.weight))
        {
            Item item = shop.steal(index);
            backpack.put(item);
        }
    }
}


Shop::Shop()
{
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> distr(1, 15);

    for (int i = 0; i < 10; i++)
    {
        items[i].weight = distr(gen);
        items[i].value = distr(gen);
    }
}

Robber::Robber(int capacity) : backpack(capacity) { }


Backpack::Backpack(int _capacity) : capacity(_capacity)
{
    for (int i = 0; i < 10; i++)
    {
        stolen[i].value = 0;
        stolen[i].weight = 0;
    }
}

Item* Backpack::getItems() const
{
    return (Item*)stolen;
}

bool Backpack::fits(int weight)
{
    //czy obiekt zmiesci do naszego plecaka
    return currentCapacity + weight <= capacity;
}



std::ostream& operator<<(std::ostream& s, const Shop& shop)
{
	Item* items = shop.getItems();
	s << "Shop: " << std::endl;
	for (int i = 0; i < 10; i++)
	{
		s << items[i].value << " " << items[i].weight << std::endl;;
	}
	s << "End of shop: " << std::endl;
	return s;
}

//int&           add      (int           a, const int       b)  // analogiczna struktura
std::ostream& operator<<(std::ostream& s, const Robber& r)
{
	Item* items = r.getBackpackItems();
	s << "Backpack: " << std::endl;
	for (int i = 0; i < 10; i++)
	{
		s << items[i].value << " " << items[i].weight << std::endl;
	}
	s << "End of backpack: " << std::endl;
	return s;
}
