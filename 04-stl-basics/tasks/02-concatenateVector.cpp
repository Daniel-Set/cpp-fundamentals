#include <iostream>
#include <vector>

// Implement concatenateVector.
// It should take 2 vectors and return one which has alternately elements from the first and the other one.
vector<int> concatenateVector(vector<int> vec1, vector<int> vec2){
    
     vector<int> vec;
int size1 = vec1.size();
int size2 = vec2.size();
int size = size1+size2;
vec.reserve(size);
int max_size= max(vec1.size(), vec2.size());

for(int i=0; i<max_size; i++){
    vec.push_back(vec1[i]);
    vec.push_back(vec2[i]);
}
return vec;
}
int main() {
    std::vector<int> vec1 {1, 2, 3, 4, 5};
    std::vector<int> vec2 {11, 12, 13, 14, 15};

    auto vec = concatenateVector(vec1, vec2);
    for (const auto& el : vec) {
        std::cout << el << " ";
    }
    return 0;
}
