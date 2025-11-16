// 函数: sub_419ef0
// 地址: 0x419ef0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t temp0 = divs.dp.d(sx.q(arg1[4]), arg1[8])
int32_t eax_5
eax_5.b = divs.dp.d(sx.q(arg1[3]), arg1[7]) s>= temp0
uint32_t eax_6 = zx.d(eax_5.b)
uint32_t var_8 = eax_6
int32_t eax_7 = sub_423d30(eax_6, 0, arg1, temp0, arg1[6], 0, 0, arg1[7], arg1[8], 0, nullptr)
arg1[7] = 0
arg1[8] = 0

if (*arg1 != 0)
    eax_7 = arg1[5]
    
    if (eax_7 == 0 || eax_7 == 1)
    label_419f7a:
        arg1[7] = arg1[3]
        eax_7 = arg1[4]
        arg1[8] = eax_7
    else if (eax_7 == 2)
        eax_7 = arg1[1]
        
        if (*eax_7 s> 0)
            void* ecx_2 = *(eax_7 + 4)
            
            if (ecx_2 != 0 && *(eax_7 + 8) != 0)
                void* ecx_3 = ecx_2 + eax_7
                
                if (ecx_2 != neg.d(eax_7))
                    arg1[7] = *(ecx_3 + 0xc)
                    eax_7 = *(ecx_3 + 0x10)
                    arg1[8] = eax_7
    else if (eax_7 == 3)
        goto label_419f7a
    
    if (*arg1 != 0)
        if (arg1[5] != 2)
            arg1[6] = 1
            return eax_7
        
        int32_t eax_11 = *arg1[1]
        arg1[6] = eax_11
        return eax_11

arg1[6] = 0
return eax_7
