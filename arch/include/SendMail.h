#ifndef _SENDMAIL_H
#define _SENDMAIL_H

#ifdef __cplusplus
extern "C" {
#endif 

#define MAIL_MAX_STR_LEN			128
#define MAIL_MAX_CONTENT_LEN		512
#define MAIL_MAX_RECIPIENT_LEN		32

// TLS/SSL extension
typedef enum
{
	NO_SECURITY,
	USE_TLS,
	USE_SSL,
	DO_NOT_SET
}SMTP_SECURITY_TYPE;

//0  �ɹ�
//-1 ʧ��
int SendMail(char pServer[MAIL_MAX_STR_LEN],		//smtp
	unsigned int nPort,							//port
	SMTP_SECURITY_TYPE security,					//��֤��ʽ
	char pSender[MAIL_MAX_STR_LEN],					//�����˵�ַ
	char pPWD[MAIL_MAX_STR_LEN],					//����
	char pSubject[MAIL_MAX_STR_LEN],				//����
	char pCharset[MAIL_MAX_STR_LEN],				//�ʼ�����
	char pContent[MAIL_MAX_CONTENT_LEN],			//����
	int  bIsHtml,									//�Ƿ�html��ʽ����
	char pRecipient[][MAIL_MAX_RECIPIENT_LEN],		//�ռ���
	int  nRecipientCt,								//�ռ�������
	char pAttachment[MAIL_MAX_STR_LEN]				//����
	);

#ifdef __cplusplus
}
#endif 
#endif

