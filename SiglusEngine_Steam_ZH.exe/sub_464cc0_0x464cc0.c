// 函数: sub_464cc0
// 地址: 0x464cc0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx = arg1[5]

if ((ecx == 0xcd || ecx == 0xce) && arg1[0x10] == 0)
    if (arg1[0x23] u< arg1[0x1d])
        void* eax_3 = *arg1
        *(eax_3 + 0x14) = 0x43
        (*eax_3)(arg1)
    
    (*(arg1[0x6a] + 4))(arg1)
    arg1[5] = 0xd2
else if (ecx == 0xcf)
    arg1[5] = 0xd2
else if (ecx != 0xd2)
    void* eax_4 = *arg1
    *(eax_4 + 0x14) = 0x14
    *(eax_4 + 0x18) = ecx
    (*eax_4)(arg1)

while (*(arg1[0x6e] + 0x14) == 0)
    if ((*arg1[0x6e])(arg1) == 0)
        return 0

(*(arg1[6] + 0x18))(arg1)
sub_498460(arg1)
return 1
