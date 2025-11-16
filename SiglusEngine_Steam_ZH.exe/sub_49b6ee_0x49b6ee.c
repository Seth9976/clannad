// 函数: sub_49b6ee
// 地址: 0x49b6ee
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_24 = edi
void* edi_1 = arg1
uint32_t eax = *(edi_1 + 0x20)
int16_t* esi = *(edi_1 + 0x18)
uint32_t var_8 = arg3
uint32_t eax_2 = zx.d(*esi)
int32_t result
uint32_t eax_30
uint32_t ecx_3
bool cond:0_1

if (eax_2 == 0)
    eax_30 = zx.d(esi[4])
    ecx_3 = arg4
    arg4 = ecx_3
    cond:0_1 = ecx_3 u<= eax_30
label_49b871:
    
    if (cond:0_1)
        goto label_49b876
    
    arg4 = eax_30
label_49b876:
    ecx_3.w = esi[1]
    
    if (ecx_3.w != 1)
        int32_t i_5 = *(edi_1 + 0x34) * arg4
        uint32_t ecx_10 = zx.d(ecx_3.w)
        
        if (ecx_10 != 1)
            if (ecx_10 == 2)
                if (i_5 u> 0)
                    ecx_3 = eax
                    uint32_t edx_11 = var_8 - ecx_3
                    int32_t i
                    
                    do
                        int32_t ebx_6
                        ebx_6.b = *(ecx_3 + edx_11) != 0
                        *ecx_3 = ebx_6
                        ecx_3 += 4
                        i = i_5
                        i_5 -= 1
                    while (i != 1)
            else if (ecx_10 == 3 && i_5 u> 0)
                ecx_3 = eax
                uint32_t edx_9 = var_8 - ecx_3
                int32_t i_1
                
                do
                    long double x87_r7_1
                    
                    if (*(edx_9 + ecx_3) == 0)
                        x87_r7_1 = float.t(0)
                    else
                        x87_r7_1 = float.t(1)
                    
                    *ecx_3 = fconvert.s(x87_r7_1)
                    ecx_3 += 4
                    i_1 = i_5
                    i_5 -= 1
                while (i_1 != 1)
        
        var_8 = eax
    
    ecx_3.w = *(edi_1 + 8)
    
    if (ecx_3.w != 0)
        uint32_t eax_33
        uint32_t j_2
        
        if (*esi == 3)
            j_2 = zx.d(esi[2])
            eax_33 = zx.d(esi[3])
        else
            j_2 = zx.d(esi[3])
            eax_33 = zx.d(esi[2])
        
        if ((j_2.b & 3) != 0)
            int32_t var_14_1 = 0xac89d4
            
            if (ecx_3.w != 1)
                var_14_1 = 0xac89c4
            
            int32_t* i_6 = eax_33 * arg4
            int32_t* esi_2 = (j_2 + 3) & 0xfffffffc
            
            if (i_6 u> 0)
                int32_t* ecx_13 = ((i_6 << 2) + 4) * j_2 + var_8
                int32_t* var_10_2 = ((i_6 << 2) + 4) * esi_2 + eax
                int32_t eax_36 = eax + ((i_6 * esi_2 + j_2) << 2)
                int32_t* i_4 = i_6
                int32_t* i_2
                
                do
                    int32_t edi_4 = esi_2 << 2
                    var_10_2 -= edi_4
                    eax_36 -= edi_4
                    ecx_13 -= j_2 << 2
                    arg3 = esi_2
                    
                    if (esi_2 u> j_2)
                        int32_t* edx_18 = var_10_2
                        
                        do
                            arg3 -= 1
                            edx_18 -= 4
                            *edx_18 = *(var_14_1 + ((arg3 & 3) << 2))
                        while (arg3 u> j_2)
                    
                    if (j_2 u> 0)
                        int32_t edx_22 = eax_36
                        arg3 = ecx_13
                        uint32_t j_1 = j_2
                        uint32_t j
                        
                        do
                            arg3 -= 4
                            edx_22 -= 4
                            j = j_1
                            j_1 -= 1
                            *edx_22 = *arg3
                        while (j != 1)
                    
                    i_2 = i_4
                    i_4 -= 1
                while (i_2 != 1)
                edi_1 = arg1
            
            var_8 = eax
    
    uint32_t eax_39 = *(edi_1 + 0x2c) * arg4
    uint32_t ecx_14 = zx.d(*(edi_1 + 0xc))
    
    if (eax_39 u> ecx_14)
        eax_39 = ecx_14
    
    result = (*(edi_1 + 0x1c))(arg2, zx.d(*(edi_1 + 0xa)) + arg5, var_8, eax, eax_39)
    
    if (result s< 0)
        return result
else
    if (eax_2 == 1)
        ecx_3 = zx.d(esi[3])
    label_49b859:
        arg4 = divu.dp.d(0:arg4, ecx_3)
        eax_30 = zx.d(esi[4])
        cond:0_1 = arg4 u<= eax_30
        goto label_49b871
    
    if (eax_2 == 2)
        ecx_3 = zx.d(esi[3]) * zx.d(esi[2])
        goto label_49b859
    
    if (eax_2 == 3)
        ecx_3 = zx.d(esi[2])
        arg4 = divu.dp.d(0:arg4, ecx_3 * zx.d(esi[3]))
        uint32_t eax_21 = zx.d(esi[4])
        
        if (arg4 u> eax_21)
            arg4 = eax_21
        
        int32_t var_10_1 = 0
        int32_t* edx_5 = eax
        
        if (arg4 u> 0)
            do
                int32_t i_3 = 0
                
                if (zx.d(esi[3]) u> 0)
                    do
                        int32_t eax_23 = 0
                        
                        if (ecx_3 u> 0)
                            do
                                *edx_5 = arg3[(ecx_3 * var_10_1 + eax_23) * zx.d(esi[3]) + i_3]
                                ecx_3 = zx.d(esi[2])
                                edx_5 = &edx_5[1]
                                eax_23 += 1
                            while (eax_23 u< ecx_3)
                        
                        i_3 += 1
                    while (i_3 u< zx.d(esi[3]))
                
                var_10_1 += 1
            while (var_10_1 u< arg4)
        
        var_8 = eax
        goto label_49b876
    
    if (eax_2 != 5)
        return 0x80004001
    
    arg4 = divu.dp.d(0:arg4, *(edi_1 + 0x34))
    uint32_t eax_11 = zx.d(esi[4])
    
    if (arg4 u> eax_11)
        arg4 = eax_11
    
    arg1 = nullptr
    
    if (arg4 u> 0)
        do
            arg3 = nullptr
            
            if (esi[5] u> 0)
                do
                    void* ebx_1 = *(*(edi_1 + 0x38) + (arg3 << 2))
                    result = sub_49b6ee(edi_1, arg2, var_8, *(ebx_1 + 0x30), arg5)
                    
                    if (result s< 0)
                        return result
                    
                    var_8 += *(ebx_1 + 0x30) << 2
                    arg5 += *(ebx_1 + 0x28)
                    arg3 += 1
                while (arg3 u< zx.d(esi[5]))
            
            arg1 += 1
        while (arg1 u< arg4)
return 0
