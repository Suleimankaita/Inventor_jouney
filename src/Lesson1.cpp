#include <iostream>
#include "Lessons.h"
#include<queue>
#include<vector>


using namespace std;

void Lesson2(){

    vector<int>arr={-2,-1,-3,-1,5,3};
    queue<int>q;
    vector<int>result;
    size_t k=3;
    size_t left=0;

    for(size_t right=0; right < arr.size() ; right++){
        if(arr[right]<0){
            q.push(arr[right]);
        }

        if(right - left + 1 == k){
            if(q.empty()){
                result.push_back(0);
            }else{
                result.push_back(q.front());
            }

            // when the window slides, compare the leaving element `arr[left]`
            // with the queue front and pop if they match
            if(!q.empty() && arr[left] == q.front()){
                q.pop();
            }
            left++;
        }
    }

    for(int S:result){
        cout<<S<<" ";
    }

}
