// 函数: sub_4d984c
// 地址: 0x4d984c
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx_7 = *(arg1 + 0x38)
int32_t ecx_6

if (ecx_7 s<= 0x10 - arg3)
    *(arg1 + 0x34) |= (arg2 << ecx_7.b).w
    ecx_6 = ecx_7 + arg3
else
    int32_t ecx = *(arg1 + 0x10)
    *(arg1 + 0x34) |= (arg2 << ecx_7.b).w
    uint32_t esi_3 = zx.d(*(arg1 + 0xc))
    int32_t ebx_1
    
    if (esi_3 u>= ecx - 2)
        if (esi_3 u< ecx)
            ebx_1.b = *(arg1 + 0x34)
            *(esi_3 + *(arg1 + 4)) = ebx_1.b
            *(arg1 + 0xc) += 1
        else
            *(arg1 + 0x30) = 1
        
        uint32_t esi_5 = zx.d(*(arg1 + 0xc))
        
        if (esi_5 u< *(arg1 + 0x10))
            ebx_1.b = *(arg1 + 0x35)
            *(esi_5 + *(arg1 + 4)) = ebx_1.b
            *(arg1 + 0xc) += 1
        else
            *(arg1 + 0x30) = 1
    else
        ebx_1.b = *(arg1 + 0x34)
        *(esi_3 + *(arg1 + 4)) = ebx_1.b
        *(arg1 + 0xc) += 1
        ebx_1.b = *(arg1 + 0x35)
        *(zx.d(*(arg1 + 0xc)) + *(arg1 + 4)) = ebx_1.b
        *(arg1 + 0xc) += 1
    int32_t esi_6 = *(arg1 + 0x38)
    ecx_6 = esi_6 + arg3 - 0x10
    *(arg1 + 0x34) = (arg2 s>> (0x10 - esi_6.b)).w

*(arg1 + 0x38) = ecx_6
