
#include <iostream>
using namespace std;
class Student{
private:
    int rollno;
    string name;
public:
    //constructor
    Student(int r,string s){
        rollno= r;
        name=s;
        cout<<"student object created"<<endl;
    }
    //member function
    void display(){
        cout<<"roll number:"<<rollno<<endl;
        cout<<"name:"<<name<<endl;
    }
    //destructor
    ~Student(){
        cout<<"student object destroyed"<<endl;
    }
};
int main(){
    int rollno;
    cin>>rollno;
    string name;
    cin>>name;
    Student s1(rollno,name);
    s1.display();
    return 0;
}

