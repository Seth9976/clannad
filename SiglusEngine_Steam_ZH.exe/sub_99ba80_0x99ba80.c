// 函数: sub_99ba80
// 地址: 0x99ba80
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* edi = arg1
void* esi = *(edi + 4)
int32_t* edx = *(esi + 0x1c)
char ecx_1 = (edx[0x392]).b + 1
int32_t eax_2 = edx[*(edi + 0x28)] s>> ecx_1
int32_t eax_4 = *edx s>> ecx_1
int32_t ebx_1 = edx[1] s>> ecx_1
int32_t var_10 = ebx_1

if (*(edi + 0x18) s< 0)
    return 0

if (*(edi + 0x30) == ebx_1)
    int32_t i = 0
    int32_t i_5 = 0
    
    if (*(esi + 4) s> 0)
        do
            void* esi_1 = *(*(edi + 8) + (i << 2))
            int32_t ecx_2 = 0
            
            if (ebx_1 s>= 4)
                void* edi_1 = esi_1 + (ebx_1 << 2)
                void* edx_1 = esi_1 + 8
                int32_t var_18_1 = ((ebx_1 - 4) u>> 2) + 1
                int32_t j_3 = ((ebx_1 - 4) u>> 2) + 1
                ecx_2 = (((ebx_1 - 4) u>> 2) + 1) << 2
                int32_t j
                
                do
                    int32_t xmm0_1 = *(edx_1 - 8)
                    edi_1 += 0x10
                    edx_1 += 0x10
                    *(edx_1 - 0x18) = *(edi_1 - 0x10)
                    int32_t eax_11 = *(edi_1 - 0xc)
                    *(edi_1 - 0x10) = xmm0_1
                    int32_t xmm0_2 = *(edx_1 - 0x14)
                    *(edx_1 - 0x14) = eax_11
                    int32_t eax_12 = *(edi_1 - 8)
                    *(edi_1 - 0xc) = xmm0_2
                    int32_t xmm0_3 = *(edx_1 - 0x10)
                    *(edx_1 - 0x10) = eax_12
                    int32_t eax_13 = *(edi_1 - 4)
                    *(edi_1 - 8) = xmm0_3
                    int32_t xmm0_4 = *(edx_1 - 0xc)
                    *(edx_1 - 0xc) = eax_13
                    *(edi_1 - 4) = xmm0_4
                    j = j_3
                    j_3 -= 1
                while (j != 1)
                ebx_1 = var_10
                edi = arg1
            
            if (ecx_2 s< ebx_1)
                void* edx_2 = esi_1 + ((ecx_2 + ebx_1) << 2)
                
                do
                    int32_t xmm0_5 = *(esi_1 + (ecx_2 << 2))
                    edx_2 += 4
                    *(esi_1 + (ecx_2 << 2)) = *(edx_2 - 4)
                    ecx_2 += 1
                    *(edx_2 - 4) = xmm0_5
                while (ecx_2 s< ebx_1)
            
            i = i_5 + 1
            i_5 = i
        while (i s< *(esi + 4))
    
    *(edi + 0x14) -= ebx_1
    *(edi + 0x18) -= ebx_1
    *(edi + 0x30) = 0

int32_t ecx_4 = *(edi + 0x24)

if (*(edi + 0x28) ^ ecx_4)
    int32_t i_1 = 0
    int32_t i_4 = 0
    
    if (*(esi + 4) s> 0)
        int32_t eax_22
        int32_t edx_3
        edx_3:eax_22 = sx.q(ebx_1 - eax_4)
        int32_t eax_26
        int32_t edx_4
        edx_4:eax_26 = sx.q(eax_4 + ebx_1)
        int32_t ecx_7 = (eax_22 - edx_3) s>> 1 << 2
        int32_t var_24_1 = ecx_7
        int32_t edx_5 = ((eax_26 - edx_4) s>> 1) - 1
        int32_t var_28_1 = edx_5
        
        do
            int32_t ebx_2 = *(*(edi + 8) + (i_1 << 2))
            int32_t eax_30 = ecx_7 + ebx_2
            
            if (edx_5 s>= 0)
                if (edx_5 + 1 s>= 4)
                    uint32_t j_4 = (edx_5 + 1) u>> 2
                    void* esi_3 = ebx_2 + ((edx_5 - 3) << 2)
                    void* ecx_9 = eax_30 - 4 + (edx_5 << 2)
                    edx_5 += neg.d(j_4) << 2
                    uint32_t j_1
                    
                    do
                        ecx_9 -= 0x10
                        *(ecx_9 + 0x14) = *(esi_3 + 0xc)
                        esi_3 -= 0x10
                        *(ecx_9 + 0x10) = *(ebx_2 - eax_30 + ecx_9 + 0x10)
                        *(ecx_9 + 0xc) = *(esi_3 + 0x14)
                        *(ecx_9 + 8) = *(esi_3 + 0x10)
                        j_1 = j_4
                        j_4 -= 1
                    while (j_1 != 1)
                    i_1 = i_4
                
                if (edx_5 s>= 0)
                    int32_t* ecx_10 = eax_30 + (edx_5 << 2)
                    int32_t temp3_1
                    
                    do
                        temp3_1 = edx_5
                        edx_5 -= 1
                        *ecx_10 = *(ecx_10 + ebx_2 - eax_30)
                        ecx_10 = &ecx_10[-1]
                    while (temp3_1 - 1 s>= 0)
                
                edi = arg1
            
            i_1 += 1
            ecx_7 = var_24_1
            edx_5 = var_28_1
            i_4 = i_1
        while (i_1 s< *(esi + 4))
        
        ebx_1 = var_10
    
    int32_t eax_43
    int32_t edx_6
    edx_6:eax_43 = sx.q(ebx_1 - eax_4)
    int32_t eax_45 = (eax_43 - edx_6) s>> 1
    *(edi + 0x18) += eax_45
    *(edi + 0x14) += eax_45
else if (ecx_4 == 0)
    int32_t i_2 = 0
    int32_t i_6 = 0
    
    if (*(esi + 4) s> 0)
        int32_t ecx_13 = (ebx_1 - eax_4) << 2
        int32_t var_20_2 = ecx_13
        int32_t edx_7 = eax_4 - 1
        int32_t var_1c_2 = edx_7
        
        do
            int32_t ebx_5 = *(*(edi + 8) + (i_2 << 2))
            int32_t eax_49 = ecx_13 + ebx_5
            
            if (edx_7 s>= 0)
                if (edx_7 + 1 s>= 4)
                    uint32_t j_5 = (edx_7 + 1) u>> 2
                    void* esi_5 = ebx_5 + ((edx_7 - 3) << 2)
                    void* ecx_15 = eax_49 - 4 + (edx_7 << 2)
                    edx_7 += neg.d(j_5) << 2
                    uint32_t j_2
                    
                    do
                        ecx_15 -= 0x10
                        *(ecx_15 + 0x14) = *(esi_5 + 0xc)
                        esi_5 -= 0x10
                        *(ecx_15 + 0x10) = *(ebx_5 - eax_49 + ecx_15 + 0x10)
                        *(ecx_15 + 0xc) = *(esi_5 + 0x14)
                        *(ecx_15 + 8) = *(esi_5 + 0x10)
                        j_2 = j_5
                        j_5 -= 1
                    while (j_2 != 1)
                    i_2 = i_6
                
                if (edx_7 s>= 0)
                    int32_t* ecx_16 = eax_49 + (edx_7 << 2)
                    int32_t temp4_1
                    
                    do
                        temp4_1 = edx_7
                        edx_7 -= 1
                        *ecx_16 = *(ecx_16 + ebx_5 - eax_49)
                        ecx_16 = &ecx_16[-1]
                    while (temp4_1 - 1 s>= 0)
                
                edi = arg1
            
            i_2 += 1
            ecx_13 = var_20_2
            edx_7 = var_1c_2
            i_6 = i_2
        while (i_2 s< *(esi + 4))
        
        ebx_1 = var_10
    
    *(edi + 0x18) += ebx_1 - eax_4
    *(edi + 0x14) += ebx_1 - eax_4

int32_t* eax_66 = arg2

if (eax_66 != 0)
    int32_t i_3 = 0
    
    if (*(esi + 4) s> 0)
        do
            *(*(edi + 0xc) + (i_3 << 2)) = *(*(edi + 8) + (i_3 << 2)) + (*(edi + 0x18) << 2)
            i_3 += 1
        while (i_3 s< *(esi + 4))
        
        eax_66 = arg2
    
    *eax_66 = *(edi + 0xc)

return ebx_1 - *(edi + 0x18) + eax_2
