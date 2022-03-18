#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

class Difference {
    private:
    vector<int> elements;
  
  	public:
  	int maximumDifference;

	// Add your code here
    Difference(vector<int> e){
        this->elements = e;
    }
    
    void computeDifference(){
        int minNum{static_cast<int>(INT16_MAX)};
        int maxNum{static_cast<int>(INT16_MIN)};
        
        for (int i:elements){
            if(i >= maxNum){
                maxNum = i;
            }
            if(i <= minNum){
                minNum = i;
            }
        }
        
        maximumDifference = maxNum - minNum;
    }

}; // End of Difference class

int main() {
    int N;
    cin >> N;
    
    vector<int> a;
    
    for (int i = 0; i < N; i++) {
        int e;
        cin >> e;
        
        a.push_back(e);
    }
    
    Difference d(a);
    
    d.computeDifference();
    
    cout << d.maximumDifference;
    
    return 0;
}
