#include<iostream>
#include<vector>

using namespace std;

int main(){
  // vector is a dynamic array it can grow and shrink
  //creation:
  vector<int> marks;

  vector<int> miles(10);  //here 10 is the size of the vector 

  vector<int> distances(15,0); // here it means every you have an array of size 15 and in that every element is 0

  vector<int> v(5,-1);
  // cout<<*(v.begin())<<endl;

vector<int>prac;


  marks.push_back(10);
  marks.push_back(20);
  marks.push_back(30);
  marks.push_back(40); 

  cout<<"Size: "<<marks.size()<<endl; 

  marks.pop_back(); //40 will be removed 

  cout<<"Size: "<<marks.size()<<endl;

  // front() and back()
  cout<<"First Element :"<<marks.front()<<endl;
  cout<<"Last Element :"<<marks.back()<<endl;

  // empty():

  if(miles.empty()== true){
    cout<<"Vector is empty"<<endl;
  }
  else{
    cout<<"Vector is not empty"<<endl;
  }

  // Imp: while accessing elements the size should be given like it should be v(10) here you can access elements but if oonly v you cant access elements

  // cout<<marks[0];
  // cout<<prac[0]; // it will not print or throw an error

  // at():Used to access elements:

  cout<<marks.at(2)<<endl;

  // capacity()

  cout<<marks.capacity()<<endl; // Here if the size of vector is four and you add extra element so the size doubles here it will be 4 -> 8

  // reserve()
  prac.reserve(10);
  cout<<"Capacity of prac after reserve :"<<prac.capacity()<<endl;

  // max_size():Size depends on compiler 

  cout<<"Maximum size you can allocate:"<<marks.max_size()<<endl;

  // clear():Removes all the elements make the size 0

 distances.clear();
 cout<<"New size of distance vector:"<<distances.size()<<endl;

//  insert():

distances.insert(distances.begin(), 10);
cout<<"First element of distances vector :"<<distances[0]<<endl;

// erase()

v.erase(v.begin() , v.end());
cout<<"New Size of vector v:"<<v.size()<<endl;

// swap():

vector<int>first;
vector<int>second;

first.push_back(10);
first.push_back(20);
first.push_back(30);
first.push_back(40);

second.push_back(45);
second.push_back(50);
second.push_back(60);
second.push_back(70);

first.swap(second);
// see the values all answers are swap
// cout<<first[0]<<" "<<first[1]<<" "<<first[2]<<endl;
// cout<<second[0]<<" "<<second[1]<<" "<<second[2]<<endl;

// You can also use this loop: It is for-each loop

for(int i : first){
  cout<<i<<endl;
}

for(int i : second){
  cout<<i<<endl;
}

// traversing the vector using iterator :

// creating an iterator:

vector<int>::iterator it = first.begin();
while(it != first.end()){
  cout<<*it<<" ";
  it++;
}

}