// 函数: sub_4c9cd0
// 地址: 0x4c9cd0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t var_38 = 0
BOOL var_8 = 0
int32_t eax_1
int32_t edx
edx:eax_1 = sx.q(arg2)
int32_t esi_1 = arg2 << 2
int32_t ecx = esi_1 * 2
int32_t eax_4
int32_t edx_1
edx_1:eax_4 = sx.q(arg4)
int32_t edi_1 = (eax_1 - edx) s>> 1
int32_t edx_3 = (eax_4 - edx_1) s>> 1
int32_t eax_6 = edi_1 << 2
int32_t eax_9 = (edx_3 * edi_1) << 2
sub_4d6960(eax_9, &var_8, &var_38, eax_9, arg9)
char* eax_10 = &arg3[esi_1]
BOOL ecx_6 = var_8
int32_t eax_15
int32_t edx_6
edx_6:eax_15 = sx.q(zx.d(eax_10[4]) + zx.d(arg3[4]) + zx.d(*eax_10) + zx.d(*arg3))
*ecx_6 = ((eax_15 + (edx_6 & 3)) s>> 2).b
int32_t eax_22
int32_t edx_8
edx_8:eax_22 = sx.q(zx.d(eax_10[5]) + zx.d(arg3[5]) + zx.d(eax_10[1]) + zx.d(arg3[1]))
*(ecx_6 + 1) = ((eax_22 + (edx_8 & 3)) s>> 2).b
int32_t eax_29
int32_t edx_10
edx_10:eax_29 = sx.q(zx.d(eax_10[6]) + zx.d(arg3[6]) + zx.d(eax_10[2]) + zx.d(arg3[2]))
*(ecx_6 + 2) = ((eax_29 + (edx_10 & 3)) s>> 2).b
char* ebx_2 = &arg3[4]
int32_t eax_36
int32_t edx_12
edx_12:eax_36 = sx.q(zx.d(eax_10[7]) + zx.d(arg3[7]) + zx.d(eax_10[3]) + zx.d(arg3[3]))
void* esi_4 = &ebx_2[esi_1]
*(ecx_6 + 3) = ((eax_36 + (edx_12 & 3)) s>> 2).b

if (edi_1 s> 1)
    arg4 = edi_1 - 1
    void* edi_5 = var_8 + 4
    void* i
    
    do
        edi_5 += 4
        ebx_2 = &ebx_2[8]
        uint32_t ecx_17 = zx.d(*(esi_4 + 8)) + zx.d(*(esi_4 + 4))
        esi_4 += 8
        int32_t eax_46
        int32_t edx_14
        edx_14:eax_46 = muls.dp.d(0x2aaaaaab, 
            ecx_17 + zx.d(*ebx_2) + zx.d(ebx_2[0xfffffffc]) + zx.d(*(esi_4 - 8))
                + zx.d(ebx_2[0xfffffff8]))
        *(edi_5 - 4) = (edx_14 u>> 0x1f).b + edx_14.b
        *(edi_5 - 3) = ((zx.d(*(esi_4 + 1)) + zx.d(*(esi_4 - 3)) + zx.d(ebx_2[1])
            + zx.d(ebx_2[0xfffffffd]) + zx.d(*(esi_4 - 7)) + zx.d(ebx_2[0xfffffff9])) s/ 6).b
        *(edi_5 - 2) = ((zx.d(*(esi_4 + 2)) + zx.d(*(esi_4 - 2)) + zx.d(ebx_2[2])
            + zx.d(ebx_2[0xfffffffe]) + zx.d(*(esi_4 - 6)) + zx.d(ebx_2[0xfffffffa])) s/ 6).b
        i = arg4
        arg4 -= 1
        *(edi_5 - 1) = ((zx.d(*(esi_4 + 3)) + zx.d(*(esi_4 - 1)) + zx.d(ebx_2[3])
            + zx.d(ebx_2[0xffffffff]) + zx.d(*(esi_4 - 5)) + zx.d(ebx_2[0xfffffffb])) s/ 6).b
    while (i != 1)

char* edx_18 = eax_10
int32_t esi_5 = esi_1
void* eax_78 = eax_6 + var_8
void* ecx_40 = &edx_18[esi_5]
void* ebx_3 = ecx_40 + esi_5
void* var_14 = eax_78
char* var_30 = edx_18
void* var_18 = ecx_40
char* var_1c = ebx_3
int32_t eax_121

if (edx_3 s<= 1)
    eax_121 = ecx
else
    void* esi_6 = &edx_18[6]
    arg4 = eax_78 + 2
    void* ebx_4 = ebx_3 + 6
    int32_t i_3 = edx_3 - 1
    char* edi_7 = ecx_40 + 6
    int32_t i_1
    
    do
        int32_t eax_89
        int32_t edx_19
        edx_19:eax_89 = muls.dp.d(0x2aaaaaab, 
            zx.d(*(ebx_4 - 2)) + zx.d(edi_7[0xfffffffe]) + zx.d(*(esi_6 - 2)) + zx.d(*var_18)
                + zx.d(*edx_18) + zx.d(*var_1c))
        *var_14 = (edx_19 u>> 0x1f).b + edx_19.b
        uint32_t ecx_53 = zx.d(*(ebx_4 - 5)) + zx.d(*(ebx_4 - 1)) + zx.d(edi_7[0xfffffffb])
            + zx.d(edi_7[0xffffffff]) + zx.d(*(esi_6 - 5)) + zx.d(*(esi_6 - 1))
        *(arg4 - 1) = (ecx_53 s/ 6).b
        int32_t eax_107
        int32_t edx_21
        edx_21:eax_107 = muls.dp.d(0x2aaaaaab, 
            zx.d(*(ebx_4 - 4)) + zx.d(edi_7[0xfffffffc]) + zx.d(*(esi_6 - 4)) + zx.d(*ebx_4)
                + zx.d(*esi_6) + zx.d(*edi_7))
        *arg4 = (edx_21 u>> 0x1f).b + edx_21.b
        uint32_t ecx_67 = zx.d(*(ebx_4 - 3)) + zx.d(*(ebx_4 + 1)) + zx.d(edi_7[0xfffffffd])
            + zx.d(edi_7[1]) + zx.d(*(esi_6 - 3)) + zx.d(*(esi_6 + 1))
        *(arg4 + 1) = (ecx_67 s/ 6).b
        var_14 += eax_6
        eax_121 = ecx
        edx_18 = &var_30[eax_121]
        arg4 += eax_6
        var_18 += eax_121
        esi_6 += eax_121
        var_1c = &var_1c[eax_121]
        edi_7 = &edi_7[eax_121]
        ebx_4 += eax_121
        var_30 = edx_18
        i_1 = i_3
        i_3 -= 1
    while (i_1 != 1)
    esi_5 = esi_1

char* ecx_71 = &eax_10[4]
char* ebx_6 = eax_78 + 4
char* var_24_1 = ecx_71
char* var_30_1 = ebx_6
void* edx_24 = &ecx_71[esi_5]
void* var_20_1 = edx_24
arg4 = esi_5 + edx_24
int32_t esi_8 = edx_3

if (esi_8 s> 1)
    int32_t i_4 = esi_8 - 1
    int32_t i_2
    
    do
        char* esi_10 = ecx_71
        void* ecx_72 = arg4
        
        if (edi_1 s> 1)
            int32_t j_1 = edi_1 - 1
            void* edi_9 = edx_24
            int32_t j
            
            do
                uint32_t edx_30 = zx.d(*(ecx_72 + 8)) + zx.d(*(ecx_72 + 4)) + zx.d(*(edi_9 + 8))
                    + zx.d(*(edi_9 + 4)) + zx.d(esi_10[8]) + zx.d(esi_10[4])
                int32_t eax_132
                int32_t edx_34
                edx_34:eax_132 =
                    muls.dp.d(0x38e38e39, edx_30 + zx.d(*edi_9) + zx.d(*ecx_72) + zx.d(*esi_10))
                int32_t edx_35 = edx_34 s>> 1
                *ebx_6 = (edx_35 u>> 0x1f).b + edx_35.b
                uint32_t edx_41 = zx.d(*(ecx_72 + 9)) + zx.d(*(ecx_72 + 5)) + zx.d(*(edi_9 + 9))
                    + zx.d(*(edi_9 + 5)) + zx.d(esi_10[9]) + zx.d(esi_10[5])
                int32_t eax_144
                int32_t edx_45
                edx_45:eax_144 = muls.dp.d(0x38e38e39, 
                    edx_41 + zx.d(*(edi_9 + 1)) + zx.d(*(ecx_72 + 1)) + zx.d(esi_10[1]))
                int32_t edx_46 = edx_45 s>> 1
                ebx_6[1] = (edx_46 u>> 0x1f).b + edx_46.b
                uint32_t edx_52 = zx.d(*(ecx_72 + 0xa)) + zx.d(*(ecx_72 + 6)) + zx.d(*(edi_9 + 0xa))
                    + zx.d(*(edi_9 + 6)) + zx.d(esi_10[0xa]) + zx.d(esi_10[6])
                int32_t eax_156
                int32_t edx_56
                edx_56:eax_156 = muls.dp.d(0x38e38e39, 
                    edx_52 + zx.d(*(edi_9 + 2)) + zx.d(*(ecx_72 + 2)) + zx.d(esi_10[2]))
                int32_t edx_57 = edx_56 s>> 1
                ebx_6[2] = (edx_57 u>> 0x1f).b + edx_57.b
                ebx_6 = &ebx_6[4]
                uint32_t edx_63 = zx.d(*(ecx_72 + 0xb)) + zx.d(*(ecx_72 + 7)) + zx.d(*(edi_9 + 0xb))
                    + zx.d(*(edi_9 + 7)) + zx.d(esi_10[0xb]) + zx.d(esi_10[7])
                esi_10 = &esi_10[8]
                uint32_t eax_165 = zx.d(*(edi_9 + 3))
                edi_9 += 8
                ecx_72 += 8
                int32_t eax_168
                int32_t edx_67
                edx_67:eax_168 = muls.dp.d(0x38e38e39, 
                    edx_63 + eax_165 + zx.d(*(ecx_72 - 5)) + zx.d(esi_10[0xfffffffb]))
                int32_t edx_68 = edx_67 s>> 1
                j = j_1
                j_1 -= 1
                ebx_6[0xffffffff] = (edx_68 u>> 0x1f).b + edx_68.b
            while (j != 1)
            eax_121 = ecx
            edx_24 = var_20_1
        
        edx_24 += eax_121
        ebx_6 = &var_30_1[eax_6]
        ecx_71 = &var_24_1[eax_121]
        arg4 += eax_121
        i_2 = i_4
        i_4 -= 1
        var_30_1 = ebx_6
        var_24_1 = ecx_71
        var_20_1 = edx_24
    while (i_2 != 1)
    esi_8 = edx_3

*arg5 = var_38
*arg6 = var_8
*arg7 = edi_1
*arg8 = esi_8
return arg8
