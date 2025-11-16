// 函数: sub_575f00
// 地址: 0x575f00
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t result = arg2

if (result s> 0 && arg4 s> 0 && arg3 u<= 0x3f)
    void* eax = arg3 * 0x2d0
    void* edi_1 = arg3 * 0x1d4
    sub_576270(arg3 * 0x3920 + &data_f89afc)
    sub_57f7d0(arg3)
    int32_t edx = *(edi_1 + 0x1090af0)
    *(eax + &data_8fcadc) = *(edi_1 + 0x1090ae8)
    *(eax + 0x8fcae0) = *(edi_1 + &data_1090aec)
    *(eax + &data_8fcae4) = edx
    sub_57f830(arg3)
    int32_t ebx_1 = *(arg3 * 0x3920 + 0xf8d2ec)
    int32_t edx_2 = ebx_1 * result
    int32_t ecx_6 = *(arg3 * 0x3920 + 0xf8d2f0) * (arg4 - 1)
    *(arg3 * 0x3920 + 0xf8d2e4) = edx_2
    *(arg3 * 0x3920 + 0xf8d2e8) = ecx_6
    int32_t eax_6 = *(edi_1 + 0x1090c00)
    
    if (eax_6 s> 0)
        *(arg3 * 0x3920 + 0xf8d2e8) = eax_6 + ecx_6
    
    int32_t eax_8
    
    if (arg5 == 0 || arg6 != 0)
        eax_8 = (result + 1) * ebx_1
    else
        eax_8 = edx_2
    
    int32_t ecx_10 = *(eax + &data_8fcadc) + ecx_6
    
    if (*(edi_1 + 0x1090c00) s> 0)
        ecx_10 += *(edi_1 + 0x1090c00)
    
    int32_t ebx_2
    
    if (arg5 == 0)
        ebx_2 = ebx_1 s>> 2
    else
        ebx_2 = 0
    
    *(arg3 * 0x3920 + 0xf89b0c) = eax_8 + 2 + ebx_2
    *(arg3 * 0x3920 + &data_f89b10) = ecx_10 + 2
    int32_t eax_13
    
    if (arg5 == 0)
        eax_13 = *(arg3 * 0x3920 + 0xf8d2f4)
    else if (arg6 == 0)
        eax_13 = *(arg3 * 0x3920 + 0xf8d2fc)
    else
        eax_13 = *(arg3 * 0x3920 + 0xf8d2f8)
    
    *(arg3 * 0x3920 + 0xf89b04) = eax_13 + *(edi_1 + 0x1090b0c) + edx_2
    *(arg3 * 0x3920 + 0xf89b08) = *(edi_1 + 0x1090b08) + *(edi_1 + 0x1090b04) + ecx_10
    *(arg3 * 0x3920 + &data_f89afc) = result
    result = arg4
    *(arg3 * 0x3920 + 0xf89b00) = result

return result
