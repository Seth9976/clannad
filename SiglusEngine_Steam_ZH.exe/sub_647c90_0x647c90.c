// 函数: sub_647c90
// 地址: 0x647c90
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t eax_1
int32_t edx
edx:eax_1 = sx.q(arg5)
int32_t eax_3 = (eax_1 - edx) s>> 1
char var_c = 0
int32_t var_10 = eax_3
int32_t edx_1
int32_t ebx_1

if (arg4 == 0 || arg4 == 1)
    edx_1 = eax_3 * 2
    ebx_1 = arg6 * 2
    
    if (ebx_1 s<= 0 || edx_1 s<= 0)
        eax_3.b = 0
        return eax_3
    
    arg3[3] = ebx_1
    arg3[4] = edx_1
else
    edx_1 = eax_3 * 2
    ebx_1 = arg6 * 2
    
    if (edx_1 s<= 0 || ebx_1 s<= 0)
        eax_3.b = 0
        return eax_3
    
    arg3[3] = edx_1
    arg3[4] = ebx_1

sub_5979b0(arg3, (ebx_1 * edx_1) << 2)
int32_t* ecx = arg3
int32_t eax_7 = *ecx

if (eax_7 == ecx[1])
    eax_7 = 0

if (arg4 == 1 || arg4 == 3)
    var_c = 1

if (arg4 == 0 || arg4 == 1)
    int32_t esi_3 = ecx[4]
    int32_t edi_1 = 0
    
    if (esi_3 s> 0)
        do
            int32_t eax_23 = edi_1
            int32_t eax_22
            
            if (esi_3 != 1)
                if (esi_3 - 1 s<= 0)
                    if (esi_3 - 1 s< 0)
                        if (edi_1 s< esi_3 - 1)
                            eax_23 = esi_3 - 1
                        else if (edi_1 s> 0)
                            eax_23 = 0
                else if (edi_1 s< 0)
                    eax_23 = 0
                else if (edi_1 s> esi_3 - 1)
                    eax_23 = esi_3 - 1
                
                eax_22 = divs.dp.d(sx.q(eax_23 * 0xff), esi_3 - 1)
            else
                eax_22 = 0xff
            
            int32_t ebx_3
            ebx_3.b = 0xff
            int32_t var_28_2 = 0xffffffff
            int32_t var_2c_2 = 0xffffffff
            int32_t var_30_2 = 0xffffffff
            int32_t var_34_2 = 0xffffffff
            int32_t var_38_2 = var_c.d
            ebx_3.b = 0xff - eax_22.b
            int32_t var_3c_2 = ebx_3
            int32_t var_40_2 = edi_1
            int32_t var_44_2 = arg6 - 1
            int32_t var_54_2 = 0xffffffff
            int32_t var_58_2 = 0xffffffff
            int32_t var_5c_2 = 0xffffffff
            int32_t var_60_2 = 0xffffffff
            int32_t var_64_2 = var_c.d
            int32_t var_68_2 = ebx_3
            int32_t var_6c_2 = var_10
            int32_t var_70_2 = ebx_1 - 1
            sub_64ce10(sub_64ce10(eax_22, ecx[3], eax_7, ecx[4], 0, edi_1.b), arg3[3], eax_7, 
                arg3[4], arg6.b, var_10.b)
            ecx = arg3
            edi_1 += 1
            var_10 = mods.dp.d(sx.q(var_10 + 1), esi_3)
        while (edi_1 s< esi_3)
else
    int32_t esi_1 = ecx[3]
    int32_t edi = 0
    
    if (esi_1 s> 0)
        int32_t eax_10 = ebx_1 - 1
        
        do
            int32_t eax_12 = edi
            int32_t eax_11
            
            if (esi_1 != 1)
                if (esi_1 - 1 s<= 0)
                    if (esi_1 - 1 s< 0)
                        if (edi s< esi_1 - 1)
                            eax_12 = esi_1 - 1
                        else if (edi s> 0)
                            eax_12 = 0
                else if (edi s< 0)
                    eax_12 = 0
                else if (edi s> esi_1 - 1)
                    eax_12 = esi_1 - 1
                
                eax_11 = divs.dp.d(sx.q(eax_12 * 0xff), esi_1 - 1)
            else
                eax_11 = 0xff
            
            ebx_1.b = 0xff
            int32_t var_28_1 = 0xffffffff
            int32_t var_2c_1 = 0xffffffff
            int32_t var_30_1 = 0xffffffff
            int32_t var_34_1 = 0xffffffff
            int32_t var_38_1 = var_c.d
            ebx_1.b = 0xff - eax_11.b
            int32_t var_3c_1 = ebx_1
            int32_t var_40_1 = arg6 - 1
            int32_t var_44_1 = edi
            int32_t var_54_1 = 0xffffffff
            int32_t var_58_1 = 0xffffffff
            int32_t var_5c_1 = 0xffffffff
            int32_t var_60_1 = 0xffffffff
            int32_t var_64_1 = var_c.d
            int32_t var_68_1 = ebx_1
            int32_t var_6c_1 = eax_10
            int32_t var_70_1 = var_10
            sub_64ce10(sub_64ce10(eax_11, ecx[3], eax_7, ecx[4], edi.b, 0), arg3[3], eax_7, 
                arg3[4], var_10.b, arg6.b)
            ecx = arg3
            edi += 1
            var_10 = mods.dp.d(sx.q(var_10 + 1), esi_1)
        while (edi s< esi_1)
        
        int32_t eax_18
        eax_18.b = 1
        return eax_18

eax_7.b = 1
return eax_7
