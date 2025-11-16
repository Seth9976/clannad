// 函数: sub_49c899
// 地址: 0x49c899
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* ebx = *(arg2 + 0x20)
int16_t* esi = *(arg2 + 0x18)
uint32_t eax = zx.d(*esi)
int32_t edx = 0
int32_t edi
int32_t var_24 = edi
int32_t result
uint32_t eax_23

if (eax == 0)
    eax_23 = zx.d(esi[4])
    uint32_t edi_9 = arg5 << 4
    arg5 = edi_9
    
    if (edi_9 u> eax_23)
        edi_9 = eax_23
        arg5 = edi_9
    
    int32_t* ecx_19 = ebx
    
    if (edi_9 u> 0)
        do
            uint32_t eax_34 = edx u>> 2
            *ecx_19 = *(*(arg4 i+ (eax_34 u>> 2 << 2)) + (((edx & 3) + ((eax_34 & 3) << 2)) << 2))
            ecx_19 = &ecx_19[1]
            edx += 1
        while (edx u< arg5)
    
label_49cb38:
    eax_23.w = esi[1]
    
    if (eax_23.w != 3)
        int32_t ecx_22 = *(arg2 + 0x34) * arg5
        uint32_t eax_37 = zx.d(eax_23.w)
        
        if (eax_37 == 1)
            int32_t edx_8 = 0
            
            if (ecx_22 u> 0)
                do
                    long double x87_r7_2 = fconvert.t(0f)
                    void* edi_15 = &ebx[edx_8]
                    long double x87_r6_1 = fconvert.t(*edi_15)
                    x87_r6_1 - x87_r7_2
                    int32_t* eax_44
                    eax_44.w = (x87_r6_1 < x87_r7_2 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r6_1, x87_r7_2) ? 1 : 0) << 0xa
                        | (x87_r6_1 == x87_r7_2 ? 1 : 0) << 0xe
                    bool p_1 = unimplemented  {test ah, 0x44}
                    int32_t eax_45
                    
                    eax_45 = not(p_1) ? 0 : 1
                    
                    edx_8 += 1
                    *edi_15 = eax_45
                while (edx_8 u< ecx_22)
        else if (eax_37 == 2)
            int16_t x87status_1
            int16_t temp0_2
            temp0_2, x87status_1 = __fnstcw_memmem16(arg1)
            arg4.w = temp0_2
            int16_t x87control
            int16_t x87status_2
            x87control, x87status_2 = __fldcw_memmem16(arg4.w | 0xc00)
            int32_t eax_43 = 0
            
            if (ecx_22 u> 0)
                do
                    int32_t* edx_7 = &ebx[eax_43]
                    eax_43 += 1
                    *edx_7 = int.d(fconvert.t(*edx_7))
                while (eax_43 u< ecx_22)
            
            int16_t x87control_1
            int16_t x87status_3
            x87control_1, x87status_3 = __fldcw_memmem16(arg4.w)
    
    void* eax_46
    eax_46.w = *(arg2 + 8)
    
    if (eax_46.w != 0)
        uint32_t j_2
        uint32_t edi_16
        
        if (*esi == 3)
            j_2 = zx.d(esi[2])
            edi_16 = zx.d(esi[3])
        else
            j_2 = zx.d(esi[3])
            edi_16 = zx.d(esi[2])
        
        if ((j_2.b & 3) != 0)
            int32_t var_10_1 = 0xac8a74
            
            if (eax_46.w != 1)
                var_10_1 = 0xac8a64
            
            float i_5 = edi_16 * arg5
            float esi_2 = (j_2 + 3) & 0xfffffffc
            
            if (i_5 u> 0)
                void* eax_49 = ((i_5 << 2) + 4) * j_2 + ebx
                void* ebx_13 = &ebx[i_5 i* esi_2 + j_2]
                void* var_c_4 = ((i_5 << 2) + 4) i* esi_2 + ebx
                float i_4 = i_5
                float i
                
                do
                    int32_t edi_20 = esi_2 << 2
                    var_c_4 -= edi_20
                    ebx_13 -= edi_20
                    eax_49 -= j_2 << 2
                    arg4 = esi_2
                    
                    if (esi_2 u> j_2)
                        void* ecx_29 = var_c_4
                        
                        do
                            arg4 -= 1
                            ecx_29 -= 4
                            *ecx_29 = *(var_10_1 + ((arg4 & 3) << 2))
                        while (arg4 u> j_2)
                    
                    if (j_2 u> 0)
                        void* ecx_33 = ebx_13
                        arg4 = eax_49
                        uint32_t j_1 = j_2
                        uint32_t j
                        
                        do
                            arg4 -= 4
                            ecx_33 -= 4
                            j = j_1
                            j_1 -= 1
                            *ecx_33 = *arg4
                        while (j != 1)
                    
                    i = i_4
                    i_4 -= 1
                while (i != 1)
    
    uint32_t eax_51 = *(arg2 + 0x2c) * arg5
    uint32_t edx_9 = zx.d(*(arg2 + 0xc))
    
    if (eax_51 u> edx_9)
        eax_51 = edx_9
    
    result = (*(arg2 + 0x1c))(arg3, zx.d(*(arg2 + 0xa)) + arg6, ebx, ebx, eax_51)
    
    if (result s< 0)
        return result
else
    if (eax == 1)
        eax_23 = zx.d(esi[4])
        uint32_t ecx_16 = arg5 << 2
        arg5 = ecx_16
        
        if (ecx_16 u> eax_23)
            arg5 = eax_23
        
        int32_t var_c_3 = 0
        int32_t* edx_5 = ebx
        
        if (arg5 u> 0)
            eax_23 = zx.d(esi[3])
            
            do
                int32_t ecx_17 = 0
                
                if (eax_23 u> 0)
                    do
                        int32_t eax_29
                        
                        if (ecx_17 u<= 4)
                            eax_29 = *(*(arg4 i+ (var_c_3 u>> 2 << 2))
                                + ((ecx_17 + ((var_c_3 & 3) << 2)) << 2))
                        else
                            eax_29 = 0
                        
                        *edx_5 = eax_29
                        eax_23 = zx.d(esi[3])
                        edx_5 = &edx_5[1]
                        ecx_17 += 1
                    while (ecx_17 u< eax_23)
                
                var_c_3 += 1
            while (var_c_3 u< arg5)
        
        goto label_49cb38
    
    if (eax == 2)
        eax_23 = zx.d(esi[4])
        
        if (arg5 u> eax_23)
            arg5 = eax_23
        
        int32_t edi_4 = 0
        int32_t* var_c_2 = ebx
        
        if (arg5 u> 0)
            do
                int32_t i_1 = 0
                
                if (esi[2] u> 0)
                    eax_23 = zx.d(esi[3])
                    
                    do
                        int32_t ecx_13 = 0
                        
                        if (eax_23 u> 0)
                            do
                                int32_t eax_28
                                
                                if (i_1 u> 4 || ecx_13 u> 4)
                                    eax_28 = 0
                                else
                                    eax_28 =
                                        *(*(arg4 i+ (edi_4 << 2)) + ((ecx_13 + (i_1 << 2)) << 2))
                                
                                int32_t* ebx_7 = var_c_2
                                var_c_2 = &var_c_2[1]
                                *ebx_7 = eax_28
                                eax_23 = zx.d(esi[3])
                                ecx_13 += 1
                            while (ecx_13 u< eax_23)
                        
                        i_1 += 1
                    while (i_1 u< zx.d(esi[2]))
                
                edi_4 += 1
            while (edi_4 u< arg5)
        
        goto label_49cb38
    
    if (eax == 3)
        eax_23 = zx.d(esi[4])
        
        if (arg5 u> eax_23)
            arg5 = eax_23
        
        int32_t* edi_3 = ebx
        int32_t ebx_4 = 0
        
        if (arg5 u> 0)
            do
                int32_t i_2 = 0
                
                if (esi[3] u> 0)
                    eax_23 = zx.d(esi[2])
                    
                    do
                        int32_t edx_4 = 0
                        
                        if (eax_23 u> 0)
                            int32_t ecx_10 = i_2 << 2
                            
                            do
                                int32_t eax_26
                                
                                if (edx_4 u> 4 || i_2 u> 4)
                                    eax_26 = 0
                                else
                                    eax_26 = *(ecx_10 + *(arg4 i+ (ebx_4 << 2)))
                                
                                *edi_3 = eax_26
                                eax_23 = zx.d(esi[2])
                                edi_3 = &edi_3[1]
                                edx_4 += 1
                                ecx_10 += 0x10
                            while (edx_4 u< eax_23)
                        
                        i_2 += 1
                    while (i_2 u< zx.d(esi[3]))
                
                ebx_4 += 1
            while (ebx_4 u< arg5)
        
        goto label_49cb38
    
    if (eax != 5)
        return 0x80004001
    
    int32_t ecx_1 = *(arg2 + 0x34)
    arg5 = divu.dp.d(0:(arg5 << 4), ecx_1)
    uint32_t eax_10 = zx.d(esi[4])
    
    if (arg5 u> eax_10)
        arg5 = eax_10
    
    int32_t ecx_2 = ecx_1 * arg5
    int32_t edi_1 = 0
    int32_t* edx_3 = ebx
    
    if (ecx_2 u> 0)
        do
            uint32_t eax_12 = edi_1 u>> 2
            *edx_3 = *(*(arg4 i+ (eax_12 u>> 2 << 2)) + (((edi_1 & 3) + ((eax_12 & 3) << 2)) << 2))
            edx_3 = &edx_3[1]
            edi_1 += 1
        while (edi_1 u< ecx_2)
    
    int32_t var_c_1 = 0
    arg4 = ebx
    
    if (arg5 u> 0)
        do
            int32_t i_3 = 0
            
            if (esi[5] u> 0)
                do
                    void* edi_2 = *(*(arg2 + 0x38) + (i_3 << 2))
                    result, arg1 = sub_49bce6(arg1, arg2, arg3, arg4, *(edi_2 + 0x30), arg6)
                    
                    if (result s< 0)
                        return result
                    
                    arg4 += *(edi_2 + 0x30) << 2
                    arg6 += *(edi_2 + 0x28)
                    i_3 += 1
                while (i_3 u< zx.d(esi[5]))
            
            var_c_1 += 1
        while (var_c_1 u< arg5)
return 0
