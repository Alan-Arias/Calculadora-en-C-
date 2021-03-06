//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "UPrincipal.h"
#include "UNodo.cpp"
#include <stdlib.h>
#include <Math.h>

#define PI 3.14159265

//---------------------------------------------------------------------------
//#pragma package(smart_init)
#pragma resource "*.dfm"
TForm3 *Form3;
Puntero L;
//---------------------------------------------------------------------------
__fastcall TForm3::TForm3(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
Nodo *l, *Aux;
void __fastcall TForm3::Button4Click(TObject *Sender)
{
		l=NULL;
		float val = StrToInt(InputBox("Entrada de datos","Ingrese Base: ","0"));
		Aux = new Nodo;
		(*Aux).Data = val;
		(*Aux).Link = NULL;
		if(l==NULL)
			l=Aux;
	//mostrar
	Nodo *p;
	p = l;
	String cxd="";
	while(p!=NULL){
		cxd=cxd + IntToStr((*p).Data)+"  ";
		p=(*p).Link;
	}
	Edit1->Text=cxd;
}
//---------------------------------------------------------------------------
void __fastcall TForm3::Button1Click(TObject *Sender)
{
Edit1->Clear();
}
//---------------------------------------------------------------------------
Nodo *s, *A;
void __fastcall TForm3::Button5Click(TObject *Sender)
{
	Edit2->Text="";
	s=NULL;
		float valor = StrToInt(InputBox("Entrada de datos","Ingrese Exponente: ","0"));
		A = new Nodo;
		(*A).Data = valor;
		(*A).Link = NULL;
		if(s==NULL)
			s=A;
		//Mostrar
		Nodo *o;
		o = s;
		String Val="";
		while(o!=NULL){
			Val=Val + IntToStr((*o).Data)+"  ";
		o=(*o).Link;
	}
	Edit2->Text=Val;
}
//---------------------------------------------------------------------------

void __fastcall TForm3::Button2Click(TObject *Sender)
{
int base=(*l).Data;           //5
int exponente=(*s).Data;      //4
int res=1;
if (Edit2->Text=="")
{
	ShowMessage("pon un exponente!");
}
	for (res = 1; exponente > 0; exponente--)
	{
		res*=base;
	}

Resultado->Caption=res;
}
//---------------------------------------------------------------------------

void __fastcall TForm3::Button3Click(TObject *Sender)
{
Edit2->Clear();
}
//---------------------------------------------------------------------------

void __fastcall TForm3::Button6Click(TObject *Sender)
{
Resultado->Caption="Resultado";
}
//---------------------------------------------------------------------------

void __fastcall TForm3::Button7Click(TObject *Sender)
{
int base=(*l).Data;
Resultado->Caption=sqrt(base);

}
//---------------------------------------------------------------------------

void __fastcall TForm3::Button8Click(TObject *Sender)
{
float x=(*l).Data;
float rad=((x*PI)/180);
float seno= sin(rad);
Resultado->Caption=seno;
//ShowMessage(seno);
}
//---------------------------------------------------------------------------

void __fastcall TForm3::Button9Click(TObject *Sender)
{
float y=(*l).Data;
float rad=((y*PI)/180);
float Coseno= cos(rad);
Resultado->Caption=Coseno;

}
//---------------------------------------------------------------------------

void __fastcall TForm3::Button10Click(TObject *Sender)
{
float z=(*l).Data;
float radian=((z*PI)/180);
float Tangente= tan(radian);
Resultado->Caption=Tangente;
}
//---------------------------------------------------------------------------

void __fastcall TForm3::Button11Click(TObject *Sender)
{
float g=(*l).Data;
Resultado->Caption=log10(g);
}
//---------------------------------------------------------------------------

void __fastcall TForm3::Button12Click(TObject *Sender)
{
float h=(*l).Data;
float Res= log(h);
Resultado->Caption=Res;
}
//---------------------------------------------------------------------------

void __fastcall TForm3::Button13Click(TObject *Sender)
{
	if ((*l).Data%2==0)
	{
		ShowMessage("El Numero 1 es PAR");
	}
	if ((*l).Data%2==1)
	{
		ShowMessage("El Numero 1 es IMPAR");
	}
	if ((*s).Data%2==1)
	{
		ShowMessage("El Numero 2 es IMPAR");
	}
	if ((*s).Data%2==0)
	{
    	ShowMessage("El Numero 2 es PAR");
	}
	Resultado->Caption=(*l).Data%(*s).Data;
}
//---------------------------------------------------------------------------

void __fastcall TForm3::Button14Click(TObject *Sender)
{
float a=(*l).Data;
float b=(*s).Data;
float Res= a*pow(10, b);
Resultado->Caption=Res;
}
//---------------------------------------------------------------------------


void __fastcall TForm3::Button15Click(TObject *Sender)
{
int a=(*l).Data;
float res=a*6.81;
ShowMessage("La conversion de dolares a bolivianos es");
Resultado->Caption=res;

}
//---------------------------------------------------------------------------

void __fastcall TForm3::Button16Click(TObject *Sender)
{
int s=(*l).Data;
float aux=s*7.67;
ShowMessage("La conversion de Euros a bolivianos es");
Resultado->Caption=aux;
}
//---------------------------------------------------------------------------

void __fastcall TForm3::Button17Click(TObject *Sender)
{
float d=(*l).Data;
float da= d*0.145215;
ShowMessage("La conversion de Bolivianos a dolares es");
Resultado->Caption=da;
}
//---------------------------------------------------------------------------

void __fastcall TForm3::Button18Click(TObject *Sender)
{
float t=(*l).Data;
float g=t*0.13002;
ShowMessage("La conversion de Bolivianos a Euros es");
Resultado->Caption=g;
}
//---------------------------------------------------------------------------

