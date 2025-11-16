// 函数: sub_49bce6
// 地址: 0x49bce6
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* ebx = arg2
uint32_t eax = *(ebx + 0x20)
int16_t* esi = *(ebx + 0x18)
uint32_t var_8 = arg4
uint32_t eax_2 = zx.d(*esi)
int32_t edi
int32_t var_24 = edi
int32_t result
uint32_t eax_29
bool cond:1_1

if (eax_2 == 0)
    eax_29 = zx.d(esi[4])
    uint32_t ecx_11 = arg5
    arg5 = ecx_11
    cond:1_1 = ecx_11 u<= eax_29
label_49be69:
    
    if (cond:1_1)
        goto label_49be6e
    
    arg5 = eax_29
label_49be6e:
    eax_29.w = esi[1]
    
    if (eax_29.w != 3)
        int32_t i_5 = *(ebx + 0x34) * arg5
        uint32_t eax_30 = zx.d(eax_29.w)
        
        if (eax_30 == 1)
            if (i_5 u> 0)
                uint32_t edx_10 = eax
                uint32_t edi_8 = var_8 - edx_10
                int32_t i
                
                do
                    long double x87_r7_3 = fconvert.t(0f)
                    long double x87_r6_1 = fconvert.t(*(edx_10 + edi_8))
                    x87_r6_1 - x87_r7_3
                    int32_t eax_31
                    eax_31.w = (x87_r6_1 < x87_r7_3 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r6_1, x87_r7_3) ? 1 : 0) << 0xa
                        | (x87_r6_1 == x87_r7_3 ? 1 : 0) << 0xe
                    bool p_1 = unimplemented  {test ah, 0x44}
                    
                    eax_31 = not(p_1) ? 0 : 1
                    
                    *edx_10 = eax_31
                    edx_10 += 4
                    i = i_5
                    i_5 -= 1
                while (i != 1)
        else if (eax_30 == 2)
            int16_t x87status_1
            int16_t temp0_4
            temp0_4, x87status_1 = __fnstcw_memmem16(arg1)
            arg4.w = temp0_4
            int16_t x87control
            int16_t x87status_2
            x87control, x87status_2 = __fldcw_memmem16(arg4.w | 0xc00)
            
            if (i_5 u> 0)
                uint32_t eax_36 = eax
                uint32_t edx_9 = var_8 - eax_36
                int32_t i_1
                
                do
                    *eax_36 = int.d(fconvert.t(fconvert.s(fconvert.t(*(edx_9 + eax_36)))))
                    eax_36 += 4
                    i_1 = i_5
                    i_5 -= 1
                while (i_1 != 1)
            
            int16_t x87control_1
            int16_t x87status_3
            x87control_1, x87status_3 = __fldcw_memmem16(arg4.w)
        
        var_8 = eax
    
    eax_29.w = *(ebx + 8)
    
    if (eax_29.w != 0)
        uint32_t j_2
        uint32_t edi_9
        
        if (*esi == 3)
            j_2 = zx.d(esi[2])
            edi_9 = zx.d(esi[3])
        else
            j_2 = zx.d(esi[3])
            edi_9 = zx.d(esi[2])
        
        if ((j_2.b & 3) != 0)
            int32_t var_14_2 = 0xac8a14
            
            if (eax_29.w != 1)
                var_14_2 = 0xac8a04
            
            float i_6 = edi_9 * arg5
            float esi_2 = (j_2 + 3) & 0xfffffffc
            
            if (i_6 u> 0)
                float eax_39 = ((i_6 << 2) + 4) * j_2 + var_8
                int32_t* var_10_2 = ((i_6 << 2) + 4) i* esi_2 + eax
                int32_t edi_12 = eax + ((i_6 i* esi_2 + j_2) << 2)
                float i_4 = i_6
                float i_2
                
                do
                    int32_t ebx_3 = esi_2 << 2
                    var_10_2 -= ebx_3
                    edi_12 -= ebx_3
                    eax_39 -= j_2 << 2
                    arg4 = esi_2
                    
                    if (esi_2 u> j_2)
                        int32_t* ecx_19 = var_10_2
                        
                        do
                            arg4 -= 1
                            ecx_19 -= 4
                            *ecx_19 = *(var_14_2 + ((arg4 & 3) << 2))
                        while (arg4 u> j_2)
                    
                    if (j_2 u> 0)
                        int32_t ecx_23 = edi_12
                        arg4 = eax_39
                        uint32_t j_1 = j_2
                        uint32_t j
                        
                        do
                            arg4 -= 4
                            ecx_23 -= 4
                            j = j_1
                            j_1 -= 1
                            *ecx_23 = *arg4
                        while (j != 1)
                    
                    i_2 = i_4
                    i_4 -= 1
                while (i_2 != 1)
                ebx = arg2
            
            var_8 = eax
    
    uint32_t eax_42 = *(ebx + 0x2c) * arg5
    uint32_t ecx_24 = zx.d(*(ebx + 0xc))
    
    if (eax_42 u> ecx_24)
        eax_42 = ecx_24
    
    result = (*(ebx + 0x1c))(arg3, zx.d(*(ebx + 0xa)) + arg6, var_8, eax, eax_42)
    
    if (result s< 0)
        return result
else
    uint32_t ecx_10
    
    if (eax_2 == 1)
        ecx_10 = zx.d(esi[3])
    label_49be51:
        arg5 = divu.dp.d(0:arg5, ecx_10)
        eax_29 = zx.d(esi[4])
        cond:1_1 = arg5 u<= eax_29
        goto label_49be69
    
    if (eax_2 == 2)
        ecx_10 = zx.d(esi[3]) * zx.d(esi[2])
        goto label_49be51
    
    if (eax_2 == 3)
        uint32_t ecx_3 = zx.d(esi[2])
        arg5 = divu.dp.d(0:arg5, ecx_3 * zx.d(esi[3]))
        uint32_t eax_21 = zx.d(esi[4])
        
        if (arg5 u> eax_21)
            arg5 = eax_21
        
        int32_t var_10_1 = 0
        int32_t* edx_5 = eax
        
        if (arg5 u> 0)
            do
                int32_t i_3 = 0
                
                if (zx.d(esi[3]) u> 0)
                    do
                        int32_t eax_23 = 0
                        
                        if (ecx_3 u> 0)
                            do
                                *edx_5 = *(arg4
                                    i+ (((ecx_3 * var_10_1 + eax_23) * zx.d(esi[3]) + i_3) << 2))
                                ecx_3 = zx.d(esi[2])
                                edx_5 = &edx_5[1]
                                eax_23 += 1
                            while (eax_23 u< ecx_3)
                        
                        i_3 += 1
                    while (i_3 u< zx.d(esi[3]))
                
                var_10_1 += 1
            while (var_10_1 u< arg5)
        
        var_8 = eax
        goto label_49be6e
    
    if (eax_2 != 5)
        return 0x80004001
    
    arg5 = divu.dp.d(0:arg5, *(ebx + 0x34))
    uint32_t eax_11 = zx.d(esi[4])
    
    if (arg5 u> eax_11)
        arg5 = eax_11
    
    arg2 = nullptr
    
    if (arg5 u> 0)
        do
            arg4 = 0f
            
            if (esi[5] u> 0)
                do
                    void* edi_1 = *(*(ebx + 0x38) + (arg4 << 2))
                    result = sub_49bce6(ebx, arg3, var_8, *(edi_1 + 0x30), arg6)
                    
                    if (result s< 0)
                        return result
                    
                    var_8 += *(edi_1 + 0x30) << 2
                    arg6 += *(edi_1 + 0x28)
                    arg4 += 1
                while (arg4 u< zx.d(esi[5]))
            
            arg2 += 1
        while (arg2 u< arg5)
return 0
