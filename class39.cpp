#include <iostream>
using namespace std;
class Students{
    string name;
    int rollno;
    float cgpa;
    int nocour;
    public:
    Students();
    Students(string name,int rollno,float cgpa,int nocour);
    Students(const Students &r);
    ~Students(){
     cout<<"destructor called";
    }
    
};
Students::Students(){
    cout<<"deafult constructor ";
}
Students::Students(string name,int rollno,float cgpa,int nocour){
    cout<<" parameterized constructor ";
    this-> name=name;
    this-> rollno=rollno;
    this-> cgpa=cgpa;
    this-> nocour=nocour;
}
Students::Students(const Students &r){
    name=r.name;
    rollno=r.rollno;
    cgpa=cgpa;
    nocour=nocour;
}
int main(){
    Students s1("gauri",23,4.5,8),s2("abhiraj",34,5.6,7),s3(s1);
}