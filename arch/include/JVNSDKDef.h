#ifndef _JVNSDKDEF_H
#define _JVNSDKDEF_H

#ifndef WIN32
#ifdef __cplusplus
	#define JVSERVER_API extern "C"
#else
	#define JVSERVER_API
#endif
	#include <sys/socket.h>
 
	typedef struct _GUID 
	{ 
		unsigned long   Data1; 
		unsigned short  Data2; 
		unsigned short  Data3; 
		unsigned char   Data4[8]; 
	}GUID;

    #define JVN_BYTE unsigned char
    typedef struct sockaddr SOCKADDR;
#else
	#define JVSERVER_API extern "C" __declspec(dllexport)
	#include <winsock2.h>
#endif

/*ʵʱ�����������*/
#define JVN_DATA_I           0x01//��ƵI֡
#define JVN_DATA_B           0x02//��ƵB֡
#define JVN_DATA_P           0x03//��ƵP֡
#define JVN_DATA_A           0x04//��Ƶ
#define JVN_DATA_S           0x05//֡�ߴ�
#define JVN_DATA_OK          0x06//��Ƶ֡�յ�ȷ��
#define JVN_DATA_DANDP       0x07//���ػ�ط��յ�ȷ��
#define JVN_DATA_O           0x08//�����Զ�������
#define JVN_DATA_SKIP        0x09//��ƵS֡
/*��������*/
#define JVN_REQ_CHECK        0x10//����¼�����
#define JVN_REQ_DOWNLOAD     0x20//����¼������
#define JVN_REQ_PLAY         0x30//����Զ�̻ط�
#define JVN_REQ_CHAT         0x40//������������
#define JVN_REQ_TEXT         0x50//�����ı�����
#define JVN_REQ_CHECKPASS    0x71//���������֤
#define JVN_REQ_RECHECK      0x13//Ԥ��֤
#define JVN_RSP_OLD          0x15//�ɰ����ػظ�
#define JVN_REQ_MOTYPE		 0x72//���������֤ ע����ֵ������һ���Ͷ���ֵ��ͬ����Ӧ���⣬�ݱ�������
/*���󷵻ؽ������*/
#define JVN_RSP_CHECKDATA    0x11//�������
#define JVN_RSP_CHECKOVER    0x12//�������
#define JVN_RSP_DOWNLOADDATA 0x21//��������
#define JVN_RSP_DOWNLOADOVER 0x22//�����������
#define JVN_RSP_DOWNLOADE    0x23//��������ʧ��
#define JVN_RSP_PLAYDATA     0x31//�ط�����
#define JVN_RSP_PLAYOVER     0x32//�ط����
#define JVN_RSP_PLAYE        0x39//�ط�ʧ��
#define JVN_RSP_CHATDATA     0x41//��������
#define JVN_RSP_CHATACCEPT   0x42//ͬ����������
#define JVN_RSP_TEXTDATA     0x51//�ı�����
#define JVN_RSP_TEXTACCEPT   0x52//ͬ���ı�����
#define JVN_RSP_CHECKPASST   0x72//�����֤�ɹ�
#define JVN_RSP_CHECKPASSF   0x73//�����֤ʧ��
#define JVN_RSP_NOSERVER     0x74//�޸�ͨ������
#define JVN_RSP_INVALIDTYPE  0x7A//����������Ч
#define JVN_RSP_OVERLIMIT    0x7B//���ӳ�����������������Ŀ
#define JVN_RSP_DLTIMEOUT    0x76//���س�ʱ
#define JVN_RSP_PLTIMEOUT    0x77//�طų�ʱ

/*��������*/
#define JVN_CMD_DOWNLOADSTOP 0x24//ֹͣ��������
#define JVN_CMD_PLAYUP       0x33//���
#define JVN_CMD_PLAYDOWN     0x34//����
#define JVN_CMD_PLAYDEF      0x35//ԭ�ٲ���
#define JVN_CMD_PLAYSTOP     0x36//ֹͣ����
#define JVN_CMD_PLAYPAUSE    0x37//��ͣ����
#define JVN_CMD_PLAYGOON     0x38//��������
#define JVN_CMD_CHATSTOP     0x43//ֹͣ��������
#define JVN_CMD_PLAYSEEK     0x44//���Ŷ�λ		��֡��λ ��Ҫ���� ֡��(1~���֡)
#define JVN_CMD_TEXTSTOP     0x53//ֹͣ�ı�����
#define JVN_CMD_YTCTRL       0x60//��̨����
#define JVN_CMD_VIDEO        0x70//ʵʱ���
#define JVN_CMD_VIDEOPAUSE   0x75//��ͣʵʱ���
#define JVN_CMD_TRYTOUCH     0x78//�򶴰�
#define JVN_CMD_FRAMETIME    0x79//֡����ʱ����(��λms)
#define JVN_CMD_DISCONN      0x80//�Ͽ�����
#define JVN_RSP_DISCONN      0x7C//�Ͽ�����ȷ��

/*������ͨ�������Ľ�����Ϣ*/
#define JVN_CMD_TOUCH        0x81//̽���
#define JVN_REQ_ACTIVEYSTNO  0x82//�������󼤻�YST����
#define JVN_RSP_YSTNO        0x82//����������YST����
#define JVN_REQ_ONLINE       0x83//������������
#define JVN_RSP_ONLINE       0x84//������������������
#define JVN_CMD_ONLINE       0x84//���ص�ַ����
#define JVN_CMD_OFFLINE      0x85//��������
#define JVN_CMD_KEEP         0x86//���ر���
#define JVN_REQ_CONNA        0x87//�ֿ��������ص�ַ
#define JVN_RSP_CONNA        0x87//��������ֿط������ص�ַ
#define JVN_CMD_CONNB        0x87//����������������ֿش�͸
#define JVN_RSP_CONNAF       0x88//��������ֿط��� ����δ����
#define JVN_CMD_RELOGIN		 0x89//֪ͨ�������µ�½
#define JVN_CMD_CLEAR		 0x8A//֪ͨ�������߲����������Ϣ��������ͨ����
#define JVN_CMD_REGCARD		 0x8B//����ע��忨��Ϣ��������

#define JVN_CMD_ONLINES2     0x8C//����������������ת������������/������ת������������
#define JVN_CMD_CONNS2       0x8D//����������ֿ���ת����������������
#define JVN_REQ_S2           0x8E//�ֿ������������ת��
#define JVN_TDATA_CONN       0x8F//�ֿ���ת����������������
#define JVN_TDATA_NORMAL     0x90//�ֿ�/������ת��������������ͨ����

#define JVN_CMD_CARDCHECK    0x91//�忨��֤
#define JVN_CMD_ONLINEEX     0x92//���ص�ַ������չ
#define JVN_CMD_TCPONLINES2  0x93//��������������TCP��ת������������
#define JVN_CMD_CHANNELCOUNT 0x97//�ֿز�ѯ���������е�ͨ����Ŀ
#define JVN_CMD_ONLINE1EX    0x9C//����UDP1������չ(������)
#define JVN_CMD_YSTCHECK     0xAC//��ѯ������ĳ�����Ƿ������Լ���������SDK�汾

/*�ͻ�����ý����������*/
#define JVN_REQ_CONNSTREAM_SVR    0xD0//����������ý�����������
#define JVN_REQ_CONNSTREAM_CLT    0xD1//����������ý��������ֿ�
#define JVN_RSP_CONNSTREAM_SVR    0xD2//�ظ�
#define JVN_RSP_CONNSTREAM_CLT    0xD3
#define JVN_NOTIFY_ID			  0xD4
#define JVN_RSP_ID				  0xD5
#define JVN_CMD_CONNSSERVER		  0xD6
#define JVN_RSP_NEWCLIENT         0xD9

/*�������豸����*/
#define JVN_REQ_LANSERCH  0x01//�������豸��������
#define JVN_CMD_LANSALL   1//����������������ά�豸
#define JVN_CMD_LANSYST   2//����������ָ������ͨ������豸
#define JVN_CMD_LANSTYPE  3//����������ָ����ϵ���豸
#define JVN_CMD_LANSNAME  4//����������ָ���������豸
#define JVN_RSP_LANSERCH  0x02//�������豸������Ӧ����

#define JVN_ALLSERVER     0//���з���
#define JVN_ONLYNET       1//ֻ����������

#define JVN_NOTURN        0//����ͨ��ʽʱ����ת��
#define JVN_TRYTURN       1//����ͨ��ʽʱ����ת��
#define JVN_ONLYTURN      2//����ͨ��ʽʱ����ת��

#define JVN_LANGUAGE_ENGLISH  1
#define JVN_LANGUAGE_CHINESE  2

#define TYPE_PC_UDP      1//�������� UDP ֧��UDP�շ���������
#define TYPE_PC_TCP      2//�������� TCP ֧��TCP�շ���������
#define TYPE_MO_TCP      3//�������� TCP ֧��TCP�շ�������,��ͨ��Ƶ֡�Ȳ��ٷ��ͣ�ֻ�ܲ���ר�ýӿ��շ�����(�������ֻ����)
#define TYPE_MO_UDP      4//�������� TCP ֧��TCP�շ�������,��ͨ��Ƶ֡�Ȳ��ٷ��ͣ�ֻ�ܲ���ר�ýӿ��շ�����(�������ֻ����)

/*��̨��������*/
#define JVN_YTCTRL_U      1//��
#define JVN_YTCTRL_D      2//��
#define JVN_YTCTRL_L      3//��
#define JVN_YTCTRL_R      4//��
#define JVN_YTCTRL_A      5//�Զ�
#define JVN_YTCTRL_GQD    6//��Ȧ��
#define JVN_YTCTRL_GQX    7//��ȦС
#define JVN_YTCTRL_BJD    8//�佹��
#define JVN_YTCTRL_BJX    9//�佹С
#define JVN_YTCTRL_BBD    10//�䱶��
#define JVN_YTCTRL_BBX    11//�䱶С

#define JVN_YTCTRL_UT     21//��ֹͣ
#define JVN_YTCTRL_DT     22//��ֹͣ
#define JVN_YTCTRL_LT     23//��ֹͣ
#define JVN_YTCTRL_RT     24//��ֹͣ
#define JVN_YTCTRL_AT     25//�Զ�ֹͣ
#define JVN_YTCTRL_GQDT   26//��Ȧ��ֹͣ
#define JVN_YTCTRL_GQXT   27//��ȦСֹͣ
#define JVN_YTCTRL_BJDT   28//�佹��ֹͣ
#define JVN_YTCTRL_BJXT   29//�佹Сֹͣ
#define JVN_YTCTRL_BBDT   30//�䱶��ֹͣ
#define JVN_YTCTRL_BBXT   31//�䱶Сֹͣ

#define JVN_YTCTRL_RECSTART  41//Զ��¼��ʼ
#define JVN_YTCTRL_RECSTOP	 42//Զ��¼��ʼ

/*���ػص�����*/
typedef bool (*FUNC_SCHECKPASS_CALLBACK)(int nLocalChannel, char chClientIP[16], int nClientPort, char *pName, char *pWord);
typedef void (*FUNC_SCONNECT_CALLBACK)(int nLocalChannel, int nClientID, unsigned char uchType, char chClientIP[16], int nClientPort, char *pName, char *pWord);
typedef void (*FUNC_SONLINE_CALLBACK)(int nLocalChannel, unsigned char uchType);
typedef void (*FUNC_SCHECKFILE_CALLBACK)(int nLocalChannel, int nClientID, char chClientIP[16], int nClientPort, char chStartTime[14], char chEndTime[14], JVN_BYTE *pBuffer, int *nSize);
typedef void (*FUNC_SCHAT_CALLBACK)(int nLocalChannel, int nClientID, unsigned char uchType, char chClientIP[16], int nClientPort, JVN_BYTE *pBuffer, int nSize);
typedef void (*FUNC_STEXT_CALLBACK)(int nLocalChannel, int nClientID, unsigned char uchType, char chClientIP[16], int nClientPort, JVN_BYTE *pBuffer, int nSize);
typedef void (*FUNC_SYTCTRL_CALLBACK)(int nLocalChannel, int nClientID, int nType, char chClientIP[16], int nClientPort);
/*�ֿػص�����*/
typedef void (*FUNC_CCONNECT_CALLBACK)(int nLocalChannel, unsigned char uchType, char *pMsg);
typedef void (*FUNC_CNORMALDATA_CALLBACK)(int nLocalChannel, unsigned char uchType, JVN_BYTE *pBuffer, int nSize, int nWidth, int nHeight);
typedef void (*FUNC_CCHECKRESULT_CALLBACK)(int nLocalChannel,JVN_BYTE *pBuffer, int nSize);
typedef void (*FUNC_CCHATDATA_CALLBACK)(int nLocalChannel, unsigned char uchType, JVN_BYTE *pBuffer, int nSize);
typedef void (*FUNC_CTEXTDATA_CALLBACK)(int nLocalChannel, unsigned char uchType, JVN_BYTE *pBuffer, int nSize);
typedef void (*FUNC_CDOWNLOAD_CALLBACK)(int nLocalChannel, unsigned char uchType, JVN_BYTE *pBuffer, int nSize, int nFileLen);
typedef void (*FUNC_CPLAYDATA_CALLBACK)(int nLocalChannel, unsigned char uchType, JVN_BYTE *pBuffer, int nSize, int nWidth, int nHeight, int nTotalFrame);
typedef void (*FUNC_CLANSDATA_CALLBACK)(int nYSTNO, int nCardType, int nChannelCount, char chClientIP[16], int nClientPort, BOOL bTimoOut);
/************���ػص�������������***************/
/*FUNC_SCONNECT_CALLBACK*/
#define JVN_SCONNECTTYPE_PCCONNOK  0X01//��PC�ֿ����ӳɹ�
#define JVN_SCONNECTTYPE_DISCONNOK 0X02//�зֿضϿ����ӳɹ�
#define JVN_SCONNECTTYPE_DISCONNE  0X03//�����쳣�Ͽ�
#define JVN_SCONNECTTYPE_MOCONNOK  0X04//���ƶ��豸�ֿ����ӳɹ�
/*FUNC_SONLINE_CALLBACK*/
#define JVN_SONLINETYPE_ONLINE     0x01//����
#define JVN_SONLINETYPE_OFFLINE    0x02//����
#define JVN_SONLINETYPE_CLEAR      0x03//YST������Ч��Ӧ�����������

/************�ֿػص�������������***************/
/*FUNC_CCONNECT_CALLBACK*/
#define JVN_CCONNECTTYPE_CONNOK    0X01//���ӳɹ�
#define JVN_CCONNECTTYPE_DISOK     0X02//�Ͽ����ӳɹ�
#define JVN_CCONNECTTYPE_RECONN    0X03//�����ظ�����
#define JVN_CCONNECTTYPE_CONNERR   0X04//����ʧ��
#define JVN_CCONNECTTYPE_NOCONN    0X05//û����
#define JVN_CCONNECTTYPE_DISCONNE  0X06//�����쳣�Ͽ�
#define JVN_CCONNECTTYPE_SSTOP     0X07//����ֹͣ�����ӶϿ�
#define JVN_CCONNECTTYPE_DISF      0x08//�Ͽ�����ʧ��


/*����ֵ*/
#define JVN_RETURNOK    0//�ɹ�
#define JVN_PARAERROR   1//��������
#define JVN_RETURNERROR 2//ʧ��


/*�������ʱ�����ߴ���ṹ*/
typedef struct 
{
	char chGroup[4];//����ţ�����"A" "AAAA"
	int nCardType;  //��ϵ
	int	nDate;      //�������� ���� 20091011
	int	nSerial;    //�������к�
	GUID guid;      //ΨһGUID MAPIGUID.H
}STGetNum;
/*��ʼ��ʱ�����ߴ���Ľṹ*/
typedef struct
{
	char chGroup[4];//����ţ�����"A" "AAAA"
	int nCardType; //��ϵ
	int	nDate;     //��������
	int	nSerial;   //�������к�
	GUID gLoginKey;//�忨GUID
	int  nYstNum;  //����ͨ����
}STOnline;



/*���ݰ�:����YST����*/
typedef struct
{
	int nCardType;  //��ϵ
	int	nDate;      //�������� ���� 20091011
	int	nSerial;    //�������к�
	GUID guid;      //ΨһGUID MAPIGUID.H
}Pak_GetNum;

/*���ݰ�:����*/
typedef struct
{
	int nCardType; //��ϵ
	int	nDate;     //��������
	int	nSerial;   //�������к�
	GUID gLoginKey;//�忨GUID
	int  nYstNum;  //����ͨ����
}Pak_Online1; 

typedef struct
{
	int		nType;//�忨����
	int		nDate; //��������
	int		nSerial; //�������к�
	GUID	gLoginKey; //��½����
	int     nYstNum;   //����ͨ����
	char    chGroup[4];//����� �ݲ�ʹ��
	int     nNSDKVer;//��������SDK�汾(Э��汾)
	int     nChannelCount; //����ͨ������Ŀ
}Pak_Online1Ex; //YST_AS_ONLINE1  ���ݽṹ

/*���ݰ�:����Ӧ��*/
typedef struct
{
	int	nIndex;     //˳���
	GUID gLoginKey; //��½����
}Pak_LoginKey; 

/*���ݰ�: ��ַ����*/
typedef struct
{
	int nYstNum;       //����ͨ����
	int	nIndex;        //˳���
	GUID gLoginKey;    //��½����
	SOCKADDR InAddress;//������ַ
	int nVer;          //���صİ汾
}Pak_Online2;

/*���ݰ�: ��ַ����*/
typedef struct
{
	int nYstNum;       //����ͨ����
	int	nIndex;        //˳���
	GUID gLoginKey;    //��½����
	SOCKADDR InAddress;//������ַ
	int nVer;          //���صİ汾
	int nTCPSerPort;   //TCP����˿�
}Pak_Online2Ex;

/*���ݰ�: ����*/
typedef struct
{
	int	nYstNum;
	int	nIndex;
	GUID gLoginKey;//��½����
}Pak_Logout;

typedef struct
{
	unsigned int nTypeLens; //YST_AS_REGCARD	
	//��������
	int nSize;
	char *pacData;
}SOCKET_DATA_TRAN;

//�ӿں���
JVSERVER_API bool JVN_InitSDK(int nYSTPort, int nLocPort, int nSPort, int nVersion);
JVSERVER_API bool JVN_InitSDKEx(int nYSTPort, int nLocPort, int nSPort, int nVersion, long lRSBuffer);
JVSERVER_API void JVN_ReleaseSDK();
JVSERVER_API void JVN_RegisterCallBack(FUNC_SCHECKPASS_CALLBACK CheckPassCallBack,
									  FUNC_SONLINE_CALLBACK OnlineCallBack,
									  FUNC_SCONNECT_CALLBACK ConnectCallBack,
									  FUNC_SCHECKFILE_CALLBACK CheckFileCallBack,
									  FUNC_SYTCTRL_CALLBACK YTCtrlCallBack,
									  FUNC_SCHAT_CALLBACK ChatCallBack,
									  FUNC_STEXT_CALLBACK TextCallBack);
JVSERVER_API bool JVN_ActiveYSTNO(char *pchPackGetNum, int nLen, int *nYSTNO);
JVSERVER_API void JVN_InitYST(char *pchPackOnline, int nLen);
JVSERVER_API bool JVN_StartChannel(int nChannel, int nType, long lBufLen);
JVSERVER_API void JVN_StopChannel(int nChannel);
JVSERVER_API void JVN_SendData(int nChannel,unsigned char uchType,JVN_BYTE *pBuffer,int nSize,int nWidth,int nHeight);
JVSERVER_API void JVN_SendDataTo(int nClientID,unsigned char uchType,JVN_BYTE *pBuffer,int nSize,int nWidth,int nHeight);
JVSERVER_API void JVN_SendChatData(int nChannel,int nClientID,unsigned char uchType,JVN_BYTE *pBuffer,int nSize);
JVSERVER_API void JVN_EnableLog(bool bEnable);
JVSERVER_API void JVN_SetLanguage(int nLgType);
JVSERVER_API bool JVN_RegCard(char chGroup[4], JVN_BYTE *pBuffer,int nSize);
JVSERVER_API bool JVN_SendAndRecvS(char chGroup[4], JVN_BYTE *pBuffer,int nSize, JVN_BYTE *pRecvBuffer,int *nRecvLen,int nTimeOut);
JVSERVER_API bool JVN_StartWebServer(char chHomeDir[256], char chDefIndex[256], char chLocalIP[30], int nPort);
JVSERVER_API void JVN_StopWebServer();
JVSERVER_API bool JVN_StartTCPServer(int nPort);
JVSERVER_API void JVN_StopTCPServer();
JVSERVER_API int JVN_GetLanguage();
JVSERVER_API void JVN_SetClientLimit(int nChannel, int nMax);
JVSERVER_API int JVN_GetClientLimit(int nChannel);
JVSERVER_API void JVN_SendMOTCPData(int nChannel,unsigned char uchType,JVN_BYTE *pBuffer,int nSize);
JVSERVER_API void JVN_SendMOTCPDataDirect(int nChannel,unsigned char uchType,JVN_BYTE *pBuffer, int nOffset, int nSize);
JVSERVER_API void JVN_SendDataDirect(int nChannel, JVN_BYTE uchType, JVN_BYTE *pBuffer, int nOffset, int nSize);


/****************************************************************************
*����  : JVN_StartLANSerchServer
*����  : ������������������
*����  : [IN] nChannelCount ��ǰ�豸�ܵ�ͨ����
         [IN] nPort         ����˿ں�(<=0ʱΪĬ��9103,����ʹ��Ĭ��ֵ��ֿض�ͳһ)
*����ֵ: ��
*����  : ��
*****************************************************************************/
#ifndef WIN32
	JVSERVER_API bool JVN_StartLANSerchServer(int nChannelCount, int nPort);
#else
	JVSERVER_API bool __stdcall JVN_StartLANSerchServer(int nChannelCount, int nPort);
#endif

/****************************************************************************
*����  : JVN_StopLANSerchServer
*����  : ֹͣ��������������
*����  : ��
*����ֵ: ��
*����  : ��
*****************************************************************************/
#ifndef WIN32
	JVSERVER_API void JVN_StopLANSerchServer();
#else
	JVSERVER_API void __stdcall JVN_StopLANSerchServer();
#endif


/****************************************************************************
*����  : JVN_SetLocalFilePath
*����  : �Զ��屾���ļ��洢·����������־�����ɵ������ؼ��ļ��� 
*����  : [IN] chLocalPath  ·�� ���磺"C:\\jovision"  ����jovision���ļ���
*����ֵ: ��
*����  : ����ʹ���ڴ濽��ʱ��ע���ʼ�����ַ�������'\0'����
*****************************************************************************/
#ifndef WIN32
	JVSERVER_API bool JVN_SetLocalFilePath(char chLocalPath[256]);
#else
	JVSERVER_API bool __stdcall	JVN_SetLocalFilePath(char chLocalPath[256]);
#endif

#endif
