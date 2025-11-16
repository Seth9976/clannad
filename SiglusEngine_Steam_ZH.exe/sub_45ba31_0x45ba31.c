// 函数: sub_45ba31
// 地址: 0x45ba31
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* esi = arg6
int32_t edi
int32_t var_70 = edi
int32_t var_38 = 0

if (esi[1] + esi[3] u> esi[6])
    int32_t result = sub_45af53(arg1 + 0x49c, *(arg1 + 0x498) + 1, 0)
    
    if (result s< 0)
        return result
    
    int32_t* eax_4 = *(arg1 + 8)
    int32_t ecx_3 = esi[5]
    result = (*(*eax_4 + 0x5c))(eax_4, ecx_3, ecx_3, esi[4], 0, *(arg1 + 0x494), 1, 
        *(arg1 + 0x49c) + (*(arg1 + 0x498) << 2), 0)
    
    if (result s< 0)
        return result
    
    esi[1] = 0
    *esi = *(*(arg1 + 0x49c) + (*(arg1 + 0x498) << 2))
    *(arg1 + 0x498) += 1
    var_38 = 1

int32_t i = 1
arg6 = nullptr
int32_t var_8_1 = 0
int32_t var_24_1 = 0

if (esi[5] u> 1)
    int32_t eax_7 = 0
    
    do
        if (((esi[1] u>> eax_7.b).b & 1) != 0)
            arg6 |= i
        
        if (((esi[1] u>> (eax_7.b + 1)).b & 1) != 0)
            var_8_1 |= i
        
        var_24_1 += 1
        i = 1 << var_24_1.b
        eax_7 += 2
    while (i u< esi[5])

int32_t* eax_9 = *esi
int32_t var_64
int32_t j_1

if (var_38 != 0)
    uint32_t var_24_2 = esi[5]
    int32_t i_1 = 0
    
    if (esi[4] u> 0)
        do
            (*(*eax_9 + 0x4c))(eax_9, i_1, &var_64, 0, 0)
            int32_t j = j_1
            int32_t j_2
            
            for (int32_t edx_9 = var_64 * var_24_2 + j; j u< edx_9; j = j_2)
                int32_t ecx_8 = (var_24_2 << 2) + j
                j_2 = var_64 + j
                int32_t ecx_13
                int32_t edi_3
                
                if (j u< ecx_8)
                    edi_3, ecx_13 = __memfill_u32(j, 0xffffff, ((ecx_8 - j - 1) u>> 2) + 1)
            
            (*(*eax_9 + 0x50))(eax_9, i_1)
            var_24_2 u>>= 1
            i_1 += 1
        while (i_1 u< esi[4])

if (esi[4] u> 1)
    int32_t ecx_16 = esi[3] << 3
    __builtin_memset(__builtin_memset(*(arg1 + 0x4f8), 0, ecx_16 u>> 2 << 2), 0, ecx_16 & 3)

int32_t eax_18 = esi[2]
int32_t var_18_1 = 0xffffffff
void* var_10_1 = 0xffffffff
int32_t eax_21 = ((eax_18 - arg5) u>> 1) + var_8_1
void* edi_9 = ((eax_18 - arg4) u>> 1) + arg6
void* var_24_3 = edi_9
int32_t var_14_1 = 0
void* var_1c_1 = nullptr
int32_t var_5c
(*(*eax_9 + 0x4c))(eax_9, 0, &var_5c, 0, 0)
void* eax_22 = nullptr
void* var_38_1 = nullptr

if (arg5 u> 0)
    do
        int32_t edx_17 =
            *(arg1 + 0x4f8) + (((eax_21 - var_8_1 + eax_22) * esi[2] - arg6 + edi_9) << 3)
        int32_t var_58
        int32_t edi_14 = (eax_22 + eax_21) * var_5c + (var_24_3 << 2) + var_58
        int32_t edx_21 = 0
        int32_t var_28_1 = 0
        
        if (arg4 u> 0)
            char* var_2c_1 = *(arg1 + 0x2c) + ((*(arg1 + 0x24) * eax_22 + arg3) << 2) + 1
            
            do
                uint32_t ecx_30 = zx.d(*var_2c_1)
                
                if (ecx_30 != 0)
                    if (var_10_1 u> eax_22)
                        var_10_1 = eax_22
                    
                    if (var_1c_1 u< eax_22)
                        var_1c_1 = eax_22
                    
                    if (var_18_1 u> edx_21)
                        var_18_1 = edx_21
                    
                    if (var_14_1 u< edx_21)
                        var_14_1 = edx_21
                    
                    int32_t ecx_32 = ecx_30 << 0x18 | 0xffffff
                    *(edi_14 + (edx_21 << 2)) = ecx_32
                    
                    if (esi[4] u> 1)
                        long double x87_r7_1 = float.t(ecx_30)
                        
                        if (ecx_30 s< 0)
                            x87_r7_1 = x87_r7_1 + fconvert.t(4.2949673e+09f)
                        
                        int32_t var_74_2 = ecx_32
                        *(edx_17 + (var_28_1 << 3)) = fconvert.s(sub_41ea8f(fconvert.s(x87_r7_1
                            * fconvert.t(0.00392156886f))))
                        eax_22 = var_38_1
                        edx_21 = var_28_1
                
                var_2c_1 = &var_2c_1[4]
                edx_21 += 1
                var_28_1 = edx_21
            while (edx_21 u< arg4)
        
        edi_9 = var_24_3
        eax_22 += 1
        var_38_1 = eax_22
    while (eax_22 u< arg5)

(*(*eax_9 + 0x50))(eax_9, 0)
int32_t ecx_35 = var_18_1
void* edx_22

if (var_14_1 u>= ecx_35)
    edx_22 = var_10_1

if (var_14_1 u< ecx_35 || var_1c_1 u< edx_22)
    *arg7 = 0xffffffff
else
    if (esi[4] u> 1)
        arg4 = edx_22
        
        if (edx_22 u<= var_1c_1)
            void* eax_28 = eax_21 - var_8_1
            void* var_30_2 = eax_28
            
            while (true)
                if (ecx_35 u<= var_14_1)
                    float* edx_24 = *(arg1 + 0x4f8)
                        + (((eax_28 + edx_22) * esi[2] - arg6 + edi_9) << 3) + (ecx_35 << 3) + 4
                    int32_t i_3 = var_14_1 - ecx_35 + 1
                    int32_t i_2
                    
                    do
                        *edx_24 = fconvert.s(float.t(1))
                        edx_24 = &edx_24[2]
                        i_2 = i_3
                        i_3 -= 1
                    while (i_2 != 1)
                
                edx_22 = arg4 + 1
                arg4 = edx_22
                
                if (edx_22 u> var_1c_1)
                    break
                
                eax_28 = var_30_2
        
        int16_t x87status_1
        int16_t temp0_1
        temp0_1, x87status_1 = __fnstcw_memmem16(arg2)
        arg4.w = temp0_1
        int16_t x87control
        int16_t x87status_2
        x87control, x87status_2 = __fldcw_memmem16((arg4 | 0xc00).w)
        int16_t eax_38 = arg4.w
        arg4 = 1
        
        if (esi[4] u> 1)
            do
                uint32_t eax_40 = esi[2] u>> arg4.b
                (*(*eax_9 + 0x4c))(eax_9, arg4, &var_64, 0, 0)
                arg3 = 0
                
                if (eax_40 u> 0)
                    char ecx_38 = arg4.b
                    int32_t var_28_2 = 1
                    uint32_t var_34_1 = var_8_1 u>> ecx_38
                    
                    do
                        int32_t eax_47 = esi[2]
                        int32_t edx_26 = *(arg1 + 0x4f8)
                        int32_t edi_16 = eax_47 * arg3
                        arg5 = 0
                        void* ecx_41 = (edi_16 << 4) + edx_26
                        void* eax_49 = edx_26 + ((eax_47 * var_28_2) << 3)
                        int32_t edx_27 = edx_26 + (edi_16 << 3)
                        int32_t edi_20 = var_34_1 * var_64 + (arg6 u>> ecx_38 << 2) + j_1
                        float* var_2c_2 = eax_49 + 4
                        float* edx_29 = ecx_41 + 8
                        float* var_30_4 = eax_49 - ecx_41
                        float* var_44_3 = edx_29
                        
                        do
                            float* ecx_43 = edx_27 + (arg5 << 3)
                            *ecx_43 = fconvert.s((fconvert.t(*(var_30_4 + edx_29))
                                + fconvert.t(edx_29[-2]) + fconvert.t(var_2c_2[-1])
                                + fconvert.t(*edx_29)) * fconvert.t(0.25f))
                            long double x87_r7_14 = (fconvert.t(edx_29[-1]) + fconvert.t(edx_29[1])
                                + fconvert.t(var_2c_2[2]) + fconvert.t(*var_2c_2)) * fconvert.t(0.25f)
                            float var_40_3 = fconvert.s(x87_r7_14)
                            *(edx_27 + (arg5 << 3) + 4) = fconvert.s(x87_r7_14)
                            long double x87_r7_15 = fconvert.t(0f)
                            long double x87_r6_1 = fconvert.t(var_40_3)
                            x87_r6_1 - x87_r7_15
                            int32_t eax_53
                            eax_53.w = (x87_r6_1 < x87_r7_15 ? 1 : 0) << 8
                                | (is_unordered.t(x87_r6_1, x87_r7_15) ? 1 : 0) << 0xa
                                | (x87_r6_1 == x87_r7_15 ? 1 : 0) << 0xe
                            bool p_1 = unimplemented  {test ah, 0x44}
                            
                            if (p_1)
                                int32_t var_74_4 = edx_27
                                edx_29 = var_44_3
                                *(edi_20 + (arg5 << 2)) = int.d(fconvert.t(fconvert.s(sub_41ea3d(
                                    fconvert.s(fconvert.t(*ecx_43) / fconvert.t(var_40_3)))
                                    * fconvert.t(255f) + fconvert.t(0.5f)))) << 0x18 | 0xffffff
                            
                            arg5 += 1
                            var_2c_2 = &var_2c_2[4]
                            edx_29 = &edx_29[4]
                            var_44_3 = edx_29
                        while (arg5 u< eax_40)
                        
                        arg3 += 1
                        var_28_2 += 2
                        var_34_1 += 1
                    while (arg3 u< eax_40)
                    
                    edi_9 = var_24_3
                
                (*(*eax_9 + 0x50))(eax_9, arg4)
                arg4 += 1
            while (arg4 u< esi[4])
            
            ecx_35 = var_18_1
        
        int16_t x87control_1
        int16_t x87status_3
        x87control_1, x87status_3 = __fldcw_memmem16(eax_38)
    
    *arg7 = *esi
    int16_t edx_32 = eax_21.w + var_10_1.w
    int16_t ecx_47 = ecx_35.w + edi_9.w
    arg7[2].w = (var_14_1 + edi_9 + 1).w
    arg7[3].w = var_18_1.w
    *(arg7 + 0xe) = var_10_1.w
    arg7[1].w = ecx_47
    *(arg7 + 6) = edx_32
    *(arg7 + 0xa) = var_1c_1.w + eax_21.w + 1
    
    if (zx.d(ecx_47) u> arg6)
        arg7[1].w = ecx_47 - 1
        arg7[3].w = var_18_1.w - 1
    
    if (zx.d(edx_32) u> var_8_1)
        *(arg7 + 6) = edx_32 - 1
        *(arg7 + 0xe) = var_10_1.w - 1
    
    int16_t ecx_54 = (var_14_1 + edi_9 + 1).w
    
    if (zx.d(ecx_54) u< esi[2] + arg6)
        arg7[2].w = ecx_54 + 1
    
    if (zx.d(var_1c_1.w + eax_21.w + 1) u< esi[2] + var_8_1)
        *(arg7 + 0xa) = var_1c_1.w + eax_21.w + 2
    
    esi[1] += esi[3]

return 0
