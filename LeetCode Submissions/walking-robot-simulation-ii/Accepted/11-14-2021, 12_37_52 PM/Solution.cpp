// https://leetcode.com/problems/walking-robot-simulation-ii

class Robot {
public:
    int pos;
    int w,h,l1,l2,l3,total;
    bool flag = true;
    Robot(int width, int height) {
        pos = 0;
        w = width - 1;
        h = height - 1;
        l1 = width;
        l2 = l1 + height -1;
        l3 = l2 + width - 1;
        total = l3 + height - 2;
    }
    
    void move(int num) {
        flag = false;
        pos = (pos + num)%total;
    }
    
    vector<int> getPos() {
        if(pos < l1)
            return {pos,0};
        if(pos < l2)
            return {w,pos - l1 + 1};
        if(pos < l3)
            return {l3-pos-1,h};
        return {0, total - pos};
    }
    
    string getDir() {
        if(flag)
            return "East";
        if(pos == 0)
            return "South";
        if(pos < l1)
            return "East";
        if(pos < l2)
            return "North";
        if(pos < l3)
            return "West";
        return "South";
    }
};

/**
 * Your Robot object will be instantiated and called as such:
 * Robot* obj = new Robot(width, height);
 * obj->move(num);
 * vector<int> param_2 = obj->getPos();
 * string param_3 = obj->getDir();
 */