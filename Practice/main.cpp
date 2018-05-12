//
//  main.cpp
//  Practice
//
//  Created by しみずまさはる on 7/6/2017.
//  Copyright © 2017年 Zjut. All rights reserved.
//

#include <iostream>
#include "Libs.hpp"
#include"review.hpp"
#include<iomanip>
#include<fstream>
#include<string>
using namespace std;

#define SIZE 5

class Schoolss{
private:
    int id;
    string name;
    double cost;
public:
    Schoolss();
    int getid(){return id;}
    void setid(int i){id=i;}
    string getname(){return name;}
    void setname(string n){name=n;}
    double getcost(){return cost;}
    void setcost(double c){cost=c;}
};
class MaxSchoolss{
public:
    MaxSchoolss();
    void getmax();
};
Schoolss s[SIZE];

MaxSchoolss::MaxSchoolss(){
    string filename="aa.txt";
    ifstream infile;
    infile.open(filename.data(),ios::binary);
    if(!infile){
        cout<<"open error."<<endl;
        exit(1);
    }
    int i,j;
    for(i=0;i<SIZE;i++){
        int id;
        string name;
        double cost;
        infile>>id>>name>>cost;
        
    }
    
}
void test1(){
    MaxSchoolss ms;
    ms.getmax();
}


int main(int argc, const char * argv[]) {
    test1();
    //T1();
    //T2();
    //T10();
    //P40T3();
    //P40T4();
    //P40T7();
    //P40T8();
    //P82T313();
    //P83T314();
    //P84T315();
    //P95T43();
    //P98T44();
    //P101T45();
    //P102T46();
    //P103T47();
    //P105T48();
    //P106T49();
    //P107T49();
    //P116T413();
    //P124T415();
    //P130T51();
    //P131T52();
    //P132T53();
    //P13654();
    //P13755();
    //P13856();
    //P13957();
    //P14158();
    //P14259();
    //P148510();
    //P152511();
    //P153512();
    //P161622();
    //P16262();
    //P16363();
    //P16764();
    //P16965();
    //P17066();
    //P174610();
    //P19971();
    //P20272();
    //P20372();
    //P204715();
    //P20674();
    //P21477();
    //P24681();
    //P246T82();
    //P249T82b();
    //P250T83();
    //P251T84();
    //P259T92();
    //P266T95();
    //P286T99();
    //P291T910();
    //P293T911();
    //P296T912();
    //P297T913();
    //P349T111();
    //P356T113();
    //P360T115();
    //P363T116();
    //P455T141();
    //P459T142();
    //Y2017T1();
    //Y2017T2();
    //Y2017T3();
    //Y2017T4();
    //Y2017T5();
    //Y2017T2T1();
    //Y2017T2T2();
    //Y2017T3T1();
    //Y2017T3T2();
    //Y2017T3T3();
    //Y2016T1T1();
    //Y2016T1T2();
    //Y2016T1T3();
    //Y2016T1T4();
    //Y2016T1T5();
    //Y2016T2T1();
    //Y2016T2T2();
    //Y2016T3T1();
    //Y2016T3T2();
    //Y2016T3T3();
    //Y2012T1T1();
    //Y2012T1T2();
    //Y2012T1T3();
    //Y2012T1T4();
    //Y2012T1T5();
    //Y2012T2T1();
    //Y2012T2T2();
    //Y2012T2T3();
    //Y2012T2T4();
    //Y2012T2T5();
    //Y2012T3T1();
    //Y2012T3T2();
    //Y2011T1T1();
    //Y2011T1T2();
    //Y2011T1T3();
    //Y2011T1T4();
    //Y2011T1T5();
    //Y2011T2T1();
    //Y2011T2T3();
    //Y2011T2T4();
    //Y2011T2T5();
    //Y2011T3T1();
    //Y2011T3T2();
    //Y2013T1T1();
    //Y2013T1T2();
    //Y2013T1T3();
    //Y2013T1T4();
    //Y2013T1T5();
    //Y2013T2T1();
    //Y2013T2T2();
    //Y2013T3T1();
    //Y2013T3T2();
    //Y2013T3T3();
    //Y2014T1T1();
    //Y2014T1T2();
    //Y2014T1T3();
    //Y2014T1T4();
    //Y2014T1T5();
    //Y2014T2T1();
    //Y2014T2T2();
    //Y2014T3T1();
    //Y2014T3T2();
    //Y2014T3T3();
    //Y2015T1T1();
    //Y2015T1T2();
    //Y2015T1T3();
    //Y2015T1T4();
    //Y2015T1T5();
    //Y2015T2T1();
    //Y2015T3T1();
    //Y2015T3T2();
    //ProgramT2();
    //ProgramT3();
    //COBJProgram();
    //ProgramT4();
    return 0;
}
