class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<pair<int,double>> cars(speed.size());
        stack<pair<int,double>> stk;
        for(int i=0;i<speed.size();i++){
            cars[i]={position[i],((double)(target-position[i])/speed[i])};
        }
        sort(cars.rbegin(),cars.rend());
        stk.push(cars[0]);
        for(int i=1;i<speed.size();i++){
            if(stk.top().second<cars[i].second){
                stk.push(cars[i]);
            }
        }
        return stk.size();

    }
};
