#include<iostream>
using namespace std;
class Payment{
	private: //özel bu normalde bunun içinde kullanabilmesi lazımken aşağıda kullanabiliyoruz nasıl mı friend sayesinde
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
			cout<<tutar<<":odeme aldık";
		}
		
		friend void degistir(Payment* paymentPTR){ 
			paymentPTR->tutar=10;//private kısmına gidip 0 olan tutarı 10 a çevirdi
		}
};

int main(){
	Payment payment;
	degistir(&payment);
	payment.paraBirimi="tl";
	payment.pay();











	return 0;
}
