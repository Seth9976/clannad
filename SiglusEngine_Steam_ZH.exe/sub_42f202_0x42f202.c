// 函数: sub_42f202
// 地址: 0x42f202
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (*(arg1 + 0x68) == 0)
    return 0x8876086c

int32_t i

do
    int32_t result = sub_42eebc(arg1, &i)
    
    if (result s< 0)
        return result
while (i != 0xd)
void* ecx_1 = *(arg1 + 0x68)
*(arg1 + 0x68) = *(ecx_1 + 4)
*(ecx_1 + 4) = 0
sub_42bcae(ecx_1, 1)
int32_t* eax_2 = *(arg1 + 0x68)
int32_t eax_3

if (eax_2 == 0)
    eax_3 = 1
else
    eax_3 = *eax_2

*(arg1 + 0x298) = eax_3
return 0
