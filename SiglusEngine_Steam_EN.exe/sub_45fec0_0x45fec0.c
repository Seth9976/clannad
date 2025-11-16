// 函数: sub_45fec0
// 地址: 0x45fec0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = arg3

if (*(arg2 + 0x28c) != arg6[4] || *(arg2 + 0x290) != arg6[5] || *(arg4 + 0x10) != arg6[8]
        || *(arg4 + 0x14) != arg6[9] || *(arg4 + 0x37e8) != arg6[0xa]
        || *(arg4 + 0x37ec) != arg6[0xb])
    void* eax_6 = arg6[0xb]
    int32_t edx = arg6[6]
    int32_t* eax_7 = arg6[0xa]
    int32_t eax_8 = arg6[9]
    int32_t eax_9 = arg6[8]
    int32_t eax_10 = arg6[7]
    
    if (edx s> 0 && eax_10 s> 0 && arg3 u<= 0x3f)
        void* esi_2 = arg3 * 0x3920 + &data_f89afc
        sub_576270(esi_2)
        arg3 = var_8
        *(esi_2 + 0x37e8) = eax_7
        *(esi_2 + 0x37ec) = eax_6
        *(esi_2 + 0x10) = eax_9
        *(esi_2 + 0x14) = eax_8
        *(esi_2 + 8) = edx
        *(esi_2 + 0xc) = eax_10
    
    void* edx_4
    
    if (arg6[2] != 0)
        int32_t edx_5
        edx_5.b = arg6[3] != 0
        edx_4 = (edx_5 << 1) + 1
    else
        int32_t edx_1 = arg6[3]
        int32_t edx_2 = neg.d(edx_1)
        edx_4 = sbb.d(edx_2, edx_2, edx_1 != 0) & 2
    
    int32_t var_34_1 = 0
    sub_577970(sub_57dae0(eax_10, edx_4, arg3, arg6[4], arg6[5]), arg2, var_8, arg4, arg5)

sub_576270(arg4)
int32_t result = *arg6
*(arg4 + 0xa8) = result

if (result != 0)
    *(arg4 + 0xd0) += 1

return result
