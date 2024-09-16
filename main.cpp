#include <iostream>
#include <vector>

class ELEVATOR
{
public:
    int curFloor;
    int direction; // 0 for down 1 for up 2 for stable
    std::vector<int> toGoFloors;

    ELEVATOR()
    {
        this->curFloor = 0;
        this->direction = 2;
    }

    ~ELEVATOR()
    {
        toGoFloors.~vector();
    }

};

void buttonPress();

#define MODE 1 // 1 for single elevators and 2 for multiple elevators g++ -D MODE=1 main.cpp -o output1

#if MODE == 1

int main()
{
    std::cout << "program is running at single elevator mode." << std::endl;

    ELEVATOR e;



    return 0;
}

#else
int main()
{

    std::cout << "2" << std::endl;
    return 0;
}
#endif