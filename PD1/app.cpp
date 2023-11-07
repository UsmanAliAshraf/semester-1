#include<iostream>
using namespace std;
int main() {
    system("cls");
cout<<endl;
cout<<"######## ##     ## ########     ##       #### ######## ######## ########     ###    ########  ##    ##     ##        #######  ##     ## ##    ##  ######   ########"<<endl; 
cout<<"   ##    ##     ## ##           ##        ##     ##    ##       ##     ##   ## ##   ##     ##  ##  ##      ##       ##     ## ##     ## ###   ## ##    ##  ##       "<<endl;
cout<<"   ##    ##     ## ##           ##        ##     ##    ##       ##     ##  ##   ##  ##     ##   ####       ##       ##     ## ##     ## ####  ## ##        ##       "<<endl;
cout<<"   ##    ######### ######       ##        ##     ##    ######   ########  ##     ## ########     ##        ##       ##     ## ##     ## ## ## ## ##   #### ######   "<<endl;
cout<<"   ##    ##     ## ##           ##        ##     ##    ##       ##   ##   ######### ##   ##      ##        ##       ##     ## ##     ## ##  #### ##    ##  ##       "<<endl;
cout<<"   ##    ##     ## ##           ##        ##     ##    ##       ##    ##  ##     ## ##    ##     ##        ##       ##     ## ##     ## ##   ### ##    ##  ##       "<<endl;
cout<<"   ##    ##     ## ########     ######## ####    ##    ######## ##     ## ##     ## ##     ##    ##        ########  #######   #######  ##    ##  ######   ######## "<<endl;

cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
cout<<"                                                            ..........WELCOME TO MY BOOK STORE.........."<<endl;

int input; string book;
cout<<"My Store has Many thins for you"<<endl;
cout<<"ENTER 1, IF YOU WANT TO SEE type of Books:"<<endl;
cout<<"ENTER 2, IF YOU WANT TO SEE ALL THE BOOKS:"<<endl;
cout<<"ENTER 3,IF YOU WANT TO SEE Prices Of books:"<<endl;

cin>>input;
if (input==1)
{
    cout<<"FANTASY, HISTORY, NOVEL, RELIGIOUS"<<endl;
    cout<<"CHOOSE A BOOK YOU WANT TO SEE (FANTASY,HISTORY,NOVEL,RELIGIOUS)"<<endl;
    string type;
    cin>>type;
    if(type =="FANTASY")
    {
        cout<<"1) HARRY POTTER AND DEATHLY HALLOWS:"<<endl;
        cout<<"2) THE LORDS OF RINGS"<<endl;
        cout<<"3) TWILIGHT-LIFE AND DEATH"<<endl;
        cout<<"4) GAME OF THRONES"<<endl;

    }
    if (type=="HISTORY")
    {cout<<"1) MUHAMMAD BIN QASIM by NASEEM IJAZI"<<endl;
     cout<<"2) 1776 by David McCullough"<<endl;
     cout<<"3) Churchill: Walking with Destiny by Andrew Roberts"<<endl;
     cout<<"4) The Communist Manifesto by Karl Marx"<<endl;
    
    }
    if (type=="NOVEL")
    {
        cout<<"1) The Great Gatsby by F. Scott Fitzgerald. "<<endl;
        cout<<"2) Nineteen Eighty Four by George Orwell "<<endl;
        cout<<"3) MR. CHIPS by James Hilton "<<endl;

    }
    if (type=="RELIGIOUS")
    {
        cout<<"1) THE HOLY QURAN"<<endl;
        cout<<"2) THE SPIRIT OF ISLAM by SYED AMEER ALI"<<endl;
        cout<<"3) THE BIBLE"<<endl;
    }
    

}
if (input==2)
{       cout<<"1) HARRY POTTER AND DEATHLY HALLOWS:"<<endl;
        cout<<"2) THE LORDS OF RINGS"<<endl;
        cout<<"3) TWILIGHT-LIFE AND DEATH"<<endl;
        cout<<"4) GAME OF THRONES"<<endl;
        cout<<"5)MUHAMMAD BIN QASIM by NASEEM IJAZI"<<endl;
        cout<<"6)1776 by David McCullough"<<endl;
        cout<<"7)Churchill: Walking with Destiny by Andrew Roberts"<<endl;
        cout<<"8)The Communist Manifesto by Karl Marx"<<endl;
         cout<<"9)The Great Gatsby by F. Scott Fitzgerald. "<<endl;
        cout<<"10)Nineteen Eighty Four by George Orwell "<<endl;
        cout<<"11)MR. CHIPS by James Hilton "<<endl;
         cout<<"12)THE HOLY QURAN"<<endl;
        cout<<"13)THE SPIRIT OF ISLAM by SYED AMEER ALI"<<endl;
        cout<<"14)THE BIBLE"<<endl;
        
}
if (input==3)
{
        cout<<"1) HARRY POTTER AND DEATHLY HALLOWS= 50$"<<endl;
        cout<<"2) THE LORDS OF RINGS = 50$"<<endl;  
        cout<<"3) TWILIGHT-LIFE AND DEATH=50$"<<endl; 
        cout<<"4) GAME OF THRONES=40$"<<endl;
        cout<<"5)MUHAMMAD BIN QASIM by NASEEM IJAZI=100$"<<endl;
        cout<<"6)1776 by David McCullough=50$"<<endl;
        cout<<"7)Churchill: Walking with Destiny by Andrew Roberts=70$"<<endl;
        cout<<"8)The Communist Manifesto by Karl Marx=29$"<<endl;
         cout<<"9)The Great Gatsby by F. Scott Fitzgerald=35$ "<<endl;
        cout<<"10)Nineteen Eighty Four by George Orwell=50$"<<endl;
        cout<<"11)MR. CHIPS by James Hilton=10$"<<endl;
         cout<<"12)THE HOLY QURAN=100$"<<endl;
        cout<<"13)THE SPIRIT OF ISLAM by SYED AMEER ALI=75$"<<endl;
        cout<<"14)THE BIBLE=70$"<<endl;
}

}



  