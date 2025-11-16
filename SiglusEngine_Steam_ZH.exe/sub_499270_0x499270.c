// 函数: sub_499270
// 地址: 0x499270
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (arg1 != 0)
    int32_t* ecx_1 = *(arg1 + 0x1c)
    
    if (ecx_1 != 0)
        *(arg1 + 0x14) = 0
        *(arg1 + 8) = 0
        *(arg1 + 0x18) = 0
        int32_t esi_1 = ecx_1[3]
        int32_t esi_2 = neg.d(esi_1)
        *ecx_1 = sbb.d(esi_2, esi_2, esi_1 != 0) & 7
        sub_4e4298(*(*(arg1 + 0x1c) + 0x14), arg1, nullptr)
        return 0

return 0xfffffffe
