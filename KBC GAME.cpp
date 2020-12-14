#include<iostream>
#include<conio.h>
#include<stdlib.h>

using namespace std;

int main()
{
    char name[50],ch[11];
    char name1[50];
    int x,y;
    system("Color 7C");

    system("cls"); // clear screen for codeblocks

    do
    {
        x=0;
        cout<<"\n-------------------------------------WELCOME TO THE KBC-----------------------------------------------------";
        cout<<"\n\n Enter your name: ";
        cin>>name;
        cout<<"\n Enter answer in form of 'a','b' and'c'only.";
        cout<<"\n Q1.What is called as ' THE HOLY LAND'?";
        cout<<"\n a.Jerusalem";
        cout<<"\n b.Mathura";
        cout<<"\n c.Mecca";
        cin>>ch[1];
        if(ch[1]=='a')
        {
            x=x+10;
            cout<<"\n Good Job.";
            cout<<"\n Your score is "<<x;
        }
        else
        {
            cout<<"\n Sorry wrong answer.";
            goto abc;
        }
        cout<<"\n Q2.What is called as ' THE ROOF OF THE WORLD'?";
        cout<<"\n a.Nepal";
        cout<<"\n b.Rome";
        cout<<"\n c.Tibet";
        cin>>ch[2];
        if(ch[2]=='c')
        {
            x=x+10;
            cout<<"\n Good Job.";
            cout<<"\n Your score is "<<x;
        }
        else
        {
            cout<<"\n Sorry wrong answer.";
            goto abc;
        }
        cout<<"\n Q3.What is called as ' THE LAND OF RISING SUN'?";
        cout<<"\n a.Chicago";
        cout<<"\n b.Japan";
        cout<<"\n c.Tibet";
        cin>>ch[3];
        if(ch[3]=='b')
        {
            x=x+10;
            cout<<"\n Good Job.";
            cout<<"\n Your score is "<<x;
        }
        else
        {
            cout<<"\nSorry wrong answer.";
            goto abc;
        }
        cout<<"\n Q4.What is called as ' THE GIFT OF NILE'?";
        cout<<"\n a.Chicago";
        cout<<"\n b.Egypt";
        cout<<"\n c.Africa";
        cin>>ch[4];
        if(ch[4]=='b')
        {
            x=x+10;
            cout<<"\n Good Job.";
            cout<<"\n Your score is "<<x;
        }
        else
        {
            cout<<"Sorry wrong answer.";
            goto abc;
        }
        cout<<"\n Q5.What is called as ' THE LAND OF MIDNIGHT SUN'?";
        cout<<"\n a.Norway";
        cout<<"\n b.Japan";
        cout<<"\n c.Australia";
        cin>>ch[5];
        if(ch[5]=='a')
        {
            x=x+10;
            cout<<"\n Good Job.";
            cout<<"\n Your score is "<<x;
        }
        else
        {
            cout<<"\n Sorry wrong answer.";
            goto abc;
        }
        cout<<"\n Q6.What is called as ' THE LAND OF THUNDERBOLT'?";
        cout<<"\n a.Bhutan";
        cout<<"\n b.Canada";
        cout<<"\n c.Arab";
        cin>>ch[6];
        if(ch[6]=='a')
        {
            x=x+10;
            cout<<"\n Good Job.";
            cout<<"\n Your score is "<<x;
        }
        else
        {
            cout<<"\n Sorry wrong answer.";
            goto abc;
        }
        cout<<"\n Q7.What is called as ' THE WINDY CITY?";
        cout<<"\n a.Jerusalem";
        cout<<"\n b.Japan";
        cout<<"\n c.Chicago";
        cin>>ch[7];
        if(ch[7]=='c')
        {
            x=x+10;
            cout<<"\n Good Job.";
            cout<<"\n Your score is "<<x;
        }
        else
        {
            cout<<"\n Sorry wrong answer.";
            goto abc;
        }
        cout<<"\n Q8.What is called as ' THE LAND OF WHITE ELEPHANTS'?";
        cout<<"\n a.Bangladesh";
        cout<<"\n b.Thailand";
        cout<<"\n c.India";
        cin>>ch[8];
        if(ch[8]=='b')
        {
            x=x+10;
            cout<<"\n Good Job.";
            cout<<"\n Your score is "<<x;
        }
        else
        {
            cout<<"\n Sorry wrong answer.";
            goto abc;
        }
        cout<<"\n Q9.What is called as ' THE CITY OF SEVEN HILLS'?";
        cout<<"\n a.Rome";
        cout<<"\n b.Nilgiri Hills";
        cout<<"\n c.Tibet";
        cin>>ch[9];
        if(ch[9]=='a')
        {
            x=x+10;
            cout<<"\n Good Job.";
            cout<<"\n Your score is "<<x;
        }
        else
        {
            cout<<"\n Sorry wrong answer";
            goto abc;
        }
        cout<<"\n Q10.What is called as ' THE DARK CONTIENENT'?";
        cout<<"\n a.Asia";
        cout<<"\n b.Australia";
        cout<<"\n c.Africa";
        cin>>ch[10];
        if(ch[10]=='c')
        {
            x=x+10;
            cout<<"\n Good Job.";
            cout<<"\n Your score is "<<x;
        }
        else
        {
            cout<<"\n Sorry wrong answer.";
            goto abc;
        }
        abc:
        if(x==100)
        {
            cout<<"\n No cheating...... "<<name<<" you have done this earlier also.";
            break;
        }
        if(x==90)
        {
            cout<<"\n "<<name<<" you are extremely intelligent.";
            cout<<"\n Your Score is 90";
        }
        if(x==80)
        {
            cout<<"\n "<<name<<" you are intelligent.";
            cout<<"\n Your Score is 80";
        }
        if(50==x||x==70||x==60)
        {
            cout<<"\n "<<name<<" you are average";
            cout<<"\n Your Score is "<<x<<".";
            cout<<"\n Better luck next time";
        }
        else
        if(x<=40)
            cout<<"\n No use........ Not even 5 questions right";
        cout<<"\n\n\n Do you want to play again?(y/n)";
        cin>>ch[11];
    }
    while(ch[11]=='Y'||ch[11]=='y');
 do
    {
        int y=0;
        cout<<"\n\n Enter the second  person name:- ";
        cin>>name1;
        cout<<"\n Q1. After whom is the annual award,given by the Govt of India to an outstanding handloom weaver of named ?";
        cout<<"\n a.Acharya Vinoba Bhave";
        cout<<"\n b.Sant Kabir";
        cout<<"\n c.Mahatma Gandhi";
        cout<<"\n d.Gul Ahmed";
        cin>>ch[1];
        if(ch[1]=='b')
        {
            y=y+10;
            cout<<"\n Good Job.";
            cout<<"\n Your score is "<<y;
        }
        else
        {
            cout<<"\n Sorry wrong answer.";
            goto bcd;
        }
        cout<<"\n Q2.In the Mughal era, which of these harbours was also known as 'babul Mecca' and 'Meccaidwar'?";
        cout<<"\n a.Bharuch";
        cout<<"\n b.Surat";
        cout<<"\n c.Porbandar";
        cout<<"\n d.Khamat";
        cin>>ch[2];
        if(ch[2]=='b')
        {
            y=y+10;
            cout<<"\n Good Job.";
            cout<<"\n Your score is "<<y;
        }
        else
        {
            cout<<"\n Sorry wrong answer.";
            goto bcd;
        }
        cout<<"\n Q3.According to the legend,which of these Rishis re-gained his youth by a celestial favor?";
        cout<<"\n a.Agastya";
        cout<<"\n b.Durvasa";
        cout<<"\n c.Chyavana";
        cout<<"\n d.Charaka";
        cin>>ch[3];
        if(ch[3]=='c')
        {
            y=y+10;
            cout<<"\n Good Job.";
            cout<<"\n Your score is "<<y;
        }
        else
        {
            cout<<"\nSorry wrong answer.";
            goto bcd;
        }
        cout<<"\n Q4.Which is the largest living species of tortoise in the world, which may weigh about 400 kg?";
        cout<<"\n a.Sulcata Tortoise";
        cout<<"\n b.Grenada Tortoise";
        cout<<"\n c.Golden Greek Tortoise ";
        cout<<"\n d.Galapogos Tortoise";
        cin>>ch[4];
        if(ch[4]=='d')
        {
            y=y+10;
            cout<<"\n Good Job.";
            cout<<"\n Your score is "<<y;
        }
        else
        {
            cout<<"Sorry wrong answer.";
            goto bcd;
        }
        cout<<"\n Q5.The first world championship is what sport is planned to be held in 2017 though the game has been played since 1877?";
        cout<<"\n a.Test Cricket";
        cout<<"\n b.Rugby Union";
        cout<<"\n c.Kabaddi";
        cout<<"\n d.Carrom";
        cin>>ch[5];
        if(ch[5]=='a')
        {
            y=y+10;
            cout<<"\n Good Job.";
            cout<<"\n Your score is "<<y;
        }
        else
        {
            cout<<"\n Sorry wrong answer.";
            goto abc;
        }
        cout<<"\n Q6.With which of these states do chhattisgarh jharkhand and Andhra Pradesh all share their borders? ";
        cout<<"\n a.Madhya Pradesh";
        cout<<"\n b.Odisha";
        cout<<"\n c.Bihar";
        cout<<"\n d.Uttar Pradesh";
        cin>>ch[6];
        if(ch[6]=='b')
        {
            y=y+10;
            cout<<"\n Good Job.";
            cout<<"\n Your score is "<<y;
        }
        else
        {
            cout<<"\n Sorry wrong answer.";
            goto bcd;
        }
        cout<<"\n Q7.With which of these cards would you associate the pharse 'Aam Aadmi ka Adhikaar'?";
        cout<<"\n a.PAN Card";
        cout<<"\n b.Voter Id Card";
        cout<<"\n c.Aadhar Card";
        cout<<"\n d.Ration Card";
        cin>>ch[7];
        if(ch[7]=='c')
        {
            y=y+10;
            cout<<"\n Good Job.";
            cout<<"\n Your score is "<<y;
        }
        else
        {
            cout<<"\n Sorry wrong answer.";
            goto bcd;
        }
        cout<<"\n Q8.The 'sasural' of which of these international sports person from india is in Pakistan?";
        cout<<"\n a.Saina Nehwal";
        cout<<"\n b.Saina Mirza";
        cout<<"\n c.Anisa Sayyed";
        cout<<"\n d.Anjum Chapra";
        cin>>ch[8];
        if(ch[8]=='b')
        {
            y=y+10;
            cout<<"\n Good Job.";
            cout<<"\n Your score is "<<y;
        }
        else
        {
            cout<<"\n Sorry wrong answer.";
            goto bcd;
        }
        cout<<"\n Q9.Which of these person has not walked on the Moon?";
        cout<<"\n a.Charles Duke";
        cout<<"\n b.James A Lovell";
        cout<<"\n c.Alan Bean";
        cout<<"\n d.Pete Conrad";
        cin>>ch[9];
        if(ch[9]=='b')
        {
            y=y+10;
            cout<<"\n Good Job.";
            cout<<"\n Your score is "<<y;
        }
        else
        {
            cout<<"\n Sorry wrong answer";
            goto bcd;
        }
        cout<<"\n In 1850, the first experimental electric telegraph line in India was set up between Calcutta and which place?"; 
        cout<<"\n a.Diamond Harbour";
        cout<<"\n b.Darjeeling";
        cout<<"\n c.Murshijabad";
        cout<<"\n d.Dhaka";
        cin>>ch[10];
        if(ch[10]=='a')
        {
            y=y+10;
            cout<<"\n Good Job.";
            cout<<"\n Your score is "<<y;
        }
        else
        {
            cout<<"\n Sorry wrong answer.";
            goto bcd;
        }
        bcd:
        if(y==100)
        {
            cout<<"\n No cheating...... "<<name1<<" you have done this earlier also.";
            break;
        }
        if(y==90)
        {
            cout<<"\n "<<name1<<" you are extremely intelligent.";
            cout<<"\n Your Score is 90";
        }
        if(y==80)
        {
            cout<<"\n "<<name1<<" you are intelligent.";
            cout<<"\n Your Score is 80";
        }
        if(50==y||y==70||y==60)
        {
            cout<<"\n "<<name1<<" you are average";
            cout<<"\n Your Score is "<<y<<".";
            cout<<"\n Better luck next time";
        }
        else
        if(y<=40)
            cout<<"\n No use........ Not even 5 questions right";
        cout<<"\n\n\n Do you want to play again?(y/n)";
        cin>>ch[11];
    }
    while(ch[11]=='Y'||ch[11]=='y');
    return 0;
}
