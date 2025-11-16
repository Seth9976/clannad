// 函数: sub_6479e0
// 地址: 0x6479e0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

char var_18 = 0

if (arg2 s<= 0 || arg4 s<= 0)
    arg1.b = 0
    return arg1

arg3[3] = arg2
arg3[4] = arg4
sub_5979b0(arg3, (arg2 * arg4) << 2)
int32_t* edx = arg3
int32_t eax_3 = *edx

if (eax_3 == edx[1])
    eax_3 = 0

if (arg5 == 2 || arg5 == 3)
    var_18 = 1

int32_t ecx_1 = arg4 - 1 + arg2
int32_t var_20 = ecx_1

if (arg5 == 0 || arg5 == 3)
    int32_t esi_3 = 0
    int32_t var_14_1 = 0
    int32_t var_10_1 = 0
    int32_t var_c_1 = 0
    
    if (ecx_1 s> 0)
        int32_t edi_2 = ecx_1 - 1
        int32_t ebx_2 = 0
        
        do
            int32_t eax_17 = esi_3
            char eax_16
            
            if (edi_2 != 0)
                if (edi_2 s<= 0)
                    if (edi_2 s< 0)
                        if (esi_3 s< edi_2)
                            eax_17 = edi_2
                        else if (esi_3 s> 0)
                            eax_17 = 0
                else if (esi_3 s< 0)
                    eax_17 = 0
                else if (esi_3 s> edi_2)
                    eax_17 = edi_2
                
                eax_16 = (divs.dp.d(sx.q(eax_17 * 0xff), edi_2)).b
                edx = arg3
            else
                eax_16 = -1
            
            int32_t var_38_2 = 0xffffffff
            int32_t var_3c_2 = 0xffffffff
            int32_t var_40_2 = 0xffffffff
            int32_t var_44_2 = 0xffffffff
            int32_t var_48_2 = var_18.d
            ecx_1.b = 0xff
            ecx_1.b = 0xff - eax_16
            uint32_t eax_20 = zx.d(ecx_1.b)
            uint32_t var_4c_2 = eax_20
            int32_t var_50_2 = ebx_2
            int32_t var_54_2 = var_c_1
            sub_64ce10(eax_20, edx[3], eax_3, edx[4], var_14_1.b, var_10_1.b)
            
            if (var_14_1 s>= arg2 - 1)
                var_10_1 += 1
            else
                var_14_1 += 1
            
            if (ebx_2 s>= arg4 - 1)
                var_c_1 += 1
            else
                ebx_2 += 1
            
            edx = arg3
            esi_3 += 1
        while (esi_3 s< var_20)
else
    int32_t var_10 = 0
    int32_t ebx_1 = 0
    int32_t var_c = arg2 - 1
    int32_t esi_2 = 0
    int32_t var_14 = arg2 - 1
    
    if (ecx_1 s> 0)
        int32_t edi_1 = ecx_1 - 1
        
        do
            int32_t eax_8 = esi_2
            char eax_7
            
            if (edi_1 != 0)
                if (edi_1 s<= 0)
                    if (edi_1 s< 0)
                        if (esi_2 s< edi_1)
                            eax_8 = edi_1
                        else if (esi_2 s> 0)
                            eax_8 = 0
                else if (esi_2 s< 0)
                    eax_8 = 0
                else if (esi_2 s> edi_1)
                    eax_8 = edi_1
                
                eax_7 = (divs.dp.d(sx.q(eax_8 * 0xff), edi_1)).b
                edx = arg3
            else
                eax_7 = -1
            
            int32_t var_38_1 = 0xffffffff
            int32_t var_3c_1 = 0xffffffff
            int32_t var_40_1 = 0xffffffff
            int32_t var_44_1 = 0xffffffff
            int32_t var_48_1 = var_18.d
            ecx_1.b = 0xff
            ecx_1.b = 0xff - eax_7
            uint32_t eax_11 = zx.d(ecx_1.b)
            uint32_t var_4c_1 = eax_11
            int32_t var_50_1 = ebx_1
            int32_t var_54_1 = var_14
            sub_64ce10(eax_11, edx[3], eax_3, edx[4], var_c.b, var_10.b)
            
            if (var_c s<= 0)
                var_10 += 1
            else
                var_c -= 1
            
            if (ebx_1 s>= arg4 - 1)
                var_14 -= 1
            else
                ebx_1 += 1
            
            esi_2 += 1
            edx = arg3
        while (esi_2 s< var_20)
        
        int32_t eax_12
        eax_12.b = 1
        return eax_12

int32_t eax_4
eax_4.b = 1
return eax_4
