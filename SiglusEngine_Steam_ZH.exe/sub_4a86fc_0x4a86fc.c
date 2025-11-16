// 函数: sub_4a86fc
// 地址: 0x4a86fc
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_1c = edi
sub_4a39e3(arg1)
int32_t i = 0

if (*(arg1 + 8) u> 0)
    do
        void* eax_2 = *(*(arg1 + 0x14) + (i << 2))
        void* ecx_1 = *(*(arg1 + 0x10) + (*(eax_2 + 4) << 2))
        *(eax_2 + 0x40) = 0
        
        if ((*(ecx_1 + 4) & 0x40) == 0)
            *(eax_2 + 0xc) = 0xffffffff
            *(eax_2 + 0x10) = 0xffffffff
        
        i += 1
    while (i u< *(arg1 + 8))

int32_t i_1 = 0

if (*(arg1 + 0xc) u> 0)
    do
        *(*(*(arg1 + 0x18) + (i_1 << 2)) + 0x24) = 0
        void* ecx_5 = *(*(arg1 + 0x18) + (i_1 << 2))
        i_1 += 1
        *(ecx_5 + 0x28) = 0
    while (i_1 u< *(arg1 + 0xc))

sub_4a39e3(arg1)
int32_t i_2 = *(arg1 + 0xc)
int32_t i_5 = i_2
int32_t result

if (i_2 u> 0)
    do
        int32_t* eax_4 = *(*(arg1 + 0x18) + ((i_2 - 1) << 2))
        int32_t ecx_8 = *eax_4
        int32_t edx_1 = ecx_8 & 0xfff00000
        
        if (edx_1 != 0)
            int32_t edi_2 = *(arg1 + 0xc)
            int32_t ecx_9 = ecx_8 & 0xf0000000
            
            if (ecx_9 u>= 0x10000000 && ecx_9 u<= 0x40000000)
                result = sub_4a1581(arg1, eax_4)
            else if (edx_1 != 0x50000000)
                result = sub_4a1e34(arg1, eax_4)
            else
                result = sub_4a196f(arg1, eax_4)
            
            if (result s< 0)
                return result
            
            int32_t ebx_1 = *(arg1 + 0xc)
            int32_t var_8_1 = edi_2
            
            if (edi_2 u< ebx_1)
                do
                    sub_4a1fda(arg1, *(*(arg1 + 0x18) + (var_8_1 << 2)))
                    var_8_1 += 1
                while (var_8_1 u< ebx_1)
            
            uint32_t j_3 = (ebx_1 - edi_2) u>> 1
            
            if (j_3 != 0)
                int32_t edi_3 = edi_2 << 2
                int32_t eax_7 = ebx_1 << 2
                uint32_t j_2 = j_3
                uint32_t j
                
                do
                    int32_t ecx_16 = *(arg1 + 0x18)
                    int32_t* edx_2 = edi_3 + ecx_16
                    int32_t ebx_2 = *edx_2
                    *edx_2 = *(eax_7 + ecx_16 - 4)
                    *(eax_7 + *(arg1 + 0x18) - 4) = ebx_2
                    edi_3 += 4
                    eax_7 -= 4
                    j = j_2
                    j_2 -= 1
                while (j != 1)
        
        i_2 -= 1
    while (i_2 u> 0)
    
    i_2 = i_5

uint32_t edx_5 = (*(arg1 + 0xc) - i_2) u>> 1
int32_t var_8_2 = 0

if (edx_5 != 0)
    int32_t ecx_20 = i_2 << 2
    int32_t var_10_2 = ecx_20
    
    do
        int32_t eax_8 = *(arg1 + 0x18)
        int32_t* ecx_21 = ecx_20 + eax_8
        int32_t edi_4 = *ecx_21
        *ecx_21 = *(eax_8 + ((*(arg1 + 0xc) - var_8_2) << 2) - 4)
        int32_t eax_11 = *(arg1 + 0xc) - var_8_2
        var_8_2 += 1
        *(*(arg1 + 0x18) + (eax_11 << 2) - 4) = edi_4
        ecx_20 = var_10_2 + 4
        var_10_2 = ecx_20
    while (var_8_2 u< edx_5)

int32_t eax_12 = 0

if (i_5 u> 0)
    do
        int32_t* ecx_25 = *(*(arg1 + 0x18) + (eax_12 << 2))
        eax_12 += 1
        *ecx_25 = 0
    while (eax_12 u< i_5)

result = sub_49ff18(arg1)

if (result s< 0)
    return result

int32_t i_3 = 0

if (*(arg1 + 4) u> 0)
    do
        void* eax_14 = *(*(arg1 + 0x10) + (i_3 << 2))
        
        if ((*(eax_14 + 4) & 0x40) == 0)
            *(eax_14 + 0x10) = 0
        
        i_3 += 1
    while (i_3 u< *(arg1 + 4))

int32_t i_4 = 0

if (*(arg1 + 0xc) u> 0)
    do
        void* eax_16 = *(*(arg1 + 0x18) + (i_4 << 2))
        
        if ((*(eax_16 + 2) & 0xfff0) != 0)
            int32_t edx_6 = *(eax_16 + 0xc)
            
            if (edx_6 != 0)
                void* edi_7 =
                    *(*(arg1 + 0x10) + (*(*(*(arg1 + 0x14) + (**(eax_16 + 0x10) << 2)) + 4) << 2))
                
                if ((*(edi_7 + 4) & 0x40) == 0)
                    int32_t j_1 = 0
                    
                    if (edx_6 u> 0)
                        do
                            void* edx_9 =
                                *(*(arg1 + 0x14) + (*(*(eax_16 + 0x10) + (j_1 << 2)) << 2))
                            int32_t ebx_6 = *(edi_7 + 0x10)
                            *(edx_9 + 0x10) = j_1
                            j_1 += 1
                            *(edx_9 + 0xc) = ebx_6
                        while (j_1 u< *(eax_16 + 0xc))
                    
                    *(edi_7 + 0x10) += 1
        
        i_4 += 1
    while (i_4 u< *(arg1 + 0xc))

return 0
