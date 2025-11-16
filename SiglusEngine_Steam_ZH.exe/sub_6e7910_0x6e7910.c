// 函数: sub_6e7910
// 地址: 0x6e7910
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

char* var_30 = arg3
void* edx = arg3
int32_t i_1 = 8
char* var_34 = edx + (arg2 << 1)
char* var_38 = edx + (arg2 << 2)
void* var_44 = edx + arg2 * 6
char* ebx = arg4 + (arg5 << 1)
char* edi_1 = arg4 + (arg5 << 2)
char* var_48 = ebx
char* var_4c = edi_1
void* var_3c = arg4 + arg5 * 6
void* ecx_1 = arg4 - edx
void* var_40 = arg4 + (arg5 << 3)
arg4 = ecx_1
char* eax_124
int32_t i

do
    char* eax_9 = ecx_1 + edx
    uint32_t ecx_2 = zx.d(*eax_9)
    uint32_t eax_10 = zx.d(eax_9[arg5])
    uint32_t eax_11 = zx.d(*ebx)
    uint32_t eax_12 = zx.d(ebx[arg5])
    uint32_t ecx_4 = zx.d(edi_1[arg5])
    uint32_t ebx_1 = zx.d(*edi_1)
    char* edi_2 = var_3c
    uint32_t edx_1 = zx.d(*edi_2)
    uint32_t edx_3 = zx.d(edi_2[arg5])
    char* edi_3 = var_40
    uint32_t edx_4 = zx.d(*edi_3)
    uint32_t edx_6 = zx.d(edi_3[arg5])
    int32_t eax_14
    int32_t edx_7
    edx_7:eax_14 = sx.q(eax_12 - eax_11)
    int32_t eax_17
    int32_t edx_8
    edx_8:eax_17 = sx.q(eax_11 - eax_10)
    int32_t eax_22
    int32_t edx_9
    edx_9:eax_22 = sx.q(eax_10 - ecx_2)
    int32_t eax_27
    int32_t edx_10
    edx_10:eax_27 = sx.q(ebx_1 - eax_12)
    int32_t edi_9 = (eax_14 ^ edx_7) - edx_7 + (eax_17 ^ edx_8) - edx_8 + (eax_22 ^ edx_9) - edx_9
        + (eax_27 ^ edx_10) - edx_10
    int32_t eax_32
    int32_t edx_11
    edx_11:eax_32 = sx.q(edx_3 - edx_4)
    int32_t eax_37
    int32_t edx_12
    edx_12:eax_37 = sx.q(edx_4 - edx_6)
    int32_t eax_42
    int32_t edx_13
    edx_13:eax_42 = sx.q(edx_1 - edx_3)
    int32_t eax_47
    int32_t edx_14
    edx_14:eax_47 = sx.q(ecx_4 - edx_1)
    int32_t edx_16 = (eax_32 ^ edx_11) - edx_11 + (eax_37 ^ edx_12) - edx_12 + (eax_42 ^ edx_13)
        - edx_13 + (eax_47 ^ edx_14) - edx_14
    int32_t ecx_5
    ecx_5.b = edi_9 s< 0xff
    *arg8 += (neg.d(ecx_5) & (edi_9 - 0xff)) + 0xff
    int32_t ecx_9
    ecx_9.b = edx_16 s< 0xff
    *arg9 += (neg.d(ecx_9) & (edx_16 - 0xff)) + 0xff
    char* edx_25
    char* ebx_2
    char* edi_16
    
    if (edi_9 s>= arg7 || edx_16 s>= arg7 || ecx_4 - ebx_1 s>= arg6 || ebx_1 - ecx_4 s>= arg6)
        edx_25 = var_30
        edi_16 = var_34
        *edx_25 = eax_10.b
        edx_25[arg2] = eax_11.b
        *edi_16 = eax_12.b
        eax_124 = var_38
        edi_16[arg2] = ebx_1.b
        ebx_2 = var_44
        *eax_124 = ecx_4.b
        eax_124[arg2] = edx_1.b
        *ebx_2 = edx_3.b
        ebx_2[arg2] = edx_4.b
    else
        *var_30 = ((ecx_2 * 3 + eax_11 + (eax_10 << 1) + 4 + eax_12 + ebx_1) s>> 3).b
        var_30[arg2] = ((eax_12 + 4 + ((eax_11 + ecx_2) << 1) + eax_10 + ecx_4 + ebx_1) s>> 3).b
        *var_34 = ((edx_1 + (eax_12 << 1) + 4 + eax_11 + ecx_2 + eax_10 + ecx_4 + ebx_1) s>> 3).b
        var_34[arg2] =
            ((edx_1 + (ebx_1 << 1) + 4 + edx_3 + eax_11 + eax_12 + eax_10 + ecx_4) s>> 3).b
        *var_38 = ((edx_1 + (ecx_4 << 1) + 4 + edx_4 + edx_3 + eax_11 + eax_12 + ebx_1) s>> 3).b
        var_38[arg2] =
            ((edx_4 + ((edx_1 + 2) << 1) + edx_6 + edx_3 + eax_12 + ecx_4 + ebx_1) s>> 3).b
        ebx_2 = var_44
        *ebx_2 = ((edx_1 + ((edx_3 + edx_6) << 1) + edx_4 + 4 + ecx_4 + ebx_1) s>> 3).b
        edi_16 = var_34
        edx_25 = var_30
        ebx_2[arg2] = ((edx_6 * 3 + edx_1 + (edx_4 << 1) + 4 + edx_3 + ecx_4) s>> 3).b
        eax_124 = var_38
    
    var_48 = &var_48[1]
    var_4c = &var_4c[1]
    var_3c += 1
    edx = &edx_25[1]
    var_40 += 1
    i = i_1
    i_1 -= 1
    ecx_1 = arg4
    var_34 = &edi_16[1]
    edi_1 = var_4c
    var_44 = &ebx_2[1]
    ebx = var_48
    var_30 = edx
    var_38 = &eax_124[1]
while (i != 1)
return &eax_124[1]
