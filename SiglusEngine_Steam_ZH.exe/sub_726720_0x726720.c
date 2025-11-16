// 函数: sub_726720
// 地址: 0x726720
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t eax = arg2[1]
int32_t* eax_1 = arg2[2]
void* ebx = arg1
int32_t i_4 = 0
uint32_t j_1 = *arg2
int32_t edx = *eax_1
int32_t edx_1 = eax_1[1]
int32_t edx_2 = eax_1[2]
int32_t i_8 = eax_1[4]
__builtin_memset(ebx + 0xb3c, 0, 0x20)
void* var_30 = ebx
int32_t i_6 = i_8
uint32_t j = *(ebx + (*(ebx + 0x1454) << 2) + 0xb5c)
*(j_1 + (j << 2) + 2) = 0
int32_t edx_4 = *(ebx + 0x1454) + 1

if (edx_4 s< 0x23d)
    void* ecx_1 = ebx + 0xb5c + (edx_4 << 2)
    int32_t i_3 = 0x23d - edx_4
    j = j_1
    int32_t i_7 = 0
    void* var_28_1 = ecx_1
    int32_t i
    
    do
        int32_t edi_1 = *ecx_1
        int32_t ecx_2 = edi_1 << 2
        int32_t i_9 = zx.d(*(j_1 + (zx.d(*(ecx_2 + j + 2)) << 2) + 2)) + 1
        
        if (i_9 s> i_8)
            i_7 += 1
            i_9 = i_8
            i_4 = i_7
        
        j = j_1
        *(ecx_2 + j + 2) = i_9.w
        i_8 = i_6
        
        if (edi_1 s<= eax)
            *(ebx + (i_9 << 1) + 0xb3c) += 1
            int32_t edi_3
            
            if (edi_1 s< edx_2)
                edi_3 = 0
            else
                edi_3 = *(edx_1 + ((edi_1 - edx_2) << 2))
                i_8 = i_6
            
            uint32_t eax_5 = zx.d(*(ecx_2 + j))
            i_7 = i_4
            *(ebx + 0x16a8) += (edi_3 + i_9) * eax_5
            
            if (edx != 0)
                i_8 = i_6
                *(ebx + 0x16ac) += (zx.d(*(ecx_2 + edx + 2)) + edi_3) * eax_5
            
            j = j_1
        
        ecx_1 = var_28_1 + 4
        i = i_3
        i_3 -= 1
        var_28_1 = ecx_1
    while (i != 1)
    
    if (i_7 != 0)
        void* edi_4 = ebx + ((i_8 + 0x59e) << 1)
        int32_t i_1 = i_4
        void* var_2c_1 = edi_4
        void* edi_5 = edi_4
        
        do
            int32_t ecx_7 = i_8 - 1
            void* eax_13 = ebx + 0xb3c + (ecx_7 << 1)
            
            if (*(ebx + 0xb3c + (ecx_7 << 1)) == 0)
                do
                    eax_13 -= 2
                    ecx_7 -= 1
                while (*eax_13 == 0)
            
            *(ebx + (ecx_7 << 1) + 0xb3e) += 2
            j = 0xffff
            *(ebx + (ecx_7 << 1) + 0xb3c) -= 1
            i_1 -= 2
            *edi_5 -= 1
        while (i_1 s> 0)
        
        int32_t i_5 = i_6
        int32_t edx_8 = 0x23d + 0
        
        if (i_5 != 0)
            int32_t i_2
            
            do
                j = zx.d(*edi_5)
                
                if (j != 0)
                    int32_t ecx_8 = eax
                    void* edi_7 = ebx + ((edx_8 + 0x2d7) << 2)
                    
                    do
                        int32_t ebx_1 = *(edi_7 - 4)
                        edi_7 -= 4
                        edx_8 -= 1
                        
                        if (ebx_1 s<= ecx_8)
                            uint32_t ecx_10 = zx.d(*(j_1 + (ebx_1 << 2) + 2))
                            
                            if (ecx_10 != i_5)
                                *(var_30 + 0x16a8) += (i_5 - ecx_10) * zx.d(*(j_1 + (ebx_1 << 2)))
                                *(j_1 + (ebx_1 << 2) + 2) = i_5.w
                            
                            ecx_8 = eax
                            j -= 1
                    while (j != 0)
                    
                    ebx = var_30
                    edi_5 = var_2c_1
                
                edi_5 -= 2
                var_2c_1 = edi_5
                i_2 = i_5
                i_5 -= 1
            while (i_2 != 1)

return j
