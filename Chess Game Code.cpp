#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <cstring>
using namespace std;
string player1name;
string player2name;
class Piece{
        private:
        int locx;
        int locy;
        int u1,u2;
        char arr1[8][8];
        int arr2[8][8];
        bool king;
        
        public:
        bool alive;

void init(int locx1, int locy1){
        locx=locx1;
        locy=locy1;
        alive=1;
        king=0;
        
}

        void remove(){
                locx=1000003;
                locy=10000004;
        }
        
        

void option(){
        cout<<endl<<"You can enter U to quit the game";
        }
        void forfeit(char a){
        if(a=='u' || a=='U'){cout<<"You have lost because you gave up! The other team won!!!";
        exit(0);
        }
        }
        
        
void player1move(Piece red[], Piece white[], Piece temp, int o){
        if(king==1){
        
        
        cout<<"Enter A to move counter 1 block diagonally (up and left) \t";
        cout<<"Enter D to move counter 1 block diagonally (up and right) \t"<<endl;
        cout<<"Enter W to move counter 1 block diagonally (down and left) \t";
        cout<<"Enter X to move counter 1 block diagonally (down and right) \t";
        option();
        char ch;
        cin>>ch;
        forfeit(ch);
        int p=2;
        while(p==2){
        if(ch=='A' or ch=='a'){
                --locx;
                --locy;
                ++p;
        }
        
        if(ch=='X' or ch=='x'){
                --locy;
                ++locx;
                ++p;
        }
        
        if(ch=='W' or ch=='w'){
                ++locy;
                --locx;
                ++p;
        }
        
        if(ch=='X' or ch=='x'){
                ++locy;
                ++locx;
                ++p;
        }
        
        
        for(int i=0;i<13;i++){
                
if(((locx==red[i].locx && locy==red[i].locy) || (locx<0 || locy<0 ||locx>7 || locy>7))&& (i!=(o-1))){
                                
                        
                                if(ch=='A' or ch=='a'){
                                        ++locx;
                                        ++locy;
                                        
                                        system("CLS");
                                        cout<<"Please enter a valid letter because counter can't be moved"<<endl;
                                        cout<<"Enter A to move counter 1 block diagonally (up and left) \t";
                                        cout<<"Enter D to move counter 1 block diagonally (up and right) \t"<<endl;
                                        cout<<"Enter W to move counter 1 block diagonally (down and left) \t";
                                        cout<<"Enter X to move counter 1 block diagonally (down and right) \t"<<endl;
                        option();
        forfeit(ch);
                                        temp.displayboard(red,white);                        
                                        cin>>ch;
                                        p=2;
                                }
        
                                if(ch=='X' or ch=='x'){
                                        ++locy;
                                        --locx;
                                        system("CLS");
                                        cout<<"Please enter a valid letter because counter can't be moved"<<endl;
                                        cout<<"Enter A to move counter 1 block diagonally (up and left) \t";
                                        cout<<"Enter D to move counter 1 block diagonally (up and right) \t"<<endl;
                                        cout<<"Enter W to move counter 1 block diagonally (down and left) \t";
                                        cout<<"Enter X to move counter 1 block diagonally (down and right) \t"<<endl;
                        option();
        forfeit(ch);
                                        temp.displayboard(red,white);        
                                        cin>>ch;
                                        p=2;
                                }
        
                                if(ch=='W' or ch=='w'){
                                        --locy;
                                        ++locx;
                                        system("CLS");
                                        cout<<"Please enter a valid letter because counter can't be moved"<<endl;
                                        cout<<"Enter A to move counter 1 block diagonally (up and left) \t";
                                        cout<<"Enter D to move counter 1 block diagonally (up and right) \t"<<endl;
                                        cout<<"Enter W to move counter 1 block diagonally (down and left) \t";
                                        cout<<"Enter X to move counter 1 block diagonally (down and right) \t"<<endl;
                        option();
        forfeit(ch);
                                        temp.displayboard(red,white);        
                                        cin>>ch;
                                        p=2;
                                }
        
                                if(ch=='X' or ch=='x'){
                                        --locy;
                                        --locx;
                                        system("CLS");
                                        cout<<"Please enter a valid letter because counter can't be moved"<<endl;
                                                cout<<"Enter A to move counter 1 block diagonally (up and left) \t";
                                                cout<<"Enter D to move counter 1 block diagonally (up and right) \t"<<endl;
                                                cout<<"Enter W to move counter 1 block diagonally (down and left) \t";
                                                cout<<"Enter X to move counter 1 block diagonally (down and right) \t"<<endl;
                        option();
        forfeit(ch);
                                        temp.displayboard(red,white);                        
                                        cin>>ch;
                                        p=2;
                                }
                                
                        }
                                                        if((locx==white[i].locx && locy==white[i].locy)){
                        
                                                                                if(ch=='A' or ch=='a'){
                                                                                        --locx;
                                                                                        --locy;
                                                                                        ++p;
                                                                                                                
                                                                                }
                                                        
                                                                                if(ch=='X' or ch=='x'){
                                                                                        --locy;
                                                                                        ++locx;
                                                                                        ++p;
                                                                                }
                                                        
                                                                                if(ch=='W' or ch=='w'){
                                                                                        ++locy;
                                                                                        --locx;
                                                                                        ++p;
                                                                                }
                                                        
                                                                                if(ch=='X' or ch=='x'){
                                                                                        ++locy;
                                                                                        ++locx;
                                                                                        ++p;
                                                                                }
                                                                                
                                                                                                                white[i].alive=0;
                                                                                                                white[i].u1=white[i].locx;
                                                                                                                white[i].u2=white[i].locy;
                                                                                                                white[i].remove();
                                                                                                                system("CLS");
                                                                                                                temp.displayboard(red,white);
                                                                                }
                                                                        
                                                                                
                                                                                        if((locx==white[i].locx && locy==white[i].locy)){
                                                                                                        
                                                                                                        
                                                                                                        white[i].locx=white[i].u1;
                                                                                                        white[i].locy=white[i].u2;
                                                                                                        if(ch=='A' or ch=='a'){
                                                                                                                locx+=2;
                                                                                                                locy+=2;
                                                                                                                
                                                                                                                system("CLS");
                                                                                                                cout<<"Please enter a valid letter because counter can't be moved"<<endl;
                                                                                                                cout<<"Enter A to move counter 1 block diagonally (up and left) \t";
                                                                                                                cout<<"Enter D to move counter 1 block diagonally (up and right) \t"<<endl;
                                                                                                                cout<<"Enter W to move counter 1 block diagonally (down and left) \t";
                                                                                                                cout<<"Enter X to move counter 1 block diagonally (down and right) \t"<<endl;
                        option();
        forfeit(ch);
                                                                                                                temp.displayboard(red,white);                        
                                                                                                                cin>>ch;
                                                                                                                p=2;
                                                                                                        }
                                                                                
                                                                                                        if(ch=='X' or ch=='x'){
                                                                                                                locy+=2;
                                                                                                                locx-=2;
                                                                                                                system("CLS");
                                                                                                                cout<<"Please enter a valid letter because counter can't be moved"<<endl;
                                                                                                                cout<<"Enter A to move counter 1 block diagonally (up and left) \t";
                                                                                                                cout<<"Enter D to move counter 1 block diagonally (up and right) \t"<<endl;
                                                                                                                cout<<"Enter W to move counter 1 block diagonally (down and left) \t";
                                                                                                                cout<<"Enter X to move counter 1 block diagonally (down and right) \t"<<endl;
                        option();
        forfeit(ch);
                                                                                                                temp.displayboard(red,white);        
                                                                                                                cin>>ch;
                                                                                                                p=2;
                                                                                                        }
                                                                                
                                                                                                        if(ch=='W' or ch=='w'){
                                                                                                                locy-=2;
                                                                                                                locx+=2;
                                                                                                                system("CLS");
                                                                                                                cout<<"Please enter a valid letter because counter can't be moved"<<endl;
                                                                                                                cout<<"Enter A to move counter 1 block diagonally (up and left) \t";
                                                                                                                cout<<"Enter D to move counter 1 block diagonally (up and right) \t"<<endl;
                                                                                                                cout<<"Enter W to move counter 1 block diagonally (down and left) \t";
                                                                                                                cout<<"Enter X to move counter 1 block diagonally (down and right) \t"<<endl;
                        option();
        forfeit(ch);
                                                                                                                temp.displayboard(red,white);        
                                                                                                                cin>>ch;
                                                                                                                p=2;
                                                                                                        
                                                                                                        }
                                                                                
                                                                                                        if(ch=='X' or ch=='x'){
                                                                                                                locy-=2;
                                                                                                                locx-=2;
                                                                                                                system("CLS");
                                                                                                                cout<<"Please enter a valid letter because counter can't be moved"<<endl;
                                                                                                                        cout<<"Enter A to move counter 1 block diagonally (up and left) \t";
                                                                                                                        cout<<"Enter D to move counter 1 block diagonally (up and right) \t"<<endl;
                                                                                                                        cout<<"Enter W to move counter 1 block diagonally (down and left) \t";
                                                                                                                        cout<<"Enter X to move counter 1 block diagonally (down and right) \t"<<endl;
                        option();
        forfeit(ch);
                                                                                                                temp.displayboard(red,white);                        
                                                                                                                cin>>ch;
                                                                                                                p=2;
                                                                                                        }
                                                                                                        
                                                                                        }
                                }
        }
}
else{
        
        cout<<"Enter W to move counter 1 block diagonally (down and left) \t";
        cout<<"Enter X to move counter 1 block diagonally (down and right) \t";
        option();
        char ch;
        cin>>ch;
        forfeit(ch);
        int p=2;
        while(p==2){
        
        if(ch=='W' or ch=='w'){
                ++locy;
                --locx;
                ++p;
        }
        
        if(ch=='X' or ch=='x'){
                ++locy;
                ++locx;
                ++p;
        }
        
        
        for(int i=0;i<13;i++){
if(((locx==red[i].locx && locy==red[i].locy) || (locx<0 || locy<0 ||locx>7 || locy>7))&& (i!=(o-1))){
                                
                        
        
                                if(ch=='W' or ch=='w'){
                                        --locy;
                                        ++locx;
                                        system("CLS");
                                        cout<<"Please enter a valid letter because counter can't be moved"<<endl;
                                        cout<<"Enter W to move counter 1 block diagonally (down and left) \t";
                                        cout<<"Enter X to move counter 1 block diagonally (down and right) \t"<<endl;
                        option();
        forfeit(ch);
                                        temp.displayboard(red,white);        
                                        cin>>ch;
                                        p=2;
                                }
        
                                if(ch=='X' or ch=='x'){
                                        --locy;
                                        --locx;
                                        system("CLS");
                                        cout<<"Please enter a valid letter because counter can't be moved"<<endl;
                                                cout<<"Enter W to move counter 1 block diagonally (down and left) \t";
                                                cout<<"Enter X to move counter 1 block diagonally (down and right) \t"<<endl;
                        
                        option();
        forfeit(ch);
                        temp.displayboard(red,white);                        
                                        cin>>ch;
                                        p=2;
                                }
                                
                        }
                                                        if((locx==white[i].locx && locy==white[i].locy)){
                        
                                                        
                                                                                if(ch=='W' or ch=='w'){
                                                                                        ++locy;
                                                                                        --locx;
                                                                                        ++p;
                                                                                }
                                                        
                                                                                if(ch=='X' or ch=='x'){
                                                                                        ++locy;
                                                                                        ++locx;
                                                                                        ++p;
                                                                                }
                                                                                
                                                                                                                white[i].alive=0;
                                                                                                                white[i].u1=white[i].locx;
                                                                                                                white[i].u2=white[i].locy;
                                                                                                                white[i].remove();
                                                                                                                system("CLS");
                                                                                                                temp.displayboard(red,white);
                                                                                }
                                                                        
                                                                                
                                                                                        if((locx==white[i].locx && locy==white[i].locy)){
                                                                                                        
                                                                                                        
                                                                                                        white[i].locx=white[i].u1;
                                                                                                        white[i].locy=white[i].u2;
                                                                                
                                                                                                        if(ch=='W' or ch=='w'){
                                                                                                                locy-=2;
                                                                                                                locx+=2;
                                                                                                                system("CLS");
                                                                                                                cout<<"Please enter a valid letter because counter can't be moved"<<endl;
                                                                                                                cout<<"Enter W to move counter 1 block diagonally (down and left) \t";
                                                                                                                cout<<"Enter X to move counter 1 block diagonally (down and right) \t"<<endl;
        option();
        forfeit(ch);
        
                                                                                                                temp.displayboard(red,white);        
                                                                                                                cin>>ch;
                                                                                                                p=2;
                                                                                                        
                                                                                                        }
                                                                                
                                                                                                        if(ch=='X' or ch=='x'){
                                                                                                                locy-=2;
                                                                                                                locx-=2;
                                                                                                                system("CLS");
                                                                                                                cout<<"Please enter a valid letter because counter can't be moved"<<endl;
                                                                                                                        cout<<"Enter W to move counter 1 block diagonally (down and left) \t";
                                                                                                                        cout<<"Enter X to move counter 1 block diagonally (down and right) \t"<<endl;
                        option();
        forfeit(ch);
                                                                                                                temp.displayboard(red,white);                        
                                                                                                                cin>>ch;
                                                                                                                p=2;
                                                                                                        }
                                                                                                        
                                                                                        }
                                }
        }        
                if(locy==7){
                king=1;
        }
}

}
        
   
        
        
void player2move(Piece red[], Piece white[], Piece temp, int o){
        if(king==1){
        
        
        cout<<"Enter A to move counter 1 block diagonally (up and left) \t";
        cout<<"Enter D to move counter 1 block diagonally (up and right) \t"<<endl;
        cout<<"Enter W to move counter 1 block diagonally (down and left) \t";
        cout<<"Enter X to move counter 1 block diagonally (down and right) \t";
        option();
        char ch;
        cin>>ch;
        forfeit(ch);
        int p=2;
        while(p==2){
        if(ch=='A' or ch=='a'){
                --locx;
                --locy;
                ++p;
        }
        
        if(ch=='X' or ch=='x'){
                --locy;
                ++locx;
                ++p;
        }
        
        if(ch=='W' or ch=='w'){
                ++locy;
                --locx;
                ++p;
        }
        
        if(ch=='X' or ch=='x'){
                ++locy;
                ++locx;
                ++p;
        }
        
        
        for(int i=0;i<12;i++){
if(((locx==white[i].locx && locy==white[i].locy) || (locx<0 || locx>7 || locy<0 || locy>7)) && i!=(o-1)){                
                        
                                if(ch=='A' or ch=='a'){
                                        ++locx;
                                        ++locy;
                                        
                                        system("CLS");
                                        cout<<"Please enter a valid letter because counter can't be moved"<<endl;
                                        cout<<"Enter A to move counter 1 block diagonally (up and left) \t";
                                        cout<<"Enter D to move counter 1 block diagonally (up and right) \t"<<endl;
                                        cout<<"Enter W to move counter 1 block diagonally (down and left) \t";
                                        cout<<"Enter X to move counter 1 block diagonally (down and right) \t"<<endl;
                        option();
        forfeit(ch);
                                        temp.displayboard(red,white);                        
                                        cin>>ch;
                                        p=2;
                                }
        
                                if(ch=='X' or ch=='x'){
                                        ++locy;
                                        --locx;
                                        system("CLS");
                                        cout<<"Please enter a valid letter because counter can't be moved"<<endl;
                                        cout<<"Enter A to move counter 1 block diagonally (up and left) \t";
                                        cout<<"Enter D to move counter 1 block diagonally (up and right) \t"<<endl;
                                        cout<<"Enter W to move counter 1 block diagonally (down and left) \t";
                                        cout<<"Enter X to move counter 1 block diagonally (down and right) \t"<<endl;
                        
                        option();
        forfeit(ch);
                                        temp.displayboard(red,white);        
                                        cin>>ch;
                                        p=2;
                                }
        
                                if(ch=='W' or ch=='w'){
                                        --locy;
                                        ++locx;
                                        system("CLS");
                                        cout<<"Please enter a valid letter because counter can't be moved"<<endl;
                                        cout<<"Enter A to move counter 1 block diagonally (up and left) \t";
                                        cout<<"Enter D to move counter 1 block diagonally (up and right) \t"<<endl;
                                        cout<<"Enter W to move counter 1 block diagonally (down and left) \t";
                                        cout<<"Enter X to move counter 1 block diagonally (down and right) \t"<<endl;
                        
                        option();
        forfeit(ch);
                                        temp.displayboard(red,white);        
                                        cin>>ch;
                                        p=2;
                                }
        
                                if(ch=='X' or ch=='x'){
                                        --locy;
                                        --locx;
                                        system("CLS");
                                        cout<<"Please enter a valid letter because counter can't be moved"<<endl;
                                                cout<<"Enter A to move counter 1 block diagonally (up and left) \t";
                                                cout<<"Enter D to move counter 1 block diagonally (up and right) \t"<<endl;
                                                cout<<"Enter W to move counter 1 block diagonally (down and left) \t";
                                                cout<<"Enter X to move counter 1 block diagonally (down and right) \t"<<endl;
                        option();
        forfeit(ch);
                        
                                        temp.displayboard(red,white);                        
                                        cin>>ch;
                                        p=2;
                                }
                                
                        }
                                                        if((locx==red[i].locx && locy==red[i].locy)){
                        
                                                                                if(ch=='A' or ch=='a'){
                                                                                        --locx;
                                                                                        --locy;
                                                                                        ++p;
                                                                                                                
                                                                                }
                                                        
                                                                                if(ch=='X' or ch=='x'){
                                                                                        --locy;
                                                                                        ++locx;
                                                                                        ++p;
                                                                                }
                                                        
                                                                                if(ch=='W' or ch=='w'){
                                                                                        ++locy;
                                                                                        --locx;
                                                                                        ++p;
                                                                                }
                                                        
                                                                                if(ch=='X' or ch=='x'){
                                                                                        ++locy;
                                                                                        ++locx;
                                                                                        ++p;
                                                                                }
                                                                                red[i].alive=0;
                                                                                                                red[i].u1=red[i].locx;
                                                                                                                red[i].u2=red[i].locy;
                                                                                                                red[i].remove();
                                                                                                                system("CLS");
                                                                                                                temp.displayboard(red,white);
                                                                        }
                                                                                
                                                                                        if((locx==red[i].locx && locy==red[i].locy)){
                                                                                                        
                                                                                                        red[i].locx=red[i].u1;
                                                                                                        red[i].locy=red[i].u2;
                                                                                                        
                                                                                                        if(ch=='A' or ch=='a'){
                                                                                                                locx+=2;
                                                                                                                locy+=2;
                                                                                                                
                                                                                                                system("CLS");
                                                                                                                cout<<"Please enter a valid letter because counter can't be moved"<<endl;
                                                                                                                cout<<"Enter A to move counter 1 block diagonally (up and left) \t";
                                                                                                                cout<<"Enter D to move counter 1 block diagonally (up and right) \t"<<endl;
                                                                                                                cout<<"Enter W to move counter 1 block diagonally (down and left) \t";
                        option();
        forfeit(ch);
                                                                                                                cout<<"Enter X to move counter 1 block diagonally (down and right) \t"<<endl;
                                                                                                                temp.displayboard(red,white);                        
                                                                                                                cin>>ch;
                                                                                                                p=2;
                                                                                                        }
                                                                                
                                                                                                        if(ch=='X' or ch=='x'){
                                                                                                                locy+=2;
                                                                                                                locx-=2;
                                                                                                                system("CLS");
                                                                                                                cout<<"Please enter a valid letter because counter can't be moved"<<endl;
                                                                                                                cout<<"Enter A to move counter 1 block diagonally (up and left) \t";
                                                                                                                cout<<"Enter D to move counter 1 block diagonally (up and right) \t"<<endl;
                                                                                                                cout<<"Enter W to move counter 1 block diagonally (down and left) \t";
                                                                                                                cout<<"Enter X to move counter 1 block diagonally (down and right) \t"<<endl;
                        option();
        forfeit(ch);
                                                                                                                temp.displayboard(red,white);        
                                                                                                                cin>>ch;
                                                                                                                p=2;
                                                                                                        }
                                                                                
                                                                                                        if(ch=='W' or ch=='w'){
                                                                                                                locy-=2;
                                                                                                                locx+=2;
                                                                                                                system("CLS");
                                                                                                                cout<<"Please enter a valid letter because counter can't be moved"<<endl;
                                                                                                                cout<<"Enter A to move counter 1 block diagonally (up and left) \t";
                                                                                                                cout<<"Enter D to move counter 1 block diagonally (up and right) \t"<<endl;
                                                                                                                cout<<"Enter W to move counter 1 block diagonally (down and left) \t";
                                                                                                                cout<<"Enter X to move counter 1 block diagonally (down and right) \t"<<endl;
                        option();
        forfeit(ch);
                                                                                                                temp.displayboard(red,white);        
                                                                                                                cin>>ch;
                                                                                                                p=2;
                                                                                                        
                                                                                                        }
                                                                                
                                                                                                        if(ch=='X' or ch=='x'){
                                                                                                                locy-=2;
                                                                                                                locx-=2;
                                                                                                                system("CLS");
                                                                                                                cout<<"Please enter a valid letter because counter can't be moved"<<endl;
                                                                                                                        cout<<"Enter A to move counter 1 block diagonally (up and left) \t";
                                                                                                                        cout<<"Enter D to move counter 1 block diagonally (up and right) \t"<<endl;
                                                                                                                        cout<<"Enter W to move counter 1 block diagonally (down and left) \t";
                                                                                                                        cout<<"Enter X to move counter 1 block diagonally (down and right) \t"<<endl;
                        option();
        forfeit(ch);
                                                                                                                temp.displayboard(red,white);                        
                                                                                                                cin>>ch;
                                                                                                                p=2;
                                                                                                        }
                                                                                                        
                                                                                        }
                                                                                        
                                                                                        
                                                                                        
                                                                                        
                                                                                        
                                                                                        
                                                                                        
                                }
        }
}


else if(king==0){
        cout<<"Enter A to move counter 1 block diagonally (up and left) \t";
        cout<<"Enter D to move counter 1 block diagonally (up and right) \t"<<endl;
        char ch;
        cin>>ch;
        option();
        forfeit(ch);
        int p=2;
        while(p==2){
        if(ch=='A' or ch=='a'){
                --locx;
                --locy;
                ++p;
        }
        
        if(ch=='X' or ch=='x'){
                --locy;
                ++locx;
                ++p;
        }
        
        
        
        for(int i=0;i<12;i++){
if(((locx==white[i].locx && locy==white[i].locy) || (locx<0 || locx>7 || locy<0 || locy>7)) && i!=(o-1)){
                                if(ch=='A' or ch=='a'){
                                        ++locx;
                                        ++locy;
                                        
                                        system("CLS");
                                        cout<<"Please enter a valid letter because counter can't be moved"<<endl;
                                        cout<<"Enter A to move counter 1 block diagonally (up and left) \t";
                                        cout<<"Enter D to move counter 1 block diagonally (up and right) \t"<<endl;
                        option();
        forfeit(ch);
                                        temp.displayboard(red,white);                        
                                        cin>>ch;
                                        p=2;
                                }
        
                                if(ch=='X' or ch=='x'){
                                        ++locy;
                                        --locx;
                                        system("CLS");
                                        cout<<"Please enter a valid letter because counter can't be moved"<<endl;
                                        cout<<"Enter A to move counter 1 block diagonally (up and left) \t";
                                        cout<<"Enter D to move counter 1 block diagonally (up and right) \t"<<endl;
                        option();
        forfeit(ch);
                                        temp.displayboard(red,white);        
                                        cin>>ch;
                                        p=2;
                                }
        
                                if(ch=='W' or ch=='w'){
                                        --locy;
                                        ++locx;
                                        system("CLS");
                                        cout<<"Please enter a valid letter because counter can't be moved"<<endl;
                                        cout<<"Enter A to move counter 1 block diagonally (up and left) \t";
                                        cout<<"Enter D to move counter 1 block diagonally (up and right) \t"<<endl;
                        option();
        forfeit(ch);
                                        temp.displayboard(red,white);        
                                        cin>>ch;
                                        p=2;
                                }
        
                                if(ch=='X' or ch=='x'){
                                        --locy;
                                        --locx;
                                        system("CLS");
                                        cout<<"Please enter a valid letter because counter can't be moved"<<endl;
                                                cout<<"Enter A to move counter 1 block diagonally (up and left) \t";
                                                cout<<"Enter D to move counter 1 block diagonally (up and right) \t"<<endl;
                        option();
        forfeit(ch);
                                        temp.displayboard(red,white);                        
                                        cin>>ch;
                                        p=2;
                                }
                                
                        }
                                                        if((locx==red[i].locx && locy==red[i].locy)){
                        
                                                                                if(ch=='A' or ch=='a'){
                                                                                        --locx;
                                                                                        --locy;
                                                                                        ++p;
                                                                                                                
                                                                                }
                                                        
                                                                                if(ch=='X' or ch=='x'){
                                                                                        --locy;
                                                                                        ++locx;
                                                                                        ++p;
                                                                                }
                                                        
                                                                                red[i].alive=0;
                                                                                                                red[i].u1=red[i].locx;
                                                                                                                red[i].u2=red[i].locy;
                                                                                                                red[i].remove();
                                                                                                                system("CLS");
                                                                                                                temp.displayboard(red,white);
                                                                        }
                                                                                
                                                                                        if((locx==red[i].locx && locy==red[i].locy)){
                                                                                                        
                                                                                                        red[i].locx=red[i].u1;
                                                                                                        red[i].locy=red[i].u2;
                                                                                                        
                                                                                                        if(ch=='A' or ch=='a'){
                                                                                                                locx+=2;
                                                                                                                locy+=2;
                                                                                                                
                                                                                                                system("CLS");
                                                                                                                cout<<"Please enter a valid letter because counter can't be moved"<<endl;
                                                                                                                cout<<"Enter A to move counter 1 block diagonally (up and left) \t";
                                                                                                                cout<<"Enter D to move counter 1 block diagonally (up and right) \t"<<endl;
                        option();
        forfeit(ch);
                                                                                                                temp.displayboard(red,white);                        
                                                                                                                cin>>ch;
                                                                                                                p=2;
                                                                                                        }
                                                                                
                                                                                                        if(ch=='X' or ch=='x'){
                                                                                                                locy+=2;
                                                                                                                locx-=2;
                                                                                                                system("CLS");
                                                                                                                cout<<"Please enter a valid letter because counter can't be moved"<<endl;
                                                                                                                cout<<"Enter A to move counter 1 block diagonally (up and left) \t";
                                                                                                                cout<<"Enter D to move counter 1 block diagonally (up and right) \t"<<endl;
                        option();
        forfeit(ch);
                                                                                                                temp.displayboard(red,white);        
                                                                                                                cin>>ch;
                                                                                                                p=2;
                                                                                                        }
                                                                                
                                                                                                        if(ch=='W' or ch=='w'){
                                                                                                                locy-=2;
                                                                                                                locx+=2;
                                                                                                                system("CLS");
                                                                                                                cout<<"Please enter a valid letter because counter can't be moved"<<endl;
                                                                                                                cout<<"Enter A to move counter 1 block diagonally (up and left) \t";
                                                                                                                cout<<"Enter D to move counter 1 block diagonally (up and right) \t"<<endl;
                        option();
        forfeit(ch);
                                                                                                                temp.displayboard(red,white);        
                                                                                                                cin>>ch;
                                                                                                                p=2;
                                                                                                        
                                                                                                        }
                                                                                
                                                                                                        if(ch=='X' or ch=='x'){
                                                                                                                locy-=2;
                                                                                                                locx-=2;
                                                                                                                system("CLS");
                                                                                                                cout<<"Please enter a valid letter because counter can't be moved"<<endl;
                                                                                                                        cout<<"Enter A to move counter 1 block diagonally (up and left) \t";
                                                                                                                        cout<<"Enter D to move counter 1 block diagonally (up and right) \t"<<endl;
                        option();
        forfeit(ch);
                                                                                                                temp.displayboard(red,white);                        
                                                                                                                cin>>ch;
                                                                                                                p=2;
                                                                                                        }
                                                                                                        
                                                                                        }
                                }
        }
}
        if(locy==0){
                king=1;
        }
}




       

        
        
void fillboard(){
                
        arr1[0][0]='-';arr1[1][0]='O';arr1[2][0]='-';arr1[3][0]='O';arr1[4][0]='-';arr1[5][0]='O';arr1[6][0]='-';arr1[7][0]='O';arr1[0][1]='O';arr1[1][1]='-';arr1[2][1]='O';arr1[3][1]='-';arr1[4][1]='O';arr1[5][1]='-';arr1[6][1]='O';arr1[7][1]='-';arr1[0][2]='-';        arr1[1][2]='O';arr1[2][2]='-';arr1[3][2]='O';arr1[4][2]='-';arr1[5][2]='O';arr1[6][2]='-';arr1[7][2]='O';arr1[0][3]='O';arr1[1][3]='-';arr1[2][3]='O';arr1[3][3]='-';arr1[4][3]='O';arr1[5][3]='-';arr1[6][3]='O';arr1[7][3]='-';arr1[0][4]='-';        arr1[1][4]='O';arr1[2][4]='-';arr1[3][4]='O';arr1[4][4]='-';arr1[5][4]='O';arr1[6][4]='-';arr1[7][4]='O';arr1[0][5]='O';arr1[1][5]='-';arr1[2][5]='O';arr1[3][5]='-';arr1[4][5]='O';arr1[5][5]='-';arr1[6][5]='O';arr1[7][5]='-';arr1[0][6]='-';arr1[1][6]='O';arr1[2][6]='-';arr1[3][6]='O';arr1[4][6]='-';arr1[5][6]='O';arr1[6][6]='-';arr1[7][6]='O';arr1[0][7]='O';arr1[1][7]='-';arr1[2][7]='O';arr1[3][7]='-';arr1[4][7]='O';arr1[5][7]='-';arr1[6][7]='O';arr1[7][7]='-';
        
        
        for(int i=0;i<8;i++){
                for(int locy=0;locy<8;locy++){
                        arr2[locy][i]=0;
                }
        }
                        
        }

        
        void grid(){
                
                for(int i=0;i<8;i++){
                        cout<<"\t";
                        for(int j=0;j<8;j++){
                                if(arr2[j][i]>=10)
                                cout<<arr2[j][i]<<"  ";
                                else
                                cout<<arr2[j][i]<<"   ";
                        }
                        cout<<endl;        
                }
                
                for(int i=0;i<8;i++){
                        cout<<endl;
                        cout<<"\t";
                        for(int j=0;j<8;j++){
                                
                                cout<<arr1[j][i]<<"   ";
                        }
                        cout<<endl;        
                }
        }
        
        


        void displayboard(Piece a[], Piece b[]){
                fillboard();
                                
                
                for(int p=0;p<12;p++){
                                
                        if(b[p].alive==0){
                        arr1[a[p].locx][a[p].locy]='R';
                        arr2[a[p].locx][a[p].locy]=(p+1);
                        }
                        
                        else if(a[p].alive==0){
                        arr1[b[p].locx][b[p].locy]='W';
                        arr2[b[p].locx][b[p].locy]=(p+1);
                        }
                        
                        else{
                        
                        arr1[a[p].locx][a[p].locy]='R';
                        arr1[b[p].locx][b[p].locy]='W';
                        arr2[a[p].locx][a[p].locy]=(p+1);
                        arr2[b[p].locx][b[p].locy]=(p+1);
                        }
                }        
        
                grid();
        }
        
        

};


void callfunc(){

system("CLS");
cout<<player1name<<" is Red"<<endl;
cout<<player2name<<" is White"<<endl;
}


int main(){
srand(time(NULL));

cout<<"Open full screen for better display"<<endl;

if(rand()%2==0){
cout<<"Enter name of player 1:";
getline(cin,player1name);
cout<<"Enter name of player 2:";
getline(cin,player2name);
}

else{
cout<<"Enter name of player 1:";
getline(cin,player2name);
cout<<"Enter name of player 2:";
getline(cin,player1name);
        
}




cout<<"Treat '-' as white and 'O' as red"<<endl;


 Piece red[15];
 Piece white[15];
 Piece temp;
 
 
 red[0].init(1,0);
 red[1].init(3,0);
 red[2].init(5,0);
 red[3].init(7,0);
 red[4].init(0,1);
 red[5].init(2,1);
 red[6].init(4,1);
 red[7].init(6,1);
 red[8].init(1,2);
 red[9].init(3,2);
 red[10].init(5,2);
 red[11].init(7,2);
 
 white[0].init(0,5);
 white[1].init(2,5);
 white[2].init(4,5);
 white[3].init(6,5);
 white[4].init(1,6);
 white[5].init(3,6);
 white[6].init(5,6);
 white[7].init(7,6);
 white[8].init(0,7);
 white[9].init(2,7);
 white[10].init(4,7);
 white[11].init(6,7);
 
 int o;
 temp.displayboard(red,white);
 
int c;         
while(1){
        

        if(c%2==0){
        
        int k=0;
        for(int i=0;i<12;i++){
        if(red[i].alive==0){++k;}        
        if(k==11){
        cout<<"Blue has won the game!!!";
        return 0;
        }
        }
        
        
        callfunc();
        int o;
        temp.displayboard(red,white);
         cout<<"Enter the number of the Red counter you want to move:";
        cin>>o;
        
        while(o<1 or o>12){
                cout<<"Enter valid counter number";
                cin>>o;
} 
        red[o-1].player1move(red,white,temp,o);
        
                
        temp.displayboard(red,white);        
        ++c;
 }
 
 else{
         
                  
         int k=0;
        for(int i=0;i<12;i++){
        if(white[i].alive==0){++k;}        
        if(k==11){
        cout<<"Red has won the game!!!";
        return 0;
        }
        }
        
         callfunc();
        int o;
        temp.displayboard(red,white);
         cout<<"Enter the number of the White counter you want to move: ";
        cin>>o;
        
        while(o<1 or o>12){
                cout<<"Enter counter number";
                cin>>o;
} 
        white[o-1].player2move(red,white,temp, o);
        
                
        temp.displayboard(red,white);        
        ++c;         
         
         
 }
}
return 0;
 }

