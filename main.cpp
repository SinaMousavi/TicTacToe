#include <iostream>

using namespace std;

int main()
{
int a;
char field[3][3]={'1','2','3','4','5','6','7','8','9'};
bool player=0;
while(1){
for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        cout<<'|'<<field[i][j]<<'|';
}
cout<<endl;
}

cout<<"Enter field number :";
cin>>a;
if(player==0){
if(a==1 && field[0][0]=='1'){field[0][0]='X'; player=1;}
else if(a==2 && field[0][1]=='2'){field[0][1]='X'; player=1;}
else if(a==3 && field[0][2]=='3'){field[0][2]='X'; player=1;}
else if(a==4 && field[1][0]=='4'){field[1][0]='X'; player=1;}
else if(a==5 && field[1][1]=='5'){field[1][1]='X'; player=1;}
else if(a==6 && field[1][2]=='6'){field[1][2]='X'; player=1;}
else if(a==7 && field[2][0]=='7'){field[2][0]='X'; player=1;}
else if(a==8 && field[2][1]=='8'){field[2][1]='X'; player=1;}
else if(a==9 && field[2][2]=='9'){field[2][2]='X'; player=1;}
else{cout<<"field"<<" "<<a<<" "<<"is full"<<endl; player=0;}

}
else{
if(a==1 && field[0][0]=='1'){field[0][0]='O'; player=0;}
else if(a==2 && field[0][1]=='2'){field[0][1]='O'; player=0;}
else if(a==3 && field[0][2]=='3'){field[0][2]='O'; player=0;}
else if(a==4 && field[1][0]=='4'){field[1][0]='O'; player=0;}
else if(a==5 && field[1][1]=='5'){field[1][1]='O'; player=0;}
else if(a==6 && field[1][2]=='6'){field[1][2]='O'; player=0;}
else if(a==7 && field[2][0]=='7'){field[2][0]='O'; player=0;}
else if(a==8 && field[2][1]=='8'){field[2][1]='O'; player=0;}
else if(a==9 && field[2][2]=='9'){field[2][2]='O'; player=0;}
else{cout<<"field"<<" "<<a<<" "<<"is full"<<endl; player=1;}

}
if(field[0][0]=='O' && field[0][1]=='O' && field[0][2]=='O'){
    for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        cout<<'|'<<field[i][j]<<'|';

    }
    cout<<endl;
    }
    cout<<endl;
    cout<<"***Player O Won***"; break;}



if(field[1][0]=='O' && field[1][1]=='O' && field[1][2]=='O'){
    for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        cout<<'|'<<field[i][j]<<'|';

    }
     cout<<endl;
    }
    cout<<endl;
    cout<<"***Player O Won***"; break;}



if(field[2][0]=='O' && field[2][1]=='O' && field[2][2]=='O'){
    for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        cout<<'|'<<field[i][j]<<'|';

    }
    cout<<endl;
    }
    cout<<endl;
    cout<<"***Player O Won***"; break;}



if(field[0][0]=='O' && field[1][0]=='O' && field[2][0]=='O'){
    for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        cout<<'|'<<field[i][j]<<'|';

    }
    cout<<endl;
    }
    cout<<endl;
    cout<<"***Player O Won***"; break;}



if(field[0][1]=='O' && field[1][1]=='O' && field[2][1]=='O'){
    for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        cout<<'|'<<field[i][j]<<'|';

    }
    cout<<endl;
    }
    cout<<endl;
    cout<<"***Player O Won***"; break;}



if(field[0][2]=='O' && field[1][2]=='O' && field[2][2]=='O'){
    for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        cout<<'|'<<field[i][j]<<'|';

    }
    cout<<endl;
    }
    cout<<endl;
    cout<<"***Player O Won***"; break;}



if(field[0][0]=='O' && field[1][1]=='O' && field[2][2]=='O'){
    for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        cout<<'|'<<field[i][j]<<'|';

    }
     cout<<endl;
    }
    cout<<endl;
    cout<<"***Player O Won***"; break;}



if(field[0][2]=='O' && field[1][1]=='O' && field[2][0]=='O'){
    for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        cout<<'|'<<field[i][j]<<'|';

    }
     cout<<endl;
    }
    cout<<endl;
    cout<<"***Player O Won***"; break;}



if(field[0][0]=='X' && field[0][1]=='X' && field[0][2]=='X'){
    for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        cout<<'|'<<field[i][j]<<'|';

    }
    cout<<endl;
    }
    cout<<endl;
    cout<<"***Player X Won***"; break;}



if(field[1][0]=='X' && field[1][1]=='X' && field[1][2]=='X'){
    for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        cout<<'|'<<field[i][j]<<'|';

    }
     cout<<endl;
    }
    cout<<endl;
    cout<<"***Player X Won***"; break;}



if(field[2][0]=='X' && field[2][1]=='X' && field[2][2]=='X'){
    for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        cout<<'|'<<field[i][j]<<'|';

    }
    cout<<endl;
    }
    cout<<endl;
    cout<<"***Player X Won***"; break;}



if(field[0][0]=='X' && field[1][0]=='X' && field[2][0]=='X'){
    for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        cout<<'|'<<field[i][j]<<'|';

    }
    cout<<endl;
    }
    cout<<endl;
    cout<<"***Player X Won***"; break;}



if(field[0][1]=='X' && field[1][1]=='X' && field[2][1]=='X'){
    for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        cout<<'|'<<field[i][j]<<'|';

    }
    cout<<endl;
    }
    cout<<endl;
    cout<<"***Player X Won***"; break;}



if(field[0][2]=='X' && field[1][2]=='X' && field[2][2]=='X'){
    for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        cout<<'|'<<field[i][j]<<'|';

    }
    cout<<endl;
    }
    cout<<endl;
    cout<<"***Player X Won***"; break;}



if(field[0][0]=='X' && field[1][1]=='X' && field[2][2]=='X'){
    for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        cout<<'|'<<field[i][j]<<'|';

    }
    cout<<endl;
    }
    cout<<endl;
    cout<<"***Player X Won***"; break;}



if(field[0][2]=='X' && field[1][1]=='X' && field[2][0]=='X'){
    for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        cout<<'|'<<field[i][j]<<'|';

    }
    cout<<endl;
    }
    cout<<endl;
    cout<<"***Player X Won***"; break;}



int draw=0;
for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
            if(field[i][j]=='O' || field[i][j]=='X'){
                draw++;
            }
    }
}
if(draw==9){cout<<"### No one Won the game ###"; break;}
draw=0;

     cout<<endl;
    }
    }






