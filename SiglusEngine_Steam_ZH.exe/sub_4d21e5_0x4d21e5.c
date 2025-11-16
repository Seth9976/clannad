// 函数: sub_4d21e5
// 地址: 0x4d21e5
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* esi = *(arg1 + 0x14)
int32_t edi
int32_t var_34 = edi
*arg2
void* edi_1 = esi[*arg2]
int32_t edx = 0

if ((*(*(*(arg1 + 0x10) + (*(edi_1 + 4) << 2)) + 4) & 0x80) == 0)
    int32_t var_18[0x4]
    
    if ((arg4 & 0x10000) != 0)
        var_18[0] = 0
        edx = 1
    
    if ((arg4 & 0x20000) != 0)
        var_18[edx] = 1
        edx += 1
    
    if ((arg4 & 0x40000) != 0)
        var_18[edx] = 2
        edx += 1
    
    if ((arg4 & 0x80000) != 0)
        var_18[edx] = 3
        edx += 1
    
    int32_t ebx_2 = arg3
    
    if (ebx_2 u> edx)
        ebx_2 = edx
    
    int32_t edx_1 = 0
    
    if (ebx_2 u> 0)
        int32_t* ecx = *(arg1 + 0x14)
        
        while (*(ecx[*arg2] + 0x10) == *(ecx[arg2[edx_1]] + 0x10))
            edx_1 += 1
            
            if (edx_1 u>= ebx_2)
                break
    
    int32_t var_28
    
    if (ebx_2 u<= 0 || edx_1 u>= ebx_2)
        int32_t eax_7 = *(edi_1 + 0x10)
        var_28 = eax_7
        void var_24
        void* edi_7 = &var_24
        *edi_7 = eax_7
        void* edi_8 = edi_7 + 4
        *edi_8 = eax_7
        *(edi_8 + 4) = eax_7
    else
        for (int32_t i = 0; i u< 4; i += 1)
            (&var_28)[i] = i
    
    int32_t eax_8 = 0
    
    if (ebx_2 u> 0)
        do
            int32_t edi_11 = var_18[eax_8]
            int32_t edx_5 = *(esi[*(&var_18 + arg2 - &var_18 + (eax_8 << 2))] + 0x10)
            eax_8 += 1
            (&var_28)[edi_11] = edx_5
        while (eax_8 u< ebx_2)
    
    int32_t edx_6 = 0
    int32_t i_1 = 0x10
    int32_t* eax_9 = &var_28
    
    do
        int32_t esi_2 = *eax_9 << i_1.b
        eax_9 = &eax_9[1]
        edx_6 |= esi_2
        i_1 += 2
    while (i_1 u< 0x18)
    
    *arg5 = edx_6
else
    *arg5 = 0xe40000

return 0
