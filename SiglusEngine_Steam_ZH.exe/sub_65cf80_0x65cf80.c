// 函数: sub_65cf80
// 地址: 0x65cf80
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (sub_5cd6f0(arg2, arg3) != 0)
    int64_t xmm1_1 = *arg2
    int32_t ecx_1 = arg2[1].d
    int16_t* edx
    edx.w = *(arg2 + 0xc)
    *arg2 = *arg3
    arg2[1].d = arg3[1].d
    int32_t eax_1
    eax_1.w = *(arg3 + 0xc)
    *(arg2 + 0xc) = eax_1.w
    *arg3 = xmm1_1
    arg3[1].d = ecx_1
    *(arg3 + 0xc) = edx.w

int32_t result = sub_5cd6f0(arg4, arg2)

if (result.b != 0)
    int64_t xmm1_2 = *arg4
    int32_t ecx_3 = *(arg4 + 8)
    int64_t* edx_1
    edx_1.w = arg4[6]
    *arg4 = *arg2
    *(arg4 + 8) = arg2[1].d
    int32_t eax_2
    eax_2.w = *(arg2 + 0xc)
    arg4[6] = eax_2.w
    *arg2 = xmm1_2
    arg2[1].d = ecx_3
    *(arg2 + 0xc) = edx_1.w
    result = sub_5cd6f0(arg2, arg3)
    
    if (result.b != 0)
        *arg2 = *arg3
        arg2[1].d = arg3[1].d
        *(arg2 + 0xc) = *(arg3 + 0xc)
        *arg3 = xmm1_2
        arg3[1].d = ecx_3
        result.w = edx_1.w
        *(arg3 + 0xc) = result.w

return result
