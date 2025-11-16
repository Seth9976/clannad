// 函数: sub_4a3d3d
// 地址: 0x4a3d3d
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* var_8 = arg1
void* var_c = arg1
int32_t edi
int32_t var_18 = edi
sub_4a39e3(arg1)
int32_t i = 0

if (*(arg1 + 0xc) u> 0)
    do
        void* eax_2 = *(*(arg1 + 0x18) + (i << 2))
        i += 1
        *(eax_2 + 0x18) = 0
        *(eax_2 + 0x20) = 0
        *(eax_2 + 0x14) = 0
        *(eax_2 + 0x1c) = 0
    while (i u< *(arg1 + 0xc))

int32_t i_1 = 0

if (*(arg1 + 0xc) u> 0)
    do
        void* esi_1 = *(*(arg1 + 0x18) + (i_1 << 2))
        
        if ((*(esi_1 + 2) & 0xfff0) != 0)
            int32_t j = 0
            
            if (*(esi_1 + 0xc) u> 0)
                do
                    sub_4a3cb0(arg1, *(*(esi_1 + 0x10) + (j << 2)), i_1, 0)
                    j += 1
                while (j u< *(esi_1 + 0xc))
            
            int32_t j_1 = 0
            
            if (*(esi_1 + 4) u> 0)
                do
                    int32_t eax_6 = *(*(esi_1 + 8) + (j_1 << 2))
                    
                    if (eax_6 != 0xffffffff)
                        int32_t ecx_4 = *(*(*(arg1 + 0x14) + (eax_6 << 2)) + 0x38)
                        
                        if (ecx_4 != 0xffffffff)
                            eax_6 = ecx_4
                    
                    sub_4a3cb0(arg1, eax_6, i_1, 1)
                    j_1 += 1
                while (j_1 u< *(esi_1 + 4))
        
        i_1 += 1
    while (i_1 u< *(arg1 + 0xc))

int32_t i_2 = 0

if (*(arg1 + 0xc) u> 0)
    do
        void* esi_2 = *(*(arg1 + 0x18) + (i_2 << 2))
        int32_t eax_9 = *(esi_2 + 0x14)
        int32_t eax_10
        
        if (eax_9 != 0)
            eax_10 = sub_49ec06(eax_9)
            *(esi_2 + 0x18) = eax_10
        
        if (eax_9 != 0 && eax_10 == 0)
            return 0x8007000e
        
        int32_t eax_11 = *(esi_2 + 0x1c)
        
        if (eax_11 != 0)
            int32_t eax_12 = sub_49ec06(eax_11)
            *(esi_2 + 0x20) = eax_12
            
            if (eax_12 == 0)
                return 0x8007000e
        
        i_2 += 1
        *(esi_2 + 0x14) = 0
        *(esi_2 + 0x1c) = 0
    while (i_2 u< *(arg1 + 0xc))

int32_t i_3 = 0

if (*(arg1 + 0xc) u> 0)
    do
        void* esi_3 = *(*(arg1 + 0x18) + (i_3 << 2))
        
        if ((*(esi_3 + 2) & 0xfff0) != 0)
            int32_t j_2 = 0
            
            if (*(esi_3 + 0xc) u> 0)
                do
                    sub_4a3cb0(arg1, *(*(esi_3 + 0x10) + (j_2 << 2)), i_3, 0)
                    j_2 += 1
                while (j_2 u< *(esi_3 + 0xc))
            
            int32_t j_3 = 0
            
            if (*(esi_3 + 4) u> 0)
                do
                    int32_t eax_16 = *(*(esi_3 + 8) + (j_3 << 2))
                    
                    if (eax_16 != 0xffffffff)
                        int32_t ecx_10 = *(*(*(arg1 + 0x14) + (eax_16 << 2)) + 0x38)
                        
                        if (ecx_10 != 0xffffffff)
                            eax_16 = ecx_10
                    
                    sub_4a3cb0(arg1, eax_16, i_3, 1)
                    j_3 += 1
                while (j_3 u< *(esi_3 + 4))
        
        i_3 += 1
    while (i_3 u< *(arg1 + 0xc))

int32_t i_4 = 0

if (*(arg1 + 0xc) u> 0)
    do
        void* esi_4 = *(*(arg1 + 0x18) + (i_4 << 2))
        int32_t eax_19 = *(esi_4 + 0x14)
        
        if (eax_19 != 0)
            sub_458e55(sub_4e4d23, *(esi_4 + 0x18), eax_19, 0)
            int32_t var_8_1 = 1
            int32_t j_4 = 1
            
            if (*(esi_4 + 0x14) u> 1)
                do
                    int32_t eax_20 = *(esi_4 + 0x18)
                    int32_t ecx_13 = *(eax_20 + (j_4 << 2))
                    
                    if (ecx_13 != *(eax_20 + (j_4 << 2) - 4))
                        int32_t ebx_1 = var_8_1
                        var_8_1 += 1
                        *(eax_20 + (ebx_1 << 2)) = ecx_13
                    
                    j_4 += 1
                while (j_4 u< *(esi_4 + 0x14))
            
            *(esi_4 + 0x14) = var_8_1
        
        int32_t eax_22 = *(esi_4 + 0x1c)
        
        if (eax_22 != 0)
            sub_458e55(sub_4e4d23, *(esi_4 + 0x20), eax_22, 0)
            int32_t var_8_2 = 1
            int32_t j_5 = 1
            
            if (*(esi_4 + 0x1c) u> 1)
                do
                    int32_t eax_23 = *(esi_4 + 0x20)
                    int32_t ecx_14 = *(eax_23 + (j_5 << 2))
                    
                    if (ecx_14 != *(eax_23 + (j_5 << 2) - 4))
                        int32_t ebx_2 = var_8_2
                        var_8_2 += 1
                        *(eax_23 + (ebx_2 << 2)) = ecx_14
                    
                    j_5 += 1
                while (j_5 u< *(esi_4 + 0x1c))
            
            *(esi_4 + 0x1c) = var_8_2
        
        i_4 += 1
    while (i_4 u< *(arg1 + 0xc))

return 0
