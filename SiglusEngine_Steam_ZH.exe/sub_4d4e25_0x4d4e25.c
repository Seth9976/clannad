// 函数: sub_4d4e25
// 地址: 0x4d4e25
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_20 = edi
*(arg1 + 0x15c) = 0
int32_t* eax = *(arg1 + 0x100)
int32_t ecx = *eax

if ((ecx & 0xfff00000) != 0x20400000)
    return 

int32_t i_4 = ecx & 0xfffff
int32_t var_8_1 = 1

if (i_4 u> 0)
    int32_t* edx_2 = eax[2]
    int32_t* esi_1 = &edx_2[i_4]
    int32_t i_2 = i_4
    int32_t i
    
    do
        if (*edx_2 != *esi_1)
            var_8_1 = 0
        
        esi_1 = &esi_1[1]
        edx_2 = &edx_2[1]
        i = i_2
        i_2 -= 1
    while (i != 1)

long double x87_r7_1

if (i_4 u> 0 && var_8_1 == 0)
    x87_r7_1 = fconvert.t(-0.5f)
    goto label_4d4eb8

eax = sub_4d10f4(arg1, i_4 | 0x20400000, eax, nullptr, 2, 1)
x87_r7_1 = fconvert.t(-1f)

if (eax == 0)
    return 

int32_t* var_14 = eax
label_4d4eb8:
int32_t* eax_1 = eax[2]
int32_t edx_3 = *(arg1 + 0x14)
int32_t ecx_3 = *(arg1 + 0x10)
int32_t i_5 = *eax & 0xfffff
int32_t* ebx_2 = &eax_1[i_5]
int32_t* var_10_1

if ((*(*(ecx_3 + (*(*(edx_3 + (*ebx_2 << 2)) + 4) << 2)) + 5) & 1) != 0)
    var_10_1 = eax_1
    eax_1 = ebx_2
label_4d4f03:
    int32_t ecx_6 = 0
    
    if (i_5 u> 0)
        do
            long double x87_r5_1 = fconvert.t(*(*(edx_3 + (eax_1[ecx_6] << 2)) + 0x20))
            x87_r5_1 - x87_r7_1
            void* eax_4
            eax_4.w = (x87_r5_1 < x87_r7_1 ? 1 : 0) << 8
                | (is_unordered.t(x87_r5_1, x87_r7_1) ? 1 : 0) << 0xa
                | (x87_r5_1 == x87_r7_1 ? 1 : 0) << 0xe | 0x3800
            bool p_1 = unimplemented  {test ah, 0x44}
            
            if (p_1)
                return 
            
            ecx_6 += 1
        while (ecx_6 u< i_5)
    
    int32_t* var_30_3
    void* var_28_1
    int32_t* esi_4
    
    if (var_8_1 != 0)
        esi_4 = var_14
        int32_t var_24_2 = 0
        var_28_1 = esi_4
        int32_t var_2c_2 = 0x60000
        var_30_3 = *(*(arg1 + 0x100) + 8)
    label_4d4fab:
        
        if (sub_4d3501(arg1, 0x60000, 0, var_30_3, 0x60000, var_28_1, 0) == 0)
            *esi_4 = 0
    else
        int32_t* eax_5 = *(arg1 + 0x100)
        int32_t* eax_9 = sub_4d10f4(arg1, (*eax_5 & 0xfffff) | 0x20400000, eax_5, nullptr, 2, 2)
        
        if (eax_9 != 0)
            int32_t var_8_2 = 1
            
            if (i_5 u> 0)
                int32_t* ecx_8 = eax_9[2]
                int32_t* edx_4 = &ecx_8[i_5]
                int32_t i_3 = i_5
                int32_t i_1
                
                do
                    if (*ecx_8 != *edx_4)
                        var_8_2 = 0
                    
                    edx_4 = &edx_4[1]
                    ecx_8 = &ecx_8[1]
                    i_1 = i_3
                    i_3 -= 1
                while (i_1 != 1)
            
            if (i_5 u<= 0 || var_8_2 != 0)
                int32_t var_24_1 = 0
                var_28_1 = eax_9
                esi_4 = eax_9
                int32_t var_2c_1 = 0x60000
                var_30_3 = var_10_1
                goto label_4d4fab
else if ((*(*(ecx_3 + (*(*(edx_3 + (*eax_1 << 2)) + 4) << 2)) + 5) & 1) != 0)
    var_10_1 = ebx_2
    goto label_4d4f03
