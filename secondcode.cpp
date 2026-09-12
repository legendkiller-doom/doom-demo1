#include <iostream>
using namespace std;  //down you will get function overlodding concept
#include <string>

// class teacher{
//     private:
//     long long salary=1000;
//     public:
//     string name;
//     string dept="cse";
//     string subject;
//     void cmon(long long nmon ){
//         salary=nmon;
//     }
//     long long money(){
//         return salary;
//     }

// };
// int main(){
//     teacher t1;
//     t1.name="abhishek";
//     t1.cmon(10000000000);
//     t1.money();
//     cout<<"faculty:"<<t1.name<<endl;
//     cout<<"dept:"<<t1.dept<<endl;
//     cout<<"faculty money:"<<t1.money();
// }

//encapsulation
// #include <iostream>
// using namespace std;
// #include <string>
//     class account{
//        // //string dept; #1
//         private:
//         string password;
        
//         double acc_no;
//         public:
//         string user_id;
//         string bank_name;
//         string dept;
//         account(){
//             dept="core";
//         }

//         void  newp(string pass){
//             password=pass;}
//             string showp(){
//                 return password;
//             }
//            // // string hdept(){ return dept;} // you have  to write like this because you declared in pri,default pri
//         };
//         int main(){
//             account h1;
//             h1.user_id="abhishek";
//             h1.newp("family");
//             cout<<"user name: "<<h1.user_id<<endl;
//             // cout<<"dept: "<<h1.hdept()<<endl;  //()because nothing is there if variable mention it #1
//            // cout<<"password: "<<h1.newp("family")<< //this will show error because it is void
//            cout<<"password: "<<h1.showp()<<endl;
//            cout<<"dept: "<<h1.dept;
//         }

// #include <iostream>
// using namespace std;
// #include <string>
// class bank{
//     private:
//     string password;
//     long long money;
//     public:
//     string dept;
//     string user;
//     long long atmno;
//     bank(){  //we should make different parameter$ // paramaterizied construtor
//         dept="sbi";   //non paramitized ,by default it will take your dept sbi #1
//     }
//     bank(string m){// by default
//        dept=m;
//    }
    // bank(string d,string u,long long atm){ 
    //     dept=d;//for  using this #3 i am using same variable
    //     user=u;
    //     atmno=atm;
    // }
    // bank(string dept,string user,long long atmno){ 
    //     this->dept=dept;//for making case use#3 i am using same variable
//         this->user=user;
//         this->atmno=atmno;
//     }
// };
// int main(){
//     bank h1,h2;
//     h1.user="abhi";
//     cout<<"name:"<<h1.user<<endl;
//     cout<<"dept:" <<h1.dept<<endl;
//     cout<<"dept: "<<h2.dept<<endl;  //#1
//     //suppose h3 has other department
//     bank h3;
//     h3.dept="TKO"; // you can declare h3 above also #2
//     cout<<"dept h3: "<<h3.dept<<endl;
//     // //making everything with paramatizied function
//    //// bank h4; //wrong way for paramatizied function
//     bank h4("yono","abhishek",9765487);
//     cout<<"name:"<<h4.user<<endl<<"dept:"<<h4.dept<<endl<<"money:"<<h4.atmno<<endl;
// //     //#note:other writing style will not work for all of for this use $
// ////suppose variables are same in this case in this use(this) #3
// }

// shallow and deep copy
class student{  // condtructor overlodding mean same variable but different no of parameters
    public:      //int add(int a,int b) double add(int a,int b),int add(int a,int b,int c) function overloading
    string name;  // student(string a, int age) basically paramitizied constructor
    double *cgpaptr;
    string dept;
    student(){

   }
     student(string name,double cgpa){  //in constructor we doesn't write type
        //this is not copy constructor
        this ->name=name;
        cgpaptr= new double;
        *cgpaptr=cgpa;
    }
    // student(student &obj){
    //     cout<<"this is my constructor"<<endl;  //this is shallow
    //     this->name=obj.name;    
    //     this->cgpaptr=obj.cgpaptr;
    // }

    student(student &obj){
        cout<<"this is my constructor"<<endl;
        this->name=obj.name;
        cgpaptr=new double;
        *cgpaptr=*obj.cgpaptr;
    }

    void info1(){
        cout<<"name:"<<name<<endl;
        cout<<"cgpa:"<<*cgpaptr<<endl;
    }
    ~student(){ delete cgpaptr;
    cout<<"destructor";}

    
};
int main(){
    student s1("abhi",9.9);
    s1.info1();
    cout<<"---------*-------"<<endl;
    //student s2(s1);
   // s2.info1();
   //student s2; //@this is incorrect because it doesn't meet with any constructor
    student s2(s1);// $ same as student(obj.student),therefore it work
    s2.name="nisha";// after this you can make modification
    *(s2.cgpaptr)=7.5; //it stores the value whereas s2.cgpaptr stores address
    s2.info1();
}

