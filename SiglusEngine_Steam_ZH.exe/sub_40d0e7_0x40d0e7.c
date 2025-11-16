// 函数: sub_40d0e7
// 地址: 0x40d0e7
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_10 = edi
int16_t* edi_1 = *arg1
int32_t* esi_1

if (edi_1 != 0)
    int32_t* ebx_1 = arg4
    int32_t eax_3 = *ebx_1
    esi_1 = arg3
    
    if (*esi_1 == eax_3)
        int16_t* eax_5 = sub_745f3f(eax_3 << 2)
        int32_t i = 0
        arg3 = eax_5
        
        if (eax_5 == 0)
            return 0
        
        if (*esi_1 u> 0)
            do
                ebx_1.w = *(edi_1 - arg3 + eax_5)
                *eax_5 = ebx_1.w
                i += 1
                eax_5 = &eax_5[1]
            while (i u< *esi_1)
            
            ebx_1 = arg4
        
        *ebx_1 <<= 1
        j__free(edi_1)
        edi_1 = arg3
else
    edi_1 = sub_745f3f(4)
    
    if (edi_1 == 0)
        return 0
    
    esi_1 = arg3
    *esi_1 = 0
    *arg4 = 2

int16_t* ecx_6
ecx_6.w = *arg2
edi_1[*esi_1] = ecx_6.w
*esi_1 += 1
*arg1 = edi_1
return 1
