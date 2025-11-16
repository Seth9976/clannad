// 函数: sub_634fe0
// 地址: 0x634fe0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* eax = data_bac42c
int32_t ecx = *eax
int32_t esi = eax[1]
int128_t xmm0 = *data_bac4f0

if (xmm0 s<= ecx && ecx s< xmm0:8.d && xmm0:4.d s<= esi && esi s< xmm0:0xc.d)
label_63501e:
    uint32_t eax_2
    eax_2.b = 1
    return eax_2

int32_t i = 0
void* ebx_2 = *(data_bac408 + 0xa4) + 0x8ec

if ((*(ebx_2 + 0x148) - *(ebx_2 + 0x144)) s/ 0x15fc s> 0)
    int32_t edi_1 = 0
    
    do
        if (sub_5f0140(*(ebx_2 + 0x144) + edi_1, 1, ecx, esi).b != 0)
            goto label_63501e
        
        edi_1 += 0x15fc
        i += 1
    while (i s< (*(ebx_2 + 0x148) - *(ebx_2 + 0x144)) s/ 0x15fc)

int32_t eax_12
int32_t edx_7
edx_7:eax_12 = muls.dp.d(0x4fba3d0b, *(ebx_2 + 0x43c) - *(ebx_2 + 0x438))
int32_t i_2 = 0
int32_t edx_8 = edx_7 s>> 0xb

if ((edx_8 u>> 0x1f) + edx_8 s> 0)
    int32_t edi_2 = 0
    int32_t var_10_1 = 0
    void* ebx_3 = ebx_2
    int32_t edx_16
    int32_t i_1
    
    do
        void* esi_2 = *(ebx_3 + 0x438) + edi_2
        int32_t j = 0
        
        if ((*(esi_2 + 0x8b0) - *(esi_2 + 0x8ac)) s/ 0x15fc s> 0)
            int32_t edi_3 = 0
            
            do
                if (sub_5f0140(*(esi_2 + 0x8ac) + edi_3, 1, ecx, esi).b != 0)
                    goto label_63501e
                
                j += 1
                edi_3 += 0x15fc
            while (j s< (*(esi_2 + 0x8b0) - *(esi_2 + 0x8ac)) s/ 0x15fc)
            
            edi_2 = var_10_1
        
        ebx_3 = ebx_2
        edi_2 += 0x19b0
        i_1 = i_2 + 1
        var_10_1 = edi_2
        i_2 = i_1
        int32_t eax_24
        int32_t edx_15
        edx_15:eax_24 = muls.dp.d(0x4fba3d0b, *(ebx_3 + 0x43c) - *(ebx_3 + 0x438))
        edx_16 = edx_15 s>> 0xb
    while (i_1 s< (edx_16 u>> 0x1f) + edx_16)

int32_t eax_15
eax_15.b = 0
return eax_15
