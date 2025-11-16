// 函数: sub_4e40a2
// 地址: 0x4e40a2
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* eax = nullptr
int32_t edi
int32_t var_c = edi
uint32_t ecx_4
uint32_t edx_3

if (*(arg1 + 0x7c) s<= 0)
    ecx_4 = arg3 + 5
    edx_3 = ecx_4
else
    if (*(arg1 + 0x1c) == 2)
        sub_4e3c25(arg1)
    
    sub_4e3dd4(arg1, arg1 + 0xb10)
    sub_4e3dd4(arg1, arg1 + 0xb1c)
    eax = sub_4e3fbc(arg1)
    edx_3 = (*(arg1 + 0x16a0) + 0xa) u>> 3
    ecx_4 = (*(arg1 + 0x16a4) + 0xa) u>> 3
    
    if (ecx_4 u<= edx_3)
        edx_3 = ecx_4

if (arg3 + 4 u> edx_3 || arg2 == 0)
    int32_t ecx_5 = *(arg1 + 0x16b4)
    uint32_t var_18_1
    uint32_t var_14_1
    int32_t ebx
    
    if (ecx_4 != edx_3)
        if (ecx_5 s<= 0xd)
            *(arg1 + 0x16b0) |= ((arg4 + 4) << ecx_5.b).w
            *(arg1 + 0x16b4) = ecx_5 + 3
        else
            char* ecx_9 = *(arg1 + 8)
            *(arg1 + 0x16b0) |= ((arg4 + 4) << ecx_5.b).w
            ebx.b = *(arg1 + 0x16b0)
            ecx_9[*(arg1 + 0x14)] = ebx.b
            *(arg1 + 0x14) += 1
            ebx.b = *(arg1 + 0x16b1)
            (*(arg1 + 0x14))[*(arg1 + 8)] = ebx.b
            int32_t ebx_1 = *(arg1 + 0x16b4)
            *(arg1 + 0x14) += 1
            char* ecx_10
            ecx_10.b = 0x10
            ecx_10.b = 0x10 - ebx_1.b
            int32_t edx_11
            edx_11.w = (arg4 + 4).w u>> ecx_10.b
            *(arg1 + 0x16b4) = ebx_1 - 0xd
            *(arg1 + 0x16b0) = edx_11.w
        
        sub_4e3632(arg1, *(arg1 + 0xb14) + 1, *(arg1 + 0xb20) + 1, eax + 1)
        var_14_1 = arg1 + 0x980
        var_18_1 = arg1 + 0x8c
    else
        if (ecx_5 s<= 0xd)
            *(arg1 + 0x16b0) |= ((arg4 + 2) << ecx_5.b).w
            *(arg1 + 0x16b4) = ecx_5 + 3
        else
            char* ecx_6 = *(arg1 + 8)
            *(arg1 + 0x16b0) |= ((arg4 + 2) << ecx_5.b).w
            ebx.b = *(arg1 + 0x16b0)
            ecx_6[*(arg1 + 0x14)] = ebx.b
            *(arg1 + 0x14) += 1
            ebx.b = *(arg1 + 0x16b1)
            (*(arg1 + 0x14))[*(arg1 + 8)] = ebx.b
            int32_t edx_8 = *(arg1 + 0x16b4)
            *(arg1 + 0x14) += 1
            char* ecx_7
            ecx_7.b = 0x10
            ecx_7.b = 0x10 - edx_8.b
            int32_t eax_6
            eax_6.w = (arg4 + 2).w u>> ecx_7.b
            *(arg1 + 0x16b4) = edx_8 - 0xd
            *(arg1 + 0x16b0) = eax_6.w
        
        var_14_1 = 0xace588
        var_18_1 = 0xace108
    sub_4e386f(arg1, var_18_1, var_14_1)
else
    sub_4e4014(arg1, arg2, arg3, arg4)

sub_4e2e05(arg1)

if (arg4 != 0)
    sub_4e3c7c(arg1)

return arg1
