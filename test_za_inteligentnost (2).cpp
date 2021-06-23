#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main ()
{
cout << "Welcome to our FREE intelligence test. If you want to know how high is your IQ then answer to the following questions.\n\n";
bool a,b,c,d,e,f,g,h,i;
int myanswer1, myanswer2, myanswer3, myanswer4, myanswer5, myanswer6, myanswer7, myanswer8, myanswer9;
int wronganswer = 0;
cout << "1. Which one of the numbers does not belong in the following series?\n 2 - 5 - 7 - 14 - 41 - 122 - 365 - 1094 - 3281\nAnswer: ";
cin >> myanswer1;
if( myanswer1 != 7){
        wronganswer++;
       a = true;}
        else{
            a = false;
        }
cout << "\n2. If it were four hours later, it would be half as long until midnight as it would be if it were two hours later.\nWhat time is it now?\nAnswer: ";
cin >> myanswer2;
if( myanswer2 != 18){
        wronganswer++;
        b = true;}
        else{
            b = false;}
cout << "\n3. Two men, starting at the same point, walk in opposite directions for 8 meters, turn left and walk another 6 meters.\nWhat is the distance between them?\nAnswer: ";
cin >> myanswer3;
if( myanswer3 != 20){
        wronganswer++;
        c = true;}
        else{
            c = false;}
cout << "\n4. If 3 men can dig a 3 x 2 x 4 meter hole in 20 minutes, how many minutes will it take 6 men to dig a 4 x 4 x 3 meter hole?\nAnswer: ";
cin >> myanswer4;
if( myanswer4 != 20){
        wronganswer++;
        d = true;}
        else{
            d = false;}
cout << "\n5. Which number comes next in the series?\n1, 1, 3, 6, 12, 22, 39, 67, 113, 188, ?\nAnswer: ";
cin >> myanswer5;
if( myanswer5 != 310){
        wronganswer++;
       e = true;}
        else{
            e = false; }
cout << "\n6. Which number should come next in the series?\n1 - 1 - 2 - 3 - 5 - 8 - 13 \nAnswer: ";
cin >> myanswer6;
if( myanswer6 != 21){
        wronganswer++;
        f = true;}
        else{
            f = false;}
cout << "\n7. Which one of the numbers does not belong in the following series?\n2 - 3 - 6 - 7 - 8 - 14 - 15 - 30\nAnswer:  ";
cin >> myanswer7;
if( myanswer7 != 8){
        wronganswer++;
        g = true;}
        else{
            g = false;}
cout << "\n8. Which one of the numbers does not belong in the following series?\n1 - 2 - 5 - 10 - 13 - 26 - 29 - 48\nAnswer:  ";
cin >> myanswer8;
if( myanswer8 != 48){
        wronganswer++;
        h = true;}
        else{
            h = false;}
cout << "\n9. Lili likes 27 but not 25; he likes 216 but not 220; he likes 343 but not 345.\nWhich does he like:\n1) 81\n2) 1021\n3) 127\n4) 1000\nAnswer: ";
cin >> myanswer9;
while(myanswer9 > 4 || myanswer9 < 1 ){
    cout << "Please enter one of the following numbers 1, 2, 3 or 4.\n";
    cin >> myanswer9;
}
if( myanswer9 != 4){
        wronganswer++;
        i = true;}
        else{
            i = false;}

if( wronganswer >= 6)
            cout << "\nYou have got " << wronganswer << " wrong answers.\nYou aren't very clever. We are very sorry :(\n\n";
        else if( wronganswer <= 3)
            cout << "\nYou have got " << wronganswer << " wrong answers.\nYou are geniUSSS! :D\n\n";
        else{
            cout << "\nYou have got " << wronganswer << " wrong answers.\nYou are an average.\n\n";
        }
        if(a == true){
            cout << "Your first question is wrong and the correct answer is 7.\n";
        }
        else if(b == true){
            cout << "Your second question is wrong and the correct answer is 18.\n";
        }
        if(c == true){
            cout << "Your third question is wrong and the correct answer is 20.\n";
        }
        if(d == true){
            cout << "Your fourth question is wrong and the correct answer is 20.\n";
        }
        if(e == true){
            cout << "Your fifth question is wrong and the correct answer is 310.\n";
        }
        if(f == true){
            cout << "Your sixth question is wrong and the correct answer is 21.\n";
        }
        if(g == true){
            cout << "Your seventh question is wrong and the correct answer is 8.\n";
        }
        if(h == true){
            cout << "Your eight question is wrong and the correct answer is 48.\n";
        }
        if(i == true){
            cout << "Your ninth question is wrong and the correct answer is 4.\n";
        } 
        cout << "\nIf you're not satisfied with our test, please keep in mind that this is a FREE test so this is what you get for your money! :D\n";
}
