#include<iostream>
using namespace std;
class Payment{
	private: //�zel bu normalde bunun i�inde kullanabilmesi laz�mken a�a��da kullanabiliyoruz nas�l m� friend sayesinde
		float tutar=0;
	public:
		string paraBirimi;
		void setTutar(float t){
		if(t>0){
			tutar =t;
		}
		else{
			tutar=0.1;
		}
		}
		void pay(){
			cout<<tutar<<":odeme ald�k";
		}
		
		friend void degistir(Payment* paymentPTR){ 
			paymentPTR->tutar=10;//private k�sm�na gidip 0 olan tutar� 10 a �evirdi
		}
};

int main(){
	Payment payment;
	degistir(&payment);
	payment.paraBirimi="tl";
	payment.pay();











	return 0;
}
