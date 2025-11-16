// 函数: sub_49ccd3
// 地址: 0x49ccd3
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* eax = *(arg2 + 0x20)
int32_t* ebx = arg4
int16_t* esi = *(arg2 + 0x18)
uint32_t eax_1 = zx.d(*esi)
int32_t edi
int32_t var_24 = edi
int32_t* var_c = ebx
int32_t result
uint32_t eax_24

if (eax_1 == 0)
    eax_24 = zx.d(esi[4])
    uint32_t edi_8 = arg5 << 4
    arg5 = edi_8
    
    if (edi_8 u> eax_24)
        edi_8 = eax_24
        arg5 = edi_8
    
    int32_t* ecx_17 = eax
    int32_t edx_7 = 0
    
    if (edi_8 u> 0)
        do
            uint32_t eax_40 = edx_7 u>> 2
            *ecx_17 = *(arg4 i+ (((eax_40 & 3) + (((edx_7 & 3) + (eax_40 u>> 2 << 2)) << 2)) << 2))
            ecx_17 = &ecx_17[1]
            edx_7 += 1
        while (edx_7 u< arg5)
    
label_49d02c:
    ebx = eax
    var_c = ebx
label_49d032:
    eax_24.w = esi[1]
    
    if (eax_24.w != 3)
        int32_t i_8 = *(arg2 + 0x34) * arg5
        uint32_t eax_43 = zx.d(eax_24.w)
        
        if (eax_43 == 1)
            if (i_8 u> 0)
                int32_t* edx_10 = eax
                int32_t edi_15 = ebx - edx_10
                int32_t i
                
                do
                    long double x87_r7_4 = fconvert.t(0f)
                    long double x87_r6_1 = fconvert.t(*(edx_10 + edi_15))
                    x87_r6_1 - x87_r7_4
                    int32_t eax_44
                    eax_44.w = (x87_r6_1 < x87_r7_4 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r6_1, x87_r7_4) ? 1 : 0) << 0xa
                        | (x87_r6_1 == x87_r7_4 ? 1 : 0) << 0xe
                    bool p_1 = unimplemented  {test ah, 0x44}
                    
                    eax_44 = not(p_1) ? 0 : 1
                    
                    *edx_10 = eax_44
                    edx_10 = &edx_10[1]
                    i = i_8
                    i_8 -= 1
                while (i != 1)
        else if (eax_43 == 2)
            int16_t x87status_1
            int16_t temp0_2
            temp0_2, x87status_1 = __fnstcw_memmem16(arg1)
            arg4.w = temp0_2
            int16_t x87control
            int16_t x87status_2
            x87control, x87status_2 = __fldcw_memmem16(arg4.w | 0xc00)
            
            if (i_8 u> 0)
                int32_t* eax_49 = eax
                void* edx_9 = ebx - eax_49
                int32_t i_1
                
                do
                    *eax_49 = int.d(fconvert.t(fconvert.s(fconvert.t(*(edx_9 + eax_49)))))
                    eax_49 = &eax_49[1]
                    i_1 = i_8
                    i_8 -= 1
                while (i_1 != 1)
            
            int16_t x87control_1
            int16_t x87status_3
            x87control_1, x87status_3 = __fldcw_memmem16(arg4.w)
        
        ebx = eax
        var_c = ebx
    
    void* eax_50
    eax_50.w = *(arg2 + 8)
    
    if (eax_50.w != 0)
        uint32_t j_2
        uint32_t edi_16
        
        if (*esi == 3)
            j_2 = zx.d(esi[2])
            edi_16 = zx.d(esi[3])
        else
            j_2 = zx.d(esi[3])
            edi_16 = zx.d(esi[2])
        
        if ((j_2.b & 3) != 0)
            int32_t var_10_1 = 0xac8a94
            
            if (eax_50.w != 1)
                var_10_1 = 0xac8a84
            
            float i_10 = edi_16 * arg5
            float esi_2 = (j_2 + 3) & 0xfffffffc
            
            if (i_10 u> 0)
                void* eax_53 = ((i_10 << 2) + 4) * j_2 + var_c
                void* ebx_27 = &eax[i_10 i* esi_2 + j_2]
                void* var_c_3 = ((i_10 << 2) + 4) i* esi_2 + eax
                float i_7 = i_10
                float i_2
                
                do
                    int32_t edi_20 = esi_2 << 2
                    var_c_3 -= edi_20
                    ebx_27 -= edi_20
                    eax_53 -= j_2 << 2
                    arg4 = esi_2
                    
                    if (esi_2 u> j_2)
                        void* ecx_26 = var_c_3
                        
                        do
                            arg4 -= 1
                            ecx_26 -= 4
                            *ecx_26 = *(var_10_1 + ((arg4 & 3) << 2))
                        while (arg4 u> j_2)
                    
                    if (j_2 u> 0)
                        void* ecx_30 = ebx_27
                        arg4 = eax_53
                        uint32_t j_1 = j_2
                        uint32_t j
                        
                        do
                            arg4 -= 4
                            ecx_30 -= 4
                            j = j_1
                            j_1 -= 1
                            *ecx_30 = *arg4
                        while (j != 1)
                    
                    i_2 = i_7
                    i_7 -= 1
                while (i_2 != 1)
            
            ebx = eax
    
    uint32_t eax_55 = *(arg2 + 0x2c) * arg5
    uint32_t edx_11 = zx.d(*(arg2 + 0xc))
    
    if (eax_55 u> edx_11)
        eax_55 = edx_11
    
    result = (*(arg2 + 0x1c))(arg3, zx.d(*(arg2 + 0xa)) + arg6, ebx, eax, eax_55)
    
    if (result s< 0)
        return result
else
    if (eax_1 == 1)
        eax_24 = zx.d(esi[4])
        uint32_t ecx_15 = arg5 << 2
        arg5 = ecx_15
        
        if (ecx_15 u> eax_24)
            arg5 = eax_24
        
        int32_t* edx_6 = eax
        int32_t edi_6 = 0
        
        if (arg5 u> 0)
            eax_24 = zx.d(esi[3])
            
            do
                int32_t ecx_16 = 0
                
                if (eax_24 u> 0)
                    do
                        int32_t eax_34
                        
                        if (ecx_16 u<= 4)
                            eax_34 = *(arg4
                                i+ (((edi_6 & 3) + ((ecx_16 + (edi_6 u>> 2 << 2)) << 2)) << 2))
                        else
                            eax_34 = 0
                        
                        *edx_6 = eax_34
                        eax_24 = zx.d(esi[3])
                        edx_6 = &edx_6[1]
                        ecx_16 += 1
                    while (ecx_16 u< eax_24)
                
                edi_6 += 1
            while (edi_6 u< arg5)
        
        goto label_49d02c
    
    if (eax_1 == 2)
        eax_24 = zx.d(esi[4])
        
        if (arg5 u> eax_24)
            arg5 = eax_24
        
        uint32_t ecx_12
        ecx_12.w = esi[2]
        
        if (ecx_12.w != 4 || esi[3] != ecx_12.w)
            uint32_t var_c_2 = 0
            int32_t* edi_5 = eax
            
            if (arg5 u> 0)
                do
                    int32_t i_3 = 0
                    
                    if (ecx_12.w u> 0)
                        uint32_t eax_29 = zx.d(esi[3])
                        
                        do
                            ecx_12 = 0
                            
                            if (eax_29 u> 0)
                                do
                                    int32_t eax_33
                                    
                                    if (i_3 u> 4 || ecx_12 u> 4)
                                        eax_33 = 0
                                    else
                                        eax_33 = *(arg4
                                            i+ ((i_3 + ((ecx_12 + (var_c_2 << 2)) << 2)) << 2))
                                    
                                    *edi_5 = eax_33
                                    eax_29 = zx.d(esi[3])
                                    edi_5 = &edi_5[1]
                                    ecx_12 += 1
                                while (ecx_12 u< eax_29)
                            
                            ecx_12.w = esi[2]
                            i_3 += 1
                        while (i_3 u< zx.d(ecx_12.w))
                    
                    var_c_2 += 1
                while (var_c_2 u< arg5)
        else if (arg5 u> 0)
            void* ecx_13 = &eax[2]
            eax_24 = arg4 i+ 0x20
            uint32_t i_9 = arg5
            uint32_t i_4
            
            do
                *(ecx_13 - 8) = *(eax_24 - 0x20)
                *(ecx_13 - 4) = *(eax_24 - 0x10)
                *ecx_13 = *eax_24
                *(ecx_13 + 4) = *(eax_24 + 0x10)
                *(ecx_13 + 8) = *(eax_24 - 0x1c)
                *(ecx_13 + 0xc) = *(eax_24 - 0xc)
                *(ecx_13 + 0x10) = *(eax_24 + 4)
                *(ecx_13 + 0x14) = *(eax_24 + 0x14)
                *(eax i- arg4 + eax_24) = fconvert.s(fconvert.t(*(eax_24 - 0x18)))
                *(ecx_13 + 0x1c) = *(eax_24 - 8)
                *(ecx_13 + 0x20) = *(eax_24 + 8)
                *(ecx_13 + 0x24) = *(eax_24 + 0x18)
                *(ecx_13 + 0x28) = *(eax_24 - 0x14)
                *(ecx_13 + 0x2c) = *(eax_24 - 4)
                *(ecx_13 + 0x30) = *(eax_24 + 0xc)
                *(ecx_13 + 0x34) = *(eax_24 + 0x1c)
                eax_24 += 0x40
                ecx_13 += 0x40
                i_4 = i_9
                i_9 -= 1
            while (i_4 != 1)
        
        goto label_49d02c
    
    if (eax_1 == 3)
        eax_24 = zx.d(esi[4])
        
        if (arg5 u> eax_24)
            arg5 = eax_24
        
        float edx
        edx.w = esi[2]
        
        if (edx.w == 4 && esi[3] == edx.w)
            goto label_49d032
        
        int32_t* edi_3 = eax
        int32_t ebx_3 = 0
        
        if (arg5 u> 0)
            do
                int32_t i_5 = 0
                
                if (esi[3] u> 0)
                    eax_24 = zx.d(edx.w)
                    
                    do
                        int32_t ecx_10 = 0
                        
                        if (eax_24 u> 0)
                            do
                                int32_t eax_28
                                
                                if (ecx_10 u> 4 || i_5 u> 4)
                                    eax_28 = 0
                                else
                                    eax_28 =
                                        *(arg4 i+ ((ecx_10 + ((i_5 + (ebx_3 << 2)) << 2)) << 2))
                                
                                *edi_3 = eax_28
                                edx.w = esi[2]
                                edi_3 = &edi_3[1]
                                eax_24 = zx.d(edx.w)
                                ecx_10 += 1
                            while (ecx_10 u< eax_24)
                        
                        i_5 += 1
                    while (i_5 u< zx.d(esi[3]))
                
                ebx_3 += 1
            while (ebx_3 u< arg5)
        
        goto label_49d02c
    
    if (eax_1 != 5)
        return 0x80004001
    
    int32_t ecx_1 = *(arg2 + 0x34)
    arg5 = divu.dp.d(0:(arg5 << 4), ecx_1)
    uint32_t eax_11 = zx.d(esi[4])
    
    if (arg5 u> eax_11)
        arg5 = eax_11
    
    int32_t ecx_2 = ecx_1 * arg5
    int32_t* edx_3 = eax
    int32_t edi_1 = 0
    
    if (ecx_2 u> 0)
        do
            uint32_t eax_13 = edi_1 u>> 2
            *edx_3 = *(arg4 i+ (((eax_13 & 3) + (((edi_1 & 3) + (eax_13 u>> 2 << 2)) << 2)) << 2))
            edx_3 = &edx_3[1]
            edi_1 += 1
        while (edi_1 u< ecx_2)
    
    arg4 = 0f
    float var_c_1 = eax
    
    if (arg5 u> 0)
        do
            int32_t i_6 = 0
            
            if (esi[5] u> 0)
                do
                    void* edi_2 = *(*(arg2 + 0x38) + (i_6 << 2))
                    result, arg1 = sub_49bce6(arg1, arg2, arg3, var_c_1, *(edi_2 + 0x30), arg6)
                    
                    if (result s< 0)
                        return result
                    
                    var_c_1 += *(edi_2 + 0x30) << 2
                    arg6 += *(edi_2 + 0x28)
                    i_6 += 1
                while (i_6 u< zx.d(esi[5]))
            
            arg4 += 1
        while (arg4 u< arg5)
return 0
