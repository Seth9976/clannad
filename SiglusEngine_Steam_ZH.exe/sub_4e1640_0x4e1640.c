// 函数: sub_4e1640
// 地址: 0x4e1640
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_6c = edi
void* edi_1 = *(arg1 + 0x1cc)
int32_t eax_1 = (**(arg1 + 4))(arg1, 1, 0x400)
int32_t ecx = *(arg1 + 4)
*(edi_1 + 0x18) = eax_1
int32_t eax_2 = (*ecx)(arg1, 1, 0x400)
int32_t edx = *(arg1 + 4)
*(edi_1 + 0x1c) = eax_2
*(edi_1 + 0x20) = (*edx)(arg1, 1, 0x400)
*(edi_1 + 0x24) = (**(arg1 + 4))(arg1, 1, 0x400)
*(edi_1 + 0x28) = (**(arg1 + 4))(arg1, 1, 0x400)
*(edi_1 + 0x2c) = (**(arg1 + 4))(arg1, 1, 0x400)
*(edi_1 + 0x30) = (**(arg1 + 4))(arg1, 1, 0x400)
*(edi_1 + 0x34) = (**(arg1 + 4))(arg1, 1, 0x400)
*(edi_1 + 0x38) = (**(arg1 + 4))(arg1, 1, 0x400)
int32_t eax_13 = (**(arg1 + 4))(arg1, 1, 0x400)
int32_t* ecx_3 = *(edi_1 + 0x1c)
int32_t i = 0xfe81
*(edi_1 + 0x3c) = eax_13
int32_t ebx = 0xffbe301f
int32_t var_40_1
__builtin_memcpy(&var_40_1, 
    "\x81\xfe\x00\x00\x81\xfe\x00\x00\x81\xfe\x00\x00\x81\xfe\x00\x00\x81\xfe\x00\x00\x81\xfe\x00\x00\x"
"81\xfe\x00\x00\x1f\xdb\xb5\xff\x5f\xb8\xfb\xff\x1f\xac\xde\xff\x1f\x60\xa9\xff\x1f\xa4\xe9\xff\x1f"
"09\xf7\xff\x5f\xed\xe7\xff\x1f\xa0\xb4\xff", 
    0x3c)
void* edx_4 = *(edi_1 + 0x18) - ecx_3
void* edx_6 = *(edi_1 + 0x20) - ecx_3
void* edx_8 = *(edi_1 + 0x24) - ecx_3
void* edx_10 = *(edi_1 + 0x28) - ecx_3
void* edx_12 = *(edi_1 + 0x2c) - ecx_3
void* edx_14 = *(edi_1 + 0x30) - ecx_3
void* edi_3 = *(edi_1 + 0x38) - ecx_3
void* edx_16 = *(edi_1 + 0x34) - ecx_3
void* edi_5 = eax_13 - ecx_3
int32_t result

do
    int32_t i_1
    
    if (i s<= 0x5741)
        i_1 = 0x57c0 - ebx s/ 0x3f
    else
        i_1 = i
    
    *(ecx_3 + edx_4) = i_1
    int32_t var_28_1
    int32_t var_8_1
    int32_t eax_17
    
    if (i s<= 0x5741)
        eax_17 = 0x6480 - var_8_1 s/ 0x3f
    else
        eax_17 = var_28_1
    
    *ecx_3 = (eax_17 * 0x10101) u>> 0x10
    int32_t var_2c_1
    int32_t var_c_1
    int32_t eax_23
    
    if (i s<= 0x5741)
        eax_23 = 0xb880 - var_c_1 s/ 0x3f
    else
        eax_23 = var_2c_1
    
    *(ecx_3 + edx_6) = (eax_23 * 0x10101) u>> 0x10
    int32_t var_10_1
    int32_t eax_29
    
    if (i s<= 0x5741)
        eax_29 = 0xff00 - var_10_1 s/ 0x3f
    else
        eax_29 = 0xfe81
    
    *(ecx_3 + edx_8) = (eax_29 * 0x10101) u>> 0x10
    int32_t var_30_1
    int32_t var_14_1
    int32_t eax_35
    
    if (i s<= 0x5741)
        eax_35 = 0xed00 - var_14_1 s/ 0x3f
    else
        eax_35 = var_30_1
    
    *(ecx_3 + edx_10) = (eax_35 * 0x10101) u>> 0x10
    int32_t var_34_1
    int32_t var_18_1
    int32_t eax_41
    
    if (i s<= 0x5741)
        eax_41 = 0x7380 - var_18_1 s/ 0x3f
    else
        eax_41 = var_34_1
    
    *(ecx_3 + edx_12) = (eax_41 * 0x10101) u>> 0x10
    int32_t var_38_1
    int32_t var_1c_1
    int32_t eax_47
    
    if (i s<= 0x5741)
        eax_47 = 0x9c00 - var_1c_1 s/ 0x3f
    else
        eax_47 = var_38_1
    
    *(ecx_3 + edx_14) = (eax_47 * 0x10101) u>> 0x10
    int32_t eax_53
    eax_53.b = i s<= 0x5741
    *(ecx_3 + edx_16) = ((((eax_53 - 1) & 0xffffff81) + 0xff00) * 0x10101) u>> 0x10
    int32_t var_3c_1
    int32_t var_20_1
    int32_t eax_59
    
    if (i s<= 0x5741)
        eax_59 = 0xf9c0 - var_20_1 s/ 0x3f
    else
        eax_59 = var_3c_1
    
    *(ecx_3 + edi_3) = (eax_59 * 0x10101) u>> 0x10
    int32_t result_1
    int32_t eax_65
    
    if (i s<= 0x5741)
        eax_65 = 0x7ec0 - result_1 s/ 0x3f
    else
        eax_65 = var_40_1
    
    *(ecx_3 + edi_5) = (eax_65 * 0x10101) u>> 0x10
    var_28_1 -= 0xce
    var_8_1 += 0x6480
    var_2c_1 -= 0x5e
    var_c_1 += 0x2019
    var_10_1 += 0xbf4
    var_30_1 -= 0x18
    var_14_1 += 0x1dd0
    var_34_1 -= 0xba
    var_18_1 += 0x7380
    var_38_1 -= 0x84
    var_1c_1 += 0x2c70
    var_3c_1 -= 7
    var_20_1 += 0x5b5
    i -= 0xdf
    result = result_1 + 0x62dc
    ebx += 0x57c0
    ecx_3 = &ecx_3[1]
    var_40_1 -= 0xab
    result_1 = result
while (i s>= 0x2060)

return result
