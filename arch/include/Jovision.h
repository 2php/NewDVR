#if !defined(_JOVISION_H_)
#define _JOVISION_H_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef WIN32
	//#include "JVNSDKDef.h"
	#ifdef __cplusplus
		#define JVSERVER_API extern "C"
	#else
		#define JVSERVER_API
	#endif
#else
	#define JVSERVER_API extern "C" __declspec(dllexport)
#endif


//UDPͨ��

///////////////////////////////////////////////////
//����˽ӿ�
///////////////////////////////////////////////////

//����˻ص����������ͻ��˷��͵������ݻص���Ӧ�ó���
//����
//nServerSeq ������� Ψһ����
//pClientIP ������Դ��IP
//nPort ������Դ�Ķ˿�
//pBuff ����
//nLen ���ݳ���
//
typedef bool (*CALL_SERVER_RECEIVE)(int nServerSeq,char* pClientIP,int nPort,char* pBuff,int nLen);


//��ʼ������������һ����ͨ��
//����
//nServerSeq ������룬Ψһ
//nPort ����˿�
//CALL_SERVER_RECEIVE ���ݽ��յĻص�����
//
//����
//true����ʹ�ã�false���󣬴�����Ϣ�鿴��־
#ifndef WIN32
JVSERVER_API bool Udp_Server_Init(int nServerSeq,int nPort,CALL_SERVER_RECEIVE call_SERVER_RECEIVE);
#else
JVSERVER_API bool __stdcall	Udp_Server_Init(int nServerSeq,int nPort,CALL_SERVER_RECEIVE call_SERVER_RECEIVE);
#endif

//����˷��ͺ���
//����
//nServerSeq ������룬��ʼ��ʱ�趨�ĺ���
//pClientIP �ͻ���IP	�ڻص������л�ȡ������ֵ
//nPort �ͻ��˶˿�	�ڻص������л�ȡ������ֵ
//pBuff ��Ҫ���͵�����
//nLen ���ݳ���
//
#ifndef WIN32
JVSERVER_API void Udp_Server_Send(int nServerSeq,char* pClientIP,int nPort,char* pBuff,int nLen);
#else
JVSERVER_API void __stdcall	Udp_Server_Send(int nServerSeq,char* pClientIP,int nPort,char* pBuff,int nLen);
#endif


//�����ֹͣ1����
//����
//nServerSeq ��Ҫֹͣ�ķ�����
//
//����
//true ������false ʧ��
#ifndef WIN32
JVSERVER_API bool Udp_Server_Release(int nServerSeq);
#else
JVSERVER_API bool __stdcall	Udp_Server_Release(int nServerSeq);
#endif



///////////////////////////////////////////////////
//�ͻ��˽ӿ�
///////////////////////////////////////////////////

//�ͻ��˻ص����������ͻ��˷��͵������ݻص���Ӧ�ó���

//nClientSeq �ͻ��˺��� Ψһ����
//pServerIP ������Դ��IP
//nPort������Դ�Ķ˿�
//pBuff����
//nLen���ݳ���
//
typedef bool (*CALL_CLIENT_RECEIVE)(int nClientSeq,char* pServerIP,int nPort,char* pBuff,int nLen);


//��ʼ������������һ�ͻ���ͨ��
//����
//nClientSeq �ͻ��˺��룬Ψһ
//pServerIP ������IP
//nPort ����˿�
//CALL_CLIENT_RECEIVE ���ݽ��յĻص�����
//
//����
//true����ʹ�ã�false���󣬴�����Ϣ�鿴��־
#ifndef WIN32
JVSERVER_API bool Udp_Client_Init(int nClientSeq,char* pServerIP,int nPort,CALL_CLIENT_RECEIVE call_CLIENT_RECEIVE);
#else
JVSERVER_API bool __stdcall	Udp_Client_Init(int nClientSeq,char* pServerIP,int nPort,CALL_CLIENT_RECEIVE call_CLIENT_RECEIVE);
#endif

//�ͻ��˷��ͺ���
//����
//nClientSeq �ͻ��˺��룬��ʼ��ʱ�趨�ĺ���
//pBuff ��Ҫ���͵�����
//nLen ���ݳ���
//
#ifndef WIN32
JVSERVER_API void Udp_Client_Send(int nClientSeq,char* pBuff,int nLen);
#else
JVSERVER_API void __stdcall	Udp_Client_Send(int nClientSeq,char* pBuff,int nLen);
#endif

//ֹͣͨ��ͨ��
//����
//nClientSeq ��Ҫֹͣ�ı��
//
//����
//true ������false ʧ��
#ifndef WIN32
JVSERVER_API bool Udp_Client_Release(int nClientSeq);
#else
JVSERVER_API bool __stdcall	Udp_Client_Release(int nClientSeq);
#endif

////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////

//TCPͨ��
//�ص������ο�UDPͨ��

///////////////////////////////////////////////////
//����˽ӿ�
///////////////////////////////////////////////////

//��ʼ������������һ����ͨ��
//����
//nServerSeq ������룬Ψһ
//nPort ����˿�
//CALL_SERVER_RECEIVE ���ݽ��յĻص�����
//
//����
//true����ʹ�ã�false���󣬴�����Ϣ�鿴��־
#ifndef WIN32
JVSERVER_API bool Tcp_Server_Init(int nServerSeq,int nPort,CALL_SERVER_RECEIVE call_SERVER_RECEIVE);
#else
JVSERVER_API bool __stdcall	Tcp_Server_Init(int nServerSeq,int nPort,CALL_SERVER_RECEIVE call_SERVER_RECEIVE);
#endif

//����˷��ͺ���
//����
//nServerSeq ������룬��ʼ��ʱ�趨�ĺ���
//pClientIP �ͻ���IP	�ڻص������л�ȡ������ֵ
//nPort �ͻ��˶˿�	�ڻص������л�ȡ������ֵ
//pBuff ��Ҫ���͵�����
//nLen ���ݳ���
//
#ifndef WIN32
JVSERVER_API void Tcp_Server_Send(int nServerSeq,char* pClientIP,int nPort,char* pBuff,int nLen);
#else
JVSERVER_API void __stdcall	Tcp_Server_Send(int nServerSeq,char* pClientIP,int nPort,char* pBuff,int nLen);
#endif


//�����ֹͣ1����
//����
//nServerSeq ��Ҫֹͣ�ķ�����
//
//����
//true ������false ʧ��
#ifndef WIN32
JVSERVER_API bool Tcp_Server_Release(int nServerSeq);
#else
JVSERVER_API bool __stdcall	Tcp_Server_Release(int nServerSeq);
#endif


///////////////////////////////////////////////////
//�ͻ��˽ӿ�
///////////////////////////////////////////////////

//�ͻ��˻ص����������ͻ��˷��͵������ݻص���Ӧ�ó���


//��ʼ������������һ�ͻ���ͨ��
//����
//nClientSeq �ͻ��˺��룬Ψһ
//pServerIP ������IP
//nPort ����˿�
//CALL_CLIENT_RECEIVE ���ݽ��յĻص�����
//
//����
//true����ʹ�ã�false���󣬴�����Ϣ�鿴��־
#ifndef WIN32
JVSERVER_API bool Tcp_Client_Init(int nClientSeq,char* pServerIP,int nPort,CALL_CLIENT_RECEIVE call_CLIENT_RECEIVE);
#else
JVSERVER_API bool __stdcall	Tcp_Client_Init(int nClientSeq,char* pServerIP,int nPort,CALL_CLIENT_RECEIVE call_CLIENT_RECEIVE);
#endif

//�ͻ��˷��ͺ���
//����
//nClientSeq �ͻ��˺��룬��ʼ��ʱ�趨�ĺ���
//pBuff ��Ҫ���͵�����
//nLen ���ݳ���
//
#ifndef WIN32
JVSERVER_API void Tcp_Client_Send(int nClientSeq,char* pBuff,int nLen);
#else
JVSERVER_API void __stdcall	Tcp_Client_Send(int nClientSeq,char* pBuff,int nLen);
#endif

//ֹͣ1ͨ��ͨ��
//����
//nClientSeq ��Ҫֹͣ�ı��
//
//����
//true ������false ʧ��
#ifndef WIN32
JVSERVER_API bool Tcp_Client_Release(int nClientSeq);
#else
JVSERVER_API bool __stdcall	Tcp_Client_Release(int nClientSeq);
#endif

//nServerSeq nClientSeq ������ͬ�������е�nServerSeq���������ظ������е�nClientSeq�������ظ�

#endif


