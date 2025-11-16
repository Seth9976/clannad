// 函数: sub_454fae
// 地址: 0x454fae
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_28 = edi
int32_t ebx_1

if (arg3 s>= 0)
    *(*(arg2 + 0xc4) + 4) = 1
    **(arg2 + 0xc4) = 3
    *(*(arg2 + 0xc4) + 0x10) = 0
    *(*(arg2 + 0xc4) + 0x14) = 4
    *(*(arg2 + 0xc4) + 0x18) = 1
    ebx_1 = sub_4538a9(arg2, arg3, 1, 1)
    
    if (ebx_1 != 0)
        goto label_455002
    
    return 

ebx_1 = not.d(arg3)
label_455002:
int32_t* eax_4 = *(ebx_1 + 4)
int32_t ecx_2 = eax_4[1]
int32_t edx_5 = 0

if ((eax_4[4] != 0 && *(ebx_1 + 8) == 0xffffffff) || (ecx_2 != 1 && ecx_2 != 0))
    return 

if (*(arg2 + 0x3c) == 3)
    sub_44e06a(arg2, not.d(ebx_1), arg4)
    return 

int32_t ecx_4 = eax_4[5]
int32_t eax_5 = *eax_4

if (eax_5 == 3)
    __builtin_memcpy(*ebx_1, arg4, ecx_4 << 2)
    sub_448129(arg2, ebx_1)
else if (eax_5 == 2)
    if (ecx_4 != 1)
        int16_t x87status_1
        int16_t temp0_1
        temp0_1, x87status_1 = __fnstcw_memmem16(arg1)
        arg3.w = temp0_1
        int16_t x87control
        int16_t x87status_2
        x87control, x87status_2 = __fldcw_memmem16(arg3.w | 0xc00)
        
        if (ecx_4 u> 0)
            do
                *(*ebx_1 + (edx_5 << 2)) = int.d(fconvert.t(fconvert.s(fconvert.t(arg4[edx_5]))))
                edx_5 += 1
            while (edx_5 u< ecx_4)
        
        int16_t x87control_1
        int16_t x87status_3
        x87control_1, x87status_3 = __fldcw_memmem16(arg3.w)
    else
        float ecx_5 = *arg4
        long double x87_r7_1 = fconvert.t(arg4[3])
        long double x87_r6_1 = fconvert.t(1f)
        long double x87_r5_1 = fconvert.t(ecx_5)
        float ecx_6 = arg4[1]
        x87_r5_1 - x87_r6_1
        float ecx_7 = arg4[2]
        long double x87_r5_2 = fconvert.t(0f)
        int32_t* eax_6
        eax_6.w = (x87_r5_1 < x87_r6_1 ? 1 : 0) << 8
            | (is_unordered.t(x87_r5_1, x87_r6_1) ? 1 : 0) << 0xa
            | (x87_r5_1 == x87_r6_1 ? 1 : 0) << 0xe | 0x2800
        
        if ((eax_6:1.b & 1) != 0)
            long double x87_r4_1 = fconvert.t(ecx_5)
            x87_r4_1 - x87_r5_2
            eax_6.w = (x87_r4_1 < x87_r5_2 ? 1 : 0) << 8
                | (is_unordered.t(x87_r4_1, x87_r5_2) ? 1 : 0) << 0xa
                | (x87_r4_1 == x87_r5_2 ? 1 : 0) << 0xe | 0x2800
            bool p_1 = unimplemented  {test ah, 0x41}
            
            if (p_1)
                eax_6, arg1 = __ftol(arg1, fconvert.t(ecx_5) * fconvert.t(255f) + fconvert.t(0.5f))
                arg4 = eax_6
            else
                arg4 = nullptr
        else
            arg4 = 0xff
        
        long double x87_r4_5 = fconvert.t(ecx_6)
        x87_r4_5 - x87_r6_1
        eax_6.w = (x87_r4_5 < x87_r6_1 ? 1 : 0) << 8
            | (is_unordered.t(x87_r4_5, x87_r6_1) ? 1 : 0) << 0xa
            | (x87_r4_5 == x87_r6_1 ? 1 : 0) << 0xe | 0x2800
        
        if ((eax_6:1.b & 1) != 0)
            long double x87_r4_6 = fconvert.t(ecx_6)
            x87_r4_6 - x87_r5_2
            eax_6.w = (x87_r4_6 < x87_r5_2 ? 1 : 0) << 8
                | (is_unordered.t(x87_r4_6, x87_r5_2) ? 1 : 0) << 0xa
                | (x87_r4_6 == x87_r5_2 ? 1 : 0) << 0xe | 0x2800
            bool p_2 = unimplemented  {test ah, 0x41}
            
            if (p_2)
                eax_6, arg1 = __ftol(arg1, fconvert.t(ecx_6) * fconvert.t(255f) + fconvert.t(0.5f))
                arg3 = eax_6
            else
                arg3 = 0f
        else
            arg3 = 3.57331108e-43f
        
        long double x87_r4_10 = fconvert.t(ecx_7)
        x87_r4_10 - x87_r6_1
        eax_6.w = (x87_r4_10 < x87_r6_1 ? 1 : 0) << 8
            | (is_unordered.t(x87_r4_10, x87_r6_1) ? 1 : 0) << 0xa
            | (x87_r4_10 == x87_r6_1 ? 1 : 0) << 0xe | 0x2800
        int32_t* edi_2
        
        if ((eax_6:1.b & 1) != 0)
            long double x87_r4_11 = fconvert.t(ecx_7)
            x87_r4_11 - x87_r5_2
            eax_6.w = (x87_r4_11 < x87_r5_2 ? 1 : 0) << 8
                | (is_unordered.t(x87_r4_11, x87_r5_2) ? 1 : 0) << 0xa
                | (x87_r4_11 == x87_r5_2 ? 1 : 0) << 0xe | 0x3000
            bool p_3 = unimplemented  {test ah, 0x41}
            
            if (p_3)
                eax_6, arg1 = __ftol(arg1, fconvert.t(ecx_7) * fconvert.t(255f) + fconvert.t(0.5f))
                edi_2 = eax_6
            else
                edi_2 = nullptr
        else
            x87_r6_1 = x87_r5_2
            edi_2 = 0xff
        
        x87_r7_1 - x87_r6_1
        eax_6.w = (x87_r7_1 < x87_r6_1 ? 1 : 0) << 8
            | (is_unordered.t(x87_r7_1, x87_r6_1) ? 1 : 0) << 0xa
            | (x87_r7_1 == x87_r6_1 ? 1 : 0) << 0xe | 0x3800
        int32_t eax_7
        
        if ((eax_6:1.b & 1) != 0)
            long double temp1_1 = fconvert.t(0f)
            x87_r7_1 - temp1_1
            eax_6.w = (x87_r7_1 < temp1_1 ? 1 : 0) << 8
                | (is_unordered.t(x87_r7_1, temp1_1) ? 1 : 0) << 0xa
                | (x87_r7_1 == temp1_1 ? 1 : 0) << 0xe | 0x3800
            bool p_4 = unimplemented  {test ah, 0x41}
            
            if (p_4)
                eax_7 = __ftol(arg1, x87_r7_1 * fconvert.t(255f) + fconvert.t(0.5f))
            else
                eax_7 = 0
        else
            eax_7 = 0xff
        
        **ebx_1 = ((eax_7 << 8 | arg4) << 8 | arg3) << 8 | edi_2
    
    sub_448129(arg2, ebx_1)
else if (eax_5 == 1)
    arg3 = 0f
    
    if (ecx_4 u> 0)
        do
            int32_t edx_7 = arg3 << 2
            long double x87_r7_6 = fconvert.t(arg4[arg3])
            long double x87_r6_2 = fconvert.t(0f)
            x87_r6_2 - x87_r7_6
            int32_t* eax_19
            eax_19.w = (x87_r6_2 < x87_r7_6 ? 1 : 0) << 8
                | (is_unordered.t(x87_r6_2, x87_r7_6) ? 1 : 0) << 0xa
                | (x87_r6_2 == x87_r7_6 ? 1 : 0) << 0xe
            bool p_5 = unimplemented  {test ah, 0x44}
            int32_t eax_20
            
            eax_20 = not(p_5) ? 0 : 1
            
            arg3 += 1
            *(edx_7 + *ebx_1) = eax_20
        while (arg3 u< ecx_4)
    
    sub_448129(arg2, ebx_1)
