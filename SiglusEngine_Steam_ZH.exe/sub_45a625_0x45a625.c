// 函数: sub_45a625
// 地址: 0x45a625
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

float ebx = arg1
int32_t edi
int32_t var_44 = edi

if (*(ebx i+ 0xac) == 0)
    return 

if (*(ebx i+ 0x64) == 0 && (*(ebx i+ 0xb0) & 8) == 0)
    int32_t eax_2 = *(ebx i+ 0xcc)
    int32_t ecx_3 = eax_2 * 0x60 + *(ebx i+ 0xc0)
    j_sub_4018e8(ecx_3, 0x18, ecx_3, 0x18, *(ebx i+ 0x70), (*(ebx i+ 0xc4) - eax_2) << 2)

char ecx_4 = (*(ebx i+ 0xb0)).b
int32_t eax_3 = *(ebx i+ 0xc4)
*(ebx i+ 0xcc) = eax_3
int32_t var_c_1 = 0

if ((ecx_4 & 0x20) == 0)
    if ((ecx_4 & 0xc0) != 0)
        float var_8_1 = 3.40282347e+38f
        arg1 = -3.40282347e+38f
        
        if ((ecx_4 & 4) != 0 && (ecx_4 & 8) == 0)
            int32_t i = 0
            
            if (eax_3 u<= 0)
                goto label_45a806
            
            int32_t edx_5 = 0
            
            do
                void* eax_6 = *(ebx i+ 0xc0) + edx_5
                long double x87_r7_2 = fconvert.t(*(eax_6 + 0x18)) + fconvert.t(*eax_6)
                fconvert.t(*(eax_6 + 0x1c)) + fconvert.t(*(eax_6 + 4)) + fconvert.t(*(eax_6 + 0x34))
                fconvert.t(fconvert.s(fconvert.t(*(eax_6 + 0x20)) + fconvert.t(*(eax_6 + 8))))
                    + fconvert.t(*(eax_6 + 0x38)) + fconvert.t(*(eax_6 + 0x50))
                long double x87_r7_5 = x87_r7_2 * fconvert.t(*(ebx i+ 0x9c))
                    + fconvert.t(fconvert.s(x87_r7_2 + fconvert.t(*(eax_6 + 0x4c))))
                    * fconvert.t(*(ebx i+ 0x98)) + fconvert.t(fconvert.s(
                    fconvert.t(fconvert.s(x87_r7_2 + fconvert.t(*(eax_6 + 0x30))))
                    + fconvert.t(*(eax_6 + 0x48)))) * fconvert.t(*(ebx i+ 0x94))
                long double x87_r6_11 = fconvert.t(var_8_1)
                x87_r6_11 - x87_r7_5
                eax_6.w = (x87_r6_11 < x87_r7_5 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r6_11, x87_r7_5) ? 1 : 0) << 0xa
                    | (x87_r6_11 == x87_r7_5 ? 1 : 0) << 0xe | 0x3800
                
                if ((eax_6:1.b & 0x41) == 0)
                    var_8_1 = fconvert.s(x87_r7_5)
                
                long double x87_r6_12 = fconvert.t(arg1)
                x87_r6_12 - x87_r7_5
                eax_6.w = (x87_r6_12 < x87_r7_5 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r6_12, x87_r7_5) ? 1 : 0) << 0xa
                    | (x87_r6_12 == x87_r7_5 ? 1 : 0) << 0xe | 0x3800
                bool p_1 = unimplemented  {test ah, 0x5}
                
                if (not(p_1))
                    arg1 = fconvert.s(x87_r7_5)
                
                *(*(ebx i+ 0xbc) + (i << 2)) = fconvert.s(x87_r7_5)
                i += 1
                edx_5 += 0x60
            while (i u< *(ebx i+ 0xc4))
            
            goto label_45a7f7
        
        int32_t i_2 = 0
        
        if (eax_3 u<= 0)
        label_45a806:
            int32_t i_1 = 0
            
            if (*(ebx i+ 0xc4) u> 0)
                do
                    *(*(ebx i+ 0xb4) + (i_1 << 2)) = i_1
                    i_1 += 1
                while (i_1 u< *(ebx i+ 0xc4))
            
            int32_t (__stdcall* var_54_2)(int32_t arg1, int32_t arg2, void* arg3)
            
            if ((*(ebx i+ 0xb0) & 0x40) == 0)
                var_54_2 = sub_459276
            else
                var_54_2 = sub_45922a
            
            sub_458e55(var_54_2, *(ebx i+ 0xb4), *(ebx i+ 0xc4), ebx)
            var_c_1 = 1
        else
            int32_t edx_6 = 0
            
            do
                void* eax_9 = *(ebx i+ 0xc0) + edx_6
                long double x87_r7_10 = fneg(fconvert.t(*(eax_9 + 0x50))
                    + fconvert.t(*(eax_9 + 0x38)) + fconvert.t(*(eax_9 + 0x20))
                    + fconvert.t(*(eax_9 + 8)))
                long double x87_r6_13 = fconvert.t(var_8_1)
                x87_r6_13 - x87_r7_10
                eax_9.w = (x87_r6_13 < x87_r7_10 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r6_13, x87_r7_10) ? 1 : 0) << 0xa
                    | (x87_r6_13 == x87_r7_10 ? 1 : 0) << 0xe | 0x3800
                
                if ((eax_9:1.b & 0x41) == 0)
                    var_8_1 = fconvert.s(x87_r7_10)
                
                long double x87_r6_14 = fconvert.t(arg1)
                x87_r6_14 - x87_r7_10
                eax_9.w = (x87_r6_14 < x87_r7_10 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r6_14, x87_r7_10) ? 1 : 0) << 0xa
                    | (x87_r6_14 == x87_r7_10 ? 1 : 0) << 0xe | 0x3800
                bool p_2 = unimplemented  {test ah, 0x5}
                
                if (not(p_2))
                    arg1 = fconvert.s(x87_r7_10)
                
                *(*(ebx i+ 0xbc) + (i_2 << 2)) = fconvert.s(x87_r7_10)
                i_2 += 1
                edx_6 += 0x60
            while (i_2 u< *(ebx i+ 0xc4))
            
        label_45a7f7:
            long double x87_r7_11 = fconvert.t(arg1)
            long double x87_r6_15 = fconvert.t(var_8_1)
            x87_r6_15 - x87_r7_11
            int32_t eax_7
            eax_7.w = (x87_r6_15 < x87_r7_11 ? 1 : 0) << 8
                | (is_unordered.t(x87_r6_15, x87_r7_11) ? 1 : 0) << 0xa
                | (x87_r6_15 == x87_r7_11 ? 1 : 0) << 0xe
            bool p_3 = unimplemented  {test ah, 0x44}
            
            if (p_3)
                goto label_45a806
else if (*(ebx i+ 0xd0) != 0)
    int32_t i_3 = 0
    
    if (eax_3 u> 0)
        do
            *(*(ebx i+ 0xb4) + (i_3 << 2)) = i_3
            i_3 += 1
        while (i_3 u< *(ebx i+ 0xc4))
    
    sub_458e55(sub_4591e6, *(ebx i+ 0xb4), *(ebx i+ 0xc4), ebx)
    var_c_1 = 1

int32_t* eax_10 = *(ebx i+ 0xc)
(*(*eax_10 + 0x15c))(eax_10, *(ebx i+ 0x10))
int32_t* eax_11 = *(ebx i+ 0xc)
(*(*eax_11 + 0x1a0))(eax_11, *(ebx i+ 0x14))
int32_t* eax_12 = *(ebx i+ 0xc)
(*(*eax_12 + 0x190))(eax_12, 0, *(ebx i+ 0x18), 0, 0x18)
int32_t i_4 = 0
int32_t j_1

if (var_c_1 == 0)
    j_1 = 0
else
    j_1 = **(ebx i+ 0xb4)

arg1 = -nanf

if (*(ebx i+ 0xc4) u> 0)
    do
        float eax_15 = *(*(ebx i+ 0xb8) + (j_1 << 2))
        
        if (arg1 != eax_15)
            arg1 = eax_15
            int32_t* eax_16 = *(ebx i+ 0xc)
            (*(*eax_16 + 0x104))(eax_16, 0, arg1)
        
        int32_t edx_7 = *(ebx i+ 0x20)
        int32_t* eax_17 = *(ebx i+ 0x18)
        int32_t edx_8 = neg.d(edx_7)
        int32_t var_18
        (*(*eax_17 + 0x2c))(eax_17, 0, 0, &var_18, 
            (sbb.d(edx_8, edx_8, edx_7 != 0) & 0xfffff000) + 0x2000)
        int32_t eax_18 = *(ebx i+ 0x1c)
        int32_t eax_19 = *(ebx i+ 0x20)
        int32_t j = i_4
        
        while (j u< *(ebx i+ 0xc4))
            if (arg1 != *(*(ebx i+ 0xb8) + (j_1 << 2)))
                break
            
            int32_t eax_21 = *(ebx i+ 0x20)
            
            if (eax_21 u>= 0x4000)
                break
            
            __builtin_memcpy(var_18 + eax_21 * 0x18, j_1 * 0x60 + *(ebx i+ 0xc0), 0x60)
            *(ebx i+ 0x20) += 4
            *(ebx i+ 0x1c) += 6
            j = i_4 + 1
            i_4 = j
            
            if (var_c_1 == 0)
                j_1 = j
            else
                j_1 = *(*(ebx i+ 0xb4) + (j << 2))
        
        int32_t* eax_24 = *(ebx i+ 0x18)
        (*(*eax_24 + 0x30))(eax_24)
        (*(**(ebx i+ 0xc) + 0x148))(*(ebx i+ 0xc), 4, 0, eax_19, *(ebx i+ 0x20) - eax_19, eax_18, 
            divu.dp.d(0:(*(ebx i+ 0x1c) - eax_18), 3))
        
        if (*(ebx i+ 0x20) u>= 0x4000)
            *(ebx i+ 0x20) = 0
            *(ebx i+ 0x1c) = 0
    while (i_4 u< *(ebx i+ 0xc4))

*(ebx i+ 0xc4) = 0
*(ebx i+ 0xe0) = fconvert.s(float.t(0))
*(ebx i+ 0xcc) = 0
*(ebx i+ 0xd0) = 0
*(ebx i+ 0xe4) = fconvert.s(float.t(0))
*(ebx i+ 0xd4) = 0
*(ebx i+ 0xd8) = 0
*(ebx i+ 0xdc) = 0
