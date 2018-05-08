#include "list.h"

using namespace std;
int  j=0;
int arr1[100];
int stack[100];
int head = -1;


void proposisi (char *x, int &i, bool &status)
{
    if ((x[i]=='p')or (x[i]=='q')or (x[i]=='r')or(x[i]=='s')
            or(x[i]=='P')or (x[i]=='Q')or (x[i]=='R')or(x[i]=='S'))
    {
        i++;
        if ((x[i]==' ')||(i>=strlen(x)))
        {
            i++;
            arr1[j] = 1;
            j++;
            status=true;
        }
        else
        {
            status=false;
        }
    }
    else
    {
        status=false;
    }
}

void Not (char *x, int &i, bool &status)
{
    if ((x[i]=='n') or (x[i]=='N'))
    {
        i++;
        if ((x[i]=='o')or (x[i]=='O'))
        {
            i++;
            if ((x[i]=='t')or (x[i]=='T'))
            {
                i++;
                if((x[i]==' ')or(i==strlen(x)))
                {
                    i++;
                    arr1[j] = 2;
                    j++;;
                    status=true;
                }
                else
                {
                    status=false;
                }
            }
            else
            {
                status=false;
            }
        }
        else
        {
            status=false;
        }
    }
    else
    {
        status=false;
    }
}

void And (char* x, int &i, bool &status)
{
    if ((x[i]=='a') or (x[i] == 'A'))
    {
        i++;
        if ((x[i]=='n')or(x[i]='N'))
        {
            i++;
            if ((x[i]=='d')or(x[i]== 'D'))
            {
                i++;
                if((x[i]==' ')or (i==strlen(x)))
                {
                    i++;
                    arr1[j] = 3;
                    j++;
                    status=true;
                }
                else
                {
                    status=false;
                }
            }
            else
            {
                status=false;
            }
        }
        else
        {
            status=false;
        }
    }
    else
    {
        status=false;
    }
}

void Or (char *x, int &i, bool &status)
{
    if ((x[i]=='o')or(x[i]='O'))
    {
        i++;
        if ((x[i]=='r')or (x[i]=='R'))
        {
            i++;
            if ((x[i]==' ')or (i==strlen(x)))
            {
                i++;
                arr1[j] = 4;
                j++;
                status=true;
            }
            else
            {
                status=false;
            }
        }
        else
        {
            status=false;
        }
    }
    else
    {
        status=false;
    }
}

void Xor (char *x, int &i, bool &status)
{
    if ((x[i]=='x')or (x[i]=='X'))
    {
        i++;
        if ((x[i]=='o')or(x[i]=='O'))
        {
            i++;
            if ((x[i]=='r')or (x[i]=='R'))
            {
                i++;
                if ((x[i]==' ')or (i==strlen(x)))
                {
                    i++;
                    arr1[j] = 5;
                    j++;
                    status=true;
                }
                else
                {
                    status=false;
                }
            }
        }
        else
        {
            status=false;
        }
    }
    else
    {
        status=false;
    }
}

void If (char *x, int &i, bool &status)
{
    if ((x[i]=='i')or (x[i]=='I'))
    {
        i++;
        if ((x[i]=='f')or (x[i]=='F'))
        {
            i++;
            if ((x[i]=='f') or (x[i]=='F'))
            {
                i++;
                if ((x[i]==' ')or (i>=strlen(x)))
                {
                    i++;
                    arr1[j] = 8;
                    j++;
                    status=true;
                }
                else
                {
                    status=false;
                }
            }
            else if ((x[i]==' ')or (i>=strlen(x)))
            {
                i++;
                arr1[j] = 6;
                j++;
                status=true;
            }
            else
            {
                status = false;
            }
        }
        else
        {
            status=false;
        }
    }
    else
    {
        status=false;
    }
}

void Then (char *x, int &i, bool &status)
{
    if ((x[i]=='t') or (x[i]='T'))
    {
        i++;
        if ((x[i]=='h')or (x[i]=='H'))
        {
            i++;
            if ((x[i]=='e')or (x[i]=='E'))
            {
                i++;
                if ((x[i]=='n')or (x[i]=='N'))
                {
                    i++;
                    if ((x[i]==' ')or(i==strlen(x)))
                    {
                        i++;
                        arr1[j] = 7;
                        j++;
                        status=true;
                    }
                    else
                    {
                        status=false;
                    }
                }
                else
                {
                    status=false;
                }
            }
            else
            {
                status=false;
            }
        }
        else
        {
            status=false;
        }
    }
    else
    {
        status=false;
    }
}

void kurungBuka(char *x, int &i, bool &status)
{
    if (x[i]=='(')
    {
        i++;
        if((x[i]==' ')or(i==strlen(x)))
        {
            i++;
            arr1[j] = 9;
            j++;
            status=true;
        }
        else
        {
            status=false;
        }
    }
    else
    {
        status=false;
    }
}

void kurungTutup (char *x, int &i, bool &status)
{
    if (x[i]==')')
    {
        i++;
        if((x[i]==' ')or (i==strlen(x)))
        {
            i++;
            arr1[j] = 10;
            j++;
            status=true;
        }
        else
        {
            status=false;
        }
    }
    else
    {
        status=false;
    }
}

void printInfo()
{
    int k=0;
    while(k<j)
    {
        cout<<arr1[k];
        k++;
    }

};


void push(int x)
{
    head++;
    stack[head] = x;
}

bool pop(int x)
{
    bool cek = false;
    if(x==stack[head])
    {
        stack[head] = 0;
        head--;
        cek = true;
    }
    else
    {
        cek = false;
    }
    return cek;
}

bool ValidasiLexic()
{
    bool cekOprator = true, cek = true, cekkurung = true;
    push(11);
    bool cekNot = false, cekAwal = true;
    for (int i = 0; i < j; i++)
    {
        if(arr1[i]==9)
        {
            //kurung buka
            push(9);
            if(arr1[i+1]!=1 && arr1[i+1]!=2 && arr1[i+1]!=6)
            {
                cek=false;
            }
        }
        else if(arr1[i]==10)
        {
            //kurung tutup
            cekkurung=pop(9);
            if(cekkurung)
            {
                cekkurung = true;
            }
            else
            {
                cekkurung = false;
                break;
            }
        }
        else if(arr1[i]==6)
        {
            // if
            if(cekOprator && !cekNot && !cekAwal)
            {
                cek = false;
            }
            else if(!cekOprator && !cekNot)   //IF OPERAN
            {
                cek = false;
            }
            else
            {
                push(6);
                cekAwal = false;
                cekOprator = true;
                cekNot = false;
            }
        }
        else if(arr1[i]==7)
        {
            // then
            if(cekOprator)
            {
                cek = false;
            }
            else
            {
                if(!pop(6))
                {
                    cek = false;
                }
                cekOprator = true;
            }
        }
        else   // BUKAN IF THEN ( )
        {
            if(cekOprator && !cekNot)
            {
                // Ketika Sebelumnya adalah operator dan bukan (not)
                if(arr1[i]==1)
                {
                    cekAwal = false;
                    cekOprator = false;
                    cekNot = false;
                }
                else if(arr1[i]==2)
                {
                    cekAwal = false;
                    cekNot = true;
                }
                else   //SELAIN OPERAN DAN NOT
                {
                    cek = false;
                }
            }
            else if(cekNot)
            {
                // Ketika Sebelumnya adalah operator not
                if(arr1[i]==1)
                {
                    cekAwal = false;
                    cekOprator = false;
                    cekNot = false;
                }
                else if(arr1[i]==2)
                {
                    cek = false;
                }
                else
                {
                    cek = false;
                }
            }
            else
            {
                // Ketika Sebelumnya adalah tidak operator dan tidak (not) / sebelumnya adalah operand
                if(arr1[i]==1)
                {
                    cek = false;
                }
                else if(arr1[i]==2)
                {
                    cek = false;
                }
                else
                {
                    cekAwal = false;
                    cekOprator = true;
                }
            }
        }
    }
    if(pop(11) && cek && cekkurung && !cekOprator && !cekNot)
    {
        return true;
    }
    else if(!cekkurung || head!=-1)
    {
        return false;
    }
    else if(!cek)
    {
        return false;
    }
    else
    {
        return false;
    }
}
