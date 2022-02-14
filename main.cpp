#include <iostream>

using namespace std;

void MenuEkranı()
{
  cout<<"********MENU********"<<endl;
  cout<<"1.Bakiye Kontrol"<<endl;
  cout<<"2.Para Çekme"<<endl;
  cout<<"3.Para Yatırma"<<endl;
  cout<<"4.Çıkış"<<endl;
}

int main() {
  double bakiye = 1000;
  int seçenek;

  while(seçenek!=4)
  {
    MenuEkranı();
  cin>>seçenek;

  switch(seçenek)
  {
    case 1:
    cout<<"1.Bakiye Kontrol"<<endl;
    cout<<"bakiyeniz : "<<bakiye<<"TL"<<endl;
    break;


    case 2:
    double ÇekimMiktarı;
    cout<<"2.Para Çekme"<<endl;
    cout<<"Ne Kadar Para Çekmek istersiniz"<<endl;
    cin>>ÇekimMiktarı;

    while(ÇekimMiktarı>bakiye)
    {
      cout<<"Yetesiz Bakiye"<<endl;
      cout<<"Lütfen tekrar deneyiniz"<<endl;
      cin>>ÇekimMiktarı;
    }

    cout<<ÇekimMiktarı<<"TL para çekildi"<<endl;
    bakiye = bakiye - ÇekimMiktarı;
    cout<<bakiye<<"TL kaldı"<<endl;
    break;
    

    case 3:
    cout<<"3.Para Yatırma"<<endl;
    double YatirmaMiktari;
    cout<<"Ne Kadar Yatırmak İstersiniz"<<endl;
    cin>>YatirmaMiktari;
    bakiye = bakiye + YatirmaMiktari;
    cout<<YatirmaMiktari<<" TL Başarıyla yatırıldı"<<endl;
    cout<<"Toplam Bakiye : "<<bakiye<<endl;

  }
 
 }
cout<<"Tekrar görüşmek üzere"<<endl;
}