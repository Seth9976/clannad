// 函数: sub_7289e0
// 地址: 0x7289e0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (*(arg3 + 0x18) == 0)
    void* eax_2 = (**(arg3 + 4))(arg3, 0, 0x34)
    int32_t* ecx = *(arg3 + 4)
    *(arg3 + 0x18) = eax_2
    *(eax_2 + 0x2c) = (*ecx)(arg3, 0, 0x1000)

int32_t* ecx_2 = *(arg3 + 0x18)
ecx_2[7] = arg2
ecx_2[2] = sub_728900
ecx_2[3] = sub_728910
ecx_2[4] = sub_7289a0
ecx_2[5] = sub_72b970
ecx_2[6] = sub_52e4f0
ecx_2[8] = arg4
ecx_2[9] = 0
ecx_2[0xa] = arg4
ecx_2[1] = 0
*ecx_2 = 0
return arg4
