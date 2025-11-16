// 函数: sub_4e7450
// 地址: 0x4e7450
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int16_t* ecx_1 = *(arg2 + 0x50)
int32_t eax_2 = *(arg1 + 0x148) + 0x80
int32_t edi
int32_t var_54 = edi
int16_t* eax_3 = arg3
int16_t* edi_1 = 6
int32_t var_48
int32_t* edx = &var_48
arg3 = 6

do
    if (edi_1 != 4 && edi_1 != 2 && edi_1 != 0)
        int32_t esi_4
        
        if (eax_3[8] != 0 || eax_3[0x18] != 0 || eax_3[0x28] != 0 || eax_3[0x38] != 0)
            int32_t esi_7 = (sx.d(*eax_3) * sx.d(*ecx_1)) << 0xf
            int32_t edi_8 = sx.d(ecx_1[0x28]) * sx.d(eax_3[0x28]) * 0x1b37
                - sx.d(ecx_1[0x18]) * sx.d(eax_3[0x18]) * 0x28ba
                - sx.d(ecx_1[0x38]) * sx.d(eax_3[0x38]) * 0x1712
            int32_t edi_9 = edi_8 + sx.d(ecx_1[8]) * sx.d(eax_3[8]) * 0x73fc
            edi_1 = arg3
            *edx = (edi_9 + esi_7 + 0x1000) s>> 0xd
            esi_4 = (esi_7 - edi_9 + 0x1000) s>> 0xd
        else
            esi_4 = (sx.d(*eax_3) * sx.d(*ecx_1)) << 2
            *edx = esi_4
        
        edx[8] = esi_4
    
    if (edi_1 != 5 && edi_1 != 3 && edi_1 != 1)
        int32_t esi_23
        
        if (eax_3[9] != 0 || eax_3[0x19] != 0 || eax_3[0x29] != 0 || eax_3[0x39] != 0)
            int32_t esi_26 = (sx.d(eax_3[1]) * sx.d(ecx_1[1])) << 0xf
            int32_t edi_17 = sx.d(ecx_1[0x29]) * sx.d(eax_3[0x29]) * 0x1b37
                - sx.d(ecx_1[0x19]) * sx.d(eax_3[0x19]) * 0x28ba
                - sx.d(ecx_1[0x39]) * sx.d(eax_3[0x39]) * 0x1712
                + sx.d(ecx_1[9]) * sx.d(eax_3[9]) * 0x73fc
            edi_1 = arg3
            edx[1] = (edi_17 + esi_26 + 0x1000) s>> 0xd
            esi_23 = (esi_26 - edi_17 + 0x1000) s>> 0xd
        else
            esi_23 = (sx.d(eax_3[1]) * sx.d(ecx_1[1])) << 2
            edx[1] = esi_23
        
        edx[9] = esi_23
    
    if (edi_1 != 6 && edi_1 != 4 && edi_1 != 2)
        int32_t esi_41
        
        if (eax_3[0xa] != 0 || eax_3[0x1a] != 0 || eax_3[0x2a] != 0 || eax_3[0x3a] != 0)
            int32_t esi_44 = (sx.d(eax_3[2]) * sx.d(ecx_1[2])) << 0xf
            int32_t edi_25 = sx.d(ecx_1[0x2a]) * sx.d(eax_3[0x2a]) * 0x1b37
                - sx.d(ecx_1[0x1a]) * sx.d(eax_3[0x1a]) * 0x28ba
                - sx.d(ecx_1[0x3a]) * sx.d(eax_3[0x3a]) * 0x1712
                + sx.d(ecx_1[0xa]) * sx.d(eax_3[0xa]) * 0x73fc
            edi_1 = arg3
            edx[2] = (edi_25 + esi_44 + 0x1000) s>> 0xd
            esi_41 = (esi_44 - edi_25 + 0x1000) s>> 0xd
        else
            esi_41 = (sx.d(eax_3[2]) * sx.d(ecx_1[2])) << 2
            edx[2] = esi_41
        
        edx[0xa] = esi_41
    
    if (edi_1 != 7 && edi_1 != 5 && edi_1 != 3)
        int32_t esi_60
        
        if (eax_3[0xb] != 0 || eax_3[0x1b] != 0 || eax_3[0x2b] != 0 || eax_3[0x3b] != 0)
            int32_t esi_63 = (sx.d(eax_3[3]) * sx.d(ecx_1[3])) << 0xf
            int32_t edi_33 = sx.d(ecx_1[0x2b]) * sx.d(eax_3[0x2b]) * 0x1b37
                - sx.d(ecx_1[0x1b]) * sx.d(eax_3[0x1b]) * 0x28ba
                - sx.d(ecx_1[0x3b]) * sx.d(eax_3[0x3b]) * 0x1712
                + sx.d(ecx_1[0xb]) * sx.d(eax_3[0xb]) * 0x73fc
            edi_1 = arg3
            edx[3] = (edi_33 + esi_63 + 0x1000) s>> 0xd
            esi_60 = (esi_63 - edi_33 + 0x1000) s>> 0xd
        else
            esi_60 = (sx.d(eax_3[3]) * sx.d(ecx_1[3])) << 2
            edx[3] = esi_60
        
        edx[0xb] = esi_60
    
    edi_1 -= 4
    eax_3 = &eax_3[4]
    ecx_1 = &ecx_1[4]
    edx = &edx[4]
    arg3 = edi_1
while (&edi_1[1] s> 0)

char* edx_6 = *arg4 + arg5
int32_t var_44
int32_t var_3c
int32_t var_34
int32_t var_2c
char* eax_10

if (var_44 != 0 || var_3c != 0 || var_34 != 0 || var_2c != 0)
    int32_t ecx_11 = var_44 * 0x73fc - var_3c * 0x28ba + var_34 * 0x1b37 - var_2c * 0x1712
    int32_t eax_12 = var_48 << 0xf
    char* ecx_14
    ecx_14.b = ((ecx_11 + eax_12 + 0x80000) s>> 0x14 & 0x3ff)[eax_2]
    eax_10.b = ((eax_12 - ecx_11 + 0x80000) s>> 0x14 & 0x3ff)[eax_2]
    *edx_6 = ecx_14.b
else
    eax_10.b = ((var_48 + 0x10) s>> 5 & 0x3ff)[eax_2]
    *edx_6 = eax_10.b

edx_6[1] = eax_10.b
char* edx_8 = arg4[1] + arg5
int32_t var_28
int32_t var_24
int32_t var_1c
int32_t var_14
int32_t var_c

if (var_24 == 0 && var_1c == 0 && var_14 == 0 && var_c == 0)
    char* eax_19
    eax_19.b = ((var_28 + 0x10) s>> 5 & 0x3ff)[eax_2]
    *edx_8 = eax_19.b
    edx_8[1] = eax_19.b
    return eax_19

int32_t ecx_21 = var_24 * 0x73fc + var_14 * 0x1b37 - var_c * 0x1712 - var_1c * 0x28ba
int32_t eax_21 = var_28 << 0xf
char* ecx_24
ecx_24.b = ((ecx_21 + eax_21 + 0x80000) s>> 0x14 & 0x3ff)[eax_2]
char* eax_25
eax_25.b = ((eax_21 - ecx_21 + 0x80000) s>> 0x14 & 0x3ff)[eax_2]
*edx_8 = ecx_24.b
edx_8[1] = eax_25.b
return eax_25
