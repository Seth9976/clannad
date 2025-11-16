// 函数: sub_49c017
// 地址: 0x49c017
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

float ebx = *(arg2 + 0x20)
int16_t* esi = *(arg2 + 0x18)
float var_8 = arg4
uint32_t eax_1 = zx.d(*esi)
int32_t edi
int32_t var_24 = edi
float var_c = ebx
uint32_t eax_20

if (eax_1 == 0)
    eax_20 = zx.d(esi[4])
    uint32_t ecx_10 = arg5 << 2
    arg5 = ecx_10
    
    if (ecx_10 u> eax_20)
        arg5 = eax_20
    
    goto label_49c25a

int32_t result

if (eax_1 == 1)
    eax_20 = zx.d(esi[4])
    
    if (arg5 u> eax_20)
        arg5 = eax_20
    
    eax_20.w = esi[3]
    
    if (eax_20.w == 4)
        goto label_49c25a
    
    int32_t edi_4 = 0
    float edx_8 = ebx
    
    if (arg5 u> 0)
        eax_20 = zx.d(eax_20.w)
        
        do
            int32_t ecx_8 = 0
            
            if (eax_20 u> 0)
                do
                    int32_t eax_34
                    
                    if (ecx_8 u<= 4)
                        eax_34 = *(arg4 i+ ((ecx_8 + (edi_4 << 2)) << 2))
                        ebx = var_c
                    else
                        eax_34 = 0
                    
                    *edx_8 = eax_34
                    eax_20 = zx.d(esi[3])
                    edx_8 += 4
                    ecx_8 += 1
                while (ecx_8 u< eax_20)
            
            edi_4 += 1
        while (edi_4 u< arg5)
    
label_49c153:
    var_8 = ebx
label_49c25a:
    eax_20.w = esi[1]
    
    if (eax_20.w != 3)
        int32_t i_5 = *(arg2 + 0x34) * arg5
        uint32_t eax_36 = zx.d(eax_20.w)
        
        if (eax_36 == 1)
            if (i_5 u> 0)
                float edx_11 = ebx
                int32_t i
                
                do
                    long double x87_r7_3 = fconvert.t(0f)
                    long double x87_r6_1 = fconvert.t(*(edx_11 i+ var_8 i- ebx))
                    x87_r6_1 - x87_r7_3
                    int32_t eax_37
                    eax_37.w = (x87_r6_1 < x87_r7_3 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r6_1, x87_r7_3) ? 1 : 0) << 0xa
                        | (x87_r6_1 == x87_r7_3 ? 1 : 0) << 0xe
                    bool p_1 = unimplemented  {test ah, 0x44}
                    
                    eax_37 = not(p_1) ? 0 : 1
                    
                    *edx_11 = eax_37
                    edx_11 += 4
                    i = i_5
                    i_5 -= 1
                while (i != 1)
        else if (eax_36 == 2)
            int16_t x87status_1
            int16_t temp0_4
            temp0_4, x87status_1 = __fnstcw_memmem16(arg1)
            arg4.w = temp0_4
            int16_t x87control
            int16_t x87status_2
            x87control, x87status_2 = __fldcw_memmem16(arg4.w | 0xc00)
            
            if (i_5 u> 0)
                float eax_42 = ebx
                int32_t i_1
                
                do
                    *eax_42 = int.d(fconvert.t(fconvert.s(fconvert.t(*(var_8 i- ebx i+ eax_42)))))
                    eax_42 += 4
                    i_1 = i_5
                    i_5 -= 1
                while (i_1 != 1)
            
            int16_t x87control_1
            int16_t x87status_3
            x87control_1, x87status_3 = __fldcw_memmem16(arg4.w)
        
        var_8 = ebx
    
    void* eax_43
    eax_43.w = *(arg2 + 8)
    
    if (eax_43.w != 0)
        uint32_t j_2
        uint32_t edi_8
        
        if (*esi == 3)
            j_2 = zx.d(esi[2])
            edi_8 = zx.d(esi[3])
        else
            j_2 = zx.d(esi[3])
            edi_8 = zx.d(esi[2])
        
        if ((j_2.b & 3) != 0)
            int32_t var_14_2 = 0xac8a34
            
            if (eax_43.w != 1)
                var_14_2 = 0xac8a24
            
            int32_t i_6 = edi_8 * arg5
            float esi_2 = (j_2 + 3) & 0xfffffffc
            
            if (i_6 u> 0)
                float eax_46 = j_2 * ((i_6 << 2) + 4) i+ var_8
                int32_t* var_10_1 = ebx i+ ((i_6 i* esi_2 + j_2) << 2)
                int32_t* ecx_20 = esi_2 i* ((i_6 << 2) + 4) i+ var_c
                int32_t i_4 = i_6
                int32_t i_2
                
                do
                    int32_t edi_10 = esi_2 << 2
                    var_10_1 -= edi_10
                    ecx_20 -= edi_10
                    eax_46 -= j_2 << 2
                    arg4 = esi_2
                    
                    if (esi_2 u> j_2)
                        int32_t* var_8_3 = ecx_20
                        
                        do
                            arg4 -= 1
                            var_8_3 -= 4
                            *var_8_3 = *(var_14_2 + ((arg4 & 3) << 2))
                        while (arg4 u> j_2)
                    
                    if (j_2 u> 0)
                        int32_t* edi_16 = var_10_1
                        arg4 = eax_46
                        uint32_t j_1 = j_2
                        uint32_t j
                        
                        do
                            arg4 -= 4
                            edi_16 -= 4
                            j = j_1
                            j_1 -= 1
                            *edi_16 = *arg4
                        while (j != 1)
                    
                    i_2 = i_4
                    i_4 -= 1
                while (i_2 != 1)
                ebx = var_c
            
            var_8 = ebx
    
    uint32_t eax_48 = *(arg2 + 0x2c) * arg5
    uint32_t edx_12 = zx.d(*(arg2 + 0xc))
    
    if (eax_48 u> edx_12)
        eax_48 = edx_12
    
    result = (*(arg2 + 0x1c))(arg3, zx.d(*(arg2 + 0xa)) + arg6, var_8, ebx, eax_48)
    
    if (result s< 0)
        return result
else
    if (eax_1 == 2)
        uint32_t ecx_5 = zx.d(esi[2])
        arg5 = divu.dp.d(0:arg5, ecx_5)
        eax_20 = zx.d(esi[4])
        
        if (arg5 u> eax_20)
            arg5 = eax_20
        
        float edx_7
        edx_7.w = esi[3]
        
        if (edx_7.w == 4)
            goto label_49c25a
        
        uint32_t var_8_2 = 0
        float edi_3 = ebx
        
        if (arg5 u> 0)
            do
                int32_t ebx_2 = 0
                
                if (ecx_5 u> 0)
                    uint32_t eax_28 = zx.d(edx_7.w)
                    
                    do
                        int32_t ecx_6 = 0
                        
                        if (eax_28 u> 0)
                            do
                                int32_t eax_29
                                
                                if (ecx_6 u<= 4)
                                    eax_29 = *(arg4 i+
                                        ((ecx_6 + ((zx.d(esi[2]) * var_8_2 + ebx_2) << 2)) << 2))
                                else
                                    eax_29 = 0
                                
                                *edi_3 = eax_29
                                edx_7.w = esi[3]
                                edi_3 += 4
                                eax_28 = zx.d(edx_7.w)
                                ecx_6 += 1
                            while (ecx_6 u< eax_28)
                        
                        ecx_5 = zx.d(esi[2])
                        ebx_2 += 1
                    while (ebx_2 u< ecx_5)
                
                var_8_2 += 1
            while (var_8_2 u< arg5)
            
            ebx = var_c
        
        goto label_49c153
    
    if (eax_1 == 3)
        uint32_t ecx_3 = zx.d(esi[3])
        arg5 = divu.dp.d(0:arg5, ecx_3)
        eax_20 = zx.d(esi[4])
        
        if (arg5 u> eax_20)
            arg5 = eax_20
        
        int32_t var_8_1 = 0
        float edi_2 = ebx
        
        if (arg5 u> 0)
            do
                int32_t edx_5 = 0
                
                if (ecx_3 u> 0)
                    uint32_t eax_21 = zx.d(esi[2])
                    
                    do
                        int32_t ecx_4 = 0
                        
                        if (eax_21 u> 0)
                            do
                                int32_t eax_22
                                
                                if (edx_5 u<= 4)
                                    eax_22 = *(arg4
                                        i+ ((edx_5 + ((eax_21 * var_8_1 + ecx_4) << 2)) << 2))
                                    ebx = var_c
                                else
                                    eax_22 = 0
                                
                                *edi_2 = eax_22
                                eax_21 = zx.d(esi[2])
                                edi_2 += 4
                                ecx_4 += 1
                            while (ecx_4 u< eax_21)
                        
                        ecx_3 = zx.d(esi[3])
                        edx_5 += 1
                    while (edx_5 u< ecx_3)
                
                var_8_1 += 1
            while (var_8_1 u< arg5)
        
        goto label_49c153
    
    if (eax_1 != 5)
        return 0x80004001
    
    arg5 = divu.dp.d(0:(arg5 << 2), *(arg2 + 0x34))
    uint32_t eax_11 = zx.d(esi[4])
    
    if (arg5 u> eax_11)
        arg5 = eax_11
    
    arg4 = 0f
    
    if (arg5 u> 0)
        do
            int32_t i_3 = 0
            
            if (esi[5] u> 0)
                do
                    void* edi_1 = *(*(arg2 + 0x38) + (i_3 << 2))
                    result, arg1 = sub_49bce6(arg1, arg2, arg3, var_8, *(edi_1 + 0x30), arg6)
                    
                    if (result s< 0)
                        return result
                    
                    var_8 += *(edi_1 + 0x30) << 2
                    arg6 += *(edi_1 + 0x28)
                    i_3 += 1
                while (i_3 u< zx.d(esi[5]))
            
            arg4 += 1
        while (arg4 u< arg5)
return 0
