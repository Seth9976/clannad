// 函数: sub_5b0190
// 地址: 0x5b0190
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t esi = *(arg1 + 0x1ec)

if (esi s>= 0)
    int32_t* eax_1 = data_bac48c
    int32_t edi_1 = *eax_1
    int32_t eax_2
    int32_t edx_3
    edx_3:eax_2 = muls.dp.d(0x2aaaaaab, eax_1[1] - edi_1)
    int32_t edx_4 = edx_3 s>> 1
    
    if (esi s< (edx_4 u>> 0x1f) + edx_4)
        char* edx_5 = *(arg1 + 0x1f0)
        
        if (edx_5 s>= 0)
            int32_t* esi_1 = edi_1 + esi * 0xc
            
            if (edx_5 s< esi_1[1] - *esi_1)
                edx_5[*esi_1] = 1

*(arg1 + 0x1ec) = 0xffffffff
*(arg1 + 0x1f0) = 0xffffffff
