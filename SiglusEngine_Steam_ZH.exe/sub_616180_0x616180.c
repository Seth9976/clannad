// 函数: sub_616180
// 地址: 0x616180
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* edx = data_bac4a0

if (*(edx + 0x74) != 0)
    return 

int32_t* ecx_1 = data_bac4e4
struct _EXCEPTION_REGISTRATION_RECORD** eax

if (*ecx_1 == 1)
    eax.b = ecx_1[6].b

if (*ecx_1 == 1 && eax.b == *(edx + 0x68) && ecx_1[8] == *(edx + 0x6c)
        && ecx_1[0xa] == *(edx + 0x70))
    return 

*ecx_1 = 1
eax.b = *(edx + 0x68)
ecx_1[6].b = eax.b
ecx_1[8] = *(edx + 0x6c)
ecx_1[0xa] = *(edx + 0x70)
sub_615080()
int32_t edx_1
eax, edx_1 = sub_614c70(1)

if (eax.b == 0)
    return 

sub_6157c0(eax, edx_1, nullptr, 1)
sub_614e40()
data_bac400 -= 1
