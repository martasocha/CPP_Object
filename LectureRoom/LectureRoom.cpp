#include <iostream>

class LectureRoom {
    const int maxSize;
    const int buildingId = 123;
public:
    int freeSpace;
    LectureRoom(int size) : maxSize(size)
    {
    }
    void attendClass(int groupSize)
    {
        freeSpace = maxSize - groupSize;
    }

    //LectureRoom(const LectureRoom& old)
    //{
    //    this->maxSize = old.maxSize;
    //    buildingId = old.buildingId;
    //}

    //LectureRoom& operator=(const LectureRoom& old)
    //{
    //    maxSize = old.maxSize;
    //    buildingId = old.buildingId;
    //}


};

int main()
{
    LectureRoom room1(100);
    const int a = 5;
    //a = 5;

    LectureRoom room2(room1);
}