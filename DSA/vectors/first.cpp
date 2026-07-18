// DYNAMICAL RESIZEABLE ARRAYS ARE CALLED VECCTORS.
// SYNTAX WILL BE vector<datatype> vector_name; ALSO CAN BE CREATED LIKE ARRAYS vector<datatype> vector_name(size, initial_value);
//MEMORY ALLOCATED DYNAMICALLY IN HEAP MEMORY.STATIC MEMORY IS ALLOCATED IN STACK MEMORY.

#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> v(4,0); // vector of integers
    // FOR VECTORS WE USE FOR EACH LOOP TO PRINT THE ELEMENTS OF VECTOR
    /*for (int i : v){
        cout << i << "\n";
    }*/
   cout << "size of the vector: "  <<v.size() << endl; // size of the vector
   
   v.push_back(1); // adding an element at the end of the vector
   cout << "size of the vector: "  <<v.size() << endl; // size of the vector

   //v.front , v.back , v.pop_back , v.clear , v.empty , v.resize , v.swap , v.insert , v.erase , v.assign , v.at are also used for different operations on vectors.
}