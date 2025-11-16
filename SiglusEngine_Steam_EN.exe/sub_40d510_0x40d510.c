// 函数: sub_40d510
// 地址: 0x40d510
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t* ebp = *arg2
int32_t edx = ebp[3]
int32_t ecx = ebp[2]
int32_t esi_1 = ebp[1] - *ebp
int32_t temp0 = divs.dp.d(sx.q(esi_1), ecx)
int32_t* eax_4 = sub_4038a0(arg1, 4)
float ebx = arg4
int32_t esi_3 = divs.dp.d(sx.q(esi_1 i* ebx), ecx) << 2
int32_t eax_9 = sub_4038a0(arg1, esi_3)
*eax_4 = eax_9
__builtin_memset(__builtin_memset(eax_9, 0, esi_3 u>> 2 << 2), 0, esi_3 & 3)
int32_t edi_3 = 0
int32_t var_10 = 0
arg1 = divs.dp.d(sx.q(*ebp), ebx)

if (temp0 s> 0)
    do
        arg4 = 0f
        long double x87_r7_1 = fconvert.t(0f)
        int32_t var_14_1 = 0
        
        if (ecx s> 0)
            int32_t esi_4 = arg1 << 2
            int32_t eax_21
            
            do
                long double x87_r6_2 = fabs(fconvert.t(*(esi_4 + *arg3)))
                long double x87_r5_1 = fconvert.t(arg4)
                x87_r6_2 - x87_r5_1
                int32_t eax_17
                eax_17.w = (x87_r6_2 < x87_r5_1 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r6_2, x87_r5_1) ? 1 : 0) << 0xa
                    | (x87_r6_2 == x87_r5_1 ? 1 : 0) << 0xe | 0x3000
                
                if ((eax_17:1.b & 0x41) != 0)
                    x87_r7_1 = x87_r6_2
                else
                    arg4 = fconvert.s(x87_r6_2)
                
                if (ebx s> 1)
                    int32_t i_2 = ebx - 1
                    void* ecx_7 = &arg3[1]
                    int32_t i
                    
                    do
                        float* edx_11 = *ecx_7 + esi_4
                        long double x87_r6_4 = fabs(fconvert.t(*edx_11))
                        x87_r7_1 - x87_r6_4
                        eax_17.w = (x87_r7_1 < x87_r6_4 ? 1 : 0) << 8
                            | (is_unordered.t(x87_r7_1, x87_r6_4) ? 1 : 0) << 0xa
                            | (x87_r7_1 == x87_r6_4 ? 1 : 0) << 0xe | 0x3800
                        
                        if ((eax_17:1.b & 1) != 0)
                            x87_r7_1 = fabs(fconvert.t(*edx_11))
                        
                        ecx_7 += 4
                        i = i_2
                        i_2 -= 1
                    while (i != 1)
                
                esi_4 += 4
                arg1 += 1
                eax_21 = var_14_1 i+ ebx
                var_14_1 = eax_21
            while (eax_21 s< ecx)
            edi_3 = var_10
        
        int32_t i_1 = 0
        
        if (edx - 1 s> 0)
            void* edx_12 = &ebp[0x185]
            
            do
                long double x87_r6_5 = fconvert.t(arg4)
                long double temp2_1 = fconvert.t(*(edx_12 - 0x100))
                x87_r6_5 - temp2_1
                int32_t eax_22
                eax_22.w = (x87_r6_5 < temp2_1 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r6_5, temp2_1) ? 1 : 0) << 0xa
                    | (x87_r6_5 == temp2_1 ? 1 : 0) << 0xe | 0x3800
                
                if ((eax_22:1.b & 0x41) != 0)
                    long double temp3_1 = fconvert.t(*edx_12)
                    x87_r7_1 - temp3_1
                    eax_22.w = (x87_r7_1 < temp3_1 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r7_1, temp3_1) ? 1 : 0) << 0xa
                        | (x87_r7_1 == temp3_1 ? 1 : 0) << 0xe | 0x3800
                    
                    if ((eax_22:1.b & 0x41) != 0)
                        break
                
                i_1 += 1
                edx_12 += 4
            while (i_1 s< edx - 1)
        
        edi_3 += 1
        var_10 = edi_3
        *(*eax_4 + (edi_3 << 2) - 4) = i_1
    while (edi_3 s< temp0)

arg2[0xa] += 1
