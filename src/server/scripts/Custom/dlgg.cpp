#include "ScriptPCH.h"


class Announce_OnPlayerLogin : public PlayerScript
{
public:
Announce_OnPlayerLogin() : PlayerScript("Announce_OnPlayerLogin") {}

void OnLogin(Player * player)
{
char msg[250];
sprintf(msg, 250,"|CFF7BBEF7[��½��Ϣ]| ���һ�ӭ��� % ������Ϸ����һ�ӭ��",player->GetName());
sWorld->SendWorldText(SERVER_MSG_STRING, msg);
}
}; 
void AddSC_OnLogin()
{
new Announce_OnPlayerLogin;
}
