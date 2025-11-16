// 函数: sub_466c50
// 地址: 0x466c50
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (arg1 == 0 || arg2 == 0)
    return 

if (arg3 != 0)
    *(arg2 + 0x30) = arg3

if (arg5 != 0)
    int32_t edi
    int32_t var_c_1 = edi
    *(arg2 + 0x34) = *arg5
    void* edi_2 = arg2 + 0x38
    void* esi_2 = arg5 + 4
    *edi_2 = *esi_2
    *(edi_2 + 4) = *(esi_2 + 4)
    
    if (arg4.d == 0)
        arg4.d = 1

int32_t ecx_1
ecx_1.w = arg4
*(arg2 + 8) |= 0x10
*(arg2 + 0x16) = ecx_1.w
