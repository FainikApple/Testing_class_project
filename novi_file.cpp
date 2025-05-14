#include <iostream>
using namespace std;
class Person
{
public:
    Person(string p_name, unsigned p_age)
    {
        name = p_name;
        age = p_age;
        cout << "Person has been created" << endl;
    }

    Person(string p_name)
    {
        name = p_name;
        age = 20;
        cout << "Person has been created" << endl;
    }

    Person()
    {
//        name = "Vasya";
//        age = 20;
//        cout << "Person has been created" << endl;
    }

    int get_age(){
        return age;
    }

    int increase_age(){
        age = age + 1;
        return age;
    }

    void set_age(unsigned int new_age){
        age = new_age;
    }

    string get_name(){
        return name;
    }
    void set_name(string new_name){
        name = new_name;
    }

protected:
    unsigned int age = 20;
    string name = "Petya";
};

class Employee : public Person
{
public:

    Employee(string p_name, unsigned p_age, string company_name)
    {
        name = p_name;
        age = p_age;
        company = company_name;
        cout << "Employee has been created" << endl;
    }
    string company;
};

class Fighter : public Person
{
public:
    Fighter(string p_name, unsigned p_age, unsigned p_power)
    {
        name = p_name;
        age = p_age;
        power = p_power;
        cout << "Fighter has been created" << endl;
    }

    Fighter()
    {
        string name = "Vasylyi";
        unsigned int age = 24;
        unsigned  power = 777;
        cout << "Fighter has been created" << endl;
    }

    unsigned get_power(){
        return power;
    }

    void set_power(unsigned new_power){
        power = new_power;
    }

    string name;
    //unsigned int age;
    unsigned int power;
};

Fighter fighting(Fighter a, Fighter b){
    cout << "Fight begins" << endl;
    if(a.get_power() > b.get_power()){
        cout << "Fighter number one wins" << endl;
        return a;
    }
    else if(a.get_power() < b.get_power()){
        cout << "Fighter number two wins" << endl;
        return b;
    }
    else if(a.get_power() == b.get_power()){
        if(a.get_age() > b.get_age()){
            cout << "Fighter number one wins" << endl;
            return a;
        }
        else if(a.get_age() < b.get_age()){
            cout << "Fighter number two wins" << endl;
            return b;
        }
        else{
            cout << "Draw" << endl;
        }
    }
}



int main(){
    //Employee element;
    Fighter element("Tom", 38, 777);
    Fighter element_2("Vasylyi", 29, 777);
//    cout << element.get_age() << endl;
//    cout << element.get_name() << endl;
//    element.set_age(9999999);
//    element.set_name("Master Chief");
//    cout << element.get_age() << endl;
//    cout << element.get_name() << endl;
//    cout << element.increase_age() << endl;
    fighting(element, element_2);
    //cout << element.company << endl;
}
