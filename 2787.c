#include <iostream>

using namespace std;

int main() {

   int l,c;
   int soma;

    cin>>l;
    cin>>c;

   while (l>=1 && l<=1000){
       while(c>=1 && c<=1000)
       {

           soma = l+c;

                   if (soma%2==0) {
                       cout << "1"<<endl;
                       return 0;
                   }else{
                       cout << "0"<<endl;
                       return 0;
                   }
       }
   }
    return 0;
}
