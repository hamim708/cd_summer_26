#include<iostream>
#include<string>
using namespace std;

void task1(){
    string value;
    bool isNumeric=true;
    cout<<"Enter the value: ";
    cin>>value;

    for(int i=0;i<value.length();i++){
        if(value[i]<'0'||value[i]>'9'){
            isNumeric=false;
            break;
        }
    }

    if(isNumeric)
        cout<<"Numeric Constant"<<endl;
    else
        cout<<"Not Numeric"<<endl;
}

void task2(){
    string a;
    cout<<"Enter the expression: ";
    cin>>a;

    for(int i=0;i<a.length();i++){
        if(a[i]=='+'||a[i]=='-'||a[i]=='/'||a[i]=='*'||a[i]=='%'||a[i]=='='){
            cout<<"Operator: "<<a[i]<<endl;
        }
    }
}

void task3(){
    string line;
    cin.ignore();
    cout<<"Enter a line: ";
    getline(cin,line);

    if(line.length()>=2&&line[0]=='/'&&line[1]=='/'){
        cout<<"This is a Single Line Comment"<<endl;
    }
    else if(line.length()>=4&&line[0]=='/'&&line[1]=='*'&&line[line.length()-2]=='*'&&line[line.length()-1]=='/'){
        cout<<"This is a Multi Line Comment"<<endl;
    }
    else{
        cout<<"This is NOT a Comment"<<endl;
    }
}

void task4(){
    string s;
    bool isIdentifier=true;

    cout<<"Enter a string: ";
    cin>>s;

    if(s.empty()){
        isIdentifier=false;
    }
    else if(!((s[0]>='a'&&s[0]<='z')||(s[0]>='A'&&s[0]<='Z')||s[0]=='_')){
        isIdentifier=false;
    }
    else{
        for(char c:s){
            if(!((c>='a'&&c<='z')||(c>='A'&&c<='Z')||(c>='0'&&c<='9')||c=='_')){
                isIdentifier=false;
                break;
            }
        }
    }

    if(isIdentifier)
        cout<<s<<" is a Valid Identifier"<<endl;
    else
        cout<<s<<" is NOT a Valid Identifier"<<endl;
}

void task5(){
    int arr[5]={10,20,30,40,50};
    int sum=0;

    for(int i=0;i<5;i++){
        sum+=arr[i];
    }

    cout<<"Average = "<<sum/5.0<<endl;
}

void task6(){
    int n,min,max,num;

    cout<<"Enter the numbers? ";
    cin>>n;

    cin>>num;
    min=max=num;

    for(int i=1;i<n;i++){
        cin>>num;

        if(num<min)
            min=num;

        if(num>max)
            max=num;
    }

    cout<<"Minimum = "<<min<<endl;
    cout<<"Maximum = "<<max<<endl;
}

void task7(){
    string firstName,lastName,fullName;

    cout<<"Enter your first name: ";
    cin>>firstName;

    cout<<"Enter your last name: ";
    cin>>lastName;

    fullName=firstName+" "+lastName;

    cout<<"Full Name= \""<<fullName<<"\""<<endl;
}

int main(){
    int choice;

    cout<<"1.Numeric Constant Check"<<endl;
    cout<<"2.Operator Detection"<<endl;
    cout<<"3.Comment Check"<<endl;
    cout<<"4.Identifier Check"<<endl;
    cout<<"5.Array Average"<<endl;
    cout<<"6.Minimum and Maximum"<<endl;
    cout<<"7.Full Name Concatenation"<<endl;
    cout<<"Enter choice: ";
    cin>>choice;

    switch(choice){
        case 1: task1(); break;
        case 2: task2(); break;
        case 3: task3(); break;
        case 4: task4(); break;
        case 5: task5(); break;
        case 6: task6(); break;
        case 7: task7(); break;
        default: cout<<"Invalid Choice";
    }

    return 0;
}
