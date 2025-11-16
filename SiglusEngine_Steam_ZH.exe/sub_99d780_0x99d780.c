// 函数: sub_99d780
// 地址: 0x99d780
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t i_9 = 0
int32_t* ebx = arg2
int32_t* var_14 = ebx
int32_t i_11 = 0
_memset(arg1, 0, 0x38)
int32_t ecx = ebx[1]
int32_t eax = 0

if (ecx s> 0)
    do
        if (ebx[2][eax] s> 0)
            i_9 += 1
        
        eax += 1
    while (eax s< ecx)
    
    i_11 = i_9

arg1[1] = ecx
arg1[2] = i_9
int32_t eax_1 = *ebx
*arg1 = eax_1

if (i_9 s> 0)
    int32_t* eax_2 = sub_99d570(eax_1, ebx[1], ebx[2], i_9)
    __alloca_probe_16(i_9 << 2)
    int32_t __saved_edi
    int32_t* ecx_2 = &__saved_edi
    int32_t* var_1c_1 = &__saved_edi
    
    if (eax_2 == 0)
        sub_99de80(arg1)
        return 0xffffffff
    
    if (i_9 s> 0)
        int32_t ecx_4 = &__saved_edi - eax_2
        int32_t i_8 = i_9
        int32_t* ebx_1 = eax_2
        int32_t var_24_1 = ecx_4
        int32_t i
        
        do
            int32_t ecx_6 = rol.d(*ebx_1, 0x10)
            int32_t edx_6 = ((ecx_6 u>> 8 ^ ecx_6 << 8) & 0xff00ff) ^ ecx_6 << 8
            int32_t ecx_12 = ((edx_6 u>> 4 ^ edx_6 << 4) & 0xf0f0f0f) ^ edx_6 << 4
            int32_t edx_12 = ((ecx_12 u>> 2 ^ ecx_12 << 2) & 0x33333333) ^ ecx_12 << 2
            *ebx_1 = ((edx_12 u>> 1 ^ (edx_12 * 2)) & 0x55555555) ^ (edx_12 * 2)
            *(ebx_1 + ecx_4) = ebx_1
            ebx_1 = &ebx_1[1]
            i = i_8
            i_8 -= 1
        while (i != 1)
        ebx = var_14
        i_9 = i_11
        ecx_2 = var_1c_1
    
    sub_761c30(ecx_2, i_9, 4, sub_99d150)
    __alloca_probe_16(i_9 << 2)
    int32_t* var_c_1 = &__saved_edi
    arg1[5] = _malloc(i_9 << 2)
    
    if (i_9 s> 0)
        int32_t ecx_18 = 0
        
        do
            var_c_1[(var_1c_1[ecx_18] - eax_2) s>> 2] = ecx_18
            ecx_18 += 1
        while (ecx_18 s< i_9)
        
        ebx = var_14
        
        if (i_9 s> 0)
            int32_t* ebx_3 = var_c_1
            void* eax_21 = eax_2 - var_c_1
            int32_t i_10 = i_9
            void* var_20_1 = eax_21
            int32_t i_1
            
            do
                int32_t edx_14 = *ebx_3
                ebx_3 = &ebx_3[1]
                *(arg1[5] + (edx_14 << 2)) = *(eax_21 + ebx_3 - 4)
                eax_21 = var_20_1
                i_1 = i_9
                i_9 -= 1
            while (i_1 != 1)
            ebx = var_14
            i_9 = i_11
    
    long double x87_r7
    arg1[4] = sub_99d1f0(_free(eax_2), i_9, ebx, x87_r7, var_c_1)
    char* i_2 = nullptr
    arg1[6] = _malloc(i_9 << 2)
    uint32_t edi_1 = 0
    
    if (ebx[1] s> 0)
        do
            if (i_2[ebx[2]] s> 0)
                int32_t ecx_21 = var_c_1[edi_1]
                edi_1 += 1
                *(arg1[6] + (ecx_21 << 2)) = i_2
            
            i_2 = &i_2[1]
        while (i_2 s< ebx[1])
    
    int32_t eax_30
    char* ecx_22
    eax_30, ecx_22 = _malloc(edi_1)
    int32_t edi_2 = 0
    arg1[7] = eax_30
    char* i_3 = nullptr
    arg1[0xa] = 0
    int32_t var_18 = 0
    
    if (ebx[1] s> 0)
        int32_t eax_31
        
        do
            eax_31.b = i_3[ebx[2]]
            
            if (eax_31.b s> 0)
                ebx.b = eax_31.b
                ecx_22 = var_c_1[edi_2]
                edi_2 += 1
                ecx_22[arg1[7]] = ebx.b
                ebx = var_14
                eax_31 = sx.d(i_3[ebx[2]])
                
                if (eax_31 s> arg1[0xa])
                    arg1[0xa] = eax_31
            
            i_3 = &i_3[1]
        while (i_3 s< ebx[1])
        
        var_18 = edi_2
        
        if (edi_2 == 1 && arg1[0xa] == edi_2)
            arg1[9] = edi_2
            void* eax_35 = sub_74c590(eax_31, i_3, ecx_22, 2, 4)
            arg1[8] = eax_35
            *(eax_35 + 4) = edi_2
            *arg1[8] = edi_2
            return 0
    
    uint32_t i_4 = arg1[2]
    int32_t ecx_23 = 0
    
    for (; i_4 != 0; i_4 u>>= 1)
        ecx_23 += 1
    
    int32_t eax_38 = ecx_23 - 4
    
    if (eax_38 s< 5)
        eax_38 = 5
    
    arg1[9] = eax_38
    
    if (eax_38 s> 8)
        arg1[9] = 8
    
    int32_t ecx_24 = arg1[9]
    int32_t eax_39 = 1 << ecx_24.b
    arg1[8] = sub_74c590(eax_39, i_3, ecx_24, eax_39, 4)
    char* ebx_4 = nullptr
    
    if (edi_2 s> 0)
        do
            int32_t ecx_25 = sx.d(ebx_4[arg1[7]])
            
            if (ecx_25 s<= arg1[9])
                int32_t ecx_27 = rol.d(*(arg1[5] + (ebx_4 << 2)), 0x10)
                int32_t edx_20 = ((ecx_27 u>> 8 ^ ecx_27 << 8) & 0xff00ff) ^ ecx_27 << 8
                int32_t ecx_33 = ((edx_20 u>> 4 ^ edx_20 << 4) & 0xf0f0f0f) ^ edx_20 << 4
                int32_t edx_26 = ((ecx_33 u>> 2 ^ ecx_33 << 2) & 0x33333333) ^ ecx_33 << 2
                int32_t i_5 = 0
                int32_t i_7 = 0
                
                if (1 << ((arg1[9]).b - ecx_25.b) s> 0)
                    do
                        *(arg1[8] + ((i_5 << ebx_4[arg1[7]]
                            | (((edx_26 u>> 1 ^ (edx_26 * 2)) & 0x55555555) ^ (edx_26 * 2))) << 2)) =
                            &ebx_4[1]
                        i_5 = i_7 + 1
                        i_7 = i_5
                    while (i_5 s< 1 << ((arg1[9]).b - ebx_4[arg1[7]]))
                    
                    edi_2 = var_18
            
            ebx_4 = &ebx_4[1]
        while (ebx_4 s< edi_2)
    
    int32_t var_1c_2 = 0
    int32_t eax_57 = 0xfffffffe << (0x1f - (arg1[9]).b)
    int32_t ebx_5 = 0
    int32_t eax_58 = 0
    int32_t var_14_2 = 0
    int32_t var_20_2 = 0
    
    if (eax_39 s> 0)
        int32_t edi_4 = edi_2
        
        do
            int32_t i_6 = eax_58 << (0x20 - (arg1[9]).b)
            int32_t ecx_45 = rol.d(i_6, 0x10)
            int32_t edx_34 = ((ecx_45 u>> 8 ^ ecx_45 << 8) & 0xff00ff) ^ ecx_45 << 8
            int32_t ecx_50 = ((edx_34 u>> 4 ^ edx_34 << 4) & 0xf0f0f0f) ^ edx_34 << 4
            int32_t edx_40 = ((ecx_50 u>> 2 ^ ecx_50 << 2) & 0x33333333) ^ ecx_50 << 2
            
            if (*(arg1[8] + ((((edx_40 u>> 1 ^ (edx_40 * 2)) & 0x55555555) ^ (edx_40 * 2)) << 2))
                    == 0)
                int32_t edx_41 = var_1c_2
                int32_t ecx_56 = edx_41 + 1
                
                if (ecx_56 s< edi_4)
                    int32_t* eax_72 = arg1[5] + (edx_41 << 2) + 4
                    
                    while (*eax_72 u<= i_6)
                        ecx_56 += 1
                        edx_41 += 1
                        eax_72 = &eax_72[1]
                        
                        if (ecx_56 s>= edi_4)
                            break
                    
                    ebx_5 = var_14_2
                    var_1c_2 = edx_41
                
                if (ebx_5 s< edi_4)
                    int32_t* ecx_58 = arg1[5] + (ebx_5 << 2)
                    
                    while (i_6 u>= (*ecx_58 & eax_57))
                        ebx_5 += 1
                        ecx_58 = &ecx_58[1]
                        
                        if (ebx_5 s>= edi_4)
                            break
                    
                    var_14_2 = ebx_5
                
                int32_t edi_5 = edi_4 - ebx_5
                int32_t ebx_7 = edx_41
                
                if (edx_41 u> 0x7fff)
                    ebx_7 = 0x7fff
                
                if (edi_5 u> 0x7fff)
                    edi_5 = 0x7fff
                
                int32_t edx_46 = ((ecx_45 u>> 8 ^ ecx_45 << 8) & 0xff00ff) ^ ecx_45 << 8
                edi_4 = var_18
                int32_t ecx_65 = ((edx_46 u>> 4 ^ edx_46 << 4) & 0xf0f0f0f) ^ edx_46 << 4
                int32_t edx_52 = ((ecx_65 u>> 2 ^ ecx_65 << 2) & 0x33333333) ^ ecx_65 << 2
                *(arg1[8] + ((((edx_52 u>> 1 ^ (edx_52 * 2)) & 0x55555555) ^ (edx_52 * 2)) << 2)) =
                    (ebx_7 | 0xffff0000) << 0xf | edi_5
                ebx_5 = var_14_2
            
            eax_58 = var_20_2 + 1
            var_20_2 = eax_58
        while (eax_58 s< eax_39)

return 0
