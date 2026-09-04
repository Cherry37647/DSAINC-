//Algorithm container(vector,queue,set and map) function and iterators
//pair vector iterators list deque stack queue priority ueue min heap set multiset unorderedset
//map multimap extra
#include<iostream>
#include<utility>
#include<vector>
#include <bits/stdc++.h>
using namespace std;


void explainpair(){
    pair <int,int>p={1,7};
    cout<<p.first<<" "<<p.second<<endl;
    pair <int , int > arr[]={{6,7},{5,8}};
    cout<<arr[0].first<<" "<<arr[1].second<<endl;
 
    pair<int, pair<int, int>> pec = {1, {3, 6}};
// Accessing elements:
cout << pec.first<<endl;         // Prints 1
cout << pec.second.first<<endl;  // Prints 3
cout << pec.second.second<<endl; // Prints 6
    // pair <int,int, pair<int,int>> pa={{6,9},{3,6}};
}

void explainvector(){
   //vector v
    vector <int> v;
    v.push_back(1);
    v.emplace_back(2);
    //vector vec
    vector <pair<int,int>> vec;
    vec.push_back({5,7});
    vec.emplace_back(9,3);
    cout<<v[0]<<" "<< vec[1].second<<" "<<v[1]<<endl;
    cout<<vec[0].second<<" "<<vec[1].first<<endl;
//vector v1
    vector <int> v1(5,100);
    v1.push_back(4);
    cout<<v1[0]<<" "<<v1[2]<<" "<<v1[6]<<endl;

    //it points to memory address while *it points to that element
    vector <int>::iterator it=v.begin();//v.begin point first element of v vector
    it++;//move to second element
    cout<<*it<<endl;//v=[1,2]  v[0]=1 v[1]=2//print 1 index value

    vector <int>::iterator ite=v.end();//v.end points to after last element
    ite--;//move to last element (backward step)
    cout<<*ite<<endl; //print last index value

    vector <int>::reverse_iterator iter=v.rend();//v.rend points to before first element
    iter--;//move to first element(forward step)opposite
    cout<<*iter<<endl; //print -1 index value

    vector <int>::reverse_iterator itera=v.rbegin();//points to end element
    itera++;//backward step
    cout<<*itera<<endl; //print last index value

    v.push_back(7);
    v.push_back(7);
    v.push_back(4);
    v.pop_back();
    v.push_back(6);
    
    //how to access all element of vector -using for loop  and itera
    for(vector<int> ::iterator itt=v.begin() ;itt!=v.end();itt++){
        cout<<*itt<<" ";
    }
    cout<<endl;
    for (auto itt=v.begin(); itt!=v.end();itt++){
        cout<<*itt<<" ";
    }
    cout<<endl;
    
    
    //v={1,2,7,7,6}
    v.erase(v.begin()+2);//{1,2,7,6}delete 2nd index and 3rd element
    //if you want to delete continuous element of vector then use starting and end point
    v.erase(v.begin()+2,v.begin()+4);//{1,2}delete two element of 2nd and 3rd index value not 4th index
    //insert 
    v.insert(v.begin()+2,200);//{1,2,200}
    for (auto itt:v){
        cout<<itt<<" ";
    }
    cout<<endl;
    v.insert(v.begin()+2,4,100);//{1,2,100,100,100,100,200}
    for (auto itt:v){
        cout<<itt<<" ";
    }
    cout<<endl;

    //enter the element of another vector into v
    v.insert(v.begin() ,vec[0].first);
    for (auto itt:v){
        cout<<itt<<" ";
    }
    cout<<endl<<v.size()<<endl;//8 length of size
   //v.swap(v1);
   //v.clear();
   //v.empty();
    
}

//list is container and dynamic in nature
void explainlist(){
  list <int> ls;
  ls.push_back(3);
  ls.emplace_back(5);
  ls.emplace_front(7);
  ls.emplace_back(9);
  ls.push_front(0);
  for(auto itt:ls){
    cout<<itt<<" ";
  }
  cout<<endl;
  //rest are same like begin end rend rbegin swap insert
}


void explaindeque(){
    deque <int> dq;
    dq.push_back(4);//{4}
    dq.push_back(3);//{4,3}
    dq.emplace_front(7);//{7,4,3}
    dq.emplace_back(9);//{7,4,3,9}
    dq.push_front(0);//{0,7,4,3,9}
    dq.pop_back();//{0,7,4,3}
    dq.pop_front();//{7,4,3}
    dq.back();
    dq.front();
  for(auto itt:dq){
    cout<<itt<<" ";
  }
  cout<<endl;
  //rest function same as vector begin end rend rbegin swap size clear insert
}

//stack is a container follows lifo last in first out 
void explainstack(){
    stack <int> sta;
    sta.push(9);
    sta.emplace(3);
    sta.push(7);
    sta.emplace(4);//{9,3,7,4}
    sta.pop();//{9,3,7}
    cout<<sta.top()<<" "<<sta.size()<<" "<<sta.empty()<<endl;
   //push,pop and top and size and empty
    stack <string> st1,st2;
    st1.swap(st2);
    st1.push("r");
    
}

//queue follows fifo first in first out
void explainqueue(){
    queue <int> qu;
    qu.push(9);//{9}
    qu.emplace(3);//{9,3}
    qu.push(8);//{9,3,8}
    qu.pop();//{3,8}
    qu.back()+=3;//{3,11}
    cout<<qu.back()<<endl;
    cout<<qu.front()<<endl;

}
//push,pop time complexity is o(logn)
//top 0(1)

//priority queue - arrange element according to value greatest element at top and lowest value element is at bottom follow fifo orde
void explainpriority_queue(){
    //maximum heap
    priority_queue <int> pq;
    pq.push(3);
    pq.push(9);//{9,3}
    pq.emplace(3);//{9,3,3}
    pq.push(8);//{9,8,3,3}
    cout<<pq.top()<<endl;
    pq.pop();//{8,3,3}
    cout<<pq.top()<<endl;
    
    //minimum heap
    priority_queue <int,vector<int>,greater<int>> mh;
     mh.push(3);
    mh.push(9);//{3,9}
    mh.emplace(3);//{3,3,9}
    mh.push(8);//{3,3,8,9}
    cout<<mh.top()<<endl;//3
    mh.pop();//{3,8,9}
    cout<<mh.top()<<endl;//3

}


//set is sorted and unique
void explainset(){
    set <int> se;
    //se.push(); not push and pop work
    se.insert(4);
    se.emplace(6);//{4,6}
    se.emplace(4);//{4,6}
    se.insert(3);//{3,4,6}
    auto it =se.find(7);//print last index 
    cout<<*it<<endl;
    cout<<se.erase(4)<<endl;//display 0,1 if have then erase and result is 1 otw 0
    cout<<se.count(1)<<endl;//0 or 1 have 1 or not have 0
    cout<<se.count(3)<<endl;
    cout<<se.size()<<endl;
    se.lower_bound(7);
    se.upper_bound(6);

}

//multiset is sorted but not unique
//insert erase count find
void explainmultiset(){
    multiset <int> ms;
    ms.insert(7);
    ms.insert(8);//{7,8}
    ms.insert(3);//{3,7,8}
    ms.insert(7);//{3,7,7,8}
    cout<<ms.erase(4)<<endl;//false-0
    cout<<ms.empty()<<endl;//false-0 
    auto it =ms.find(4);
    cout<<*it<<endl;//false print index after element
    ms.erase(ms.find(8));//{3,7,7}
    int cnt =ms.count(7);
    cout<<cnt<<endl;//2
    ms.erase(ms.find(7));
    int cntt =ms.count(7);//1
    cout<<cntt<<endl;
}

//unoerderset is unigue but not sorted which gives better complexity and lowerbound and upperbound function is not working
 

//map
void explainmap(){
    map <int,int> mpp;
    map<int , pair<int,int>> mpp;
    map<pair <int,int>,int> mpp;
    mpp.insert({2,4});
    mpp.insert({2,4});


}


int main(){
    //explainpair();
    //explainvector();
    //explainlist();
    //explaindeque();
    //explainstack();
    //explainqueue();
    //explainpriority_queue();
    //explainset();
    explainmultiset();
    return 0;
}