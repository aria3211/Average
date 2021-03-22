# include <iostream>

using namespace std;


int main()
{
  int  couner = 0;
  float numeral=0;
  float save = 0;
  cout << "How many number: ";
  cin >> couner;
  for (int i=0; i<couner;++i){
    cout << "Enter a number: "<< i <<'\n';
    cin >> numeral;
    save +=numeral;


  }
  cout << "Average is "<< save/couner<<'\n';
}
