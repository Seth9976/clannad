// 函数: sub_723960
// 地址: 0x723960
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* esi = arg1
int32_t ebx = 0xffff
int32_t eax_1 = esi[3] - 5

if (eax_1 u< 0xffff)
    ebx = eax_1

int32_t var_8 = ebx

while (true)
    int32_t eax_2 = esi[0x1d]
    
    if (eax_2 u<= 1)
        sub_723770(esi)
        eax_2 = esi[0x1d]
        
        if (eax_2 == 0)
            if (arg2 != 0)
                esi[0x5ad] = 0
                
                if (arg2 == 4)
                    int32_t ecx_13 = esi[0x17]
                    void* edx_8
                    
                    if (ecx_13 s< 0)
                        edx_8 = nullptr
                    else
                        edx_8 = esi[0xe] + ecx_13
                    
                    int32_t eax_19 = esi[0x1b] - ecx_13
                    sub_7276b0(eax_19, edx_8, esi, eax_19, 1)
                    void* ecx_15 = *esi
                    esi[0x17] = esi[0x1b]
                    sub_722b30(ecx_15)
                    int32_t eax_21
                    eax_21.b = *(*esi + 0x10) != 0
                    return eax_21 + 2
                
                int32_t ecx_17 = esi[0x1b]
                int32_t eax_23 = esi[0x17]
                
                if (ecx_17 s> eax_23)
                    void* edx_10
                    
                    if (eax_23 s< 0)
                        edx_10 = nullptr
                    else
                        edx_10 = esi[0xe] + eax_23
                    
                    sub_7276b0(eax_23, edx_10, esi, ecx_17 - eax_23, 0)
                    void* ecx_20 = *esi
                    esi[0x17] = esi[0x1b]
                    sub_722b30(ecx_20)
                
                if (ecx_17 s<= eax_23 || *(*esi + 0x10) != 0)
                    return 1
            
            break
    
    int32_t edi_1 = esi[0x17]
    int32_t temp0_1 = esi[0x1b]
    esi[0x1b] += eax_2
    int32_t eax_3 = esi[0x1b]
    esi[0x1d] = 0
    int32_t ecx_2 = edi_1 + ebx
    
    if (temp0_1 == neg.d(eax_2) || eax_3 u>= ecx_2)
        int32_t eax_4 = eax_3 - ecx_2
        esi[0x1b] = ecx_2
        esi[0x1d] = eax_4
        void* edx_2
        
        if (edi_1 s< 0)
            edx_2 = nullptr
        else
            edx_2 = esi[0xe] + edi_1
        
        sub_7276b0(eax_4, edx_2, esi, ecx_2 - edi_1, 0)
        void* ebx_1 = *esi
        esi[0x17] = esi[0x1b]
        void* edi_2 = *(ebx_1 + 0x1c)
        sub_727d20(edi_2)
        int32_t i_4 = *(edi_2 + 0x14)
        
        if (i_4 u> *(ebx_1 + 0x10))
            i_4 = *(ebx_1 + 0x10)
        
        if (i_4 != 0)
            void* edx_3 = *(ebx_1 + 0xc)
            int32_t i_2 = i_4
            char* ecx_6 = *(edi_2 + 0x10)
            int32_t i
            
            do
                edx_3 += 1
                *(edx_3 - 1) = *ecx_6
                ecx_6 = &ecx_6[1]
                i = i_2
                i_2 -= 1
            while (i != 1)
            *(ebx_1 + 0xc) += i_4
            *(edi_2 + 0x10) += i_4
            *(ebx_1 + 0x14) += i_4
            *(ebx_1 + 0x10) -= i_4
            int32_t temp2_1 = *(edi_2 + 0x14)
            *(edi_2 + 0x14) -= i_4
            esi = arg1
            
            if (temp2_1 == i_4)
                *(edi_2 + 0x10) = *(edi_2 + 8)
        
        if (*(*esi + 0x10) == 0)
            break
        
        ebx = var_8
    
    int32_t edi_3 = esi[0x17]
    int32_t eax_11 = esi[0xb] - 0x106
    int32_t ecx_8 = esi[0x1b] - edi_3
    
    if (ecx_8 u>= eax_11)
        void* edx_5
        
        if (edi_3 s< 0)
            edx_5 = nullptr
        else
            edx_5 = esi[0xe] + edi_3
        
        sub_7276b0(eax_11, edx_5, esi, ecx_8, 0)
        void* ebx_2 = *esi
        esi[0x17] = esi[0x1b]
        void* edi_4 = *(ebx_2 + 0x1c)
        sub_727d20(edi_4)
        int32_t i_5 = *(edi_4 + 0x14)
        
        if (i_5 u> *(ebx_2 + 0x10))
            i_5 = *(ebx_2 + 0x10)
        
        if (i_5 != 0)
            void* edx_6 = *(ebx_2 + 0xc)
            int32_t i_3 = i_5
            char* ecx_12 = *(edi_4 + 0x10)
            int32_t i_1
            
            do
                edx_6 += 1
                *(edx_6 - 1) = *ecx_12
                ecx_12 = &ecx_12[1]
                i_1 = i_3
                i_3 -= 1
            while (i_1 != 1)
            *(ebx_2 + 0xc) += i_5
            *(edi_4 + 0x10) += i_5
            *(ebx_2 + 0x14) += i_5
            *(ebx_2 + 0x10) -= i_5
            int32_t temp4_1 = *(edi_4 + 0x14)
            *(edi_4 + 0x14) -= i_5
            esi = arg1
            
            if (temp4_1 == i_5)
                *(edi_4 + 0x10) = *(edi_4 + 8)
        
        if (*(*esi + 0x10) == 0)
            break
        
        ebx = var_8

return 0
