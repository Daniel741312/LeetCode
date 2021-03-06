#include<iostream>
using namespace std;

class ParkingSystem {
public:
    ParkingSystem(int big, int medium, int small) {
        this->m_Big = big;
        this->m_Medium = medium;
        this->m_Small = small;
    }

    bool addCar(int carType) {
        switch (carType) {
        case(1):
            return (this->m_Big--) > 0;
        case(2):
            return (this->m_Medium--) > 0;
        case(3):
            return (this->m_Small--) > 0;
        default:
            return false;
        }
    }
private:
    int m_Big = 0;
    int m_Medium = 0;
    int m_Small = 0;
};

#if 1
int main(int argc, char* argv[]) {
    ParkingSystem* pks = new ParkingSystem(1, 1, 0);
    cout << pks->addCar(1) << " ";
    cout << pks->addCar(2) << " ";
    cout << pks->addCar(3) << " ";
    cout << pks->addCar(1) << " ";
    return 0;
}
#endif