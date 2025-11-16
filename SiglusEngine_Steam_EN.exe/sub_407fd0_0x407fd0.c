// 函数: sub_407fd0
// 地址: 0x407fd0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx
int32_t var_4_1 = ecx
void* edi = arg1
int32_t ebp = *(edi + 0x28)
int32_t var_4 = ebp
int32_t eax_1 = sub_410af0(arg2, *(edi + 0x24))
int32_t result
int32_t edi_2

if (eax_1 s< 0)
    edi_2 = *(edi + 8)
    result = 0
label_408049:
    int32_t* ebx_4 = arg2
    int32_t i = sub_410af0(ebx_4, ebp)
    
    if (i s< 0)
        do
            if (ebp s<= 1)
                var_4 = ebp
                
                if (i s< 0)
                    goto label_4080ec
                
                goto label_40807e
            
            ebp -= 1
            i = sub_410af0(ebx_4, ebp)
        while (i s< 0)
        
        var_4 = ebp
    
label_40807e:
    int32_t eax_4 = sub_407cd0(i)
    int32_t i_1 = edi_2 - result
    
    if (i_1 s> 1)
        do
            int32_t edx_3 = i_1 s>> 1
            int32_t ecx_5 = edx_3 + result
            int32_t ecx_7 = neg.d(sbb.d(ecx_5, ecx_5, eax_4 u< *(*(arg1 + 0x14) + (ecx_5 << 2))))
            edi_2 -= neg.d(ecx_7) & edx_3
            result += (ecx_7 - 1) & edx_3
            i_1 = edi_2 - result
        while (i_1 s> 1)
        
        ebp = var_4
        ebx_4 = arg2
    
    int32_t eax_6 = sx.d(*(*(arg1 + 0x1c) + result))
    
    if (eax_6 s> ebp)
        sub_410ba0(ebx_4, ebp)
    label_4080ec:
        return 0xffffffff
    
    sub_410ba0(ebx_4, eax_6)
    edi = arg1
else
    int32_t ebx_1 = *(*(edi + 0x20) + (eax_1 << 2))
    
    if ((ebx_1 & 0x80000000) != 0)
        result = ebx_1 s>> 0xf & 0x7fff
        edi_2 = *(edi + 8) - (ebx_1 & 0x7fff)
        goto label_408049
    
    sub_410ba0(arg2, sx.d(*(*(edi + 0x1c) + ebx_1 - 1)))
    result = ebx_1 - 1

if (result s< 0)
    return result

return *(*(edi + 0x18) + (result << 2))
