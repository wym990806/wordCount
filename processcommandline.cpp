#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;

bool flagm=false;//Ĭ�ϲ����д����Ƶͳ��
int m=1;//Ĭ�ϴ��鵥����Ϊ1 
int n=10;//Ĭ�������Ƶǰ10λ 
char inputpath[100];
char outputpath[100];

/*�����д���*/ 
void processcommandline(int argc,char **argv)
{
	/*�����ж�*/ 
	for(int i=1;i<argc;i++)
	{
		/*�����ļ�*/ 
		if(strcmp(argv[i],"-i")==0)
		{
			i++;
			strcpy(inputpath,argv[i]);
		}
		/*����ļ�*/ 
		else if(strcmp(argv[i],"-o")==0)
		{
			i++;
			strcpy(outputpath,argv[i]);
		}
		/*����*/ 
		else if(strcmp(argv[i],"-m")==0)
		{
			flagm=true;//���������Ƶͳ�ƹ��� 
			i++;
			m = argv[i][0] - '0';
		}
		/*��Ƶ������*/ 
		else if(strcmp(argv[i],"-n")==0)
		{
			i++;
			n = argv[i][0] - '0';
		}
	}
}
