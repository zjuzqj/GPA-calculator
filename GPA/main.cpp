//
//  main.cpp
//  GPA
//
//  Created by mszqj on 15/3/24.
//  Copyright (c) 2015年 mszqj. All rights reserved.
//

#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

using namespace std;

void str2int(int &int_temp,string &string_temp)
{
    const char* p = string_temp.data();
    //cout <<"比较结果:" << strcmp(p,"优秀")<< endl;
    stringstream stream(string_temp);
    stream >> int_temp;
    if(strcmp(p,"优秀") == 0){
        int_temp = 90;
    }else if(strcmp(p,"良好") == 0){
        int_temp = 80;
    }else if(strcmp(p, "中") == 0){
        int_temp = 70;
    }else if(strcmp(p,"及格") == 0 ){
        int_temp = 60;
    }
}

void str2double(double &int_temp,string &string_temp)
{
    stringstream stream(string_temp);
    stream>>int_temp;
}

int main(int argc, const char * argv[]) {
    double count;
    double sum;
    double credit_int;
    double GPA_int;
    int choice;
    int grade_int;
    int flag = 0;
    string path = "/Users/zjuzqj/Documents/Codes/GPA/GPA/GPA.txt"; //change here
    string line,code,name,credit,grade,GPA;
    ifstream in;
    while(1){
        count = 0;
        sum = 0;
        cout << "*******************zqj成绩器*************************"<<endl;
        cout << "1. 北大4.0算法" << endl;
        cout << "2. 北美算法"<<endl;
        cout << "3. 4.0标准算法" <<endl;
        cout << "4. 4.0改进算法" <<endl;
        cout << "5. 4.3标准算法" <<endl;
        cout << "6. 成绩算法" << endl;
        cout << "7. 浙大算法" <<endl;
        cout << "8. 退出" <<endl;
        cin >> choice;
        switch(choice){
            case 1:
                in.open(path);
                if(!in){
                    cout<<"未成功打开"<<endl;
                    return 1;
                }
                while(!in.eof()){
                    getline(in,line);
                    istringstream is(line);
                    is>>code>>name>>grade>>credit>>GPA;
                    str2double(credit_int,credit);
                    str2int(grade_int,grade);
                    cout << "学分是" << credit << "。转换后：" << credit_int <<endl;
                    cout << "成绩是" << grade << "。转换后：" << grade_int <<endl;
                    count+=credit_int;
                    if(grade_int>=90){
                        sum += (4*credit_int);
                    }else if(grade_int >= 85 && grade_int < 90){
                        sum += (3.7*credit_int);
                    }else if(grade_int >=82 && grade_int < 85){
                        sum += (3.3*credit_int);
                    }else if(grade_int >=78 && grade_int < 82){
                        sum += (3*credit_int);
                    }else if(grade_int >=75 && grade_int < 78){
                        sum += (2.7*credit_int);
                    }else if(grade_int >=72 && grade_int < 75){
                        sum += (2.3*credit_int);
                    }else if(grade_int >=68 && grade_int < 72){
                        sum += (2*credit_int);
                    }else if(grade_int >=64 && grade_int < 68){
                        sum += (1.5*credit_int);
                    }else if(grade_int >=60 && grade_int < 64){
                        sum += (1.0*credit_int);
                    }else{
                        
                    }
                }
                in.close();
                cout << "北大算法：" << (double)sum /count<<endl;
                cout << "*******************zqj成绩器*************************"<<endl;
                break;
            case 2:
                in.open(path);
                if(!in){
                    cout<<"未成功打开"<<endl;
                    return 1;
                }
                while(!in.eof()){
                    getline(in,line);
                    istringstream is(line);
                    is>>code>>name>>grade>>credit>>GPA;
                    str2double(credit_int,credit);
                    str2int(grade_int,grade);
                    count+=credit_int;
                    if(grade_int>=85){
                        sum += (4*credit_int);
                    }else if(grade_int >= 75 && grade_int < 85){
                        sum += (3*credit_int);
                    }else if(grade_int >=60 && grade_int < 75){
                        sum += (2*credit_int);
                    }else{
                        sum += credit_int;
                    }
                }
                in.close();
                cout << "北美算法：" << (double)sum/count<<endl;
                cout << "*******************zqj成绩器*************************"<<endl;
                break;
            case 3:
                in.open(path);
                if(!in){
                    cout<<"未成功打开"<<endl;
                    return 1;
                }
                while(!in.eof()){
                    getline(in,line);
                    istringstream is(line);
                    is>>code>>name>>grade>>credit>>GPA;
                    str2double(credit_int,credit);
                    str2int(grade_int,grade);
                    cout << "学分是" << credit << "。转换后：" << credit_int <<endl;
                    cout << "成绩是" << grade << "。转换后：" << grade_int <<endl;
                    count+=credit_int;
                    if(grade_int>=90){
                        sum += (4*credit_int);
                    }else if(grade_int >= 80 && grade_int < 90){
                        sum += (3*credit_int);
                    }else if(grade_int >=70 && grade_int < 80){
                        sum += (2*credit_int);
                    }else if(grade_int >= 60 && grade_int < 70){
                        sum += credit_int;
                    }
                }
                in.close();
                cout << "4.0标准算法：" << (double)sum/count<<endl;
                cout << "*******************zqj成绩器*************************"<<endl;
                break;
            case 4:
                in.open(path);
                if(!in){
                    cout<<"未成功打开"<<endl;
                    return 1;
                }
                while(!in.eof()){
                    getline(in,line);
                    istringstream is(line);
                    is>>code>>name>>grade>>credit>>GPA;
                    str2double(credit_int,credit);
                    str2int(grade_int,grade);
                    count+=credit_int;
                    if(grade_int>=85){
                        sum += (4*credit_int);
                    }else if(grade_int >= 70 && grade_int < 85){
                        sum += (3*credit_int);
                    }else if(grade_int >=60 && grade_int < 70){
                        sum += (2*credit_int);
                    }
                }
                in.close();
                cout << "4.0改进算法：" << (double)sum/count<<endl;
                cout << "*******************zqj成绩器*************************"<<endl;
                break;
            case 5:
                in.open(path);
                if(!in){
                    cout<<"未成功打开"<<endl;
                    return 1;
                }
                while(!in.eof()){
                    getline(in,line);
                    istringstream is(line);
                    is>>code>>name>>grade>>credit>>GPA;
                    str2double(credit_int,credit);
                    str2int(grade_int,grade);
                    count+=credit_int;
                    if(grade_int>=90){
                        sum += (4.3*credit_int);
                    }else if(grade_int >= 85 && grade_int < 90){
                        sum += (4*credit_int);
                    }else if(grade_int >=80 && grade_int < 85){
                        sum += (3.7*credit_int);
                    }else if(grade_int >=75 && grade_int < 80){
                        sum += (3.3*credit_int);
                    }else if(grade_int >=70 && grade_int < 75){
                        sum += (3.0*credit_int);
                    }else if(grade_int >=65 && grade_int < 70){
                        sum += (2.7*credit_int);
                    }else if(grade_int >=60 && grade_int < 65){
                        sum += (2.3*credit_int);
                    }
                }
                in.close();
                cout << "4.3标准算法：" << (double)sum/count<<endl;
                cout << "*******************zqj成绩器*************************"<<endl;
                break;
            case 6:
                in.open(path);
                if(!in){
                    cout<<"未成功打开"<<endl;
                    return 1;
                }
                while(!in.eof()){
                    getline(in,line);
                    istringstream is(line);
                    is>>code>>name>>grade>>credit>>GPA;
                    str2double(credit_int,credit);
                    str2int(grade_int,grade);
                    count+=credit_int;
                    sum += credit_int*grade_int;
                }
                in.close();
                sum = sum * 4;
                cout << "4.3标准算法：" << (double)sum/(count*100)<<endl;
                cout << "*******************zqj成绩器*************************"<<endl;
                break;
            case 7:
                in.open(path);
                if(!in){
                    cout<<"未成功打开"<<endl;
                    return 1;
                }
                while(!in.eof()){
                    getline(in,line);
                    istringstream is(line);
                    is>>code>>name>>grade>>credit>>GPA;
                    str2double(credit_int,credit);
                    str2double(GPA_int, GPA);
                    str2int(grade_int,grade);
                    count+=credit_int;
                    if(grade_int >= 95){
                        sum += credit_int * 5.0;
                    }else{
                        sum += credit_int * (5.0 - (95 - grade_int)/ 10.0);
                    }
                }
                in.close();
                cout << "浙大算法：" << (double)sum/count<<endl;
                cout << "*******************zqj成绩器*************************"<<endl;
                break;
            case 8:
                flag = 1;
                break;
        }
        if (flag == 1){
            break;
        }
    }
    return 0;
}
