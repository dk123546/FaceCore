#include "ScriptPCH.h"

class Boss_Announcer : public PlayerScript
{
public:
Boss_Announcer() : PlayerScript ("Boss_Announcer") {}

void OnCreatureKill(Player* player, Creature* boss)
{

if (boss->isWorldBoss())
{
if (player->getGender() == GENDER_MALE)
{
char msg[250];
snprintf(msg, 250, "|CFF7BBEF7[光辉事件]|r:|cffff0000 %s |带领着他的团队击杀了 |CFF18BE00[%s]|r !!!",player->GetName(),boss->GetName());
sWorld->SendServerMessage(SERVER_MSG_STRING, msg);
}
else
{
char msg[250];
snprintf(msg, 250, "|CFF7BBEF7[光辉事件]|r:|cffff0000 %s |带领着他的小组击杀了 |CFF18BE00[%s]|r !!!",player->GetName(),boss->GetName());
sWorld->SendServerMessage(SERVER_MSG_STRING, msg);
}
}
}
};

void AddSC_Boss_Announcer()
{
new Boss_Announcer;
} 