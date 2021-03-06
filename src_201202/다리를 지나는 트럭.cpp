


#include <string>
#include <vector>
#include <iostream>
#include <queue>

using namespace std;
struct MyStruct
{
    int weig;
    int tin;
}typedef trk;

int solution(int bridge_length, int weight, vector<int> truck_weights) {
    queue <trk> crossing;
    queue <int> wait;
    trk temp,cur;
    int cur_w = 0,tn=0,time=0;


    int len = truck_weights.size();
    for (int i = 0; i < len; i++) {
        wait.push(truck_weights[i]);
    }
    

    while (1) {
        
        if (wait.empty() == true && crossing.empty() == true) {
            break;
        }
        else {}


        // 
        if (crossing.empty()) {

        }
        else {
            cur = crossing.front();
            if (time - cur.tin >= bridge_length) {

                cur_w = cur_w - cur.weig;
                crossing.pop();
            }
            else {
                //pass;
            }
        }


        if( (wait.empty()!= true) && (weight >= (cur_w + wait.front())) ){
            temp.tin = time;
            temp.weig = wait.front();
            crossing.push(temp);

            cur_w = cur_w + wait.front();
            wait.pop();
            
        }
        else {}


        
        


        time++;

    }
    
    return time;
}


int main(){
    int bridge_length[] = {2,100,100};
    int weight[] = { 10,100,100 };
    vector<vector <int>> truck_weights = {
        {7,4,5,6} ,
        {10},
        {10,10,10,10,10,10,10,10,10,10 }
    
    };

    //truck_weights.size()
    for (int i = 0; i < 3 ; i++) {
        int ret = solution(bridge_length[i], weight[i], truck_weights[i]);
        cout << ret << endl;
    }
}