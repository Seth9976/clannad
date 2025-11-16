// 函数: sub_5d9690
// 地址: 0x5d9690
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t i = 0

if (((*(arg1 + 0x1f0) - *(arg1 + 0x1ec)) & 0xfffffff8) s> 0)
    int32_t* ebx_1 = data_bac48c
    int32_t edi
    int32_t var_c_1 = edi
    
    do
        int32_t eax_1 = *(arg1 + 0x1ec)
        int32_t edx_1 = *(eax_1 + (i << 3))
        char* edi_2 = *(eax_1 + (i << 3) + 4)
        
        if (edx_1 s>= 0 && edi_2 s>= 0)
            edi_2[*(*ebx_1 + edx_1 * 0xc)] = 1
        
        i += 1
    while (i s< (*(arg1 + 0x1f0) - *(arg1 + 0x1ec)) s>> 3)

int32_t result = *(arg1 + 0x1ec)
*(arg1 + 0x1f0) = result
return result
