#include <bits/stdc++.h>

using namespace std;
class LRUCache {
        list<int> dq;// doubly linked lists
        unordered_map<int,list<int>::iterator> mymap; //key:integer, value: iterator of type list
        int csize; //cache size
public:
    LRUCache(int capacity) {
        csize = capacity;
    }
    
    int refer(int key) {
        if(mymap.find(key)==mymap.end()){ //key not found
            if (dq.size()==csize)
            {
                // delete least recently used element 
                int last = dq.back();
                
                // Pops the last element 
                dq.pop_back();

                // Erase the last 
                mymap.erase(last);
            }
            
            
        }else{ //key found
            dq.erase(mymap[key]);
            
        }
        // update reference
        dq.push_front(key);
        mymap[key]= dq.begin();
    }
    void display() { 

	// Iterate in the deque and print 
	// all the elements in it 
	for (auto it = dq.begin(); it != dq.end(); 
		it++) 
		cout << (*it) << " "; 

	cout << endl; 
} 
   
};



int main() 
{   

	LRUCache ca(4); 

    ca.refer(1); 
	ca.display();
    cout<<"\n";
    ca.refer(2); 
	ca.display();
    cout<<"\n";
    ca.refer(3); 
	ca.display();
    cout<<"\n";
    ca.refer(1); 
	ca.display();
    cout<<"\n";
    ca.refer(4); 
	ca.display();
    cout<<"\n";
    ca.refer(5); 
	ca.display(); 
    ca.refer(1);
    ca.display();
        
    return 0; 
} 
