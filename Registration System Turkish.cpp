#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL,"Turkish");
    string adsoyad[500];
	int vize[500],fnal[500]; 
    int e,a,as;
	int n=0;
    char s,b;
    string c;
	while (true) {
		cout<<"---Ana Menü---"<<endl;
		cout<<"1. Kayıt Ekleme"<<endl;
		cout<<"2. Kayıt Düzeltme"<<endl;
        cout<<"3. Kayıt Silme"<<endl;
        cout<<"4. Kayıt Arama"<<endl;
		cout<<"5. Kayıt Listeleme"<<endl;
		cout<<"6. Çıkış"<<endl;
		cout<<"Seçiminiz :"<<endl;
		cin>>a;
		if (a == 1) {
			  do{
				cout<<"Adı ve Soyadı=";
				cin>>adsoyad[e];
				cout<<"\nVize=";
				cin>>vize[e];
				cout<<"\nFinal=";
				cin>>fnal[e];
				cout<<"\nBaşka Kayıt Yapacak mınız? (e/h): ";
                cin>>b;
                e++;
			    }while(b != 'h'); 
		}
		if (a == 2) {

            do{
                cout<<"Düzelteceğiniz Kişinin Adını Ve Soyadını Girin: ";
			    cin>>c;
                
                for(int i=0;i<(sizeof(adsoyad)/sizeof(*adsoyad));i++){
                        if(c == adsoyad[i]){ as=i; break;}}
                        if(as!=-1){
		                cout<<"Adı ve Soyadı= "<<adsoyad[as]<<endl;
                        cout<<"Vize="<<vize[as]<<endl;
                        cout<<"Final="<<fnal[as]<<endl;
                        n=1;}
                        else if(n==0)cout<<"Kayıt bulunamadı";
                
                     cout<<"Bu kaydı mı düzelteceksiniz? (e/h):";
                     cin>>s;
               }while(s == 'h');
                
                cout<<"Adı ve Soyadı=";
				cin>>adsoyad[as];
				cout<<"\nVize=";
				cin>>vize[as];
				cout<<"\nFinal=";
				cin>>fnal[as];
                
        }
		
		else if (a == 3) {
               
            do{ 
                cout<<"Silmek İstediğiniz Kişini Adını Ve Soyadını Girin: ";
			    cin>>c;
                for(int i=0;i<(sizeof(adsoyad)/sizeof(*adsoyad));i++){
                        if(c == adsoyad[i]){ as=i; break;}}
                        if(as!=-1){
		                cout<<"Adı ve Soyadı= "<<adsoyad[as]<<endl;
                        cout<<"Vize="<<vize[as]<<endl;
                        cout<<"Final="<<fnal[as]<<endl;
                        n=1;}
                        else if(n==0)cout<<"Kayıt bulunamadı";
                        cout<<"Bu kaydı mı sileceksiniz? (e/h):";
                        cin>>s;
               }while(s == 'h');
                  adsoyad[as]= '\0';
                  vize[as]= '\0';
                  fnal[as]= '\0';
                

            
			
		}
		else if (a == 4) {
                cout<<"Aramak İstediğiniz Kişini Adını Ve Soyadını Girin: ";
			    cin>>c;
                for(int i=0;i<(sizeof(adsoyad)/sizeof(*adsoyad));i++){
                        if(c == adsoyad[i]){ as=i; break;}}
                        if(as!=-1){
		                cout<<"Adı ve Soyadı= "<<adsoyad[as]<<endl;
                        cout<<"Vize="<<vize[as]<<endl;
                        cout<<"Final="<<fnal[as]<<endl;
                        n=1;}
                        else if(n==0)cout<<"Kayıt bulunamadı";
                
                     
                
		}
		else if (a == 5) {
                cout<<"Adı Soyadı           Vize            Final"<<endl;
                for(int i=0;i<(sizeof(adsoyad)/sizeof(*adsoyad));i++){
                    cout<<adsoyad[i]<<"\t \t \t";
                    cout<<vize[i]<<"\t \t \t";
                    cout<<fnal[i]<<"\t \t \t";
                    cout<<endl;
                    if(adsoyad[i]=="\0")break;
}
			
		}
		else if (a== 6)break;
		
	}
}

