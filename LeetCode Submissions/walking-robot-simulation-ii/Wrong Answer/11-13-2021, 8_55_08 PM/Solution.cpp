// https://leetcode.com/problems/walking-robot-simulation-ii

class Robot {
public:
    int X = 0;
    int Y = 0;
    string dir = "East";
    int w,h;
    Robot(int width, int height) {
        w = width;
        h = height;
    }
    
    void move(int num) {
        if(((X + num) <= (w-1)) && (dir == "East")){
            
            X += num;
            //cout<<X<<" ";
        }
        else if(((Y + num) <= (h-1)) && (dir == "North")){
            Y += num;
            cout<<Y<<" ";
        }
        else if(((X - num) >= 0) && (dir == "West")){
            X -= num;
            //cout<<X<<" ";
        }
        else if((X+num) > (w-1) && (dir == "East")){
            int rem = w - X - 1;
            
            X += rem;
            Y += abs(num-rem);
            dir = "North";
        }
        else if((Y+num) > (h-1) && (dir == "North")){
            int rem = h - Y - 1;
            Y += rem;
            X -= abs(num-rem);
            dir = "West";
        }
    }
    
    vector<int> getPos() {
        return {X,Y};
    }
    
    string getDir() {
        return dir;
    }
};

/**
 * Your Robot object will be instantiated and called as such:
 * Robot* obj = new Robot(width, height);
 * obj->move(num);
 * vector<int> param_2 = obj->getPos();
 * string param_3 = obj->getDir();
 */