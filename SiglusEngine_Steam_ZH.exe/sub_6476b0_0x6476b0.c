// 函数: sub_6476b0
// 地址: 0x6476b0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t esi = arg2

if (arg6 == 0 || arg6 == 1)
    esi = arg4
    
    if (esi s<= 0)
        arg1.b = 0
        return arg1
    
    arg3[3] = 1
    arg3[4] = esi
else
    if (esi s<= 0)
        arg1.b = 0
        return arg1
    
    arg3[3] = esi
    arg3[4] = 1

sub_5979b0(arg3, esi << 2)
int32_t* ecx = *arg3

if (ecx == arg3[1])
    ecx = nullptr

int32_t eax_2
int32_t edx
edx:eax_2 = sx.q(esi)
int32_t eax_3 = divs.dp.d(edx:eax_2, arg7)
int32_t* var_8 = ecx
int32_t var_10 = eax_3

if (mods.dp.d(edx:eax_2, arg7) != 0)
    eax_3 += 1
    var_10 = eax_3

void* edx_2 = &ecx[esi]
void* var_14 = edx_2

if (arg6 == 1 || arg6 == 3)
    arg6:3.b = arg5 == 0
else
    eax_3.b = arg5
    arg6:3.b = eax_3.b
    eax_3 = var_10

int32_t ebx_1 = 0
int32_t var_18 = 0

if (eax_3 s> 0)
    int32_t ecx_1 = eax_3 - 1
    int32_t var_20_1 = ecx_1
    
    do
        int32_t eax_6 = ebx_1
        int32_t eax_5
        
        if (ecx_1 != 0)
            if (ecx_1 s<= 0)
                if (ecx_1 s< 0)
                    if (ebx_1 s< ecx_1)
                        eax_6 = ecx_1
                    else if (ebx_1 s> 0)
                        eax_6 = 0
            else if (ebx_1 s< 0)
                eax_6 = 0
            else if (ebx_1 s> ecx_1)
                eax_6 = ecx_1
            
            eax_5 = divs.dp.d(sx.q(eax_6 * 0x7f), ecx_1)
            edx_2 = var_14
        else
            eax_5 = ecx_1 + 0x7f
        
        int32_t* edi_2 = var_8
        int32_t esi_1 = 0
        int32_t eax_10 = arg7
        
        if (eax_10 s> 0)
            do
                if (edi_2 u< edx_2)
                    int32_t edx_4 = esi_1
                    int32_t eax_11
                    
                    if (eax_10 != 1)
                        if (eax_10 - 1 s<= 0)
                            if (eax_10 - 1 s< 0)
                                if (esi_1 s< eax_10 - 1)
                                    edx_4 = eax_10 - 1
                                else if (esi_1 s> 0)
                                    edx_4 = 0
                        else if (esi_1 s< 0)
                            edx_4 = 0
                        else if (esi_1 s> eax_10 - 1)
                            edx_4 = eax_10 - 1
                        
                        eax_11 = divs.dp.d(sx.q((0 + 0x80) * edx_4), eax_10 - 1) + eax_5
                    else
                        eax_11 = eax_5 + 0x80
                    
                    if (arg6:3.b == 0)
                        eax_11 = 0xff - eax_11
                    
                    edx_2 = var_14
                    eax_10 = arg7
                    *edi_2 = ((eax_11 << 8 | eax_11) << 8 | eax_11) << 8 | eax_11
                    edi_2 = &edi_2[1]
                
                esi_1 += 1
            while (esi_1 s< eax_10)
            
            ebx_1 = var_18
            ecx_1 = var_20_1
        
        ebx_1 += 1
        var_8 = &var_8[arg7]
        var_18 = ebx_1
    while (ebx_1 s< var_10)

eax_3.b = 1
return eax_3
