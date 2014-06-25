#ifndef __SW_FB_H__
#define __SW_FB_H__

#include "sw_types.h"

typedef struct _FRAMEBUFFER
{
	S32			hFB;				//���
	U8 *		pMappedAddr;		//ӳ�䵽Ӧ�ò���û�̬��ַ
	U8 *		pPhyAddr;			//�����ַ
	U32		    u32MemSize;			//�ڴ��С
}FRAMEBUFFER, *PFRAMEBUFFER;
typedef struct
{
	S32 nW;
	S32 nH;
}SIZE_T;
typedef struct
{
    FRAMEBUFFER *pWinFb;            //���ڲ�fb
    FRAMEBUFFER *pHdOsdFb;          //HD��osd��
    FRAMEBUFFER *pSdOsdFb;          //SD��osd��
    FRAMEBUFFER *pResFb;            //����ͼƬ��Դ��fb
    U32         nCurDev;			//��ʾgui���豸
    
    SIZE_T      pSzWin;				//���ڲ�Ĵ�С
    U32 tcClear;				 
    
    
}DC_S;

#endif
