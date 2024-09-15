#include<iostream>
#include<unordered_map>
#include<vector>

using namespace std;

int main() {
    vector<int>nums{1,2,2,3,3,3,3,3,3,4,5,6,6};

    unordered_map<int,int> freqMap;

    for(int num: nums){
        freqMap[num]++;
    }

    unordered_map<int,int> ::iterator itr;
    for(itr = freqMap.begin();itr!=freqMap.end();itr++){
        cout<<(*itr).first<<" "<<(*itr).second<<endl;
    }
    return 0;
}