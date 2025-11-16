// 函数: sub_6ccb00
// 地址: 0x6ccb00
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ebx
int32_t var_18 = ebx
void* esi_1 = arg6 + 0x84
uint32_t edx_2 = (zx.d(*(arg6 + 0x80)) << 8) + zx.d(*(esi_1 - 3))
arg6 = nullptr
uint32_t eax_2 = zx.d(*(esi_1 - 1))
uint32_t edx_5 = ((edx_2 << 8) + zx.d(*(esi_1 - 2))) << 8
uint32_t edx_6 = edx_5 + eax_2
uint32_t var_10 = edx_6

if (edx_5 != neg.d(eax_2))
    void* eax_14
    
    do
        uint32_t edi_7 = (((((zx.d(*esi_1) << 8) + zx.d(*(esi_1 + 1))) << 8) + zx.d(*(esi_1 + 2)))
            << 8) + zx.d(*(esi_1 + 3))
        uint32_t ebx_8 = (((((zx.d(*(esi_1 + 4)) << 8) + zx.d(*(esi_1 + 5))) << 8)
            + zx.d(*(esi_1 + 6))) << 8) + zx.d(*(esi_1 + 7))
        uint32_t eax_11 = zx.d(*(esi_1 + 0xb))
        uint32_t ecx_6 = (((((zx.d(*(esi_1 + 8)) << 8) + zx.d(*(esi_1 + 9))) << 8)
            + zx.d(*(esi_1 + 0xa))) << 8) + eax_11
        
        if ((ebx_8.b & 3) != 0)
            sub_6cc420(eax_11, nullptr, arg3, arg4, edi_7, 
                "ICC profile tag start not a multiple of 4")
            edx_6 = var_10
        
        if (ebx_8 u> arg5)
            sub_6cc420(arg5, arg2, arg3, arg4, edi_7, "ICC profile tag outside profile")
            return 0
        
        int32_t eax_12 = arg5 - ebx_8
        
        if (ecx_6 u> eax_12)
            sub_6cc420(eax_12, arg2, arg3, arg4, edi_7, "ICC profile tag outside profile")
            return 0
        
        esi_1 += 0xc
        eax_14 = arg6 + 1
        arg6 = eax_14
    while (eax_14 u< edx_6)

return 1
