//
//  Libs.cpp
//  Practice
//
//  Created by しみずまさはる on 7/6/2017.
//  Copyright © 2017年 (浙江工业大学)Zjut. All rights reserved.
//

#include "Libs.hpp"
#include<iostream>
#include <iomanip>
#include <cmath>
#include "file2.hpp"
#include <string>
#include<fstream>
using namespace std;

void T1(){
    cout<<"This"<<" is";
    cout<<" a"<<" C++";
    cout<<" program"<<endl;
}

void T2(){
    int a,b,c;
    cin>>a>>b>>c;
    int m;
    if(a<b) m=a;
    else m=b;
    if(c<m) m=c;
    cout<<m<<endl;
}

void T10(){
    int x,y,z;
    int temp;
    if(x>y){
        temp=x;
        x=y;
        y=temp;
    }
    if(z<x){
        cout<<z<<","<<x<<","<<y<<endl;
    }else if(z<y){
        cout<<x<<","<<z<<","<<y<<endl;
    }else{
        cout<<x<<","<<y<<","<<z<<endl;
    }
}


void P40T3(){
    char c1='a',c2='b',c3='c',c4='\101',c5='\116';
    cout<<c1<<c2<<c3<<'\n';
    cout<<"\t"<<c4<<'\t'<<c5<<'\n';
}

void P40T4(){
    char c1='C',c2='+',c3='+';
    cout<<"I say: \""<<c1<<c2<<c3<<'\"';
    cout<<"\t\t"<<"He says: \"C++ is very interesting! \""<<"\n";
}

void P40T7(){
    int i,j,m,n;
    i=8;
    j=10;
    m=++i+j++;  //m=9+10=19  i=9 j=11
    n=(++i)+(++j)+m;  // n=10+12+19=41  i=10 j=12
    cout<<i<<"\t"<<j<<"\t"<<m<<"\t"<<n<<endl;  //10 12 19 41
}

void P40T8(){
    char c1='C',c2='h',c3='i',c4='n',c5='a';
    c1=c1+4;
    c2=c2+4;
    c3+=4;
    c4+=4;
    c5+=4;
    cout<<c1<<c2<<c3<<c4<<c5<<endl;
}

void P82T313(){
    long f1,f2;
    int i;
    f1=f2=1;
    for(i=1;i<=20;i++){
        cout<<setw(12)<<f1<<setw(12)<<f2;
        if(i%2==0)cout<<endl;
        f1=f1+f2;
        f2=f2+f1;
    }
}


void P83T314(){
    int m,k,i,n=0;
    bool prime;
    for(m=101;m<=200;m=m+2){
        prime=true;
        k=int(sqrt(m));//k代表根号m的整数部分
        for(i=2;i<=k;i++){
            if(m%i==0){
                prime=false;
                break;
            }
        }
        if(prime){
            cout<<setw(5)<<m;
            n=n+1;
        }
        if(n%10==0) cout<<endl;
    }
    cout<<endl;
}

void P84T315(){
    char c;
    while((c=getchar())!='\n'){
        if((c>='a'&&c<='z')||(c>='A'&&c<='Z')){
            c=c+4;
            if((c>'Z'&&c<='Z'+4)||c>'z'){c=c-26;}
        }
        cout<<c;
    }
    cout<<endl;
}

void P95T43(){
    float add(float x,float y);
    float a,b,c;
    cout<<"please enter a,b:";
    cin>>a>>b;
    c=add(a, b);
    cout<<"sum="<<c<<endl;
}

float add(float x,float y){
    float z;
    z=x+y;
    return z;
}


void P98T44(){
    int max_4(int a,int b,int c,int d);
    int a,b,c,d,max;
    printf("Please enter 4 integer numbers:");
    scanf("%d %d %d %d",&a,&b,&c,&d);
    max=max_4(a, b, c, d);
    printf("max=%d\n",max);
}

int max_4(int a,int b,int c,int d){
    int max(int,int);
    int m;
    m=max(a, b);
    m=max(m, c);
    m=max(m, d);
    return m;
}

int max(int x,int y){
    if(x>y){return x;}
    else return y;
}

void P101T45(){
    int age(int n);
    cout<<age(5)<<endl;
}

int age(int n){
    int c;
    if(n==1) c=10;
    else c=age(n-1)+2;
    return c;
}

void P102T46(){
    long fac(int n);
    int n;
    long y;
    cout<<"please input an integer:";
    cin>>n;
    y=fac(n);
    cout<<n<<"!="<<y<<endl;
}

long fac(int n){
    long f;
    if(n<0){
        cout<<"n<0,data error!"<<endl;
        f=-1;
    }else if(n==0||n==1){
        f=1;
    }else{
        f=fac(n-1)*n;
    }
    return f;
}

inline int max(int,int,int);
void P103T47(){
    int i=10,j=20,k=30,m;
    m=max(i,j,k);
    cout<<"max="<<m<<endl;
}

inline int max(int a,int b,int c){
    if(b>a) a=b;
    if(c>a) a=c;
    return a;
}

void P105T48(){
    int max105(int a,int b,int c);
    double max105(double a,double b,double c);
    long max105(long a,long b,long c);
    int i1,i2,i3,i;
    cin>>i1>>i2>>i3;
    i=max105(i1,i2,i3);
    cout<<"i_max="<<i<<endl;
    double d1,d2,d3,d;
    cin>>d1>>d2>>d3;
    d=max105(d1,d2,d3);
    cout<<"d_max="<<d<<endl;
    long g1,g2,g3,g;
    cin>>g1>>g2>>g3;
    g=max105(g1,g2,g3);
    cout<<"g_max="<<g<<endl;
}

int max105(int a,int b,int c){
    if(b>a) a=b;
    if(c>a) a=c;
    return a;
}

double max105(double a,double b,double c){
    if(b>a) a=b;
    if(c>a) a=c;
    return a;
}

long max105(long a,long b,long c){
    if(b>a) a=b;
    if(c>a) a=c;
    return a;
}

void P106T49(){
    int max106(int a,int b);
    int max106(int a,int b,int c);
    int a=8,b=-12,c=27;
    cout<<"max106(a, b, c)= "<<max106(a, b, c)<<endl;
    cout<<"max(a,b)="<<max106(a, b)<<endl;
}

int max106(int a,int b,int c){
    if(b>a) a=b;
    if(c>a) a=c;
    return a;
}

int max106(int a,int b){
    if(a>b) return a;
    else return b;
}

template<typename T>
T max107(T a,T b,T c){
    if(b>a) a=b;
    if(c>a) a=c;
    return a;
}
void P107T49(){
    int i1=185,i2=-76,i3=567,i;
    double d1=56.87,d2=90.23,d3=-3214.78,d;
    long g1=67854,g2=-912456,g3=673456,g;
    i=max107(i1,i2,i3);
    d=max107(d1,d2,d3);
    g=max107(g1,g2,g3);
    cout<<"i_max="<<i<<endl;
    cout<<"d_max="<<d<<endl;
    cout<<"g_max="<<g<<endl;
}

void P109T411(){
    //int max110(int a,int b,int c=0);
    int a,b,c;
    cin>>a>>b>>c;
    //cout<<"max(a,b,c)="<<max110(a, b,c)<<endl;
}

void P116T413(){
    int P116T413fac(int);
    int i;
    for(i=1;i<=5;i++){
        cout<<i<<" !="<<P116T413fac(i)<<endl;
    }
}

int P116T413fac(int n){
    static int f=1;
    f=f*n;
    return f;
}

void P124T415(){
    extern int maxP124T415(int,int);//调用外部文件的方法
    int a,b;
    cin>>a>>b;
    cout<<maxP124T415(a, b)<<endl;
}

void P130T51(){
    int i,a[10];
    for(i=0;i<=9;i++){
        a[i]=i;
    }
    for(i=9;i>=0;i--){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

void P131T52(){
    int i;
    int f[20]={1,1};
    for(i=2;i<20;i++){
        f[i]=f[i-1]+f[i-2];
    }
    for(i=0;i<20;i++){
        if(i%5==0) cout<<endl;
        cout<<setw(8)<<f[i];
    }
    cout<<endl;
}

void P132T53(){
    int a[11];
    int i,j,t;
    cout<<"input 10 numbers:"<<endl;
    for(i=1;i<11;i++){
        cin>>a[i];
    }
    cout<<endl;
    for(j=1;j<=9;j++){
        for(i=1;i<=10-j;i++){
            if(a[i]>a[i+1]){
                t=a[i];a[i]=a[i+1];a[i+1]=t;
            }
        }
    }
    cout<<"the sorted numbers: "<<endl;
    for(i=1;i<11;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

void P13654(){
    int a[2][3]={{1,2,3},{4,5,6}};
    int b[3][2];
    int i,j;
    cout<<"前のarray是:"<<endl;
    for(i=0;i<=1;i++){
        for(j=0;j<=2;j++){
            cout<<a[i][j]<<" ";
            b[j][i]=a[i][j];//赋值给新数组
        }
        cout<<endl;//输出完一行换行
    }
    cout<<"新的数组是:"<<endl;
    for(i=0;i<=2;i++){
        for(j=0;j<=1;j++){
            cout<<b[i][j]<<" ";
        }
        cout<<endl;
    }
}

void P13755(){
    int i,j;
    int row=0,column=0;
    int max;
    int a[3][4]={{5,12,23,56},{19,28,37,46},{-12,-34,6,8}};
    max=a[0][0];
    for(i=0;i<=2;i++){
        for(j=0;j<=3;j++){
            if(a[i][j]>max){
                max=a[i][j];
                row=i;
                column=j;
            }
        }
    }
    cout<<"最大数为:"<<max<<" 行号:"<<row<<" 列号:"<<column<<endl;
}

void P13856(){
    int max_value(int x,int max);//函数声明
    int i,j,row=0,column=0,max;
    int a[3][4]={{5,12,23,56},{19,28,37,46},{-12,-34,6,8}};
    max=a[0][0];
    for(i=0;i<=2;i++){
        for(j=0;j<=3;j++){
            max=max_value(a[i][j], max);
            if(max==a[i][j]){
                row=i;
                column=j;
            }
        }
    }
    cout<<"最大数为:"<<max<<" 行号:"<<row<<" 列号:"<<column<<endl;
}

int max_value(int x,int max){
    if(x>max){
        return x;
    }else
    return max;
}

void P13957(){
    void select_array(int array[],int n);
    int a[10];
    int i;
    cout<<"请输入十个数: "<<endl;
    for(i=0;i<10;i++){
        cin>>a[i];
    }
    cout<<endl;
    select_array(a, 10);
    cout<<"排序后的数组为:"<<endl;
    for(i=0;i<10;i++){
        cout<<a[i]<<" ";
    }
}

void select_array(int array[],int n){
    int t,i=0,j=0;
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(array[j]<array[i]){
                t=array[j];
                array[j]=array[i];
                array[i]=t;
            }
        }
    }
}


void P14158(){
    int max_value_14158(int array[][4]);
    int a[3][4]={{11,32,45,67},{22,44,66,88},{15,72,43,37}};
    cout<<"数组中的最大数是："<<max_value_14158(a)<<endl;
}

int max_value_14158(int array[][4]){
    int i,j,max;
    max=array[0][0];
    for(i=0;i<3;i++){
        for(j=0;j<4;j++){
            if(array[i][j]>max){
                max=array[i][j];
            }
        }
    }
    return max;
}

void P14259(){
    char diamond[][5]={{' ',' ','*'},{' ','*',' ','*'},{'*',' ',' ',' ','*'},{' ','*',' ','*'},
        {' ',' ','*'}};
    int i,j;
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            cout<<diamond[i][j];
        }
        cout<<endl;
    }
}


void P148510(){
    void smallest_string(char str[][30],int n);
    int i;
    char country_names[3][30];
    for(i=0;i<3;i++){
        cin>>country_names[i];
    }
    smallest_string(country_names, 3);
}

void smallest_string(char str[][30],int n){
    int i;
    char string[30];
    strcpy(string, str[0]);
    for(i=0;i<n;i++){
        if(strcmp(str[i],string)<0) strcpy(string, str[i]);
    }
    cout<<"排在最前面的国家是:"<<string<<endl;
}


void P152511(){
    string string1,string2,string3;
    string temp;
    cin>>string1>>string2>>string3;
    if(string2>string3){
        temp=string2;
        string2=string3;
        string3=temp;
    }
    if(string1<=string2){
        cout<<string1<<" "<<string2<<" "<<string3<<endl;
    }else if(string1<=string3){
        cout<<string2<<" "<<string1<<" "<<string3<<endl;
    }
}

string name[50],num[50];
int n;
void P153512(){
    void input_data();
    void search(string find_name);
    string find_name;
    cout<<"请输入需要录入的学生数:";
    cin>>n;
    input_data();
    cout<<"请键入需要查询学号的学生姓名:";
    cin>>find_name;
    search(find_name);
}

void input_data(){
    int i;
    for(i=0;i<n;i++){
        cout<<"请输入第"<<i+1<<"个学生的姓名与学号:";
        cin>>name[i]>>num[i];
    }
}

void search(string find_name){
    int i;
    bool result=false;
    for(i=0;i<n;i++){
        if(find_name==name[i]){
            cout<<"找到了该学生的学号，学号为:"<<num[i]<<" 姓名为:"<<name[i];
            result=true;
            break;
        }
        if(!result){
            cout<<"没有找到该学生"<<endl;
        }
    }
    cout<<endl;
}

void P161622(){
    int a,b;
    int * pointer_1,* pointer_2;
    a=100;b=10;
    pointer_1=&a;
    pointer_2=&b;
    cout<<a<<" "<<b<<endl;
    cout<<pointer_1<<pointer_2<<endl;
    cout<<* pointer_1<<*pointer_2<<endl;
}

void P16262(){
    int *p1,*p2,a,b,*p;
    cin>>a>>b;
    p1=&a;
    p2=&b;
    if(a<b){
        p=p1;
        p1=p2;
        p2=p;
    }
    cout<<"a="<<a<<" b="<<b<<endl;
    cout<<"max="<<*p1<<" min="<<*p2<<endl;
}

void P16363(){
    void swap(int *p1,int *p2);
    int *pointer_1,*pointer_2,a,b;
    cin>>a>>b;
    pointer_1=&a;
    pointer_2=&b;
    if(a<b){
        swap(pointer_1, pointer_2);
    }
    cout<<"max="<<a<<" min="<<b<<endl;
}

void swap(int *p1,int *p2){
    int temp;
    temp=*p1;
    *p1=*p2;
    *p2=temp;
}

void P16764(){
    void exchange(int *,int *,int *);
    int a,b,c,*p1,*p2,*p3;
    cin>>a>>b>>c;
    p1=&a;p2=&b;p3=&c;
    exchange(p1, p2, p3);
    cout<<a<<" "<<b<<" "<<c<<endl;
}

void exchange(int *q1,int *q2,int *q3){
    if(*q1<*q2) swap(q1,q2);
    if(*q1<*q3) swap(q1, q3);
    if(*q2<*q3) swap(q2, q3);
}


void P16965(){
    /*int a[10];
    int i;
    for(i=0;i<10;i++){
        cin>>a[i];
    }
    cout<<endl;
    for(i=0;i<10;i++){
        //cout<<a[i]<<" ";
        cout<<*(a+i)<<" ";
    }
    cout<<endl;*/
    
    //指针变量法
    int a[10];
    int *p=a,i;
    for(i=0;i<10;i++){
        cin>>*(p+i);
    }
    cout<<endl;
    for(p=a;p<(a+10);p++){
        cout<<*p<<" ";
    }
    cout<<endl;
}

void P17066(){
    void select_sort(int *p,int n);
    int a[10],i;
    cout<<"enter the original array:"<<endl;
    for(i=0;i<10;i++){
        cin>>a[i];
    }
    cout<<endl;
    select_sort(a, 10);
    cout<<"排序号的数组是："<<endl;
    for(i=0;i<10;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}


void select_sort(int *p,int n){
    int i,j,k,t=0;
    for(i=0;i<n-1;i++){
        k=i;
        for(j=i+1;j<n;j++){
            if(*(p+j)<*(p+i)) k=j;
            t=*(p+k);*(p+k)=*(p+i);*(p+i)=t;
        }
    }
}


void P174610(){
    char str1[]="弱水三千，我只取一瓢饮";
    char str2[40],*p1,*p2;
    p1=str1;p2=str2;
    for(;*p1!='\0';p1++,p2++){
        *p2=*p1;
    }
    *p2='\0';//最后一位
    p1=str1;p2=str2;
    cout<<"字符串1是："<<p1<<endl;
    cout<<"字符串2是："<<p2<<endl;
}


void P19971(){
    struct Date{
        int month;
        int day;
        int year;
    };
    
    struct Student{
        int num;
        char name[20];
        char sex;
        Date birthday;
        float score;
    } student1,student2;
    student2={10002,"秦罗敷",'f',{5,23,1995},89.5};
    student1=student2;
    cout<<student1.num<<endl;
    cout<<student1.name<<endl;
    cout<<student1.sex<<endl;
    cout<<student1.birthday.year<<"/"<<student1.birthday.month<<"/"<<student1.birthday.day<<endl;
    cout<<student1.score<<endl;
}

void P20272(){
    struct Person{
        char name[40];
        int count;
    };
    
    Person leader[3]={{"秦罗敷",0},{"刘兰芝",0},{"香草",0}};
    int i,j;
    char leader_name[40];
    for(i=0;i<10;i++){
        cin>>leader_name;
        for(j=0;j<3;j++){
            if(strcmp(leader[j].name, leader_name)==0){
                leader[j].count++;
            }
        }
    }
    cout<<endl;
    for(i=0;i<3;i++){
        cout<<leader[i].name<<":"<<leader[i].count<<endl;
    }
}

void P20372(){
    struct Person{
        string name;
        int count;
    };
    Person leader[3]={{"秦罗敷",0},{"刘兰芝",0},{"香草",0}};
    int i,j;
    string leader_name;
    for(i=0;i<10;i++){
        cin>>leader_name;
        for(j=0;j<3;j++){
            if(leader_name==leader[j].name){
                leader[j].count++;
            }
        }
    }
    cout<<endl;
    for(i=0;i<3;i++){
        cout<<leader[i].name<<":"<<leader[i].count<<endl;
    }
}


void P204715(){
    struct Student{
        int num;
        string name;
        char sex;
        float score;
    };
    Student stu;
    Student *p=&stu;
//    stu.num=10301;
//    stu.name="秦罗敷";
//    stu.sex='f';
//    stu.score=90;
    p->num=10301;
    p->name="秦罗敷";
    p->sex='f';
    p->score=90;
    cout<<stu.num<<" "<<stu.name<<" "<<stu.sex<<" "<<stu.score<<endl;
    cout<<(p->num)<<" "<<(p->name)<<" "<<(p->sex)<<" "<<(p->score)<<endl;
    cout<<(*p).num<<" "<<(*p).name<<" "<<(*p).sex<<" "<<(*p).score<<endl;
}


void P20674(){
    struct Student{
        int num;
        float score;
        struct Student *next;
    };
    Student a,b,c;
    Student *head,*p;
    a.num=31001;a.score=89.5;
    b.num=31003;b.score=90;
    c.num=31007;c.score=85;
    head=&a;
    a.next=&b;
    b.next=&c;
    c.next=NULL;
    p=head;
    do{
        cout<<p->num<<" "<<p->score<<endl;
        p=p->next;
    }while (p!=NULL);
}


void P21477(){
    enum color{red,yellow,blue,white,black};
    color pri;
    int i,j,k,n=0,loop;
    for(i=red;i<=black;i++){
        for(j=red;j<=black;j++){
            if(i!=j){//前两个球不相同
                for(k=red;k<=black;k++){
                    if((k!=i)&&(k!=j)){
                        n++;
                        cout<<setw(3)<<n;
                        for(loop=1;loop<=3;loop++){
                            switch (loop) {
                                case 1: pri=color(i);break;
                                case 2: pri=color(j);break;
                                case 3: pri=color(k);break;
                            }
                            switch(pri){
                                case red:cout<<setw(8)<<"red";break;
                                case yellow:cout<<setw(8)<<"yellow";break;
                                case blue:cout<<setw(8)<<"blue";break;
                                case white:cout<<setw(8)<<"white";break;
                                case black:cout<<setw(8)<<"black";break;
                            }
                        }
                    }
                }
            }
            cout<<endl;
        }
    }
    cout<<"total:"<<n<<endl;
}


/**类和对象**/

void P24681(){
    class Time{
    public:
        int hour;
        int minute;
        int second;
    };
    
    Time t1;
    cin>>t1.hour;
    cin>>t1.minute;
    cin>>t1.second;
    cout<<t1.hour<<":"<<t1.minute<<":"<<t1.second<<endl;
}



class Time{
public:
    int hour;
    int minute;
    int second;
};
void P246T82(){
    
    
    void setTime(Time &t);
    void showTime(Time &t);
    Time t1;
    setTime(t1);
    showTime(t1);
    Time t2;
    setTime(t2);
    showTime(t2);
}

void setTime(Time &t){
    cin>>t.hour;
    cin>>t.minute;
    cin>>t.second;
}

void showTime(Time &t){
    cout<<t.hour<<":"<<t.minute<<":"<<t.second<<endl;
}


void P249T82b(){
    void setTime(Time &t,int hour=0,int minute=0,int second=0);
    void showTime(Time &t);
    Time t1;
    setTime(t1);
    showTime(t1);
    Time t2;
    setTime(t2);
    showTime(t2);
}

void setTime(Time &t,int hour,int minute,int second){//重载
    t.hour=hour;
    t.minute=minute;
    t.second=second;
}


class Time2{
public:
    void setTime();
    void showTime();
private:
    int hour;
    int minute;
    int second;
};
void P250T83(){
    Time2 t1;
    t1.setTime();
    t1.showTime();
    Time2 t2;
    t2.setTime();
    t2.showTime();
}

void Time2::setTime(){
    cin>>hour;
    cin>>minute;
    cin>>second;
}

void Time2::showTime(){
    cout<<Time2::hour<<":"<<Time2::minute<<":"<<Time2::second<<endl;
}


class Array_max{
public:
    void setValue();
    void maxValue();
    void showValue();
private:
    int array[10];
    int max;
};
void P251T84(){
    Array_max armax;
    armax.setValue();
    armax.maxValue();
    armax.showValue();
}


void Array_max::setValue(){
    int i;
    for(i=0;i<10;i++){
        cin>>array[i];
        //cin>>Array_max::array[i];
    }
}


void Array_max::maxValue(){
    int i;
    max=array[0];
    for(i=0;i<10;i++){
        if(array[i]>max){
            max=array[i];
        }
    }
}

void Array_max::showValue(){
    cout<<"max="<<max<<endl;
}

class Box{
public:
    //Box(int l,int w,int h):height(h),width(w),length(l){};
    Box();
    Box(int l,int w,int h);
    int volume();
private:
    int length;
    int width;
    int height;
};
void P259T92(){
    Box box1(25,20,12);
    cout<<"Box1的体积是："<<box1.volume()<<endl;
    Box box2(20,14,10);
    cout<<"Box2的体积是:"<<box2.volume()<<endl;
}

Box::Box(int l,int w,int h){
    length=l;
    width=w;
    height=h;
}

int Box::volume(){
    return (length*width*height);
}

class Virgins{
public:
    Virgins(int n,string nam,char s){
        num=n;
        nam=name;
        sex=s;
        cout<<"构造函数被调用."<<endl;
    };
    ~Virgins(){
        cout<<"析构函数被调用"<<endl;
    };
    void display(){
        cout<<"num:"<<num<<endl;
        cout<<"name:"<<name<<endl;
        cout<<"sex:"<<sex<<endl;
    };
private:
    int num;
    char name[10];
    char sex;
};
void P266T95(){
    Virgins virg1(10010,"秦罗敷",'f');
    virg1.display();
    Virgins virgs2(10011,"焦仲卿",'m');
    virgs2.display();
}

class CopyBox{
public:
    CopyBox(int h=10,int w=10,int l=10);
    int volume();
private:
    int height;
    int width;
    int length;
};
void P286T99(){
//    CopyBox box1(15,30,25),box2;
//    cout<<"box1的体积是:"<<box1.volume()<<endl;
//    box2=box1;
//    cout<<"box2的体积是:"<<box2.volume()<<endl;
    
    //使用拷贝构造函数来实现
    CopyBox box1(15,30,25);//定义box1
    cout<<"box1的体积是:"<<box1.volume()<<endl;
    CopyBox box2(box1);
    CopyBox box3=box2;
    cout<<"box2的体积是:"<<box2.volume()<<endl;
    cout<<"box3的体积是:"<<box3.volume()<<endl;
}

CopyBox::CopyBox(int h,int w,int l){
    height=h;
    width=w;
    length=l;
}

int CopyBox::volume(){
    return (width*height*length);
}


class StaticBox{
public:
    StaticBox(int,int);
    int volume();
    static int height;
    int width;
    int length;
};
void P291T910(){
    StaticBox a(15,20);
    StaticBox b(20,30);
    
}

StaticBox::StaticBox(int w,int len){
    width=w;
    length=len;
}
int StaticBox::volume(){
    return (height*width*length);
}
int StaticBox::height=10;//对静态变量赋初值



class StaticFuncStudent{
public:
    StaticFuncStudent(int n,int a,float s):num(n),age(a),score(s){};
    void total();
    static float average();
private:
    int num;
    int age;
    float score;
    static float sum;
    static int count;
};
void P293T911(){
    StaticFuncStudent stud[3]={StaticFuncStudent(1001, 18, 70),StaticFuncStudent(1002, 19, 78),
    StaticFuncStudent(1005, 20, 98)};
    int n;
    cout<<"请输入学生人数:";
    cin>>n;
    for(int i=0;i<n;i++){
        stud[i].total();
    }
    cout<<"学生数："<<n<<"平均分是:"<<StaticFuncStudent::average()<<endl;
}

float StaticFuncStudent::sum=0;
int StaticFuncStudent::count=0;
void StaticFuncStudent::total(){
    sum+=score;
    count++;
}

float StaticFuncStudent::average(){
    return (sum/count);
}


class FriendTime{
private:
    int hour;
    int minute;
    int sec;
public:
    FriendTime(int,int,int);
    friend void display(FriendTime &t);//友元函数
};
void P296T912(){
    FriendTime t1(10,13,56);
    display(t1);
}

FriendTime::FriendTime(int h,int m,int s){
    hour=h;
    minute=m;
    sec=s;
}

void display(FriendTime &t){
    cout<<t.hour<<":"<<t.minute<<":"<<t.sec<<endl;
}


class DateFriend;//提前引用声明
class TimeFriend{
private:
    int hour;
    int minute;
    int sec;
public:
    TimeFriend(int h,int m,int s):hour(h),minute(m),sec(s){};
    void display(DateFriend &d);//display是Time类的成员函数，形参是Date类对象的引用
};
class DateFriend{
private:
    int year;
    int month;
    int day;
public:
    DateFriend(int m,int d,int y):year(y),month(m),day(d){};
    friend void TimeFriend::display(DateFriend &d);//声明Time中的display函数为本类的友元成员函数
};

void TimeFriend::display(DateFriend &d){
    cout<<d.month<<"/"<<d.day<<"/"<<d.year<<endl;
    cout<<hour<<":"<<minute<<":"<<sec<<endl;
}
void P297T913(){
    TimeFriend t1(10,13,56);
    DateFriend d1(12,25,2004);
    t1.display(d1);
}


class PublicStudent{
private:
    int num;
    string name;
    char sex;
public:
    void get_value(){cin>>num>>name>>sex;};
    void display(){
        cout<<"num:"<<num<<endl;
        cout<<"name:"<<name<<endl;
        cout<<"sex:"<<sex<<endl;
    }
};

class PublicStudent1:public PublicStudent{
private:
    int age;
    string addr;
public:
    void get_value_1(){cin>>age>>addr;};
    void display_1(){
        cout<<"age:"<<age<<endl;
        cout<<"addr:"<<addr<<endl;
    }
};

void P349T111(){
    PublicStudent1 stud;
    stud.get_value();
    stud.get_value_1();
    stud.display();
    stud.display_1();
}


class ProtectedStudent{
public:
protected:
    int num;
    string name;
    char sex;
};
class ProtectedStudent1:protected ProtectedStudent{
private:
    int age;
    string addr;
public:
    void get_value1(){
        cin>>num>>name>>sex;
        cin>>age>>addr;
    };
    void display1(){
        cout<<"num:"<<num<<endl;
        cout<<"name:"<<name<<endl;
        cout<<"sex:"<<sex<<endl;
        cout<<"age:"<<age<<endl;
        cout<<"address:"<<addr<<endl;
    };
};

void P356T113(){
    ProtectedStudent1 stud1;
    stud1.get_value1();
    stud1.display1();
}

//多级派生
class A{//基类
public:
    int i;
private:
    int k;
protected:
    void f1();
    int j;
};

class B:public A{//共有继承
public:
    void f2(){cin>>i>>j;f1();};
protected:
    void f3();
private:
    int m;
};

class C:protected B{//protected继承类
public:
    void f4(){f1();};
private:
    int n;
};


class ExtStudent{
protected:
    int num;
    string name;
    char sex;
public:
    ExtStudent(int n,string nam,char s){
        num=n;
        name=nam;
        sex=s;
    }
    ~ExtStudent(){};
};

class ExtStudent1:public ExtStudent{
private:
    int age;
    string addr;
public:
    ExtStudent1(int n,string nam,char s,int a,string ad):ExtStudent(n,nam,s){
        age=a;
        addr=ad;
    }
    ~ExtStudent1(){}
    void show(){
        cout<<"num:"<<num<<endl;
        cout<<"name:"<<name<<endl;
        cout<<"sex:"<<sex<<endl;
        cout<<"age:"<<age<<endl;
        cout<<"addr:"<<addr<<endl;
        cout<<endl;
    }
};
void P360T115(){
    ExtStudent1 stud1(10010,"秦罗敷",'f',19,"Yangzhou");
    ExtStudent1 stud2(10011,"刘兰芝",'f',20,"Lujiang");
    stud1.show();
    stud2.show();
}


class ChildStudent{
protected:
    int num;
    string name;
public:
    ChildStudent(int n,string nam){
        name=nam;
        num=n;
    }
    void display(){
        cout<<"num:"<<num<<endl<<"name:"<<name<<endl;
    }
};

class ChildStudent1:public ChildStudent{
private:
    ChildStudent monitor;
    int age;
    string addr;
public:
    ChildStudent1(int n,string nam,int n1,string nam1,int a,string ad):ChildStudent(n,nam),monitor(n1,nam1){
        age=a;
        addr=ad;
    }
    void show(){
        cout<<"这个学生是:"<<endl;
        display();
        cout<<"age:"<<age<<endl;
        cout<<"address:"<<addr<<endl;
        cout<<endl;
    }
    void show_monitor(){
        cout<<endl<<"班长是:"<<endl;
        monitor.display();
    }
};
void P363T116(){
    ChildStudent1 stud1(10010,"孙菲菲",10001,"秦罗敷",19,"YangZhou");
    stud1.show();
    stud1.show_monitor();
}


void P455T141(){
    double triangle(double,double,double);
    double a,b,c;
    cin>>a>>b>>c;
    try{
    while(a>0&&b>0&&c>0){
        cout<<triangle(a, b, c)<<endl;
        cin>>a>>b>>c;
    }
    }catch(double){
        cout<<"a="<<a<<"b="<<b<<"c="<<c<<"不是一个三角形"<<endl;
    }
    cout<<"end"<<endl;
}

double triangle(double a,double b,double c){
    double area;
    double s=(a+b+c)/2;
    if(a+b<=c||a+c<=b||b+c<=a){
        throw a;
    }
    area=sqrt(s*(s-a)*(s-b)*(s-c));
    return area;
}

void P459T142(){
    void f1();
    try{
        f1();
    }catch(double){
        cout<<"ERROR0"<<endl;
    }
    cout<<"end0"<<endl;
}

void f1(){
    void f2();
    try{
        f2();
    }catch(char){
        cout<<"ERROR1!"<<endl;
    }
    cout<<"end1"<<endl;
}

void f2(){
    void f3();
    try{
        f3();
    }catch(int){
        cout<<"ERROR2!"<<endl;
    }
    cout<<"end2"<<endl;
}

void f3(){
    double a=0;
    try{
        throw a;
    }catch(float){
        cout<<"ERROR3!"<<endl;
    }
    cout<<"end3"<<endl;
}



/******************试题部分*********************/

//浙江工业大学958    2017

/***
 分析：
 首先定义数组 a[4]
 进入循环，分别取出数组中每一个元素:

 第一次：a[0]=25 满足第四个分支: y=a[0]%10+a[0]/10+1=5+2+1=8
 输出:    25    8
 第二次：a[1]=-2 满足第一个分支: y=5-2=3;
 输出:    -2    3
 第三次: a[2]=13 满足第三个分支 y=7<13?7:13=13
 输出:    13    7
 第四次:a[3]=7  满足第二个分支: y=14*2-1=27
 输出:    7    27
 
 最后输出：
 25    8
 -2    3
 13    7
  7   27
 **/
void Y2017T1(){
    int a[4]={25,-2,13,7};
    int i,y;
    for(i=0;i<4;i++){
        if(a[i]<=0) y=sqrt(a[0])+a[1];
        else if(a[i]<=10&&a[i]>0) y=++a[2]*2-1;
        else if(a[i]<=20&&a[i]>10) y=a[3]<a[2]?a[3]:a[2];
        else y=a[0]%10+a[0]/10+1;
        cout<<setw(5)<<a[i]<<setw(5)<<y<<endl;
    }
}

/***
 分析：
 print函数的作用:将数组当中第1-begin个元素赋值为' '
 第begin+1---begin+n个元素赋值为pzf
 最后一个元素为\0(结束符号)
    *
   ***
  *****
   ###
   ###
 
 **/
void print(int,char,int);
void Y2017T2(){
    print(3,'*',1);print(2,'*',3);
    print(1,'*',5);print(2,'#',3);
    print(2,'#',3);
}

void print(int begin,char pzf,int n){
    char a[50];
    int i=0;
    for(i=0;i<begin;i++) a[i]=' ';
    for(i=0;i<n;i++) a[begin+i]=pzf;
    a[begin+i]='\0';//最后一个元素
    cout<<a<<endl;
}

/***
 分析：
 首先 *p1=a  p1++->a
 *p1=a p1++->' '
 *p1=' ' p1+1!=' ' p1++->b
 *p1=b p1++->b
 *p1=b  p1++
 *p1=' ' p1+1==' ' p1=' '
 当遇到连续的两个空格时执行复制操作，减少一个空格区域
 输出结果：
 aa bb cccc ddd efg h
 **/
void fun(char *p){
    char *p1;p1=p;
    while(*p1!='\0'){
        if(*p1==' '&&*(p1+1)==' ') strcpy(p1, p1+1);
        else p1++;
    }
}
void Y2017T3(){
    char aa[]="aa bb    cccc   ddd   efg   h";
    cout<<aa<<endl;
    fun(aa);
    cout<<aa<<endl;
}
/**
 分析： 初始Time1 minute=34  sec=59
 Time2     minute=0   sec=0
 接着调用time1.display()
 接着输出：  time1:    34:59
 调用time1.fun1() :   sec=sec-60=60-60=0   minute=35
 输出：time1++: 35:0
 调用time2=time1.fun2():   sec++=1
 判断sec 不成立 返回 time2: sec=1 minute=35
 输出:    time1++: 35:1
 调用time2,display()
 输出:  time2: 35:0
 说明:TimeT4 temp(*this) 此处*this指当前对象，然后将*this拷贝给temp，在程序中修改的是*this的值，不影响temp
 
 答案：
 time1:    34:59
 time1++: 35:0
 time1++: 35:1
 time2: 35:0
 **/

class TimeT4{
private:
    int minute;
    int sec;
public:
    TimeT4(){minute=0;sec=0;}
    TimeT4(int m,int s):minute(m),sec(s){}
    TimeT4 fun1();
    TimeT4 fun2();
    void display(){cout<<minute<<":"<<sec<<endl;}
};

TimeT4 TimeT4::fun1(){
    if(++sec>=60){sec-=60;++minute;}
    return *this;
}
TimeT4 TimeT4::fun2(){
    TimeT4 temp(*this);
    sec++;
    if(sec>=60){sec-=60;++minute;}
    return temp;
}
void Y2017T4(){
    TimeT4 time1(34,59),time2;
    cout<<"time1:    ";time1.display();
    time1.fun1(); cout<<"time1++: ";time1.display();
    time2=time1.fun2(); cout<<"time1++: "; time1.display();
    cout<<"time2: "; time2.display();
}
/**
 分析：考查知识点：构造函数  析构函数 继承与派生 基类构造函数 类对象
 
 i=5 首先输出：Constructor of Base. ~Base()压栈
 接着调用:d(i):  i=5 再次调用父类的构造函数:输出：Constructor of Base. ~Base()压栈
 然后输出派生类构造函数：Constructor of Derived. ~Derived()压栈
 
 紧接着调用obj.show(); 输出：x=5
 析构函数出栈：
 Destructor of Derived.
 Constructor of Base.
 Constructor of Base.
 
 答案:
 Constructor of Base.
 Constructor of Base.
 Constructor of Derived.
 x=5
 Destructor of Derived.
 Constructor of Base.
 Constructor of Base.
 **/
class Base{
private:
    int x;
public:
    Base(int i){x=i;cout<<"Constructor of Base."<<endl;}
    ~Base(){cout<<"Destructor of Base."<<endl;}
    void show(){cout<<"x="<<x<<endl;};
};

class Derived:public Base{
private:
    Base d;
public:
    Derived(int i):Base(i),d(i){cout<<"Constructor of Derived."<<endl;}
    ~Derived(){cout<<"Destructor of Derived."<<endl;}
};
void Y2017T5(){
    Derived obj(5);
    obj.show();
}

void Y2017T2T1(){
    int i,n;
    void sort(int *,int);
    cin>>n;
    int a[n];
    for(i=0;i<n;i++) cin>>a[i];
    sort(a,n);
    for(i=0;i<n;i++) cout<<a[i]<<" ";//错误 cout<<a[i]<<" ";
}

void sort(int *x,int m){//错误: x改成*x
    int i,j,k,temp;
    for(i=0;i<m-1;i++){//错误:i<m-1-> i<m
        k=i;
        for(j=i+1;j<m;j++) if(x[k]>x[j]) k=j;
        temp=x[k];
        x[k]=x[i];//错误
        x[i]=temp;//错误
    }
}

class BoxT2{
private:
    int height=10;//错误：静态变量不能直接赋值,其二：静态成员私有外界无法访问，因为静态成员不属于对象 原来:static int height=10
    int width;
    int length;
public:
    BoxT2(int,int);
    friend void print(BoxT2 &b);//修改成友元函数 原来oid print(BoxT2 &b);
};
BoxT2::BoxT2(int w,int len){
    width=w;
    length=len;
}
void print(BoxT2 &b){
    cout<<b.height<<endl;
    cout<<b.length<<endl;
    cout<<b.width<<endl;
}
void Y2017T2T2(){
    BoxT2 a(15,20),b(20,30);
    print(a); print(b);//原来b.print
}


/**编程题**/
/*第一题*/
class Goods{
private:
    double price;//价格
    int num;//件数
public:
    Goods(int n,double p){price=p;num=n;}
    void cost();
};
void Goods::cost(){
    double sum=0;
    sum=price*num;
    cout<<"总价为："<<sum<<endl;
}
void Y2017T3T1(){
    Goods g(5,30.8);
    g.cost();
}

/*第二题*/
//class School{
//private:
//    int id;
//    string name;
//    double cost;
//public:
//    int getid(){
//        return id;
//    }
//    void putid(int d){id=d;}
//    string getname(){return name;}
//    void putname(string nam){name=nam;}
//    double getcost(){return cost;}
//    void putcost(double cos){cost=cos;}
//    School();//读入txt文件
//    void maxcost();
//};
//School school[5];
//School::School(){//读入txt文件
//    ifstream stream;
//    string file="aa.txt";
//    stream.open(file.data(),ios::in);
//    int i=0;
//    while (stream>>school[i].id) {
//        stream>>school[i].name;
//        stream>>school[i].cost;
//        i++;
//    }
//}
//
//void School::maxcost(){
//    int i;
//    School maxSchool=school[0];
//    for(i=1;i<5;i++){
//        if(maxSchool.getcost()<school[i].getcost()){
//            maxSchool=school[i];
//        }
//    }
//    cout<<"花费最大的学校为："<<maxSchool.getname()<<",花费为:"<<maxSchool.getcost()<<endl;
//}
//
//void Y2017T3T2(){
//    School s;
//    s.maxcost();
//}


class Shape{
public:
    double printArea(){return 0.0;}
};

class Circle:public Shape{
private:
    double radius;
public:
    Circle(double r):radius(r){}
    double printArea(){
        return 3.14*radius*radius;
    }
};

class Rectangle:public Shape{
private:
    int width;
    int length;
public:
    Rectangle(int w,int l){
        width=w;
        length=l;
    }
    double printArea(){
        return width*length;
    }
};

class Triangle:public Shape{
private:
    int width;
    int height;
public:
    Triangle(int w,int h){
        width=w;
        height=h;
    }
    double printArea(){
        return (width*height)/2;
    }
};
void Y2017T3T3(){
    Circle c(3);
    cout<<"圆的面积："<<c.printArea()<<endl;
    Rectangle r(10,20);
    cout<<"矩形的面积："<<r.printArea()<<endl;
    Triangle t(3,4);
    cout<<"三角形的面积："<<t.printArea()<<endl;
}


/*2016试题*/

/*
 分析：
 i:1-2047 : 1 2 4 8…………2^11=2048 i=1024(2^10)
 lg=11;
 输出：
 2048 11
 */
void Y2016T1T1(){
    int n=2048;
    int lg=0;
    for(int i=1;i<n;i=i*2) lg++;
    cout<<n<<" "<<lg<<endl;
}

/*
 分析：
 输出：
 x=10y=20
 */
class Mystery{
    int x,y;
public:
    void init(int a,int b){x=a;y=b;}
    void disp(){cout<<"x="<<x<<"y="<<y;}
};
void Y2016T1T2(){
    Mystery s,*p=&s;
    s.init(10, 20);
    p->disp();
}

/*
 分析:
 首先调用构造函数: i=2;
 输出：
 1
 其次调用disp: i=3;
 输出：3
 最后调用析构：输出：3   i=4
 总输出：
 133
 */
class Mystery2{
    int i;
public:
    Mystery2(){i=1;cout<<i++;}
    void disp(){cout<<++i;}
    ~Mystery2(){cout<<i++;};
};
void Y2016T1T3(){
    Mystery2 m;
    m.disp();
}

/*
 分析：此题考查 i与&i的区别  i为局部函数的形参，本身i不改变
 对于a:   f(g(a))=2   a=1   a=3
 对于b:   f(f(b))=2  b=0   b=2
 输出：
 a=3b=2
 */
int f(int i){
    return ++i;
}
int g(int &i){
    return ++i;
}
void Y2016T1T4(){
    int a,b;
    a=b=0;
    a+=f(g(a));
    b+=f(f(b));
    cout<<"a="<<a<<"b="<<b;
}

/*
 分析：
 首先输出:Base::vfun() called.
 在输出：Derived::vfun() called.
 总输出：
 Base::vfun() called.
 Derived::vfun() called.
 */
class Base2016{
private:
    int b;
public:
    Base2016(){};
    Base2016(int i){b=i;}
    virtual void vfun(){
        cout<<"Base::vfun() called.\n";
    }
};
class Derived2016:public Base2016{
private:
    int d;
    void vfun(){
        cout<<"Derived::vfun() called.\n";
    }
public:
    Derived2016(){};
    Derived2016(int i,int j):Base2016(i){d=j;}
};
void fun(Base2016 *obj){
    obj->vfun();
}
void Y2016T1T5(){
    Base2016 *pb=new Base2016;
    fun(pb);
    Derived2016 *pd=new Derived2016;
    fun(pd);
}


/*
 改错：正确输出结果为：
 30
 130
 
 */
//int a=10;
//class CObj{
//private:
//    int a,b;
//public:
//    CObj(){
//        a=b=0;
//    }
//    void display(){
//        //error:
//        cout<<a<<b<<endl;
//    }
//    
//    void func(int a){  //a=3  b=0
//        //error:
//        //a+=a;
//        this->a=a;
//    }
//    void func2(){//a=3
//        //error:
//        //a+=a;
//        this->a+=::a;//::a显示指定a为外部变量
//    }
//};
//void Y2016T2T1(){
//    CObj *obj=new CObj;
//    obj->func(3);//a=13
//    obj->display();//  130
//    obj->func2();// a=26
//    obj->display();//26 0
//}



void Y2016T2T2(){
    //char str[5][]={"First","Second","Third","Forth","Firfth"};//错误
    char str[5][7]={"First","Second","Third","Forth","Firfth"};
    char *cp[]={str[4],str[3],str[2],str[1],str[0]};
    int i=0;//原来为int i;
    while(i<5){//此处原来为i<=5
        printf("%s ",*(cp+i));//此处原来为%c,(cp+i)表示将cp的指针移动到第二个值处  *(cp+i)表示指针变量，指向字符串
        i++;
    }
}

/*编程题*/
/*
 说明：
 百米跑成绩  grade
 0<=grade<=12 优秀
 12<grade<=15 达标
 grade>15 不达标
 cin>>grade(以x为变量)
 若输入任何<0的数，程序终止 return 
 统计人数： c1(优秀) c2(达标) c3(不达标)
 */

void Y2016T3T1(){
    int x;//成绩
    int c1=0,c2=0,c3=0;//优秀 达标 不达标
    cout<<"请输入学生成绩，若要结束，输入任何小于0的数：";
    while(cin>>x){
    if(x<0){
        break;
    }else if(x>=0&&x<=12){//优秀
        c1++;
    }else if(x>12&&x<=15){//达标
        c2++;
    }else{
        c3++;
    }
    }
    cout<<"优秀："<<c1<<" "<<"达标:"<<c2<<" "<<"不达标:"<<c3<<endl;
}



struct NODE{
    int data;
    NODE *next;
};
void Y2016T3T2(){
    NODE* fnew(NODE *);
    NODE *L;
    NODE a,b,c;
    a.data=1;b.data=2;c.data=3;
    L=&a;
    a.next=&b;
    b.next=&c;
    c.next=NULL;
     NODE *q=fnew(L);
    while(q!=NULL){
        cout<<q->data<<endl;
        q=q->next;
    }
}

NODE* fnew(NODE *L){
    NODE *P=NULL;//新链表的头结点
    NODE *q;//原表
    NODE *t;//中间表
    q=L;
    while(q!=NULL){
        t=q;
        q=q->next;
        t->next=P;
        P=t;
    }
    return P;
}



void Y2016T3T3(){}
class Vehicle{
protected:
    double maxSpeed;
    double currentSpeed;
    double weight;
public:
    virtual void start(){
        cout<<"vehicle启动"<<endl;
    }
    virtual void stop(){
        cout<<"vehicle停止"<<endl;
    }
};

class Bicycle:public Vehicle{
protected:
    double height;
public:
    void start(){
        cout<<"Bicycle启动"<<endl;
    }
    void stop(){
        cout<<"Bicycle停止"<<endl;
    }
};

class MotorCar:public Vehicle{
private:
    int seatNum;
};
class MotorCycle:public Bicycle,MotorCar{
public:
    void start(){
        cout<<"MotorCycle启动"<<endl;
    }
    void stop(){
        cout<<"MotorCycle停止"<<endl;
    }

};



/*2012年试题*/

/*
 分析：
 a[7]=0+1=1
 a[7]=1+2=3
 a[7]=3+3=6
 a[7]=6+4=10
 a[7]=10+5=15
 a[7]=15+6=21
 a[7]=21+7=28
 输出：28
 */
void Y2012T1T1(){
    void fun2012T1(int *,int);
    int a[8]={1,2,3,4,5,6,7};
    int m=8;
    fun2012T1(a,m);
    cout<<a[7]<<endl;
}
void fun2012T1(int *pa,int n){
    for(int j=0;j<n-1;j++){
        *(pa+7)+=*(pa+j);
    }
}

/*
 分析：
 A2012 a(1,2);    i=1,j=2    a=1 b=2
 a.Show();   输出：(1,2)
 B2012 b(3,4,5,6);  i=3 j=4 k=5 l=6  a=3,b=4,x=5,y=6
 b.A2012::Show();  输出：(3,4)
 b.B2012::Show();  输出：5,6
 b.F1();  a=a+x=3+3=6  b=b+y=4+5=9
 A2012::Show();  输出：(8,10)
 总输出：
 (1,2)
 (3,4)
 5,6
 (6,9)
 */
class A2012{
private:
    int a,b;
public:
    A2012(int i,int j){
        a=i;b=j;
    }
    void Move(int x,int y){
        a+=x; b+=y;
    }
    void Show(){
        cout<<"("<<a<<","<<b<<")"<<endl;
    }
};

class B2012:public A2012{
private:
    int x,y;
public:
    B2012(int i,int j,int k,int l):A2012(i,j),x(k),y(l){}
    void Show(){cout<<x<<","<<y<<endl;}
    void F1(){
        Move(3, 5);
        A2012::Show();
    }
};
void Y2012T1T2(){
    A2012 a(1,2);
    a.Show();
    B2012 b(3,4,5,6);
    b.A2012::Show();
    b.B2012::Show();
    b.F1();
}

/*
 分析：
 Point A(0,0);  X=0 Y=0 输出：Point(0,0)
 Point B=f2012(3,4); 局部变量x=3,=4  
 Point p(x,y);  X=3,Y=4  返回p   输出：Point(3,4)
 cout<<"Distance is "<<A.Distance(B)<<endl;
 调用A.Distance(B)  A(X=0.0,Y=0.0) B(X=3,Y=4)
 dx=X-p.X=A.X-B.X=-3  dy=X-p.Y=0.0-4=-4
 sqrt(9+16)=5 返回
 输出：Distance is 5
 总输出：
 Point(0,0)
 Point(3,4)
 Distance is 5
 */
class Point{
private:
    double X,Y;
public:
    Point(double xx=0,double yy=0){
        X=xx;Y=yy;
        cout<<"Point("<<X<<","<<Y<<")"<<endl;
    }
    Point(Point *p){
        X=p->X;Y=p->Y;
        cout<<"Point is copied."<<endl;
    }
    double Distance(Point &p);
};
double Point::Distance(Point &p){
    double dx,dy;
    dx=X-p.X;
    dy=Y-p.Y;
    return sqrt(dx*dx+dy*dy);
}
Point f2012(double x,double y){
    Point p(x,y);
    return p;
}
void Y2012T1T3(){
    Point A(0,0);
    Point B=f2012(3,4);
    cout<<"Distance is "<<A.Distance(B)<<endl;
}

/*
 分析：
 A2012T4 a; 调用构造
 A2012T4 b=a; 调用b的复制构造函数 输出：A::A(const A &)
 b=b; 调用重载运算符函数 输出: A::operator=
 总输出：
 A::A(const A &)
 A::operator=
 */
class A2012T4{
public:
    A2012T4(){}
    A2012T4(const A2012T4&){//拷贝构造函数
        cout<<"A::A(const A &)"<<endl;
    }
    A2012T4 &operator=(const A2012T4&){//重载=运算符
        cout<<"A::operator="<<endl;
        return *this;
    }
};
void Y2012T1T4(){
    A2012T4 a;
    A2012T4 b=a;
    b=b;
}

/*
 分析：
 Sample s1(2),s2(7); s1(A=2 B=B+a=2) s2(A=7 B=B+a=2+7=9)
 Sample::func(s1); 输出： A=2 ,B=2
 Sample::func(s2);输出： A=7 ,B=9
 注意：静态变量一旦改变都发生改变，所以最终两者B=9
  A=2 ,B=9
  A=7 ,B=9
 */
class Sample{
    int A;
    static int B;
public:
    Sample(int a){A=a;B+=a;}
    static void func(Sample &s);
};
int Sample::B=0;//静态变量只能在类外初始化,静态成员可以在类的静态方法中被引用
void Sample::func(Sample &s){
    cout<<" A="<<s.A<<" ,B="<<B<<endl;
}
void Y2012T1T5(){
    Sample s1(2),s2(7);
    Sample::func(s1);//静态方法属于该类，不属于变量
    Sample::func(s2);
}

/*改错题*/
//第一种改法:
/*int f2012(double *a,double *b,int n){//缺少返回类型,且形参类型不一致，改为double
    int s=0;
    for(int i=0;i<n;i++){
        s+=*(a+i)+*(b+i);//访问方式不对 原来 s+=a[i]+b[i];
    }
    return s;
}
void Y2012T2T1(){
    double c[4]={1.1,2.2,3.3,4.4},d[4]={10,0,100,0};
    cout<<f2012(c,d,4)<<endl;//运行结果120
}*/
//第二种改法：
int f2012(double a[],double b[],int n){//缺少返回类型,且形参类型不一致，改为double,并且该形参为数组对象
    int s=0;
    for(int i=0;i<n;i++){
        //s+=*(a+i)+*(b+i);//访问方式不对 原来 s+=a[i]+b[i];
        s+=a[i]*b[i];
    }
    return s;
}
void Y2012T2T1(){
    double c[4]={1.1,2.2,3.3,4.4},d[4]={10,0,100,0};
    cout<<f2012(c,d,4)<<endl;//运行结果120
}

/*
 分析：
 a1=new AA(1,2); A=1 B=2 输出：Constructor.\n 析构函数压栈
 a2=new AA(3,4) A=3,B=4 输出：Constructor.\n 析构函数压栈
 (*a1).Print();  输出：1,2
 a2->Print(); 输出：3,4
 delete a1;  立即调用析构  输出：Destructor.\n
 delete a2;   输出：Destructor.\n
 最终结果：
 Constructor.\n
 Constructor.\n
 1,2
 3,4
 Destructor.\n
 Destructor.\n
 */
class AA{
private:
    int A=0,B=0;
public:
    AA(int i,int j){
        A=i;
        B=j;
        cout<<"Constructor.\n";
    }
    ~AA(){
        cout<<"Destructor.\n";
    }
    void Print();
};
void AA::Print(){
    cout<<A<<","<<B<<endl;
}
void Y2012T2T2(){
    AA *a1,*a2;
    a1=new AA(1,2);
    a2=new AA(3,4);
    (*a1).Print();//调用方式出错 原来:a1.Print();
    a2->Print();//调用方式出错 原来a2.Print();
    delete a1;//删除一个指针变量
    delete a2;
}

/*
 分析：重点
 总输出：
 abcEe
 */
void f(char &p){//错误，需要改成&p，这样，才能对指针指向的值进行修改，否则为局部变量
    //p++;//  str[3]=d，经过p++之后变为e
    char &c=p;//此处错误，原先:char &c=*p  ，此处为传递
    c+='A'-'a';//c=c+('A'-'a')//小写转大写   e->E，改变了原数组
}
void Y2012T2T3(){
    char str[]="abcde";
    for(int i=0;i<sizeof(str)-1;i++){
        f(*(str+i));//此处错误 原先：f(str+3) str[]为数组，此处需要使用指针变量获取数组的第四个元素作为头指针
    }
    cout<<str<<endl;
}

class Local{
    int x,y;
public:
    void printY(){cout<<y;}//错误：原先:int printY(cout<<y;)
public:
    void init(){x=0;y=1;}//错误:原先：void init(){x=0;y=1}
    void printX(){cout<<x;}//错误：int printX(){cout<<x;}
};
void Y2012T2T4(void){
    Local a;
    a.init();
    a.printX();
    a.printY();//错误：私有函数无法访问
}

class Base2012{
private:
    int count;
public:
    Base2012(){}
    Base2012(int c):count(c){}
    virtual void print() const=0;//纯虚函数
};

class Derived2012:public Base2012{
public:
    Derived2012():Base2012(0){}
    Derived2012(int c):Base2012(c){}
    void print() const {cout<<"Derived"<<endl;}
};
void Y2012T2T5(){
    Derived2012 d(10);
    //Base2012 dd(1);//错误，纯虚类不能实例化
    Base2012 *pb;
    pb=&d;
    pb->print();
    //Base2012 &cb=d;
    Derived2012 ddd=d;//父类不能转成子类
}


class Time2012{
private:
    int hour;
    int minute;
    int second;
    int covertHour;
    string status="";
public:
    Time2012(){hour=00;minute=00;second=00;}
    Time2012(int h,int m,int s){
        setTime(h, m, s);
    }
    void setTime(int h,int m,int s){
        hour=h;
        minute=m;
        second=s;
        getTime();
    }
    Time2012 getTime(){
        covertHour=hour%12;
        if(covertHour>=12){
            status="PM";
        }else{
            status="AM";
        }
        return *this;
    }
    void disp12(){
        cout<<setw(2)<<setfill('0')<<covertHour<<":"<<minute<<":"<<second<<status<<endl;
    }
};
/*编程题*/
void Y2012T3T1(){
    Time2012 t1(13,45,12);
    Time2012 t2(9,30,50);
    t1.disp12();
    t2.disp12();
}


class Student{
public:
    string stuName;
    int sum;
    double avg;
    Student(){};
};
int stuNum;
int courseNum;
Student students[100];
void inputData(){
    ofstream out;
    string file="abc.txt";
    out.open(file.data(),ios::out);
    if(!out){//找不到文件
        cout<<"找不到该文件！"<<endl;
        return;
    }
    cout<<"请输入学生人数与课程数目：";
    cin>>stuNum>>courseNum;
    out<<stuNum<<" ";
    out<<courseNum<<" "<<endl;
    if(stuNum>100){
        cout<<"学生人数不能超过100"<<endl;
        return;
    }
    for(int i=0;i<stuNum;i++){
        int singleCourse=0;
        int sum=0;
        Student *stu=new Student;
        cin>>stu->stuName;
        out<<stu->stuName;
        out<<" ";
        for(int j=0;j<courseNum;j++){
            cin>>singleCourse;
            out<<singleCourse;
            out<<" ";
            sum+=singleCourse;
        }
        stu->avg=sum/courseNum;
        students[i]=*stu;
        out<<endl;
    }
}

void outputData(){
    for(int i=0;i<stuNum;i++){
        cout<<i+1<<" "<<students[i].stuName<<endl;
    }
}


void sort(){
    for(int i=0;i<stuNum;i++){
       Student max=students[0];
        for(int j=1;j<stuNum;j++){
            if(max.avg<students[j].avg){
                Student temp=max;
                students[i]=students[j];
                students[j]=temp;
            }
        }
    }
}
void Y2012T3T2(){
    inputData();
    sort();
    outputData();
}


/*2011年试题*/
/*
 结果：
 x=3,y=30
 x=30,y=3
 */
void Swap1(int a,int b){//交换ab
    int t=a;
    a=b;
    b=t;
}
void Swap2(int &a,int &b){//交换ab，不同的是传入的形参是地址，改值会跟着改变
    int t=a;
    a=b;
    b=t;
}
void Y2011T1T1(){
    int x(3),y(30);//int x=3  int y=30
    Swap1(x,y);
    cout<<"x="<<x<<",y="<<y<<endl;
    Swap2(x,y);
    cout<<"x="<<x<<",y="<<y<<endl;
}

/*
 分析：
 创建派生类时首先需要调用基类的构造方法，则基类的析构函数压栈
 总输出：
 构造A对象！
 构造C对象！
 析构C对象！
 析构A对象！
 */
class BaseClass{
public:
    BaseClass(){cout<<"构造A对象！"<<endl;}
    ~BaseClass(){cout<<"析构A对象！"<<endl;}
};
class DerivedClass:public BaseClass{
public:
    DerivedClass(){cout<<"构造C对象！"<<endl;}
    ~DerivedClass(){cout<<"析构C对象！"<<endl;}
};
void Y2011T1T2(){
    DerivedClass d;
}

/*
 B2011 b;  B的析构函数压栈
 A2011 a=b; A的析构函数压栈
 输出：
 Destructor A
 Destructor B
 Destructor A
 */
class A2011{
public:
    A2011(){}
    virtual void f(){cout<<"Destructor A"<<endl;}
    ~A2011(){f();}
};
class B2011:public A2011{
public:
    B2011(){}
    void f(){cout<<"Destructor B"<<endl;}
    ~B2011(){f();}
};
void Y2011T1T3(){
    B2011 b;
    A2011 a=b;
}
/*
 分析：
 s1(i=3,j=3) s2(4,4) s3(5,5)
 输出：
 constructor1
 constructor1
 constructor1
 s2.display();  输出：4 4
 接着调用复制构造函数：
 s1.plus(s3); i=i+H.i=3+5=8  j=j+H.j=3+5=8
 输出：8 8
 总输出：
 constructor1
 constructor1
 constructor1
 4 4
 constructor2
 8 8
 */
class sample{
public:
    int i,j;
    sample(int a=0,int b=0){
        i=a;
        j=b;
        cout<<"constructor1"<<endl;
    }
    sample(const sample &H){//复制构造函数
        i=H.i;
        j=H.j;
        cout<<"constructor2"<<endl;
    }
    void plus(sample H){
        i+=H.i;
        j+=H.j;
    }
    void display(){
        cout<<i<<" "<<j<<endl;
    }
};
void Y2011T1T4(){
    sample s1(3,3),s2(4,4),s3(5,5);
    s2.display();
    s1.plus(s3);
    s1.display();
}

/*
 输出：
 Initially,x=10
 During call to f1,x=1
 During call to f1,x=2
 At the end,x=10
 */
void f12011(){
    static int x=0;
    x++;
    cout<<"During call to f1,x="<<x<<endl;
}
void Y2011T1T5(){
    int x=10;
    cout<<"Initially,x="<<x<<endl;
    f12011();
    f12011();
    cout<<"At the end,x="<<x<<endl;
}


/*改错*/
class Tany{//class与类名要分开
    int x,y;
public:
    Tany(int a,int b){x=a;y=b;}//Tany(T a,T b){x=a;y=b;}
    int Tsum(){return x+y;}//Tsum(){return x+y;}
};
void Y2011T2T1(){
    Tany p(1,2);
    cout<<p.Tsum()<<endl;//cout<<p.Tsum<<endl;
}

/*
 二义性错误
 */
class AT2T2{
public:
    void fun(){cout<<"a.fun"<<endl;}
};
class BT2T2{
public:
    void fun(){cout<<"b.fun"<<endl;}
    void gun(){cout<<"b.gun"<<endl;}
};
class CT2T2:public AT2T2, public BT2T2{
private:
    int b;
public:
    void gun(){cout<<"c.gun"<<endl;}
    void hun(){AT2T2::fun();}//void hun(){fun();}
};
void Y2011T2T2(){
    CT2T2 cc;
    cc.gun();
    cc.AT2T2::fun();//cc.fun();
}
/*
 结果：
 180
 */
class AT2T3{
public:
    AT2T3(int x=0,int y=0):a(x),b(y){}//AT2T3(int x=0,int y=0):a=x,b=y,{}
    void show(){
        cout<<a<<""<<b<<endl;
    }
private:
    int a,b;
};
void Y2011T2T3(){
    AT2T3 obj(18);
    obj.show();
}

class CComplex{
    double m_real;
    double m_image;
public:
    ~CComplex(){}
    void setValue(double r=0,double i=0){
        m_real=r;
        m_image=i;
    }
    double getreal(){
        return m_real;
    }
    double getimage(){
        return this->m_image;//return this.m_image;
    }
    void show(){
        cout<<m_real<<"+"<<m_image<<"*i"<<endl;
    }
};
void Y2011T2T4(){
    CComplex c1;
    c1.setValue(2.5,7.5);
    c1.show();
    cout<<c1.getreal()<<endl;//cout<<c1.m_real<<endl m_real为私有成员
}

/*
 目的：打印b
 
 */
void Y2011T2T5(){
    int *a;//a中为地址  a=NULL   a为地址
    int *&p=a;//p=*a的地址=a &p=&a=对a地址的引用
    int b=20;
    cout<<"a="<<a<<endl;
    cout<<"&p="<<&p<<endl;
    cout<<"p="<<p<<endl;
    cout<<"&b="<<&b<<endl;
    p=&b;//*p=b;// &b=b的地址  p=&b  *a=*p=20
    cout<<"p="<<p<<endl;//
    cout<<"&p="<<&p<<endl;//*a=
    cout<<*p<<endl;
    cout<<*a;
}


/*编程题*/
int aa[20];
int bb[20];
void remove(){
    int i=0;
    bb[0]=aa[0];
    for(int j=1;j<20;j++){
        if(aa[j]!=aa[j-1]){
            i++;
            bb[i]=aa[j];
        }
    }
}
/*
 int i = 0, j;
 
 for (j = 1; j < N; j ++)
 
 if (a[j] != a[j - 1])
 
 {
 
 i ++;
 
 a[i] = a[j];
 
 }
 */
void display2011(){
    for(int i=0;i<20;i++){
        cout<<bb[i]<<" ";
    }
    cout<<endl;
}

void sort2011(){
    int i,j;
    for(i=0;i<20;i++){
        for(j=i+1;j<20;j++){
            if(aa[j]<aa[i]){
                int temp=aa[i];
                aa[i]=aa[j];
                aa[j]=temp;
            }
        }
    }
}

void Y2011T3T1(){
    cout<<"请输入20个整数："<<endl;
    for(int i=0;i<20;i++){
        cin>>aa[i];
    }
    sort2011();
    remove();
    display2011();
}


class Rectangle2011{
private:
    int width;
    int length;
public:
    
    Rectangle2011(int w,int l):width(w),length(l){}
    void area(){
        int area=width*length;
        cout<<area;
    }
    friend bool operator>(Rectangle2011 &r1,Rectangle2011 &r2){
        int area1=r1.length*r1.width;
        int area2=r2.length*r2.width;
        if(area1>area2){
            return true;
        }else{
            return false;
        }
    }
};


void Y2011T3T2(){
    Rectangle2011 r1(5,6),r2(4,5);
    cout<<"r1面积=";
    r1.area();
    cout<<endl;
    cout<<"r2面积=";
    r2.area();
    cout<<endl;
    if(r1>r2) cout<<"r1>r2"<<endl;
    else cout<<"r1<r2"<<endl;
}


/*2013年试题*/
/*
 考察符号常量的特性(宏定义)，直接替换
 输出：30
 */
#define DOUBLE(x) x+x
int i=DOUBLE(5)*5;// i=5+5*5=30

void Y2013T1T1(){
    cout<<i<<endl;
}

/*
 分析：
 i=0: x++=1
 j=0 0%2=0 x++=2
 j=1 1%2=1
 j=2 2%2=0 x++=3 x++=4
 i=1 x++=5
 j=0 0%2=0 x++=6
 j=1 1%2=1
 j=2 2%2=0 x++=7 x++=8
 输出：x=8
 */
void Y2013T1T2(){
    int i,j,x=0;
    for(i=0;i<2;i++){
        x++;
        for(j=0;j<3;j++){
            if(j%2) continue;//在C++中 ，0位假，非0为真
            x++;
        }
        x++;
    }
    cout<<"x="<<x<<endl;
}

/*
 s[0]=s[0]+s[1]=3; j=0   ++j<2成立
 s[1]=s[1]+[2]=5;  j=1  ++j<2不成立 j=2  跳出
 原数组变成：35345
 当k=2时  此时静态变量j=2
 s[2]=s[2]+s[3]=7  跳出
 总输出：35745
 */
void f(int *s){
    static int j=0;//在下一次函数调用时该变量保存上一次的值
    do{
        s[j]+=s[j+1];
    }while(++j<2);
}
void Y2013T1T3(){
    int k,a[10]={1,2,3,4,5};
    for(k=1;k<3;k++){
        f(a);
    }
    for(k=0;k<5;k++){cout<<a[k];}
}

/*
 考察类的实例化顺序：首先调用基类构造函数，其次初始化类成员，最后调用自身构造函数
 输出：
 调用了A的构造函数
 调用了B的构造函数
 调用了B的构造函数
 调用了A的构造函数
 调用了C的构造函数
 */
class A2013{
    int a;
public:
    A2013(){cout<<"调用了A的构造函数"<<endl;}
};
class B2013{
    int b;
public:
    B2013(){cout<<"调用了B的构造函数"<<endl;}
};
class C2013:public A2013,B2013{
    B2013 b;
    A2013 a;
    int c;
public:
    C2013(){
        cout<<"调用了C的构造函数"<<endl;
    }
};
void Y2013T1T4(){
    C2013 c;
}
/*
 分析：
 A2013T1T5 a
 输出:
 缺省构造函数 析构函数压栈
 A2013T1T5 *p p=new A2013T1T5(2);
 输出：带参构造函数,num=2 析构函数压栈
 a=*p  复制构造函数
 delete p: 优先执行析构函数: p
 输出：
 析构函数,num=2
 退出
 析构函数,num=2(a的)
 输出：
 缺省构造函数
 带参构造函数,num=2
 析构函数,num=2
 退出
 析构函数,num=2
 */
class A2013T1T5{
    int num;
public:
    A2013T1T5(){num=0;cout<<"缺省构造函数"<<endl;}
    A2013T1T5(int n){num=n;cout<<"带参构造函数,num="<<num<<endl;}
    ~A2013T1T5(){cout<<"析构函数,num="<<num<<endl;}
};
void Y2013T1T5(){
    A2013T1T5 a,*p;
    p=new A2013T1T5(2);
    a=*p;
    delete p;
    cout<<"退出"<<endl;
}

/*改错题*/

void Y2013T2T1(){
    char c='c';//char c="c";
    cout<<c<<endl;
    int b=1024;//char b=1024,类型不一致  char b='\0'
    b+=1024;
    if(b==2048){
        cout<<"Test"<<endl;
    }
    return;
}
/*
 输出结果：
 Constructor.
 Default Constructor.
 Area is 12
 Area is 0
 Area is 12
 */
class CRectangle{
private:
    double length,width;
public:
    CRectangle(){
    cout<<"Default Constructor.\n";
    }
    CRectangle(double l,double w){
        length=l;
        width=w;
        cout<<"Constructor.\n";
    }
    void Set(double l,double w){
        this->length=l;
        this->width=w;
    }
    void GetArea(){
        cout<<"Area is "<<length*width<<endl;
    }
};
void Y2013T2T2(){
    CRectangle Rect1(3.0,4.0);//Constructor. length=3.0 width=4.0
    CRectangle Rect2;//错误CRectangle Rect2(1);
    CRectangle Rect3=Rect1;//CRectangle Rect3;
    Rect1.GetArea();
    Rect2.Set(0,0);//错误Rect2.Set(0);
    Rect2.GetArea();
    Rect3.GetArea();
}

/*编程题*/
void Y2013T3T1(){
    char a[7];
    cout<<"请输入七个字符："<<endl;
    for(int i=0;i<7;i++){
        cin>>a[i];
    }
    for(int i=1;i<6;i++){
        for(int j=i+1;j<6;j++){
            if(a[i]<a[j]){
                char temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    cout<<"排序后的数组："<<endl;
    for(int i=0;i<7;i++){
        cout<<a[i]<<" ";
    }
}

struct Student2013{
    string stuName;
    double grade=0;
    Student2013 *next;
};
int fun2013(Student2013 *h){
    Student2013 *hh=h;
    int max=h->grade;
    while(hh->next!=NULL){
        if(max<(hh->next->grade)){
            max=hh->next->grade;
        }
        hh=hh->next;
    }
    return max;
}
void Y2013T3T2(){
    int N=4;
    cout<<"请输入学生姓名与成绩："<<endl;
    Student2013 *h;
    Student2013 stu[4];
    for(int i=0;i<N;i++){
        Student2013 s;
        cin>>s.stuName>>s.grade;
        stu[i]=s;
    }
    for(int i=0;i<N;i++){
        if(i!=N-1){
            stu[i].next=&stu[i+1];
        }
        else stu[i].next=NULL;
    }
    h=&stu[0];
    int maxgrade=fun2013(h);
    cout<<"最高成绩为："<<maxgrade<<endl;
}

class Shape2013{
public:
    virtual void area() const=0;
};

class Circle2013:public Shape2013{
private:
    double radius;
public:
    Circle2013(double r):radius(r){}
    virtual void area() const{
        cout<<"圆的面积为："<<3.14*radius*radius<<endl;
    }
};
class Rectangle2013:public Shape2013{
private:
    double width;
    double length;
public:
    Rectangle2013(double w,double l):width(w),length(l){}
    virtual void area() const{
        cout<<"矩形的面积为："<<width*length<<endl;
    }
};
class Triangle2013:public Shape2013{
private:
    double bottom;
    double height;
public:
    Triangle2013(double b,double h):bottom(b),height(h){}
    virtual void area() const{
        cout<<"三角形的面积为："<<bottom*height*0.5<<endl;
    }
};
class Square2013:public Shape2013{
private:
    double rim;
public:
    Square2013(double r):rim(r){}
    virtual void area() const{
        cout<<"正方形的面积为："<<rim*rim<<endl;
    }
};
void Y2013T3T3(){
    Circle2013 c(1);
    Square2013 sq(2);
    Rectangle2013 r(3,4);
    Triangle2013 t(3,4);
    Shape2013 *s[4]={&c,&sq,&r,&t};
    for(int i=0;i<4;i++){
        s[i]->area();
    }
}


/*2014年试题*/
/*
 变量        输出
 x=10        10
 x=7         7
 x=4         4
 x=1         1
 x=-2        跳出
 */
void Y2014T1T1(){
    int x=10;
    while(x>0){
        cout<<x<<endl;
        x=x-3;
    }
}

/*
 变量       输出
 n=4        4
 n=3        3
 n=2        退出
 输出：  4 3
 */
void Y2014T1T2(){
    int n=5;
    while(--n>0){
        if(n==2) exit(0);//此句表示程序正常退出 exit(1)表示异常退出
        cout<<n<<" ";
    }
}

/*
 a[10]
 *(0)=a[0]=0    以此类推
 输出：0 1 2 3 4 5 6 7 8 9
 */
void Y2014T1T3(){
    int array_size=10;
    int *a;
    a=new int[array_size];
    int i;
    for(i=0;i<array_size;i++){
        *(a+i)=i;
    }
    for(i=0;i<array_size;i++){
        cout<<a[i]<<" ";
    }
}

/*
 s1(x=0,y=0) s2(x=2,y=3)
 输出：
 x=0,y=0
 x=2,y=3
 */
class Sample2014{
    int x,y;
public:
    Sample2014(){x=y=0;}
    Sample2014(int a,int b){x=a;y=b;}
    void disp(){cout<<"x="<<x<<",y="<<y<<endl;}
};
void Y2014T1T4(){
    Sample2014 s1,s2(2,3);
    s1.disp();
    s2.disp();
}

/*
 首先调用基类的构造函数： n=a=1 输出：基类构造函数n=1
 调用派生类构造函数： m=b=2  输出：子类构造函数m=2
 最后析构
 总输出：
 基类构造函数n=1
 子类构造函数
 m=2
 基类析构函数
 */
class Base2014{
    int n;
public:
    Base2014(){};
    Base2014(int a){
        cout<<"基类构造函数";
        n=a;
        cout<<"n="<<n<<endl;
    }
    ~Base2014(){cout<<"基类析构函数"<<endl;}
};
class subs:public Base2014{
    int m;
public:
    subs(int a,int b):Base2014(a){
        cout<<"子类构造函数"<<endl;
        m=b;
        cout<<"m="<<m<<endl;
    }
};
void Y2014T1T5(){
    subs s(1,2);
}

/*改错题*/
void Y2014T2T1(){
    char str[5][7]={"First","Second","Third","Forth","Fifth"};//错误 char str[5][]
    char *cp[]={str[4],str[3],str[2],str[1],str[0]};
    int i=0;//错误:int i
    while(i<5){//错误:i<=5
        printf("%s ",*(cp+i));//printf("%c",*(cp+i));
        i++;
    }
}

struct Object{
    int a;
    int b;
};
void Y2014T2T2(){
    Object &MyFunction(int a=20,int b=5);//Object &MyFunction(int a=20,int b);
    Object &rMyObj=MyFunction(20,5);//Object &rMyObj=MyFunction(,5);
    cout<<"rMyObj.a= "<<rMyObj.a<<endl;
    delete &rMyObj;
}

Object& MyFunction(int a=20,int b=5){
    Object *o=new Object;
    o->a=a;
    o->b=b;
    return *o;//return o;
}

#define SIZE 6
class Stack{
private:
    char stck[SIZE];
    int tos;
public:
    Stack():tos(0){}
    void PUSH(char a){
        if(tos==SIZE){
            cout<<"栈区数据已满"<<endl;
            return;
        }
        stck[tos]=a;
        tos++;
    }
     char POP(){
        if(tos==0){
            return 0;
        }else{
            return stck[tos--];
        }
    }
};
/*编程题*/
void Y2014T3T1(){
    Stack s;
    char a[SIZE]={'c','h','i','n','a','!'};
    for(int i=0;i<SIZE;i++){
        s.PUSH(a[i]);
    }
    for(int i=0;i<SIZE;i++){
        char as=s.POP();
        cout<<as<<" ";
    }
}

struct node{
    int num;
    struct node *next;
};
void Y2014T3T2(){
    node* Reversenode(node *);
    //接收数据
    int size=0;
    cout<<"请输入数字个数:"<<endl;
    cin>>size;
    node n[size];
    cout<<"请输入数字:"<<endl;
    for(int i=0;i<size;i++){
        cin>>n[i].num;
    }
    //创建链表
    node *head;
    head->num=n[0].num;
    head->next=&n[1];
    for(int j=1;j<size;j++){
        if(j==size-1){
            n[j].next=NULL;
        }else{
            n[j].next=&n[j+1];
        }
    }
   node *newhead=Reversenode(head);
    while(newhead!=NULL){
        cout<<newhead->num<<endl;
        newhead=newhead->next;
    }
}


int count=0;
node* Reversenode(node *head){
    node *P=NULL;
    node *t;
    node *q=head;
    while(q!=NULL){
        t=q;
        q=q->next;
        t->next=P;
        P=t;
    }
    return P;
}


void Y2014T3T3(){
    void fun(char *a,int b[]);
    
}

void fun(char *a,int b[]){
    int i=0;
    for(i=0;i<10;i++) b[i]=0;
    while(*a){
        int j=*a-0;
        if(j>=0&&j<=9){
            b[j]++;
        }
        a++;
    }
    cout<<endl;
}




/*2015试题*/

/*
 输出：   36  139 -5    1    73   8  8   67
 */
void Y2015T1T1(){
    int a[4]={36,-5,73,8};
    int i,y;
    for(i=0;i<4;i++){
        if(a[i]<0) y=1;
        else if(a[i]<10) y=a[i]*a[i]+3;
        else if(a[i]<60) y=4*a[i]-5;
        else y=int(sqrt(a[i]));
        cout<<setw(5)<<a[i]<<setw(5)<<y;
    }
}

/*
 输出：
 x,y=10, 26
 x,y=26, 10
 x,y=10, 26
 x,y=25, 11
 */
void f2(int &x,int &y){
    int z=x; x=y; y=z;
}
void f3(int *x,int *y){
    int z=*x;*x=*y;*y=z;
}
void Y2015T1T2(){
    int x=10,y=26;
    cout<<"x,y="<<x<<", "<<y<<endl;
    f2(x, y);
    cout<<"x,y="<<x<<", "<<y<<endl;
    f3(&x,&y);
    cout<<"x,y="<<x<<", "<<y<<endl;
    x++;y--;
    f2(y, x);
    cout<<"x,y="<<x<<", "<<y<<endl;
}

/*
 abcdefxyz 30
 abcdefxyz 50
 */
class CD{
    char *a;
    int b;
public:
    void Init(char *aa,int bb){
        a=new char[strlen(aa)+1];
        strcpy(a, aa);
        b=bb;
    }
    char* Geta(){return a;}
    int Getb(){return b;}
    void Output(){cout<<a<<' '<<b<<endl;}
};
void Y2015T1T3(){
    CD dx,dy;
    char a[20];
    dx.Init(new char[4]{'a','b'}, 30);
    strcpy(a, dx.Geta());
    strcat(a, "xyz");
    dx.Init(a, dx.Getb()+20);
    dx.Output();
    dy.Output();
}


class Base2015{
private:
    int x0,y0;
public:
    Base2015(int i,int j){x0=i;y0=j;}
    void Move(int x,int y){x0+=x;y0+=y;}
    void Show(){cout<<"Base("<<x0<<","<<y0<<")"<<endl;}
};

class Derived2015:private Base2015{
private:
    int x;int y;
public:
    Derived2015(int i,int j,int m,int n):Base2015(i,j){x=m;y=n;}
    void Show(){cout<<"Next("<<x<<","<<y<<")"<<endl;}
    void Move1(){Move(2,3);}
    void Show1(){Base2015::Show();}
};
void Y2015T1T5(){
    Base2015 b(1,2);
    b.Show();
    Derived2015 d(3,4,10,15);
    d.Move1();
    d.Show();
    d.Show1();
}

/*改错题*/
struct TextClass1{
    TextClass1(int i=0){m_i=i;}
    void print(){
        cout<<"TextClass1:"<<m_i<<endl;
    }
    int m_i;
};

class TextClass2{
public:
    ~TextClass2(){}
public:
    TextClass2(){}
    void print(){
        cout<<"TextClass2"<<endl;
    }
};
void Y2015T2T1(){
    TextClass1 obj1;
    TextClass2 obj2;
    obj1.print();
    obj2.print();
}

#define S 5
/*编程题*/
class Score{
private:
    int convert[S-2];
    int points[S];
public:
    Score(int p[S]){
        for(int i=0;i<S;i++){
            points[i]=p[i];
        }
    }
    void GetResult();
    void Remove();
};
void Score::Remove(){
    int i,j,max=points[0],min=points[0],k=0;
    for(i=0;i<S-2;i++) convert[i]=0;
    //找最高分
    for(i=1;i<S;i++){
        if(max<points[i]) max=points[i];
    }
    //找最低分
    for(j=1;j<S;j++){
        if(min>points[j]) min=points[j];
    }
    //生成新数组
    for(i=0;i<S;i++){
        if(points[i]!=max&&points[i]!=min){
            convert[k]=points[i];
            k++;
        }
    }
}
void Score::GetResult(){
    Remove();
    int average=0;
    int sum=0;
    for(int i=0;i<S-2;i++) sum+=convert[i];
    average=sum/(S-2);
    cout<<"平均分是："<<average<<endl;
}
void Y2015T3T1(){
    int a[S]={1,2,3,4,5};
    Score s(a);
    s.GetResult();
}


class Body{
public:
    double data;
    Body(double d){data=d;}
    virtual double area() const=0;
    virtual double volume() const=0;
};

class Rectangle2015:public Body{
public:
    Rectangle2015(double r):Body(r){}
    virtual double area() const{
        return data*data*6;
    }
    virtual double volume() const{
        return data*data*data;
    }
};
class Cylinder:public Body{
private:
    double height;
public:
    Cylinder(double r,double h):Body(r){height=h;}
    virtual double area() const{
        return (2*3.14*data*data+2*3.14*data*height);
    }
    virtual double volume() const{
        return 3.14*data*data*height;
    }
};
class Ball:public Body{
public:
    Ball(double r):Body(r){}
    virtual double area() const{
        return 4*3.14*data*data;
    }
    virtual double volume() const{
        return (3.14*4*data*data*data)/3;
    }
};
void Y2015T3T2(){
    Rectangle2015 r(1);
    Cylinder c(2,2);
    Ball b(1);
    cout<<"正方体面积："<<r.area()<<"体积："<<r.volume()<<endl;
    cout<<"圆柱体面积："<<c.area()<<"体积："<<c.volume()<<endl;
    cout<<"圆面积："<<b.area()<<"体积："<<b.volume()<<endl;
}

