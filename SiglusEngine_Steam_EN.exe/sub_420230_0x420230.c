// 函数: sub_420230
// 地址: 0x420230
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t eax = data_13701cc

if (eax == 0)
    sub_4d6960(eax, &data_13701cc, &data_13701c8, 0x1f40, "FULLSCREEN_MSGBK_HANDLE_BUF")
    eax = data_13701cc

void* eax_1 = eax + (data_13701b4 << 3)
char* ecx_1 = data_1370124
int32_t eax_2 = 0

if (data_1370110:4 != 0)
    eax_2 = data_1370110:8

int32_t eax_4 = eax_2 * 0x14
int32_t edi

if (ecx_1 == 0)
    edi = 0
else
    edi = sub_4cfc80(ecx_1)

sub_41fd90(data_13701b4, edi + eax_4 + 0x54)
int32_t* esi_2 = *(eax_1 + 4)
esi_2[1] = eax_2
*esi_2 = 0

if (eax_4 s> 0)
    *esi_2 = &esi_2[0x15]
    sub_4d1c30(eax_4, data_1370110:4, &esi_2[0x15], eax_4)

esi_2[2] = 0
int32_t result = data_1370128
esi_2[3] = result
esi_2[4].b = 0

if (edi s> 0)
    void* ecx_5 = eax_4 + 0x54 + esi_2
    esi_2[2] = ecx_5
    sub_4d1c30(result, data_1370124, ecx_5, edi)
    result.b = data_137012c
    esi_2[4].b = result.b

sub_4d1c30(result, &data_1370130, &esi_2[5], 0x30)
esi_2[0x11] = 0
esi_2[0x12] = 0
result.b = 1
esi_2[0x13] = 0
esi_2[0x14] = 0
return result
