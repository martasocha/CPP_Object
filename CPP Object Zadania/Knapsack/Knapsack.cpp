#include <iostream>
#include "Knapsack.hpp"
#include <random>

Shop::Shop()
{
	std::random_device rd;
	std::mt19937 gen(rd());
	std::uniform_int_distribution<>distrib(0, 10);
	for (int i = 0; i < 9; ++i)
	{
		items[i].value = distrib(gen);
		items[i].weight = distrib(gen);
	}
}

Backpack::Backpack(int _capacity) : capacity(_capacity)
{
	for (int i = 0; i < 10; ++i)
	{
		stolen[i].value = 0;
		stolen[i].weight = 0;
	}
}

Robber::Robber(int capacity) :backpack(capacity)
{
}

int Robber::getValue()
{
	return 0;
}
void Robber::robWhatever(Shop& shop)
{
	for (int i = 0; i < 10; ++i)
	{
		Item item = shop.peek(i);
		if (backpack.fits(item ))

	}

}

Item Shop::steal(int index)
{
	Item result;
	result.value = items[index].value;
	result.weight = items[index].weight;
	items[index].weight = 0;
	return result;
}