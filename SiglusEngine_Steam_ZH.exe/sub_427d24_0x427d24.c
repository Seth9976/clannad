// 函数: sub_427d24
// 地址: 0x427d24
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_38 = edi
int32_t esi_1 = arg3 + *(arg1 + 0x40)
int32_t edi_2 = arg4 + *(arg1 + 0x4c)
int32_t eax_5

if (*(arg1 + 0xf0) == 0)
    int32_t eax_2 = *(arg1 + 0xdc) << 4
    int32_t eax_4 = sub_745f3f(eax_2 << 4)
    
    if (eax_4 == 0)
        eax_5 = 0
    else
        sub_61cdd0(eax_4, 0x10, eax_2, sub_52e900)
        eax_5 = eax_4
    
    *(arg1 + 0xf0) = eax_5

if (*(arg1 + 0xf0) == 0 && eax_5 == 0)
    return 

int32_t eax_7 = esi_1 & 0xfffffffc

if (eax_7 != *(arg1 + 0xe8) || edi_2 != *(arg1 + 0xec))
    *(arg1 + 0xe8) = eax_7
    int32_t i_3 = *(arg1 + 0xc4)
    int32_t eax_12 = (eax_7 u>> 2) * *(arg1 + 0x60) + (i_3 u>> 2) * *(arg1 + 0x88)
        + *(arg1 + 0x64) * edi_2 + *(arg1 + 0x20)
    *(arg1 + 0xec) = edi_2
    arg3 = eax_12
    arg4 = *(arg1 + 0xf0)
    
    for (int32_t i = i_3; i u< *(arg1 + 0xcc); i += 4)
        (*(arg1 + 0x8c))(arg4, arg3)
        arg3 += *(arg1 + 0x88)
        arg4 += 0x100

int32_t i_1 = *(arg1 + 0x3c) - *(arg1 + 0xc4)
int32_t i_2 = arg5
int32_t esi_3 = (esi_1 - *(arg1 + 0xc8)) & 3

for (int32_t ecx_3 = *(arg1 + 0x68) + i_1; i_1 u< ecx_3; i_1 += 1)
    void* esi_10 = ((((i_1 & 0xfffffffc) | esi_3) << 2 | (i_1 & 3)) << 4) + *(arg1 + 0xf0)
    *i_2 = *esi_10
    int32_t* edi_6 = i_2 + 4
    int32_t* esi_11 = esi_10 + 4
    *edi_6 = *esi_11
    void* edi_7 = &edi_6[1]
    void* esi_12 = &esi_11[1]
    *edi_7 = *esi_12
    i_2 += 0x10
    *(edi_7 + 4) = *(esi_12 + 4)

if (*(arg1 + 0x18) != 0)
    int32_t i_4 = i_2
    i_2 += neg.d(*(arg1 + 0x68)) << 4
    int16_t x87status_1
    int16_t temp0_1
    temp0_1, x87status_1 = __fnstcw_memmem16(arg2)
    arg5.w = temp0_1
    int16_t x87control
    int16_t x87status_2
    x87control, x87status_2 = __fldcw_memmem16((arg5 | 0xc00).w)
    *(arg1 + 0x7c) = arg5
    
    for (; i_2 u< i_4; i_2 += 0x10)
        long double x87_r7_25 = fconvert.t(*(arg1 + 0x24))
        long double x87_r6_1 = fconvert.t(fconvert.s(float.t(int.d(fconvert.t(fconvert.s(
            fconvert.t(*i_2) * fconvert.t(31f) + fconvert.t(0.5f))))) * fconvert.t(0.0322580636f)))
        x87_r6_1 - x87_r7_25
        int32_t eax_25
        eax_25.w = (x87_r6_1 < x87_r7_25 ? 1 : 0) << 8
            | (is_unordered.t(x87_r6_1, x87_r7_25) ? 1 : 0) << 0xa
            | (x87_r6_1 == x87_r7_25 ? 1 : 0) << 0xe
        bool p_1 = unimplemented  {test ah, 0x44}
        
        if (not(p_1))
            long double x87_r7_26 = fconvert.t(*(arg1 + 0x28))
            long double x87_r6_2 = fconvert.t(fconvert.s(float.t(int.d(fconvert.t(fconvert.s(
                fconvert.t(*(i_2 + 4)) * fconvert.t(63f) + fconvert.t(0.5f)))))
                * fconvert.t(0.0158730168f)))
            x87_r6_2 - x87_r7_26
            eax_25.w = (x87_r6_2 < x87_r7_26 ? 1 : 0) << 8
                | (is_unordered.t(x87_r6_2, x87_r7_26) ? 1 : 0) << 0xa
                | (x87_r6_2 == x87_r7_26 ? 1 : 0) << 0xe
            bool p_2 = unimplemented  {test ah, 0x44}
            
            if (not(p_2))
                long double x87_r7_27 = fconvert.t(*(arg1 + 0x2c))
                long double x87_r6_3 = fconvert.t(fconvert.s(float.t(int.d(fconvert.t(fconvert.s(
                    fconvert.t(*(i_2 + 8)) * fconvert.t(31f) + fconvert.t(0.5f)))))
                    * fconvert.t(0.0322580636f)))
                x87_r6_3 - x87_r7_27
                eax_25.w = (x87_r6_3 < x87_r7_27 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r6_3, x87_r7_27) ? 1 : 0) << 0xa
                    | (x87_r6_3 == x87_r7_27 ? 1 : 0) << 0xe
                bool p_3 = unimplemented  {test ah, 0x44}
                
                if (not(p_3))
                    long double x87_r7_28 = fconvert.t(*(arg1 + 0x30))
                    long double x87_r6_4 = fconvert.t(fconvert.s(float.t(int.d(fconvert.t(fconvert
                        .s(fconvert.t(*(i_2 + 0xc)) * fconvert.t(*(arg1 + 0x80))
                        + fconvert.t(0.5f))))) * fconvert.t(*(arg1 + 0x84))))
                    x87_r6_4 - x87_r7_28
                    eax_25.w = (x87_r6_4 < x87_r7_28 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r6_4, x87_r7_28) ? 1 : 0) << 0xa
                        | (x87_r6_4 == x87_r7_28 ? 1 : 0) << 0xe
                    bool p_4 = unimplemented  {test ah, 0x44}
                    
                    if (not(p_4))
                        float var_28 = fconvert.s(float.t(0))
                        float var_24_1 = fconvert.s(float.t(0))
                        float var_20_1 = fconvert.s(float.t(0))
                        *i_2 = fconvert.s(float.t(0))
                        float* edi_11 = i_2 + 4
                        float* esi_15 = &var_28
                        *edi_11 = *esi_15
                        void* edi_12 = &edi_11[1]
                        void* esi_16 = &esi_15[1]
                        *edi_12 = *esi_16
                        *(edi_12 + 4) = *(esi_16 + 4)
    
    int16_t x87status_3
    arg2, x87status_3 = __fldcw_memmem16((*(arg1 + 0x7c)).w)

if (*(arg1 + 0x10) != 0)
    sub_41f14b(arg1, arg2, i_2 - (*(arg1 + 0x68) << 4))
