#include <iostream>
#include <string>

class Animal {
public:
	void showType()
		{	std::cout<< "I'm an animal\n";	}
	virtual void communicate()
		{	std::cout<< "Hello!\n";	}
	virtual void move()
	{
		std::cout << " I move like an animal\n";
	}

};

class Bird : public Animal
{
public:
	void showType()
		{	std::cout<< "I'm a Bird\n";	}
	void communicate()
		{	std::cout<< "Tweet! Tweet!\n";	}
	void move()
		{	std::cout<< "I'm flying\n";	}
};

class Dog : public Animal
{
public:
	void showType()
		{	std::cout<< "I'm a dog\n";	}
	void communicate()
		{	std::cout<< "Woof! Woof!\n";	}
	void move()
		{	std::cout << "I'm running\n";	}
};


void showAnimal(Animal &);

int main()
{
	Bird myBird;
	Dog myDog;

	// ---------------------------------------------------------
	std::cout << "\nmyDog";
	showAnimal(myDog);

	// ---------------------------------------------------------

	std::cout << "\nmyBird";
	showAnimal(myBird);

	std::cout << "As Bird\n";
	myBird.showType();
	system("pause");
}

void showAnimal(Animal & animal)
{
	std::cout << " as Animal\n";
	animal.communicate();
	animal.showType();
	animal.move();
}
