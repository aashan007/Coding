#include<iostream>
#include<gmp.h>

using namespace std;

int main (int argc, char **argv) {

    mpz_t a,b,c,d;
    mpz_inits(a,b,c,NULL);

    mpz_set_str(a,"3141592653589793238462643383279502884197169399375105820974944592", 10);
    mpz_set_str(b,"2718281828459045235360287471352662497757247093699959574966967627", 10); //Decimal base
    d=a+b;
    mpz_mul(c,a,b);

    cout<<"\nThe exact result is:";
    mpz_out_str(stdout, 10, c); //Stream, numerical base, var
    cout<<endl;

    mpz_abs(c, c);
    cout<<"The absolute value result is:";
    cout<<d;
    cout<<endl;

    cin.get();

    return 0;
}
