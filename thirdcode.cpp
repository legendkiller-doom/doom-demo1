#include <iostream>
using namespace std;
#include <string>
////destructor,
// class person{
//     public:
//     int age;
//     string name;
//     person(){cout<<"person\n";}
//     ~person(){cout<<"person destructor\n";}
// };
// class student:public person{
//     public:
//     student(){cout<<"student\n";}
//     long roll;
//     void info(){
//         cout<<"name:"<<name<<endl;
//         cout<<"age:"<<age<<endl;
//         cout<<"roll:"<<roll<<endl;
//     }
//     ~student(){cout<<"student destructor\n";}
// };
// int main(){student s1;
//     s1.roll=50007;
//     s1.age=17;
//     s1.info(); 
//     }

// class person{public:
//     string name;
//     int age;
//     person(string name, int age){
//         this-> name=name;
//         this ->age=age;
//         cout<<"person";
//     }
// };
// class student :public person{ // here we declare public,private,protected ,public ko private
//     public:
//     int roll;
//     student(string name,int age,int roll): person (name,age) {
//         this->roll=roll;
//     }
//     void info(){
//         cout<<"name:"<<name<<endl;
//         cout<<"age:"<<age<<endl;
//         cout<<"roll:"<<roll<<endl;
//     }
// };
// int main(){
//     student s1("Abhi",18,0007);
//     s1.info();
//     cout<<s1.name;
// }
    
////inheritance,polymorphism(run time)
// #include <iostream>
// using namespace std;
// #include <string>

//     class student{
//         public:
//         string name;
//         int age;
//         long roll;
//     };
//     class teacher{ // don't write like this class teacher:public student will show the error
//         public :
//         long salary;
//         string subject;
//     };
//     class ta:public student,public teacher{
        
//     };
//     int main(){
//         ta s1;
//         s1.name="good sir";
//         s1.subject="cp";
//         s1.salary=25000;
//         cout<<"name:"<<s1.name;
//         cout<<"subject:"<<s1.subject<<endl;
//         cout<<"salary:"<<s1.salary;
//     }

////overriding,virtual
// class child{public:
//     virtual void info(){  // almost works like override if you remove virtual it will give the same result
//         cout<<"i am a chid\n";
//     }
// };
// class parent:public child{ // if you don't write compiler will not understand whom to run
//     public:
//     void info(){cout<<"i am parent\n";
// }
// };
// int main(){
//     child p1;
//     p1.info();
//     parent c1;
//     c1.info();
// }

// #include <iostream>
// using namespace std;
// #include <string>
//  class shape{public:
//     virtual void draw()=0; //this automatically means abstract class
//  };
//  class circle:public shape{
//     public:
//     void draw(){cout<<"drawing circle\n";}
//     void choice(){cout<<"wanted to draw other\n";}
//  };
//  int main(){
//     circle c1;
//     c1.draw();
//     c1.choice();
//  }

// #include <iostream>
//  using namespace std; // if static is not there all will equal to zero
// #include <string>
// void fun(){
//    static int x=0;
//    cout<<"X:"<<x<<endl;
//    x++;
// }
// int main(){
//    fun();
//    fun();
//    fun();
// }