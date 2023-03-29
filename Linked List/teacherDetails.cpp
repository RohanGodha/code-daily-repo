#include <iostream>
using namespace std;
    struct teacher{
        int age;
        int salary;
        string name;
        string gender;
        bool english;
        
         void teacherDetails(string name, int age, int salary)
         {
            cout<< "name: "<<name<<endl;
            cout<< "age: "<<age<<endl;
            cout<< "salary: "<<salary<<endl;
        };
        
    };
    int main() 
    {

        teacher Gomu;
        Gomu.age=25;
        Gomu.salary= 10000;
        Gomu.name= "Gomu";
        Gomu.gender= "Male";
        Gomu.english= 1;
        
       // teacher = {"Gomu", 25, 10000};
        Gomu.teacherDetails(Gomu.name, Gomu.age,Gomu.salary);
        cout<<endl;
   
}
