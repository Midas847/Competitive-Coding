// https://leetcode.com/problems/design-parking-system

class ParkingSystem {
public:
    vector<int> v;
    ParkingSystem(int big, int medium, int small) {
        v.push_back(big);
        v.push_back(medium);
        v.push_back(small);
    }
    
    bool addCar(int carType) {
        if(carType == 1 && v[0]){
            v[0]--;
            return true;
        }
        else if(carType == 2 && v[1]){
            v[1]--;
            return true;
        }
        else if(carType == 3 && v[2]){
            v[2]--;
            return true;
        }
        return false;
    }
};

/**
 * Your ParkingSystem object will be instantiated and called as such:
 * ParkingSystem* obj = new ParkingSystem(big, medium, small);
 * bool param_1 = obj->addCar(carType);
 */