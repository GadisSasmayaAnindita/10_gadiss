/*
  Pembuat    : Gadis sasmaya anindita
  Nis	       : 222310550
  Email      : gdissmyanndv@gmail.com
  Kontak     : 08530409177
  Pembimbing : Devi Rodiana
  Diajukan   : Tugas Akhir Dasar Pemrograman PPLG
  user,password (gadis,sasmaya)
*/
#include <conio.h>
#include <iostream.h>

head(char jud[50]=""){
	cout<<"***************************************************************"<<endl;
   cout<<".....................::PEGADAIAN SYARIAH::....................."<<endl;
	cout<<"                       "<<jud<<endl;
  	cout<<"***************************************************************"<<endl;
   if(strcmp(jud,"LOGIN APLIKASI")==0){
    	cout<<"JUDUL     : APP PEGADAIAN SYARIAH"<<endl;
   	cout<<"PEMBUAT   : Gadis sasmaya anindita"<<endl;
   	cout<<"NIs       : 222310550"<<endl;
   	cout<<"KELAS     : X PPLG"<<endl;
   	cout<<"VERSI APP : 1.1 (BUILD FULL WITH BORLAND C++)"<<endl;
      cout<<"NOTE      : Gunakan (Username:gadis) dan (Password:sasmaya)"<<endl;
   	cout<<"***************************************************************"<<endl;
   }
}