// 函数: sub_4d2390
// 地址: 0x4d2390
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t eax_1 = arg4 - arg3
int32_t ebx

if (arg4 - arg3 s>= 0)
    ebx = 1
else
    eax_1 = neg.d(eax_1)
    ebx = 0xffffffff

int32_t esi_1 = arg5 - arg2
int32_t edi

if (arg5 - arg2 s>= 0)
    edi = 1
else
    esi_1 = neg.d(esi_1)
    edi = 0xffffffff

if (esi_1 != 0)
    if (eax_1 == 0)
        if (arg8 s< esi_1)
            *arg6 = arg3
            *arg7 = arg2 + edi * arg8
            return arg7
        
        *arg6 = arg3
        *arg7 = arg2 + edi * esi_1
        return arg7
    
    arg4 = 0
    
    if (eax_1 s<= esi_1)
        int32_t eax_13 = eax_1 * 2
        int32_t edi_6 = neg.d(esi_1)
        
        if (esi_1 s> 0)
            while (arg4 != arg8)
                arg2 += edi
                int32_t temp4_1 = edi_6
                edi_6 += eax_13
                
                if (temp4_1 + eax_13 s>= 0)
                    arg3 += ebx
                    edi_6 -= esi_1 * 2
                
                arg4 += 1
                
                if (arg4 s>= esi_1)
                    break
    else
        int32_t esi_3 = esi_1 * 2
        int32_t edi_4 = neg.d(eax_1)
        
        if (eax_1 s> 0)
            while (arg4 != arg8)
                arg3 += ebx
                int32_t temp2_1 = edi_4
                edi_4 += esi_3
                
                if (temp2_1 + esi_3 s>= 0)
                    arg2 += edi
                    edi_4 -= eax_1 * 2
                
                arg4 += 1
                
                if (arg4 s>= eax_1)
                    *arg6 = arg3
                    *arg7 = arg2
                    return arg7
else if (eax_1 != 0)
    if (arg8 s< eax_1)
        *arg6 = arg3 + ebx * arg8
        *arg7 = arg2
        return arg7
    
    *arg6 = arg3 + ebx * eax_1
    *arg7 = arg2
    return arg7

*arg6 = arg3
*arg7 = arg2
return arg7
