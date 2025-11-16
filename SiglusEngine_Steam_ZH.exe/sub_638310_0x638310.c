// 函数: sub_638310
// 地址: 0x638310
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t result = *(arg1 + 0x18)

if (result != 0)
    result = j__free(result)
    *(arg1 + 0x18) = 0
    *(arg1 + 0x1c) = 0
    *(arg1 + 0x20) = 0

int32_t* ecx = *(arg1 + 0xc)

if (ecx != 0)
    void* var_10_2 = arg1
    int32_t* var_14_1 = ecx
    sub_55d500(ecx, *(arg1 + 0x10))
    result = j__free(*(arg1 + 0xc))
    *(arg1 + 0xc) = 0
    *(arg1 + 0x10) = 0
    *(arg1 + 0x14) = 0

return result
