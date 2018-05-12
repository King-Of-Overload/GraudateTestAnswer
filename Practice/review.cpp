//
//  review.cpp
//  Practice
//
//  Created by しみずまさはる on 29/10/2017.
//  Copyright © 2017年 Zjut. All rights reserved.
//

#include "review.hpp"
#include<iostream>
#include <iomanip>
#include<fstream>
#include<string>
using namespace std;

class MaxSchool{
private:
    int id;
    string name;
    double cost;
public:
    int getid(){
        return id;
    }
    void putid(int d){id=d;}
    string getname(){return name;}
    void putname(string nam){name=nam;}
    double getcost(){return cost;}
    void putcost(double cos){cost=cos;}
    MaxSchool();//读入txt文件
    void maxcost();
};
MaxSchool school[6];
MaxSchool::MaxSchool(){//读入txt文件
    ifstream stream;
    string file="aa.txt";
    stream.open(file.data(),ios::in);
    if(!stream){
        cout<<"打开失败"<<endl;
    }else{
        int i=0;
        while (stream>>school[i].id) {
            stream>>school[i].name;
            stream>>school[i].cost;
            i++;
        }
    }
}
void MaxSchool::maxcost(){
    int i;
    MaxSchool maxSchool=school[0];
    for(i=1;i<sizeof(school);i++){
        if(maxSchool.getcost()<school[i].getcost()){
            maxSchool=school[i];
        }
    }
    cout<<"花费最大的学校为："<<maxSchool.getname()<<",花费为:"<<maxSchool.getcost()<<endl;
}

void ProgramT2(){
    MaxSchool sch;
    sch.maxcost();
}

class Shape{
public:
    virtual void printArea() const=0;
};
class Circle:public Shape{
private:
    double radius;
public:
    Circle(double r){radius=r;}
    void printArea() const{cout<<"圆的面积："<<3.14*radius*radius<<endl;}
};
class Rectangle:public Shape{
private:
    double length;
    double width;
public:
    Rectangle(double l,double w){width=w;length=l;}
    void printArea() const{cout<<"矩形的面积:"<<length*width<<endl;}
};

class Triangle:public Shape{
private:
    double bottom;
    double height;
public:
    Triangle(double b,double h){bottom=b;height=h;}
    void printArea()const{cout<<"三角形面积:"<<0.5*bottom*height<<endl;}
};
void ProgramT3(){
    Shape *p;
    Circle c(1);
    Rectangle r(2,4);
    Triangle t(3,4);
    p=&c;
    p->printArea();
    p=&r;
    p->printArea();
    p=&t;
    p->printArea();
}



int a=10;
class CObj2{
private:
    int a,b;
public:
    CObj2(){
        a=b=0;
    }
    void display(){
        cout<<a<<b<<endl;
    }
    
    void func(int a){  //a=3  b=0
        //error:
        //a+=a;
        this->a=a;
    }
    void func2(){//a=3
        //error:
        //a+=a;
        this->a+=::a;//::a显示指定a为外部变量
    }
};
void COBJProgram(){
//    CObj2 *obj=new CObj2;
//    obj->func(3);//a=13
//    obj->display();//  130
//    obj->func2();// a=26
//    obj->display();//26 0
    
    char str[][7]={"First","Second","Third","Forth","Fifth"};
    char *cp[]={str[4],str[3],str[2],str[1],str[0]};
    int i=0;
    while(i<5){
        printf("%s ",*(cp+i));
        i++;
    }
}

struct NODE{
    int data;
    NODE *next;
};
void ProgramT4(){
    NODE* fneww(NODE *L);
    NODE a1,a2,a3;
    a1.data=0;
    a1.next=&a2;
    a2.data=1;
    a2.next=&a3;
    a3.data=2;
    a3.next=NULL;
    NODE *p=fneww(&a1);
    for(int i=0;i<3;i++){
        cout<<p->data<<p->next->data<<endl;
        p=p->next;
    }
}

NODE* fneww(NODE *L){
    NODE *P=NULL;
    NODE *Q=L;
    NODE *T;
    while(Q->next!=NULL){
        T=Q;
        Q=Q->next;
        T->next=P;
        P=T;
    }
    return P;
}


