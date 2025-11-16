// 函数: sub_444b10
// 地址: 0x444b10
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* ecx = arg3
int32_t eax_1 = *arg1
void* ebx = ecx
int32_t edi
int32_t var_10 = edi
arg3 = ebx

if (eax_1 == 1)
    int32_t* edi_6 = arg2
    arg2 = 4
    int32_t* i
    
    do
        int32_t* ecx_2 = edi_6
        int32_t j_2 = 4
        int32_t j
        
        do
            long double x87_r7_2 = fconvert.t(*ebx)
            long double x87_r6_1 = fconvert.t(0f)
            x87_r6_1 - x87_r7_2
            int32_t eax_2
            eax_2.w = (x87_r6_1 < x87_r7_2 ? 1 : 0) << 8
                | (is_unordered.t(x87_r6_1, x87_r7_2) ? 1 : 0) << 0xa
                | (x87_r6_1 == x87_r7_2 ? 1 : 0) << 0xe
            bool p_1 = unimplemented  {test ah, 0x44}
            
            eax_2 = not(p_1) ? 0 : 1
            
            *ecx_2 = eax_2
            ebx += 4
            ecx_2 = &ecx_2[4]
            j = j_2
            j_2 -= 1
        while (j != 1)
        edi_6 = &edi_6[1]
        i = arg2
        arg2 -= 1
    while (i != 1)
else if (eax_1 == 2)
    int32_t* ebx_1 = arg2
    arg1 = 4
    int32_t* i_1
    
    do
        int32_t* edi_5 = ebx_1
        arg2 = 4
        int32_t* j_1
        
        do
            int32_t eax_11
            int16_t x87control
            eax_11, x87control = __ftol(x87control, fconvert.t(*arg3))
            arg3 += 4
            *edi_5 = eax_11
            edi_5 = &edi_5[4]
            j_1 = arg2
            arg2 -= 1
        while (j_1 != 1)
        ebx_1 = &ebx_1[1]
        i_1 = arg1
        arg1 -= 1
    while (i_1 != 1)
else
    if (eax_1 != 3)
        return 0x80004005
    
    int32_t* eax_6 = arg2
    int32_t* ecx_1 = ecx + 0x20
    int32_t i_3 = 4
    int32_t i_2
    
    do
        *eax_6 = ecx_1[-8]
        eax_6[1] = ecx_1[-4]
        eax_6[2] = *ecx_1
        eax_6[3] = ecx_1[4]
        eax_6 = &eax_6[4]
        ecx_1 = &ecx_1[1]
        i_2 = i_3
        i_3 -= 1
    while (i_2 != 1)

return 0
