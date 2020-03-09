#include <iostream>

using namespace std;

int i=1,val,unitCurr, unitPrev;
string words;

void once(int x);
void tens(int x, int y);
int main() {

    cout<< "Enter in the number you will like converted : ";
	cin >> val;

	while(val != 0){

        unitCurr = val % 10;

        if (i ==1){
             once(unitCurr);
            cout << unitCurr << words<<endl;

        }else if(i==2){
            tens(unitCurr, unitPrev);
            cout <<unitCurr<< words<<endl;

        }else{
            cout<<" num is to large for now"<<endl;
            return 0;
        }
        unitPrev=unitCurr;
        cout <<"produce after loop"<<i<< words<<endl;
        val = val/10;
        i++;
	}
	system("PAUSE");
	return 0;
}
void once(int x){
    switch (x){
        case 1:
            words=" one"+words;
            break;
        case 2:
            words=" two" + words;
            break;
        case 3:
            words=" three" + words;
            break;
        case 4:
            words=" four" + words;
            break;
        case 5:
            words=" five" + words;
            break;
        case 6:
            words=" six" + words;
            break;
        case 7:
            words=" seven" + words;
            break;
        case 8:
            words=" eight" + words;
            break;
        case 9:
            words=" nine" + words;
            break;
        case 0:
            words=" zero" + words;
            break;
    }
};

void tens(int x,int y){
    switch (x){
        case 1:
            if (y==0){
                words=" ten" ;
            }else if (y==1)
            {
                words=" eleven";
            }
            else if (y==2)
            {
                words=" twelve";
            }else if (y==3)
            {
                words=" thirteen";
            }else if (y==4)
            {
                words=" forteen";
            }else if (y==5)
            {
                words=" fifteen";
            }
            else if (y==6)
            {
                words=" sixteen";
            }else if (y==7)
            {
                words=" seventeen";
            }else if (y==8)
            {
                words=" eighteen";
            }else if (y == 9)
            {
                words =" ninteen";
            }
            break;
        case 2:
            words=" twenty" + words;
            break;
        case 3:
            words=" thirty" + words;
            break;
        case 4:
            words=" forty" + words;
            break;
        case 5:
            words=" fifty" + words;
            break;
        case 6:
            words=" sixty" + words;
            break;
        case 7:
            words=" seventy" + words;
            break;
        case 8:
            words=" eighty" + words;
            break;
        case 9:
            words=" ninety" + words;
            break;
        /*case 0:
            words=" zero" + words;
            break;*/
    }
}
