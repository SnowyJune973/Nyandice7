#pragma comment(lib,"CQ_SDK.lib")
#include <CQSDK.h>
#include "stdafx.h"

//----��ΪʲôҪ�޸����ID----
//�������Ĳ������,һ����һ�޶�������

//----��Ӧ������޸����ID----
//������Ӧ���޸��·���CQAPPID
//Ȼ���޸���Ŀ����      (����ָ��VSʹ��������������ļ�)
//����޸�json�ļ�����

//----��Ӧ���޸ĳ�ʲô----
//����� http://d.cqp.me/Pro/����/������Ϣ
#define CQAPPID "asia.snowyjune.nyandice7"

#define CQAPPINFO CQAPIVERTEXT "," CQAPPID

//����Ҫ��һ�仰
//MUST_AppInfo_RETURN(CQAPPID);
static Logger logger;

EVE_Startup_EX(Startup) {

}