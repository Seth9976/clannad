// 函数: sub_72f640
// 地址: 0x72f640
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* eax = arg1[0x70]
int32_t* var_8 = eax + 0x20
int32_t eax_1 = sub_72f550(arg1, eax + 0x20)

if (arg1[0x19] != 3)
    *(*arg1 + 0x14) = 0x61
    *(*arg1 + 0x18) = eax_1
else
    void* edx_1 = *arg1
    *(edx_1 + 0x18) = eax_1
    *(edx_1 + 0x1c) = *(eax + 0x20)
    *(edx_1 + 0x20) = *(eax + 0x24)
    *(edx_1 + 0x24) = *(eax + 0x28)
    *(*arg1 + 0x14) = 0x60

(*(*arg1 + 4))(arg1, 1)
int32_t eax_11 = (*(arg1[1] + 8))(arg1, 1, eax_1, arg1[0x19])
int32_t i = 0
int32_t eax_12 = eax_1
int32_t var_20 = eax_12

if (arg1[0x19] s<= 0)
    *(eax + 0x14) = eax_1
    *(eax + 0x10) = eax_11
    return eax

do
    int32_t j_2 = *var_8
    int32_t temp0_1 = divs.dp.d(sx.q(eax_12), j_2)
    int32_t j_1 = j_2
    
    if (j_2 s> 0)
        int32_t ebx_1 = j_2 - 1
        int32_t ecx_4 = 0
        int32_t var_2c_1 = ebx_1
        int32_t eax_16
        int32_t edx_4
        edx_4:eax_16 = sx.q(ebx_1)
        int32_t var_18_1 = 0
        int32_t edx_6 = (eax_16 - edx_4) s>> 1
        int32_t eax_18 = 0
        int32_t var_28_1 = edx_6
        int32_t var_14_1 = 0
        int32_t j
        
        do
            int32_t edx_8 = ecx_4
            int32_t eax_22 = eax_1
            
            if (ecx_4 s< eax_22)
                do
                    int32_t ecx_5 = 0
                    
                    if (temp0_1 s> 0)
                        do
                            char* eax_25 = *(eax_11 + (i << 2)) + ecx_5
                            ecx_5 += 1
                            eax_25[edx_8] = (divs.dp.d(sx.q(eax_18 + edx_6), ebx_1)).b
                        while (ecx_5 s< temp0_1)
                        
                        eax_22 = eax_1
                    
                    edx_8 += var_20
                while (edx_8 s< eax_22)
                
                ecx_4 = var_18_1
            
            ecx_4 += temp0_1
            edx_6 = var_28_1
            eax_18 = var_14_1 + 0xff
            j = j_1
            j_1 -= 1
            ebx_1 = var_2c_1
            var_14_1 = eax_18
            var_18_1 = ecx_4
        while (j != 1)
    
    i += 1
    var_8 = &var_8[1]
    eax_12 = temp0_1
    var_20 = eax_12
while (i s< arg1[0x19])

*(eax + 0x10) = eax_11
*(eax + 0x14) = eax_1
return eax_1
