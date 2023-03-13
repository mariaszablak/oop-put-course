#include <iostream>
#include <string>
using namespace std;

class Room {
public:
	int desks;
	string walls;
	int number;
};
class Tree {
public:
	string name;
	float height;
	string colour;

};
int main()
{
	Room here;
	here.desks = 6;
	here.walls = "white";
	here.number = 110;

	Tree example;
	example.name = "willow";
	example.height = 5.2;
	example.colour = "green";

	cout << "Number of desks:" << here.desks << endl;
	cout << "Color of walls:" << here.walls << endl;
	cout << "Room number:" << here.number << endl;

	cout << "Name of the tree:" << example.name << endl;
	cout << "Height of the tree:" << example.height << endl;
	cout << "Colour of the tree:" << example.colour << endl;

	system("pause");

	return 0;



}
