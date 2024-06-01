/* Process of selecting a appropriate Data Structure:

First consideration:- Vector/array

insertion = O(1);
removal by value = O(N);
removal by index = O(1);
search by value = O(logN);
search by index =  O(1);

meets insertion criteria but not removal by val and seraching by val, so omit

Second consideration :- Linkedlists

insertion = O(1);
removal by value = O(N);
searching by value = O(N);

meets insertion criteria but not removal by val and seraching by val, so omit

third consideration :- Maps

insertion = O(logn)
removal = O(logn)
search = O(logn)

since all three complexitites are worst case complexities there for with a hybrid DS (Maps+vec) avg
complexity of O(1) can be achieved.
*/


#include <bits/stdc++.h>

using namespace std;

class Mystruct{

    vector<int> vec;

    map<int,int> mymap;
    public:

    void insert(int val){
        if(mymap.find(val)==mymap.end()){ //if val is not present in the map
           
            vec.push_back(val); //insert element in the vector
            mymap[val] = vec.size()-1; //insert element in the map
        
        }else{  //if already present 
            return; 
        }
    }

    void remove(int val){
        if(mymap.find(val)!=mymap.end()){ //if the value is present in the map
            int index = mymap.at(val); //finding index of the value
            mymap.erase(index);//erasing the map entry at that index
            vec[index] = vec[vec.size()-1];//copying the val of last element to the new index
            vec.pop_back();//removing the last element
            mymap[vec[index]] = index; //updating the map , mapping new value to that index
        }else{
            return;
        }

    }

    int getRandom(){
        int random = rand() % vec.size(); //getting a  random index
        return vec[random]; //returing the value at that index
    }

    int search(int val){
        if(mymap.find(val)==mymap.end()) //if val is not found
        {
            return -1;
        
        }else{ //if found
            
            return mymap.at(val); //return the index of the val
        
        }    
        
    }

    void printmyDS(){
        for (int i = 0; i < vec.size(); i++)
        {
            cout<<vec[i]<<" ";
        }
        
    }

};



int main() 
{ 
   Mystruct m1;

    m1.insert(2);
    m1.insert(3);
    m1.insert(5);
    m1.insert(9);
    cout<<"After inserting 2,3,5,9"<<endl;
    m1.printmyDS();
    cout<<"\n";
    
    m1.remove(5);
    cout<<"After removing 5"<<endl;
    m1.printmyDS();
    cout<<"\n";

    cout<<"After removing 10"<<endl;
    m1.remove(10);
    m1.printmyDS();
    cout<<"\n";
    
    cout<<"Get random number from the DS"<<endl;
   cout<< m1.getRandom()<<endl;
    
    cout<<"searching 9"<<endl;
    cout<<m1.search(9)<<endl;
    
    cout<<"searching 15"<<endl;
    cout<<m1.search(15)<<endl;
    
    
    return 0; 
} 
