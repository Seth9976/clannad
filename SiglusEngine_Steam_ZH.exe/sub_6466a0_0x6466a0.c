// 函数: sub_6466a0
// 地址: 0x6466a0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (arg2 s<= 0 || arg4 s<= 0)
    arg1.b = 0
    return arg1

arg3[3] = arg2
arg3[4] = arg4
sub_5979b0(arg3, (arg2 * arg4) << 2)
int32_t eax_4 = arg3[3] - 1
int32_t eax_6 = arg3[4] - 1
int32_t eax_7 = *arg3

if (eax_7 == arg3[1])
    eax_7 = 0

int32_t eax_8 = arg2 + 1

if (arg2 s< arg4)
    eax_8 = arg4 + 1

int32_t eax_9
int32_t edx
edx:eax_9 = sx.q(eax_8)
int32_t eax_14
int32_t edx_1
edx_1:eax_14 = sx.q(arg2)
int32_t edi_1 = 0
int32_t ecx_1 = (eax_9 - edx) s>> 1
int32_t eax_17
int32_t edx_2
edx_2:eax_17 = sx.q(arg4)
int32_t ebx_3 = ((eax_14 - edx_1) s>> 1) - 1
int32_t var_3c = ebx_3
int32_t edx_3 = ebx_3 + 1

if (ecx_1 s> 0)
    do
        int32_t eax_22 = edi_1
        char var_1c_1
        
        if (ecx_1 != 1)
            if (ecx_1 - 1 s<= 0)
                if (ecx_1 - 1 s< 0)
                    if (edi_1 s< ecx_1 - 1)
                        eax_22 = ecx_1 - 1
                    else if (edi_1 s> 0)
                        eax_22 = 0
            else if (edi_1 s< 0)
                eax_22 = 0
            else if (edi_1 s> ecx_1 - 1)
                eax_22 = ecx_1 - 1
            
            var_1c_1 = (divs.dp.d(sx.q(eax_22 * 0xff), ecx_1 - 1)).b
        else
            var_1c_1 = -1
        
        int32_t eax_26 = edi_1
        int32_t var_24_1
        
        if (ecx_1 != 1)
            if (ecx_1 - 1 s<= 0)
                if (ecx_1 - 1 s< 0)
                    if (edi_1 s< ecx_1 - 1)
                        eax_26 = ecx_1 - 1
                    else if (edi_1 s> 0)
                        eax_26 = 0
            else if (edi_1 s< 0)
                eax_26 = 0
            else if (edi_1 s> ecx_1 - 1)
                eax_26 = ecx_1 - 1
            
            var_24_1 = divs.dp.d(sx.q(eax_26 * ebx_3), ecx_1 - 1)
        else
            var_24_1 = ebx_3
        
        int32_t eax_31 = edi_1
        int32_t eax_30
        
        if (ecx_1 != 1)
            if (ecx_1 - 1 s<= 0)
                if (ecx_1 - 1 s< 0)
                    if (edi_1 s< ecx_1 - 1)
                        eax_31 = ecx_1 - 1
                    else if (edi_1 s> 0)
                        eax_31 = 0
            else if (edi_1 s< 0)
                eax_31 = 0
            else if (edi_1 s> ecx_1 - 1)
                eax_31 = ecx_1 - 1
            
            eax_30 = divs.dp.d(sx.q(eax_31 * (((eax_17 - edx_2) s>> 1) - 1)), ecx_1 - 1)
        else
            eax_30 = ((eax_17 - edx_2) s>> 1) - 1
        
        int32_t var_20_1 = eax_30
        int32_t ecx_2 = edi_1
        int32_t ebx_4
        
        if (ecx_1 != 1)
            if (ecx_1 - 1 s<= 0)
                if (ecx_1 - 1 s< 0)
                    if (edi_1 s< ecx_1 - 1)
                        ecx_2 = ecx_1 - 1
                    else if (edi_1 s> 0)
                        ecx_2 = 0
            else if (edi_1 s< 0)
                ecx_2 = 0
            else if (edi_1 s> ecx_1 - 1)
                ecx_2 = ecx_1 - 1
            
            ebx_4 = divs.dp.d(sx.q((edx_3 - (arg2 - 1)) * ecx_2), ecx_1 - 1) + arg2 - 1
        else
            ebx_4 = edx_3
        
        int32_t ecx_4 = edi_1
        int32_t ecx_3
        
        if (ecx_1 != 1)
            if (ecx_1 - 1 s<= 0)
                if (ecx_1 - 1 s< 0)
                    if (edi_1 s< ecx_1 - 1)
                        ecx_4 = ecx_1 - 1
                    else if (edi_1 s> 0)
                        ecx_4 = 0
            else if (edi_1 s< 0)
                ecx_4 = 0
            else if (edi_1 s> ecx_1 - 1)
                ecx_4 = ecx_1 - 1
            
            ecx_3 = divs.dp.d(sx.q((((eax_17 - edx_2) s>> 1) - (arg4 - 1)) * ecx_4), ecx_1 - 1)
                + arg4 - 1
        else
            ecx_3 = (eax_17 - edx_2) s>> 1
        
        eax_30.b = 0xff
        eax_30.b = 0xff - var_1c_1
        sub_64cfb0(arg3, arg3[3], eax_7, arg3[4], var_24_1, var_20_1, ebx_4, ecx_3, zx.d(eax_30.b), 
            arg5, 0, 0, eax_4, eax_6)
        ebx_3 = var_3c
        edi_1 += 1
    while (edi_1 s< ecx_1)

int32_t eax_21
eax_21.b = 1
return eax_21
