#ifndef _TCP_RING_H_
#define _TCP_RING_H_


#define MAX_RING_SIZE		1024 * 1024 * 500


class CRingBuf
{
public:
	CRingBuf();
	~CRingBuf();

public:
	//��ʼ��
	bool Init(unsigned int nSize = MAX_RING_SIZE);

    void Clear();

	//д������
	unsigned char *Write(unsigned char *pData, unsigned int nLen);

	//���ö�λ��
	bool SetRead(unsigned char *pData);

	float GetUsed(unsigned int& uDrop);

public:
	unsigned char *m_pData;

	unsigned int m_nWrPos;		//дָ��
	unsigned int m_nRdPos;		//��ָ��

	unsigned int m_nSize;

	unsigned int m_uDropCount;
	
};
#endif

