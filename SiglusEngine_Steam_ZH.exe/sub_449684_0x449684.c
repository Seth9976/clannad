// 函数: sub_449684
// 地址: 0x449684
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* eax = arg4
void* ebx_2 = arg2 * 0x64 + *(arg1 + 0x2c)
int32_t* esi_2 = arg3 * 0x64 + *(ebx_2 + 4)
int32_t edi
int32_t var_24 = edi
int32_t var_c
int32_t* edi_1

if (eax == 0)
    edi_1 = arg5
else
    int32_t eax_1 = (*(*eax + 0x10))(eax)
    edi_1 = arg5
    eax = arg4
    
    if (*edi_1 + 1 u<= eax_1)
        var_c = *((*(*eax + 0xc))(eax) + (*edi_1 << 2))
        eax = arg4

*edi_1 += 1

if (eax != 0 && (*(*eax + 0x10))(eax) u>= *edi_1)
    int32_t* var_28_4 = &esi_2[0xe]
    int32_t var_2c_1 = var_c + 0x20
    int32_t eax_7 = sub_458de2()
    
    if (eax_7 s< 0)
        return eax_7
    
    int32_t* eax_8 = esi_2[0xe]
    int32_t* edi_3 = (*(*eax_8 + 0xc))(eax_8)
    edi_3[2] = 0
    
    if (var_c == 0)
        return eax_7
    
    int32_t eax_11 = var_c & 3
    char temp1_1 = eax_11.b
    eax_11.b = neg.b(eax_11.b)
    int32_t eax_14 = neg.d(sbb.d(eax_11, eax_11, temp1_1 != 0)) + (var_c u>> 2)
    int32_t* eax_15 = arg4
    int32_t eax_16 = (*(*eax_15 + 0x10))(eax_15)
    
    if (*arg5 + eax_14 u<= eax_16)
        int32_t* eax_17 = arg4
        int32_t esi_4
        int32_t edi_5
        edi_5, esi_4 =
            __builtin_memcpy(&edi_3[8], (*(*eax_17 + 0xc))(eax_17) + (*arg5 << 2), var_c u>> 2 << 2)
        __builtin_memcpy(edi_5, esi_4, var_c & 3)
    
    *arg5 += eax_14
    int32_t eax_22 = sub_4288c5(&edi_3[8], &esi_2[0x10], &esi_2[0x11])
    
    if (eax_22 s< 0)
        return eax_22
    
    int32_t* eax_23 = arg4
    
    if ((*(*eax_23 + 0x10))(eax_23) u>= *arg5)
        int32_t eax_28 = sub_4288c5(&edi_3[8], &esi_2[0x10], &esi_2[0x11])
        int32_t var_8_1 = eax_28
        
        if (eax_28 s>= 0)
            int32_t eax_29 = sub_44896e(arg1, arg2, arg3, edi_3)
            var_8_1 = eax_29
            
            if (eax_29 s>= 0)
                arg4 = esi_2[8] + *(arg1 + 0x20)
                int32_t eax_32 = sub_442bf5(&arg4, 4)
                *edi_3 = eax_32
                int32_t eax_33 = eax_32 << 2
                edi_3[1] = eax_33
                
                if (eax_33 != 0)
                    edi_3[1] = eax_33 - 1
                
                int32_t ecx_26 = edi_3[1]
                int32_t eax_37 = ecx_26 u>> 1 | ecx_26
                int32_t ecx_29 = eax_37 u>> 2 | eax_37
                int32_t eax_40 = ecx_29 u>> 4 | ecx_29
                int32_t ecx_32 = eax_40 u>> 8 | eax_40
                int32_t eax_43 = ecx_32 u>> 0x10 | ecx_32
                edi_3[1] = eax_43
                int32_t eax_44 = *(ebx_2 + 0xc)
                int32_t eax_46 = (eax_44 & 7) + (eax_44 u>> 3 << 3)
                *(ebx_2 + 0xc) = eax_46
                edi_3[3] = eax_46
                *(ebx_2 + 0xc) += (eax_43 << 3) + 8
                *esi_2 = 1
        
        return var_8_1

return 0x80004005
