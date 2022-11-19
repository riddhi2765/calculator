#include <iostream>

using namespace std;
long long factorial(int x) {
    long long product=1;
    for(int i=1;i<=x;i++){
        product=product*i;}
        return product;

}

double power(double base,int exp){
    double result=1;
    for(int j=0;j<exp;j++){
        result=result*base;
    }

    return result;
}

int main()

{string in;
cout<<"enter basic for basic operations or trigno for trignometric operations";
cin>>in;

if(in=="basic"){
    int num1, num2;
  char op;
  int result;
  cout << "enter the first number  ";
  cin>>num1;
   cout << "enter the second number  ";
  cin>>num2;
   cout << "enter the operator(+,-,*,/,^)  ";
  cin>>op;

  if(op=='+'){
        result=num1+num2;
  cout << result;
    }
    else if(op=='-'){
        result=num1-num2;
  cout << result;
    }else if(op=='*'){
        result=num1*num2;
  cout << result;
    }else if(op=='/'){
        result=num1/num2;
  cout << result;
    }else if(op=='^'){
        result=power(num1,num2);
  cout << result;
    }
    else{
        cout<< "invalid op";
    }

}else if(in=="trigno")
      {string on;
      double x;
      double result;

    cout<<"enter sin or tan or cos  ";
    cin>>on;
    cout<<"enter the value of x  ";
    cin>>x;



if(on=="sin"){
            result=x;
            for(int i=1;i<=10;i++){
            result=result+power(-1,i)*power(x,2*i+1)/factorial(2*i+1);
            }
            cout<<result;}
else if(on=="cos"){result=1;
            for(int i=1;i<=10;i++){
            result=result+power(-1,i)*power(x,2*i)/factorial(2*i);
            }
            cout<<result;}
else if(on=="tan"){
            double sin,cos;
            sin=x;
            cos=1;
             for(int i=1;i<=10;i++){
            sin=sin+power(-1,i)*power(x,2*i+1)/factorial(2*i+1);
            }
             for(int i=1;i<=10;i++){
            cos=cos+power(-1,i)*power(x,2*i)/factorial(2*i);
            }
            result=sin/cos;
            cout<<result;}
else{cout<<"invalid input";}

}

else{cout<<"invalid input";}
return 0;}

