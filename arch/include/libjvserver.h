#ifndef LIBJVSERVER_H
#define LIBJVSERVER_H

//����ͨͷ�ļ��м�㡣
//Ŀ���ǣ�ֱ�Ӱ�����ͨ�����ͷ�ļ���������������


//V2.0�汾����ֲ����
//1.������ͨ�����JVNSDKDef.h��JvServer.h��������������ΪJVNSDKDef-V2.h��JvServer-V2.h
//2.���룬�ѱ���ġ����á���Ϊ��ָ�롱
#if YST_2_0

/*��ͷ�ļ����Ѿ�������
#include <sys/socket.h>
typedef struct _GUID 
{ 
unsigned long   Data1; 
unsigned short  Data2; 
unsigned short  Data3; 
unsigned char   Data4[8]; 
}GUID;
*/

#define BYTE unsigned char
typedef struct sockaddr SOCKADDR;
#define JVSERVER_API

//#define MAX_PATH 255	//���ֵ�Ǹ������ʵ�

#include "JvServer-V2.h"

//V1.0�汾������ͨ���ٸ����ˣ�ͷ�ļ�Ҳ�Ͳ�����
#else
#include "JVNSDKDef.h"
#endif

#endif
