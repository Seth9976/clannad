// 函数: sub_9a8900
// 地址: 0x9a8900
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* ebx = &arg1[1]
void* var_24 = ebx
int32_t* ecx = *(arg2 + 0x510)
int32_t eax_3 = *(*(*(arg1[0x10] + 4) + 0x1c) + 0xb20)

if (sub_742fa0(ebx, 1) != 1)
    return 0

void* esi_1 = arg2
int32_t* result = sub_99cca0(arg1, *(arg2 + 0x504) << 2)
arg1 = result
int32_t edx_3 = 0
int32_t ecx_3 = *(esi_1 + 0x50c)
uint32_t i = ecx_3 - 1

if (ecx_3 != 1)
    do
        edx_3 += 1
        i u>>= 1
    while (i != 0)

*result = sub_742fa0(ebx, edx_3)
int32_t edx_4 = 0
int32_t eax_7 = *(esi_1 + 0x50c)
uint32_t i_1 = eax_7 - 1

if (eax_7 != 1)
    do
        edx_4 += 1
        i_1 u>>= 1
    while (i_1 != 0)

int32_t* edx_5 = ecx
result[1] = sub_742fa0(ebx, edx_4)
int32_t i_5 = 0
int32_t var_14_1 = 2

if (*edx_5 s> 0)
    void* ecx_6 = &edx_5[1]
    void* var_20_1 = ecx_6
    int32_t i_2
    
    do
        int32_t esi_2 = *ecx_6
        int32_t edi_1 = 0
        int32_t eax_9 = edx_5[esi_2 + 0x20]
        int32_t ecx_7 = edx_5[esi_2 + 0x30]
        char var_c_1 = ecx_7.b
        
        if (ecx_7 != 0)
            int32_t ecx_9 = edx_5[esi_2 + 0x40] * 7
            void* edi_2 = eax_3 + (ecx_9 << 3)
            
            if (*(eax_3 + (ecx_9 << 3) + 8) s<= 0)
                return 0
            
            int32_t eax_13 = sub_99e900(edi_2, ebx)
            
            if (eax_13 s< 0)
                return 0
            
            edi_1 = *(*(edi_2 + 0x18) + (eax_13 << 2))
            
            if (edi_1 == 0xffffffff)
                return 0
            
            edx_5 = ecx
        
        int32_t ebx_1 = 0
        int32_t eax_21
        
        if (eax_9 s<= 0)
            eax_21 = eax_9
        else
            int32_t eax_14 = (1 << ecx_7.b) - 1
            int32_t var_28_2 = eax_14
            int32_t* esi_5 = &arg1[var_14_1]
            char ecx_13 = var_c_1
            
            while (true)
                void* eax_15 = eax_14 & edi_1
                edi_1 s>>= ecx_13
                int32_t edx_7 = edx_5[eax_15 + (esi_2 << 3) + 0x50]
                
                if (edx_7 s< 0)
                    *esi_5 = 0
                else
                    int32_t eax_18 = edx_7 * 7
                    void* edi_3 = eax_3 + (eax_18 << 3)
                    int32_t eax_19
                    
                    if (*(eax_3 + (eax_18 << 3) + 8) s> 0)
                        eax_19 = sub_99e900(edi_3, var_24)
                    
                    int32_t eax_20
                    
                    if (*(eax_3 + (eax_18 << 3) + 8) s<= 0 || eax_19 s< 0)
                        eax_20 = 0xffffffff
                    else
                        eax_20 = *(*(edi_3 + 0x18) + (eax_19 << 2))
                    
                    *esi_5 = eax_20
                    
                    if (eax_20 == 0xffffffff)
                        return 0
                    
                    ecx_13 = var_c_1
                
                eax_21 = eax_9
                ebx_1 += 1
                edx_5 = ecx
                esi_5 = &esi_5[1]
                
                if (ebx_1 s>= eax_21)
                    break
                
                eax_14 = var_28_2
        
        var_14_1 += eax_21
        i_2 = i_5 + 1
        ebx = var_24
        ecx_6 = var_20_1 + 4
        i_5 = i_2
        var_20_1 = ecx_6
    while (i_2 s< *edx_5)
    result = arg1
    esi_1 = arg2

int32_t i_4 = 2

if (*(esi_1 + 0x504) s> 2)
    void* var_10_2 = esi_1 + 0x30c
    void* var_14_2 = &edx_5[0xd3]
    void* ecx_19 = esi_1 + 0x30c
    int32_t i_3
    
    do
        int32_t eax_24 = *(ecx_19 + 0xfc)
        int32_t esi_6 = *ecx_19
        int32_t edi_4 = edx_5[eax_24 + 0xd1]
        int32_t eax_26 = arg1[eax_24] & 0x7fff
        int32_t ebx_4 = (arg1[esi_6] & 0x7fff) - eax_26
        int32_t eax_28
        int32_t edx_10
        edx_10:eax_28 = sx.q(ebx_4)
        int32_t temp0_1 = divs.dp.d(sx.q(((eax_28 ^ edx_10) - edx_10) * (*var_14_2 - edi_4)), 
            ecx[esi_6 + 0xd1] - edi_4)
        int32_t edx_13
        
        if (ebx_4 s>= 0)
            edx_13 = eax_26 + temp0_1
        else
            edx_13 = eax_26 - temp0_1
        
        result = arg1
        int32_t esi_9 = *(arg2 + 0x50c) - edx_13
        int32_t eax_34 = result[i_4]
        void* ecx_28
        
        if (eax_34 == 0)
            ecx_28 = var_10_2
            result[i_4] = edx_13 | 0x8000
        else
            int32_t ecx_26 = edx_13
            
            if (esi_9 s< edx_13)
                ecx_26 = esi_9
            
            int32_t eax_35
            
            if (eax_34 s< ecx_26 * 2)
                if ((eax_34.b & 1) == 0)
                    eax_35 = eax_34 s>> 1
                else
                    eax_35 = neg.d((eax_34 + 1) s>> 1)
            else if (esi_9 s<= edx_13)
                eax_35 = esi_9 - eax_34 - 1
            else
                eax_35 = eax_34 - edx_13
            
            ecx_28 = var_10_2
            result[i_4] = (eax_35 + edx_13) & 0x7fff
            int32_t eax_40 = *(ecx_28 + 0xfc)
            result[eax_40] &= 0x7fff
            int32_t eax_41 = *ecx_28
            result[eax_41] &= 0x7fff
        
        i_3 = i_4 + 1
        var_14_2 += 4
        ecx_19 = ecx_28 + 4
        edx_5 = ecx
        i_4 = i_3
        var_10_2 = ecx_19
    while (i_3 s< *(arg2 + 0x504))

return result
