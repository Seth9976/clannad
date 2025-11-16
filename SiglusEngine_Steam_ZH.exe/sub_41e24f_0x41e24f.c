// 函数: sub_41e24f
// 地址: 0x41e24f
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_14 = edi

if (*(arg1 + 0xa4) == 0 || (arg2 u>= *(arg1 + 0x88) && arg2 u< *(arg1 + 0x90)
        && arg3 u>= *(arg1 + 0x94) && arg3 u< *(arg1 + 0x98)))
    return 

int16_t x87control
sub_41df4c(arg1, x87control)
*(arg1 + 0x90) = arg2 + 1
*(arg1 + 0x88) = arg2
*(arg1 + 0x94) = arg3
*(arg1 + 0x98) = arg3 i+ 1

if (arg4 == 0)
    return 

uint32_t eax_4 = *(arg1 + 0x84)
float ebx_2 = *(arg1 + 0x80)
int32_t ecx_4 = *(arg1 + 0x68)
int16_t* esi_3 = *(arg1 + 0x60) * arg2 + *(arg1 + 0x64) i* arg3 + (eax_4 << 1) + *(arg1 + 0x20)
arg3 = ebx_2

if ((ecx_4.b & 1) != 0)
    ecx_4 += 1

uint32_t ecx_5 = *(arg1 + 4)

if (ecx_5 == 0x32595559)
label_41e334:
    arg4 = eax_4
    
    if (eax_4 u< *(arg1 + 0x8c))
        long double x87_r7_1 = fconvert.t(128f)
        long double x87_r6_1 = fconvert.t(0f)
        long double x87_r5_1 = fconvert.t(1f)
        
        do
            ecx_5.w = *(arg1 + 0xa8)
            uint32_t eax_5
            eax_5.w = *esi_3
            arg2 = eax_5
            eax_5.w u>>= ecx_5.b
            int32_t eax_8 = arg4 & 1
            uint32_t eax_12
            long double x87_r3_1
            long double x87_r4_4
            
            if (eax_8 == 0)
                ecx_5.w = *(arg1 + 0xac)
                x87_r4_4 = float.t(zx.d((arg2.w u>> ecx_5.b).b)) - x87_r7_1
                x87_r3_1 = float.t(zx.d((esi_3[1] u>> ecx_5.b).b))
            else if (eax_8 == 1 && ecx_4 == 2)
                ecx_5.w = *(arg1 + 0xac)
                x87_r4_4 = float.t(zx.d((esi_3[-1] u>> ecx_5.b).b)) - x87_r7_1
                x87_r3_1 = float.t(zx.d((arg2.w u>> ecx_5.b).b))
            else if (arg4 != 1 || ecx_4 != 4)
                bool cond:11_1
                
                if (arg4 == ecx_4 - 1)
                    char ebx_4 = (*(arg1 + 0xac)).b
                    ecx_5.b = ebx_4
                    uint32_t ecx_13
                    ecx_13.b = ebx_4
                    uint32_t eax_56 = (zx.d((zx.d(esi_3[-1]) u>> ecx_5.b).b) * 0x11
                        - zx.d((zx.d(esi_3[-3]) u>> ecx_13.b).b) + 8) u>> 4
                    long double x87_r4_11 = float.t(eax_56)
                    
                    if (eax_56 s< 0)
                        x87_r4_11 = x87_r4_11 + fconvert.t(4.2949673e+09f)
                    
                    char ebx_8 = (*(arg1 + 0xac)).b
                    x87_r4_4 = x87_r4_11 - x87_r7_1
                    ecx_13.b = ebx_8
                    ecx_5.b = ebx_8
                    eax_12 = (zx.d((zx.d(arg2.w) u>> ecx_13.b).b) * 0x11
                        - zx.d((zx.d(esi_3[-2]) u>> ecx_5.b).b) + 8) u>> 4
                    x87_r3_1 = float.t(eax_12)
                    cond:11_1 = eax_12 s>= 0
                else if (arg4 == 1)
                    uint32_t eax_65 = zx.d((zx.d(esi_3[-1]) u>> (*(arg1 + 0xac)).b).b)
                    uint32_t eax_70 = (
                        (zx.d((zx.d(esi_3[1]) u>> (*(arg1 + 0xac)).b).b) + eax_65) * 9
                        - zx.d((zx.d(esi_3[3]) u>> (*(arg1 + 0xac)).b).b) - eax_65 + 8) u>> 4
                    long double x87_r4_12 = float.t(eax_70)
                    
                    if (eax_70 s< 0)
                        x87_r4_12 = x87_r4_12 + fconvert.t(4.2949673e+09f)
                    
                    x87_r4_4 = x87_r4_12 - x87_r7_1
                    uint32_t eax_73 = zx.d((zx.d(arg2.w) u>> (*(arg1 + 0xac)).b).b)
                    eax_12 = ((zx.d((zx.d(esi_3[2]) u>> (*(arg1 + 0xac)).b).b) + eax_73) * 9
                        - zx.d((zx.d(esi_3[4]) u>> (*(arg1 + 0xac)).b).b) - eax_73 + 8) u>> 4
                    x87_r3_1 = float.t(eax_12)
                    cond:11_1 = eax_12 s>= 0
                else if (arg4 != ecx_4 - 3)
                    char ebx_40 = (*(arg1 + 0xac)).b
                    ecx_5.b = ebx_40
                    uint32_t ecx_26
                    ecx_26.b = ebx_40
                    uint32_t eax_102 = ((zx.d((zx.d(esi_3[-1]) u>> ecx_5.b).b)
                        + zx.d((zx.d(esi_3[1]) u>> ecx_26.b).b)) * 9
                        - zx.d((zx.d(esi_3[-3]) u>> (*(arg1 + 0xac)).b).b)
                        - zx.d((zx.d(esi_3[3]) u>> (*(arg1 + 0xac)).b).b) + 8) u>> 4
                    long double x87_r4_14 = float.t(eax_102)
                    
                    if (eax_102 s< 0)
                        x87_r4_14 = x87_r4_14 + fconvert.t(4.2949673e+09f)
                    
                    char ebx_50 = (*(arg1 + 0xac)).b
                    x87_r4_4 = x87_r4_14 - x87_r7_1
                    uint32_t ecx_29
                    ecx_29.b = ebx_50
                    eax_12 = ((zx.d((zx.d(esi_3[2]) u>> ebx_50).b)
                        + zx.d((zx.d(arg2.w) u>> ecx_29.b).b)) * 9
                        - zx.d((zx.d(esi_3[4]) u>> (*(arg1 + 0xac)).b).b)
                        - zx.d((zx.d(esi_3[-2]) u>> (*(arg1 + 0xac)).b).b) + 8) u>> 4
                    x87_r3_1 = float.t(eax_12)
                    cond:11_1 = eax_12 s>= 0
                else
                    uint32_t eax_81 = zx.d((zx.d(esi_3[1]) u>> (*(arg1 + 0xac)).b).b)
                    int32_t eax_86 = (
                        (zx.d((zx.d(esi_3[-1]) u>> (*(arg1 + 0xac)).b).b) + eax_81) * 9
                        - zx.d((zx.d(esi_3[-3]) u>> (*(arg1 + 0xac)).b).b) - eax_81 + 8) u>> 4
                    long double x87_r4_13 = float.t(eax_86)
                    
                    if (eax_86 s< 0)
                        x87_r4_13 = x87_r4_13 + fconvert.t(4.2949673e+09f)
                    
                    char eax_87 = (*(arg1 + 0xac)).b
                    x87_r4_4 = x87_r4_13 - x87_r7_1
                    uint32_t ecx_25
                    ecx_25.b = eax_87
                    uint32_t ebx_39 = ((zx.d((zx.d(esi_3[2]) u>> eax_87).b) << 3) + 8
                        - zx.d((zx.d(esi_3[-2]) u>> ecx_25.b).b)
                        + zx.d((zx.d(arg2.w) u>> (*(arg1 + 0xac)).b).b) * 9) u>> 4
                    x87_r3_1 = float.t(ebx_39)
                    cond:11_1 = ebx_39 s>= 0
                
                if (not(cond:11_1))
                    x87_r3_1 = x87_r3_1 + fconvert.t(4.2949673e+09f)
                
                ebx_2 = arg3
            else
                arg3 = zx.d((zx.d(esi_3[-1]) u>> (*(arg1 + 0xac)).b).b)
                uint32_t eax_32 = zx.d((zx.d(esi_3[1]) u>> (*(arg1 + 0xac)).b).b)
                uint32_t eax_38 = ((eax_32 i+ arg3) * 9 i- arg3 - eax_32 + 8) u>> 4
                long double x87_r4_10 = float.t(eax_38)
                
                if (eax_38 s< 0)
                    x87_r4_10 = x87_r4_10 + fconvert.t(4.2949673e+09f)
                
                x87_r4_4 = x87_r4_10 - x87_r7_1
                eax_12 = (zx.d((zx.d(arg2.w) u>> (*(arg1 + 0xac)).b).b) * 8
                    + (zx.d((zx.d(esi_3[2]) u>> (*(arg1 + 0xac)).b).b) << 3) + 8) u>> 4
                x87_r3_1 = float.t(eax_12)
                
                if (eax_12 s< 0)
                    x87_r3_1 = x87_r3_1 + fconvert.t(4.2949673e+09f)
            
            long double x87_r3_6 = x87_r3_1 - x87_r7_1
            long double x87_r2_2 = fconvert.t(fconvert.s(float.t(eax_5 & 0xff) - fconvert.t(16f)))
                * fconvert.t(0.00456620986f)
            long double x87_r1_3 = x87_r3_6 * fconvert.t(0.00625893008f) + x87_r2_2
            arg2 = fconvert.s(x87_r1_3)
            *ebx_2 = fconvert.s(x87_r1_3)
            long double x87_r1_7 = x87_r2_2 - x87_r4_4 * fconvert.t(0.00153631996f)
                - x87_r3_6 * fconvert.t(0.00318810996f)
            arg3 = fconvert.s(x87_r1_7)
            *(ebx_2 i+ 4) = fconvert.s(x87_r2_2)
            long double x87_r4_17 =
                x87_r1_7 * fconvert.t(0.00791070983f) + fconvert.t(fconvert.s(x87_r2_2))
            *(ebx_2 i+ 8) = fconvert.s(x87_r4_17)
            *(ebx_2 i+ 0xc) = fconvert.s(float.t(1))
            long double x87_r3_9 = fconvert.t(arg2)
            x87_r3_9 - x87_r6_1
            eax_12.w = (x87_r3_9 < x87_r6_1 ? 1 : 0) << 8
                | (is_unordered.t(x87_r3_9, x87_r6_1) ? 1 : 0) << 0xa
                | (x87_r3_9 == x87_r6_1 ? 1 : 0) << 0xe | 0x2000
            bool p_1 = unimplemented  {test ah, 0x5}
            long double x87_r3_10
            
            if (p_1)
                long double x87_r3_11 = fconvert.t(arg2)
                x87_r3_11 - x87_r5_1
                eax_12.w = (x87_r3_11 < x87_r5_1 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r3_11, x87_r5_1) ? 1 : 0) << 0xa
                    | (x87_r3_11 == x87_r5_1 ? 1 : 0) << 0xe | 0x2000
                
                if ((eax_12:1.b & 0x41) != 0)
                    x87_r3_10 = fconvert.t(arg2)
                else
                    x87_r3_10 = float.t(1)
            else
                x87_r3_10 = float.t(0)
            
            *ebx_2 = fconvert.s(x87_r3_10)
            long double x87_r3_12 = fconvert.t(arg3)
            x87_r3_12 - x87_r6_1
            eax_12.w = (x87_r3_12 < x87_r6_1 ? 1 : 0) << 8
                | (is_unordered.t(x87_r3_12, x87_r6_1) ? 1 : 0) << 0xa
                | (x87_r3_12 == x87_r6_1 ? 1 : 0) << 0xe | 0x2000
            bool p_2 = unimplemented  {test ah, 0x5}
            long double x87_r3_13
            
            if (p_2)
                long double x87_r3_14 = fconvert.t(arg3)
                x87_r3_14 - x87_r5_1
                eax_12.w = (x87_r3_14 < x87_r5_1 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r3_14, x87_r5_1) ? 1 : 0) << 0xa
                    | (x87_r3_14 == x87_r5_1 ? 1 : 0) << 0xe | 0x2000
                
                if ((eax_12:1.b & 0x41) != 0)
                    x87_r3_13 = fconvert.t(arg3)
                else
                    x87_r3_13 = float.t(1)
            else
                x87_r3_13 = float.t(0)
            
            *(ebx_2 i+ 4) = fconvert.s(x87_r3_13)
            x87_r4_17 - x87_r6_1
            eax_12.w = (x87_r4_17 < x87_r6_1 ? 1 : 0) << 8
                | (is_unordered.t(x87_r4_17, x87_r6_1) ? 1 : 0) << 0xa
                | (x87_r4_17 == x87_r6_1 ? 1 : 0) << 0xe | 0x2000
            bool p_3 = unimplemented  {test ah, 0x5}
            
            if (p_3)
                x87_r4_17 - x87_r5_1
                eax_12.w = (x87_r4_17 < x87_r5_1 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r4_17, x87_r5_1) ? 1 : 0) << 0xa
                    | (x87_r4_17 == x87_r5_1 ? 1 : 0) << 0xe | 0x2000
                
                if ((eax_12:1.b & 0x41) == 0)
                    x87_r5_1 = x87_r4_17
                    x87_r4_17 = float.t(1)
            else
                x87_r5_1 = x87_r4_17
                x87_r4_17 = float.t(0)
            
            ebx_2 += 0x10
            *(ebx_2 - 8) = fconvert.s(x87_r4_17)
            esi_3 = &esi_3[1]
            arg4 += 1
            arg3 = ebx_2
        while (arg4 u< *(arg1 + 0x8c))
else if (ecx_5 == 0x42475247 || ecx_5 == 0x47424752)
    arg3 = eax_4
    
    if (eax_4 u< *(arg1 + 0x8c))
        long double x87_r7_2 = fconvert.t(0.00392156886f)
        
        do
            ecx_5.w = *(arg1 + 0xa8)
            uint32_t eax_13
            eax_13.w = *esi_3
            arg3 += 2
            esi_3 = &esi_3[2]
            arg2 = eax_13
            eax_13.w u>>= ecx_5.b
            ecx_5.w = *(arg1 + 0xac)
            uint16_t eax_15 = arg2.w u>> ecx_5.b
            ecx_5.w = *(arg1 + 0xa8)
            uint32_t eax_17
            eax_17.w = esi_3[-1]
            long double x87_r5_3 = float.t(zx.d(eax_15.b)) * x87_r7_2
            arg4 = eax_17
            eax_17.w u>>= ecx_5.b
            ecx_5.w = *(arg1 + 0xac)
            *(ebx_2 i+ 0x14) = fconvert.s(float.t(eax_17 & 0xff) * x87_r7_2)
            long double x87_r4_8 = float.t(zx.d((arg4.w u>> ecx_5.b).b)) * x87_r7_2
            *ebx_2 = fconvert.s(x87_r5_3)
            ebx_2 += 0x20
            *(ebx_2 - 0x1c) = fconvert.s(float.t(eax_13 & 0xff) * x87_r7_2)
            *(ebx_2 - 0x18) = fconvert.s(x87_r4_8)
            *(ebx_2 - 0x14) = fconvert.s(float.t(1))
            *(ebx_2 - 0x10) = fconvert.s(x87_r5_3)
            *(ebx_2 - 8) = fconvert.s(x87_r4_8)
            x87_r7_2 = x87_r5_3
            *(ebx_2 - 4) = fconvert.s(float.t(1))
        while (arg3 u< *(arg1 + 0x8c))
else if (ecx_5 == 0x59565955)
    goto label_41e334
