// 函数: sub_49c404
// 地址: 0x49c404
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

float ebx = arg4
int16_t* esi = *(arg2 + 0x18)
uint32_t eax = zx.d(*esi)
int32_t edi
int32_t var_24 = edi
float edi_1 = *(arg2 + 0x20)
float var_8 = edi_1
float var_c = ebx
uint32_t eax_17

if (eax == 0)
    eax_17 = zx.d(esi[4])
    uint32_t ecx_12 = arg5 << 4
    arg5 = ecx_12
    
    if (ecx_12 u> eax_17)
        arg5 = eax_17
    
    goto label_49c6eb

int32_t result

if (eax == 1)
    eax_17 = zx.d(esi[4])
    uint32_t ecx_9 = arg5 << 2
    arg5 = ecx_9
    
    if (ecx_9 u> eax_17)
        arg5 = eax_17
    
    eax_17.w = esi[3]
    
    if (eax_17.w == 4)
        goto label_49c6eb
    
    float edx_6 = edi_1
    int32_t edi_5 = 0
    
    if (arg5 u> 0)
        eax_17 = zx.d(eax_17.w)
        
        do
            int32_t ecx_10 = 0
            
            if (eax_17 u> 0)
                do
                    int32_t eax_26
                    
                    if (ecx_10 u<= 4)
                        eax_26 =
                            *(arg4 i+ ((ecx_10 + (((edi_5 & 3) + (edi_5 u>> 2 << 2)) << 2)) << 2))
                    else
                        eax_26 = 0
                    
                    *edx_6 = eax_26
                    eax_17 = zx.d(esi[3])
                    edx_6 += 4
                    ecx_10 += 1
                while (ecx_10 u< eax_17)
            
            edi_5 += 1
        while (edi_5 u< arg5)
    
label_49c575:
    ebx = var_8
    var_c = ebx
label_49c6eb:
    eax_17.w = esi[1]
    
    if (eax_17.w != 3)
        int32_t i_8 = *(arg2 + 0x34) * arg5
        uint32_t eax_31 = zx.d(eax_17.w)
        
        if (eax_31 == 1)
            if (i_8 u> 0)
                float edx_9 = var_8
                int32_t edi_8 = ebx i- edx_9
                int32_t i
                
                do
                    long double x87_r7_4 = fconvert.t(0f)
                    long double x87_r6_1 = fconvert.t(*(edx_9 i+ edi_8))
                    x87_r6_1 - x87_r7_4
                    int32_t eax_32
                    eax_32.w = (x87_r6_1 < x87_r7_4 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r6_1, x87_r7_4) ? 1 : 0) << 0xa
                        | (x87_r6_1 == x87_r7_4 ? 1 : 0) << 0xe
                    bool p_1 = unimplemented  {test ah, 0x44}
                    
                    eax_32 = not(p_1) ? 0 : 1
                    
                    *edx_9 = eax_32
                    edx_9 += 4
                    i = i_8
                    i_8 -= 1
                while (i != 1)
        else if (eax_31 == 2)
            int16_t x87status_1
            int16_t temp0_2
            temp0_2, x87status_1 = __fnstcw_memmem16(arg1)
            arg4.w = temp0_2
            int16_t x87control
            int16_t x87status_2
            x87control, x87status_2 = __fldcw_memmem16(arg4.w | 0xc00)
            
            if (i_8 u> 0)
                float eax_37 = var_8
                float* edx_8 = ebx i- eax_37
                int32_t i_1
                
                do
                    *eax_37 = int.d(fconvert.t(fconvert.s(fconvert.t(*(edx_8 i+ eax_37)))))
                    eax_37 += 4
                    i_1 = i_8
                    i_8 -= 1
                while (i_1 != 1)
            
            int16_t x87control_1
            int16_t x87status_3
            x87control_1, x87status_3 = __fldcw_memmem16(arg4.w)
        
        var_c = var_8
    
    void* eax_39
    eax_39.w = *(arg2 + 8)
    
    if (eax_39.w != 0)
        uint32_t j_2
        uint32_t edi_9
        
        if (*esi == 3)
            j_2 = zx.d(esi[2])
            edi_9 = zx.d(esi[3])
        else
            j_2 = zx.d(esi[3])
            edi_9 = zx.d(esi[2])
        
        if ((j_2.b & 3) != 0)
            int32_t var_10_1 = 0xac8a54
            
            if (eax_39.w != 1)
                var_10_1 = 0xac8a44
            
            float i_10 = edi_9 * arg5
            float esi_2 = (j_2 + 3) & 0xfffffffc
            
            if (i_10 u> 0)
                float eax_42 = ((i_10 << 2) + 4) * j_2 i+ var_c
                int32_t* ebx_23 = var_8 i+ ((i_10 i* esi_2 + j_2) << 2)
                int32_t* var_c_2 = ((i_10 << 2) + 4) i* esi_2 i+ var_8
                float i_7 = i_10
                float i_2
                
                do
                    int32_t edi_13 = esi_2 << 2
                    var_c_2 -= edi_13
                    ebx_23 -= edi_13
                    eax_42 -= j_2 << 2
                    arg4 = esi_2
                    
                    if (esi_2 u> j_2)
                        int32_t* ecx_21 = var_c_2
                        
                        do
                            arg4 -= 1
                            ecx_21 -= 4
                            *ecx_21 = *(var_10_1 + ((arg4 & 3) << 2))
                        while (arg4 u> j_2)
                    
                    if (j_2 u> 0)
                        int32_t* ecx_25 = ebx_23
                        arg4 = eax_42
                        uint32_t j_1 = j_2
                        uint32_t j
                        
                        do
                            arg4 -= 4
                            ecx_25 -= 4
                            j = j_1
                            j_1 -= 1
                            *ecx_25 = *arg4
                        while (j != 1)
                    
                    i_2 = i_7
                    i_7 -= 1
                while (i_2 != 1)
            
            var_c = var_8
    
    uint32_t eax_45 = *(arg2 + 0x2c) * arg5
    uint32_t edx_10 = zx.d(*(arg2 + 0xc))
    
    if (eax_45 u> edx_10)
        eax_45 = edx_10
    
    result = (*(arg2 + 0x1c))(arg3, zx.d(*(arg2 + 0xa)) + arg6, var_c, var_8, eax_45)
    
    if (result s< 0)
        return result
else
    if (eax == 2)
        eax_17 = zx.d(esi[4])
        
        if (arg5 u> eax_17)
            arg5 = eax_17
        
        uint32_t ecx_7
        ecx_7.w = esi[2]
        
        if (ecx_7.w == 4 && esi[3] == ecx_7.w)
            goto label_49c6eb
        
        uint32_t var_c_1 = 0
        float edi_4 = var_8
        
        if (arg5 u> 0)
            do
                int32_t i_3 = 0
                
                if (ecx_7.w u> 0)
                    uint32_t eax_21 = zx.d(esi[3])
                    
                    do
                        ecx_7 = 0
                        
                        if (eax_21 u> 0)
                            do
                                int32_t eax_25
                                
                                if (i_3 u> 4 || ecx_7 u> 4)
                                    eax_25 = 0
                                else
                                    eax_25 =
                                        *(arg4 i+ ((ecx_7 + ((i_3 + (var_c_1 << 2)) << 2)) << 2))
                                
                                *edi_4 = eax_25
                                eax_21 = zx.d(esi[3])
                                edi_4 += 4
                                ecx_7 += 1
                            while (ecx_7 u< eax_21)
                        
                        ecx_7.w = esi[2]
                        i_3 += 1
                    while (i_3 u< zx.d(ecx_7.w))
                
                var_c_1 += 1
            while (var_c_1 u< arg5)
        
        goto label_49c575
    
    if (eax == 3)
        eax_17 = zx.d(esi[4])
        
        if (arg5 u> eax_17)
            arg5 = eax_17
        
        float edx
        edx.w = esi[2]
        
        if (edx.w != 4 || esi[3] != edx.w)
            int32_t ebx_16 = 0
            
            if (arg5 u> 0)
                do
                    int32_t i_4 = 0
                    
                    if (esi[3] u> 0)
                        eax_17 = zx.d(edx.w)
                        
                        do
                            int32_t ecx_5 = 0
                            
                            if (eax_17 u> 0)
                                do
                                    int32_t eax_20
                                    
                                    if (ecx_5 u> 4 || i_4 u> 4)
                                        eax_20 = 0
                                    else
                                        eax_20 =
                                            *(arg4 i+ ((i_4 + ((ecx_5 + (ebx_16 << 2)) << 2)) << 2))
                                    
                                    *edi_1 = eax_20
                                    edx.w = esi[2]
                                    edi_1 += 4
                                    eax_17 = zx.d(edx.w)
                                    ecx_5 += 1
                                while (ecx_5 u< eax_17)
                            
                            i_4 += 1
                        while (i_4 u< zx.d(esi[3]))
                    
                    ebx_16 += 1
                while (ebx_16 u< arg5)
        else if (arg5 u> 0)
            void* ecx_4 = var_8 i+ 8
            eax_17 = arg4 i+ 0x20
            uint32_t i_9 = arg5
            uint32_t i_5
            
            do
                *(ecx_4 - 8) = *(eax_17 - 0x20)
                *(ecx_4 - 4) = *(eax_17 - 0x10)
                *ecx_4 = *eax_17
                *(ecx_4 + 4) = *(eax_17 + 0x10)
                *(ecx_4 + 8) = *(eax_17 - 0x1c)
                *(ecx_4 + 0xc) = *(eax_17 - 0xc)
                *(ecx_4 + 0x10) = *(eax_17 + 4)
                *(ecx_4 + 0x14) = *(eax_17 + 0x14)
                *(eax_17 + var_8 i- arg4) = fconvert.s(fconvert.t(*(eax_17 - 0x18)))
                *(ecx_4 + 0x1c) = *(eax_17 - 8)
                *(ecx_4 + 0x20) = *(eax_17 + 8)
                *(ecx_4 + 0x24) = *(eax_17 + 0x18)
                *(ecx_4 + 0x28) = *(eax_17 - 0x14)
                *(ecx_4 + 0x2c) = *(eax_17 - 4)
                *(ecx_4 + 0x30) = *(eax_17 + 0xc)
                *(ecx_4 + 0x34) = *(eax_17 + 0x1c)
                eax_17 += 0x40
                ecx_4 += 0x40
                i_5 = i_9
                i_9 -= 1
            while (i_5 != 1)
        
        goto label_49c575
    
    if (eax != 5)
        return 0x80004001
    
    arg5 = divu.dp.d(0:(arg5 << 4), *(arg2 + 0x34))
    uint32_t eax_10 = zx.d(esi[4])
    
    if (arg5 u> eax_10)
        arg5 = eax_10
    
    arg4 = 0f
    
    if (arg5 u> 0)
        do
            int32_t i_6 = 0
            
            if (esi[5] u> 0)
                do
                    void* edi_2 = *(*(arg2 + 0x38) + (i_6 << 2))
                    result, arg1 = sub_49bce6(arg1, arg2, arg3, var_c, *(edi_2 + 0x30), arg6)
                    
                    if (result s< 0)
                        return result
                    
                    var_c += *(edi_2 + 0x30) << 2
                    arg6 += *(edi_2 + 0x28)
                    i_6 += 1
                while (i_6 u< zx.d(esi[5]))
            
            arg4 += 1
        while (arg4 u< arg5)
return 0
