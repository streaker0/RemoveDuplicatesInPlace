#include <stdlib.h>
#include <iostream>
#include <vector>
using namespace std;

int removeDuplicates(vector<int>& nums){
    if(nums.size() == 0)
        return 0;
    int i = 0;
    for(int j =1; j<nums.size(); ++j){
        if (nums.at(i) != nums.at(j)){
            nums.at(i+1) = nums.at(j);
            i++;
        }
    }
    return (i+1);

}

int main(){
    cout <<"hello world"<<endl;
   
    vector<int> numbers;
    numbers.push_back(0);
    numbers.push_back(0);
    numbers.push_back(1);
    numbers.push_back(1);
    numbers.push_back(1);
    numbers.push_back(2);
    numbers.push_back(2);
    numbers.push_back(3);
    numbers.push_back(3);
    numbers.push_back(4);

    int count = removeDuplicates(numbers);
    cout<<count<<endl;

    for(int i=0; i<count; i++){
        cout<<numbers.at(i)<<" ";
    }
    cout<<endl;



     return 0;
}

