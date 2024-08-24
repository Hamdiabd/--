#include<iostream.h>
#include<string.h>
int h=1,p=1;const int ii=80000;
void tadd(string stud[],int size,int &x,int arr[],int &poid){
 cout<<"-------------------------------";
 cout<<"ملاحظه عدد الغرف 10"<<endl;
  cout<<"ملاحظه اخر عدد الاقسام 5"<<endl;
 for(int i=x;i<size;i++){ getline(cin,stud[h]);
 cout << "اسم الطالب: "; getline(cin,stud[h]);++h;
 cout << "رقم الطالب: "; getline(cin,stud[h]);++h;
 cout << "اسم القسم: "; getline(cin,stud[h]);++h;
 cout << "المستوى الدراسي:"; getline(cin,stud[h]);++h;
cout<< "تاريخ التسجيل باليوم:";
  cin>>arr[poid];++poid;
cout<<"تاريخ التسجيل بالشهر:";
 cin>>arr[poid];++poid;
cout <<"تاريخ التسجيل بالسنه:";
 cin>>arr[poid];++poid;
 cout <<"المبلغ المدفوع :"; cin>>arr[poid];++poid;
  cout << "رقم الغرفة:";  cin>>arr[poid];++poid;
  cout<<"تمت اضافه الطالب بنجاح"<<endl;
  if(i==x)break;
  x++;
 }}//اضافه قسم
 void addsect(string sect[],int size,int &t){
 cout<<"-----------------------------";
 cout<<"بيانات القسم الجديد"<<endl;
 for(int i=t;i<size;i++){ getline(cin,sect[p]);
 cout << "اسم القسم: "; getline(cin,sect[p]);++p;
 cout << "رئيس القسم: ";    cin>>sect[p];++p;
 cout <<"عدد الطلاب في القسم:";cin>>sect[p];++p;
 cout<<"عدد المستويات في القسم:";
 getline(cin,sect[p]);++p;
cout<< "عدد القاعات في القسم:";
getline(cin,sect[p]);++p;
cout<<"تاريخ انشاء القسم:";
getline(cin,sect[p]);++p;
  cout<<endl<<"تمت اضافه القسم بنجاح:"<<endl;
  if(i==t)break;
 }}//عرض الطلاب
  void read(string stud[],int size,int x,int arr[]){
  	int i=1,oo=0;
  if(x==1)
  cout<<"الرجى ادخل طلاب اولا♠︎"<<endl;
  else{ for(int w=1;w<x;w++){
  cout << "اسم الطالب: "<<stud[i]<<endl;++i;
 cout << "رقم الطالب: "<<stud[i]<<endl;++i;
 cout << "اسم القسم: "<<stud[i]<<endl;++i;
 cout << "المستوى الدراسي:"<<stud[i]<<endl;++i;
  cout << "تاريخ التسجيل باليوم:"<<arr[oo]<<endl;++oo;
 cout << "تاريخ التسجيل بالشهر:"<<arr[oo]<<endl;++oo;
 cout << "تاريخ التسجيل بالسنه"<<arr[oo]<<endl;++oo;
 cout << "المبلغ المدفوع :"<<arr[oo]<<endl;++oo;
  cout << "رقم الغرفة:"<<arr[oo]<<endl; }}}
  //عرض الاقسام
 void readsec(string sect[],int size,int t){int i=1;
   for(int w=1;w<t;w++){cout<<"---------------"<<endl;
  cout << "اسم القسم: "<<sect[i]<<"\n";++i;
 cout << "رئيس القسم: "<<sect[i]<<"\n";++i; cout<<"عدد الطلاب في القسم:"<<sect[i]<<"\n";++i;
 cout<<"عدد المستويات في القسم:";
 cout<<sect[i]<<"\n";++i;
cout<<"عدد القاعات في القسم:"<<sect[i]<<"\n";++i;
cout<<"تاريخ انشاء القسم:"<<sect[i]<<"\n";++i;
 	}}//مستكملين الدفع
 void sea(string stud[],int size,int arr[],int poid){
 if(h>1){	int s=1;
 for(int w=3;w<=poid;w+=4){int z;
 	if(ii-arr[w]==0){z=ii-arr[w];
 		cout<<"الاسم:"<<stud[s]<<endl;s+=4;
 cout<<"المدفوع:"<<arr[w]<<"  الباقي:"<<z<<endl;}}
 cout<<"---------------"<<endl;}
 else cout<<"لاتوجد بيانات حاليأ"<<endl;

 	
}//غير مستكملين
 void mood(string stud[],int size,int arr[],int poid){
 if(h>1){cout<<"---------------"<<endl;
 		int s=1;
 for(int w=3;w<poid;w+=4){int z;
if(ii-arr[w]!=0){z=ii-arr[w];
 		cout<<"الاسم:"<<stud[s]<<endl;s+=4;
 cout<<"المدفوع:"<<arr[w]<<"  الباقي:"<<z<<endl;
}}cout<<"---------------"<<endl;}
else cout<<"لاتوجد بيانات حاليأ"<<endl;
}//حساب المتبقي من الايام

  void pod(string stud[],int size,int arr[],int poid,int d,int m){
 	int s=1;
 	cout<<"بيانات المتبقيه من الايام:"<<endl;
 for(int w=0;w<poid;w++){int k,f,ff;
 	
 f=arr[w];++w;
  ff=arr[w];
ff++;
k=30-f+d+(m-ff)*30;
if(k<5 && k>1){
cout<<"الاسم:"<<stud[s]<<endl;
cout<<"المتبقي من الايام:"<<k<<endl;}
if(k<1){
cout<<"الاسم:"<<stud[s]<<endl;
cout<<"انتهت الفتره:"<<k<<endl;}
 w+=3;
 	s+=4;
}}//الحسابات
void slk(string stud[],int size,int arr[],int poid){
 	if(h>2){
 	cout<<"---الحسابات----"<<endl; int s=1;
 for(int w=3;w<=poid;w+=4){int z;
if(ii-arr[w]==0){z=ii-arr[w];
 		cout<<"الاسم:"<<stud[s]<<endl;
 cout<<"المدفوع:"<<arr[w]<<"  الباقي:"<<z<<endl;}
if(ii-arr[w]!=0){z=ii-arr[w];
 		cout<<"الاسم:"<<stud[s]<<endl;
 cout<<"المدفوع:"<<arr[w]<<"  الباقي:"<<z<<endl;}
w+=4;
s+=4;}}else cout<<"لاتوجد بيانات حاليأ"<<endl;}
//حساب الطلاب
void mod(string stud[],int size,int arr[],int poid){
 if(h>1){cout<<"---------------"<<endl;
 cout<<"بيانات الغرف:"<<endl;
 	int s=1;int a=0,b=0,c=0,d=0,e=0,f=0,g=0,hh=0;
 	int i=0,j=0;
for(int w=4;w<=poid;w+=5){
if(arr[w]==1){a++;
 		cout<<"الاسم:"<<stud[s]<<endl;
 cout<<"الغرفه رقم:"<<arr[w]<<endl;}
else if(arr[w]==2){b++;
 		cout<<"الاسم:"<<stud[s]<<endl;
 cout<<"الغرفه رقم:"<<arr[w]<<endl;}
else if(arr[w]==3){c++;
 		cout<<"الاسم:"<<stud[s]<<endl;
 cout<<"الغرفه رقم:"<<arr[w]<<endl;}
 else if(arr[w]==4){d++;
 		cout<<"الاسم:"<<stud[s]<<endl;
 cout<<"الغرفه رقم:"<<arr[w]<<endl;}
 else if(arr[w]==5){e++;
 		cout<<"الاسم:"<<stud[s]<<endl;
 		 cout<<"الغرفه رقم:"<<arr[w]<<endl;}
  else if(arr[w]==6){f++;
 		  cout<<"الاسم:"<<stud[s]<<endl;
 cout<<"الغرفه رقم:"<<arr[w]<<endl;}
else if(arr[w]==7){g++;
 		cout<<"الاسم:"<<stud[s]<<endl;
 cout<<"الغرفه رقم:"<<arr[w]<<endl;}
else if(arr[w]==8){hh++;
 		cout<<"الاسم:"<<stud[s]<<endl;
 cout<<"الغرفه رقم:"<<arr[w]<<endl;}
 else if(arr[w]==9){i++;
 		cout<<"الاسم:"<<stud[s]<<endl;
 cout<<"الغرفه رقم:"<<arr[w]<<endl;}
else if(arr[w]==10){j++;
 		cout<<"الاسم:"<<stud[s]<<endl;
 cout<<"الغرفه رقم::"<<arr[w]<<endl;}}
 cout<<" عدد الطلاب في الغرفه1:="<<a<<endl;
 cout<<" عدد الطلاب في الغرفه:2="<<b<<endl;
 cout<<" عدد الطلاب في الغرفه:3="<<c<<endl;
 cout<<" عدد الطلاب في الغرفه:4="<<d<<endl;
 cout<<" عدد الطلاب في الغرفه:5="<<e<<endl;
  cout<<" عدد الطلاب في الغرفه:6="<<f<<endl;
  cout<<" عدد الطلاب في الغرفه:7="<<g<<endl;
  cout<<" عدد الطلاب في الغرفه:8="<<hh<<endl;
  cout<<" عدد الطلاب في الغرفه:9="<<i<<endl;
  cout<<" عدد الطلاب في الغرفه:10="<<j<<endl;
cout<<"---------------"<<endl;}
 else cout<<"لا توجد ادخالات بعد";}
 
 //للبحث
void moid(string stud[],int size,const string w,int x){
	 if(h>1){int kk=0;
	bool found=false;
	for(int i=0;i<h;i++){  kk+=1;    
             if (stud[i].find(w) != std::string::npos) {
                found = true;      
                cout << "بيانات الطالب:" << endl;
                cout <<"الاسم:"<<stud[i]<< endl;++i;
                cout<<"الرقم:"<<stud[i]<<endl;++i;
                    cout<<"القسم:"<<stud[i]<<endl;++i;
                        cout<<"المستوى:;"<<stud[i]<<endl;
		
		}if(!found) cout<<"لايوجد"<<endl;
	}}else cout<<"لايوجد بيانات بعد"<<endl;
}



void kkk(string stud[],int size,int arr[],int poid){
 	if(h>2){int sum=0,mod=0;
 	cout<<"---اجمالي الحسابات----"<<endl; int s=1;
 for(int w=3;w<=poid;w+=5){
  int z; 
  z=ii-arr[w];
  sum+=arr[w];mod+=z;
      if(ii-arr[w]==0){
            cout<<"الاسم:"<<stud[s]<<endl;
                   cout<<"المدفوع:"<<arr[w];
                            cout<<"  الباقي:"<<z<<endl;}
   if(ii>arr[w]){
     	cout<<"الاسم:"<<stud[s]<<endl;
              cout<<"المدفوع:"<<arr[w];
                    cout<<"  الباقي:"<<z<<endl; } s+=4;}
 cout<<"اجمالي الدفع: "<<sum<<endl;
     cout<<"اجمالي المتبقي: "<<mod<<endl;
      	}else cout<<"الرجاء ادخال بيانات اولآ"<<endl;
}
 int main(){int size=50,y,x=1,t=1;
 int arr[500],poid=0;
 string stud[500];
 string sect[500];
 cout<<"★ملاحظه في حال وجود مشكله    يرجى التواصل مع فريق العمل "<<endl;
 cout<<"ت/778461645";
int d,m;
 cout<<endl<<"ادخل تاريخ اليوم:";  cin>>d;  
 cout<<"ادخل تاريخ الشهر:";   cin>>m;
  cout<<" \n"; hh:
 cout<<"--شركه اصيل--♠︎"<<endl;
 
               cout<<"---للاضافه--1"<<endl;
                cout<<"---للعرض----2"<<endl;
                 cout<<"---للبحث----3"<<endl;
                  cout<<"---الاحصائيات----4"<<endl;
                   cout<<"---الحسابات----5"<<endl<<endl;
                  cout<<"ادخل الطلب-♠-";
 cin>>y;
 
  switch (y) {
            case 1: {cout<<"اختار الاضافه ♠︎"<<endl;
                     cout<<"اضافه طالب♥1"<<endl;
                     cout<<"اضافه قسم2"<<endl;int n;
                     cout<<"----enter----♠";
                     cin>>n;
                     if(n==1){++x;
                     	tadd(stud,size,x,arr,poid);
                    } if(n==2)
                     {addsect(sect,size,t);          ++t;}
                    break;}
                                                      
        case 2:{cout<<"اختار العرض:"<<endl;
                     cout<<"عرض الاقسام1"<<endl;
                     cout<<"عرض الطلاب 2"<<endl;
              cout<<"عرض مستكملين المبلغ3:"<<endl;
   cout<<"غير مكتمل التسديد4"<<endl;
      cout<<"عرض الفترات المنهيه\nاو على وشك  الانتهاء.5"<<endl;
  cout<<"عرض اجمالي المدفوع والمتبقي.6"<<endl;
                     int c;      cout<<"----enter----♠-";   
                       cin>>c;
                if(c==1)readsec(sect,size, t);
               if(c==2) read(stud,size,x,arr);
              if(c==3)sea(stud,size,arr, poid);
              if(c==4)mood(stud,size,arr,poid);
              if(c==5) { 
             pod(stud,size,arr,poid,d,m);}
              if(c==6)kkk(stud,size,arr, poid);
                break;}
                case 3:{cout<<"enter the stu::";
                	string w;
                	cin>>w;
                     moid(stud,size,w, x);
                	break;
                	}
            case 4:{ mod(stud,size, arr, poid);
           break;}
        case 5: {    slk(stud,size,arr,poid);
                     break;}{
                default:
                break;}
        }goto hh;

    return 0;}
 