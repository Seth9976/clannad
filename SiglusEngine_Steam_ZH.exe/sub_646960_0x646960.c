// 函数: sub_646960
// 地址: 0x646960
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi = arg2
int32_t var_8 = edi

if (edi s<= 0 || arg4 s<= 0)
    arg1.b = 0
    return arg1

arg3[3] = edi
arg3[4] = arg4
sub_5979b0(arg3, (edi * arg4) << 2)
int32_t eax_3 = *arg3

if (eax_3 == arg3[1])
    eax_3 = 0

int32_t eax_5
int32_t edx
edx:eax_5 = sx.q(edi)
int32_t eax_8
int32_t edx_1
edx_1:eax_8 = sx.q(arg4)
int32_t ebx_2 = (eax_5 - edx) s>> 1
int32_t ecx_1 = (eax_8 - edx_1) s>> 1
int32_t var_2c = ecx_1

if (ebx_2 != 0 && ecx_1 != 0)
    int32_t var_18_1 = 0
    int32_t eax_11 = ecx_1 - 1 + ebx_2
    int32_t var_14_1 = 0
    int32_t ebx_3 = 0
    int32_t esi_2 = 0
    int32_t var_1c_1 = 0
    
    if (eax_11 s> 0)
        int32_t eax_12 = ecx_1 - 1
        
        do
            int32_t eax_14 = esi_2
            char eax_13
            
            if (eax_11 != 1)
                if (eax_11 - 1 s<= 0)
                    if (eax_11 - 1 s< 0)
                        if (esi_2 s< eax_11 - 1)
                            eax_14 = eax_11 - 1
                        else if (esi_2 s> 0)
                            eax_14 = 0
                else if (esi_2 s< 0)
                    eax_14 = 0
                else if (esi_2 s> eax_11 - 1)
                    eax_14 = eax_11 - 1
                
                eax_13 = (divs.dp.d(sx.q(eax_14 * 0xff), eax_11 - 1)).b
            else
                eax_13 = -1
            
            int32_t var_40_1 = 0xffffffff
            int32_t var_44_1 = 0xffffffff
            int32_t var_48_1 = 0xffffffff
            int32_t var_4c_1 = 0xffffffff
            int32_t var_50_1 = arg5
            ecx_1.b = 0xff
            ecx_1.b = 0xff - eax_13
            uint32_t var_54_1 = zx.d(ecx_1.b)
            int32_t var_58_1 = ebx_3
            int32_t var_5c_1 = var_1c_1
            sub_64ce10(arg3, arg3[3], eax_3, arg3[4], var_18_1.b, var_14_1.b)
            
            if (var_18_1 s>= ebx_2 - 1)
                var_14_1 += 1
            else
                var_18_1 += 1
            
            if (ebx_3 s>= eax_12)
                var_1c_1 += 1
            else
                ebx_3 += 1
            
            esi_2 += 1
        while (esi_2 s< eax_11)
        
        ecx_1 = var_2c
        edi = var_8

int32_t eax_22
int32_t edx_5
edx_5:eax_22 = sx.q(edi + 1)
int32_t eax_24 = (eax_22 - edx_5) s>> 1

if (eax_24 != 0 && ecx_1 != 0)
    int32_t var_14_2 = 0
    int32_t edx_7 = eax_24 - 1 + ecx_1
    int32_t ebx_4 = 0
    int32_t esi_3 = 0
    int32_t var_1c_2 = edi - 1
    int32_t var_20_2 = edi - 1
    
    if (edx_7 s> 0)
        int32_t eax_28 = ecx_1 - 1
        
        do
            int32_t eax_30 = esi_3
            char eax_29
            
            if (edx_7 != 1)
                if (edx_7 - 1 s<= 0)
                    if (edx_7 - 1 s< 0)
                        if (esi_3 s< edx_7 - 1)
                            eax_30 = edx_7 - 1
                        else if (esi_3 s> 0)
                            eax_30 = 0
                else if (esi_3 s< 0)
                    eax_30 = 0
                else if (esi_3 s> edx_7 - 1)
                    eax_30 = edx_7 - 1
                
                eax_29 = (divs.dp.d(sx.q(eax_30 * 0xff), edx_7 - 1)).b
            else
                eax_29 = -1
            
            int32_t var_40_2 = 0xffffffff
            int32_t var_44_2 = 0xffffffff
            int32_t var_48_2 = 0xffffffff
            int32_t var_4c_2 = 0xffffffff
            int32_t var_50_2 = arg5
            ecx_1.b = 0xff
            ecx_1.b = 0xff - eax_29
            uint32_t var_54_2 = zx.d(ecx_1.b)
            int32_t var_58_2 = ebx_4
            int32_t var_5c_2 = var_20_2
            sub_64ce10(arg3, arg3[3], eax_3, arg3[4], var_1c_2.b, var_14_2.b)
            
            if (var_1c_2 s<= var_8 - eax_24)
                var_14_2 += 1
            else
                var_1c_2 -= 1
            
            if (ebx_4 s>= eax_28)
                var_20_2 -= 1
            else
                ebx_4 += 1
            
            esi_3 += 1
        while (esi_3 s< edx_7)

int32_t ebx_6 = arg4
int32_t eax_36
int32_t edx_11
edx_11:eax_36 = sx.q(ebx_6 + 1)
int32_t ecx_5 = (eax_36 - edx_11) s>> 1
int32_t var_28_3 = ecx_5

if (ebx_2 != 0 && ecx_5 != 0)
    int32_t var_20_3 = 0
    int32_t edx_13 = ebx_2 - 1 + ecx_5
    int32_t var_14_3 = 0
    int32_t esi_4 = 0
    int32_t var_1c_3 = ebx_6 - 1
    int32_t ebx_5 = ebx_6 - 1
    
    if (edx_13 s> 0)
        int32_t eax_41 = arg4 - ecx_5
        
        do
            int32_t eax_43 = esi_4
            char eax_42
            
            if (edx_13 != 1)
                if (edx_13 - 1 s<= 0)
                    if (edx_13 - 1 s< 0)
                        if (esi_4 s< edx_13 - 1)
                            eax_43 = edx_13 - 1
                        else if (esi_4 s> 0)
                            eax_43 = 0
                else if (esi_4 s< 0)
                    eax_43 = 0
                else if (esi_4 s> edx_13 - 1)
                    eax_43 = edx_13 - 1
                
                eax_42 = (divs.dp.d(sx.q(eax_43 * 0xff), edx_13 - 1)).b
            else
                eax_42 = -1
            
            int32_t var_40_3 = 0xffffffff
            int32_t var_44_3 = 0xffffffff
            int32_t var_48_3 = 0xffffffff
            int32_t var_4c_3 = 0xffffffff
            int32_t var_50_3 = arg5
            ecx_5.b = 0xff
            ecx_5.b = 0xff - eax_42
            uint32_t var_54_3 = zx.d(ecx_5.b)
            int32_t var_58_3 = ebx_5
            int32_t var_5c_3 = var_14_3
            sub_64ce10(arg3, arg3[3], eax_3, arg3[4], var_20_3.b, var_1c_3.b)
            
            if (var_20_3 s>= ebx_2 - 1)
                var_1c_3 -= 1
            else
                var_20_3 += 1
            
            if (ebx_5 s<= eax_41)
                var_14_3 += 1
            else
                ebx_5 -= 1
            
            esi_4 += 1
        while (esi_4 s< edx_13)
        
        ecx_5 = var_28_3
    
    ebx_6 = arg4

int32_t eax_51

if (eax_24 != 0 && ecx_5 != 0)
    int32_t esi_5 = 0
    int32_t edi_5 = eax_24 - 1 + ecx_5
    int32_t var_24_1 = var_8 - 1
    int32_t edx_17 = var_8 - 1
    int32_t var_20_4 = ebx_6 - 1
    int32_t ebx_7 = ebx_6 - 1
    int32_t var_14_4 = edx_17
    
    if (edi_5 s> 0)
        int32_t edi_6 = edi_5 - 1
        
        do
            int32_t eax_57 = esi_5
            char eax_56
            
            if (edi_6 != 0)
                if (edi_6 s<= 0)
                    if (edi_6 s< 0)
                        if (esi_5 s< edi_6)
                            eax_57 = edi_6
                        else if (esi_5 s> 0)
                            eax_57 = 0
                else if (esi_5 s< 0)
                    eax_57 = 0
                else if (esi_5 s> edi_6)
                    eax_57 = edi_6
                
                eax_56 = (divs.dp.d(sx.q(eax_57 * 0xff), edi_6)).b
                edx_17 = var_14_4
            else
                eax_56 = -1
            
            int32_t var_40_4 = 0xffffffff
            int32_t var_44_4 = 0xffffffff
            int32_t var_48_4 = 0xffffffff
            int32_t var_4c_4 = 0xffffffff
            int32_t var_50_4 = arg5
            int32_t ecx_7
            ecx_7.b = 0xff
            ecx_7.b = 0xff - eax_56
            uint32_t var_54_4 = zx.d(ecx_7.b)
            int32_t var_58_4 = ebx_7
            int32_t var_5c_4 = edx_17
            sub_64ce10(arg3, arg3[3], eax_3, arg3[4], var_24_1.b, var_20_4.b)
            
            if (var_24_1 s<= var_8 - eax_24)
                var_20_4 -= 1
            else
                var_24_1 -= 1
            
            edx_17 = var_14_4
            
            if (ebx_7 s<= arg4 - var_28_3)
                edx_17 -= 1
                var_14_4 = edx_17
            else
                ebx_7 -= 1
            
            esi_5 += 1
            eax_51 = eax_24 - 1 + var_28_3
            edi_6 = eax_51 - 1
        while (esi_5 s< eax_51)

eax_51.b = 1
return eax_51
