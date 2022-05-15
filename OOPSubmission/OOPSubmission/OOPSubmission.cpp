#include <iostream>
#include <string>

using namespace std;

class Dog
{
public:
    string breed;
    string color;
    int height;
    int weight;

    void Shake()
    {
        cout << "You shake with your paw";
    }

    void Sit()
    {
        cout << "You sit on your hind legs";
    }

    void LayDown()
    {
        cout << "You lay down on your back";
    }
};

int main()
{
    Dog Rufus;
    Rufus.breed = "Hound";
    Rufus.color = "Brown";
    Rufus.height = 2;
    Rufus.weight = 60;
}
