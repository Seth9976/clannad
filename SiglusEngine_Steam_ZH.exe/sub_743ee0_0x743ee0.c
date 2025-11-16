// 函数: sub_743ee0
// 地址: 0x743ee0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ebx = arg3
int32_t edi = arg2
int32_t var_8 = edi
int32_t var_14 = ebx
int32_t var_10 = 0xffffffff
int32_t var_c = 0xffffffff
int32_t ecx_2

while (true)
    int32_t temp0_1 = edi
    edi -= 0x10000
    ebx = adc.d(ebx, 0xffffffff, temp0_1 u>= 0x10000)
    
    if (ebx s<= 0 && (ebx s< 0 || edi u< 0))
        arg2.q = 0
        ebx = arg3
        edi = 0
    
    int32_t ecx_1 = *arg1
    int32_t eax_4
    
    if (ecx_1 == 0)
        eax_4 = 0xffffff7f
    else if (arg1[2] != edi || arg1[3] != ebx)
        int32_t eax_1 = arg1[0xb1]
        int32_t eax_2
        
        if (eax_1 != 0)
            eax_2 = eax_1(ecx_1, edi, ebx, 0)
        
        if (eax_1 == 0 || eax_2 == 0xffffffff)
            eax_4 = 0xffffff80
        else
            arg1[2] = edi
            arg1[3] = ebx
            sub_6e5120(&arg1[6])
            eax_4 = 0
    else
        eax_4 = 0
    
    int32_t eax_5
    int32_t edx_1
    edx_1:eax_5 = sx.q(eax_4)
    ecx_2 = eax_5
    
    if ((eax_5 | edx_1) != 0)
        break
    
    int32_t edx_2 = var_14
    int32_t temp2_1 = arg1[3]
    
    if (temp2_1 s<= edx_2)
        int32_t ecx_3 = var_8
        
        if (temp2_1 s< edx_2 || arg1[2] u< ecx_3)
            while (true)
                *arg4 = zx.o(0)
                int32_t eax_8
                int32_t edx_4
                eax_8, edx_4 =
                    sub_743dc0(arg1, arg4, ecx_3 - arg1[2], sbb.d(edx_2, arg1[3], ecx_3 u< arg1[2]))
                
                if (eax_8 == 0xffffff80 && edx_4 == 0xffffffff)
                    return 0xffffff80
                
                if (edx_4 s< 0)
                    break
                
                if (edx_4 s<= 0 && eax_8 u< 0)
                    break
                
                ecx_3 = var_8
                var_c = edx_4
                edx_2 = var_14
                var_10 = eax_8
                int32_t temp7_1 = arg1[3]
                
                if (temp7_1 s>= edx_2)
                    if (temp7_1 s> edx_2)
                        break
                    
                    if (arg1[2] u>= ecx_3)
                        break
    
    if ((var_10 & var_c) != 0xffffffff)
        if (arg4[1] != 0)
            return var_10
        
        int32_t eax_12
        int32_t edx_5
        edx_5:eax_12 = sx.q(sub_744870(arg1, var_10, var_c))
        ecx_2 = eax_12
        int32_t eax_13 = eax_12 | edx_5
        
        if (eax_13 != 0)
            break
        
        int32_t eax_14
        int32_t edx_6
        eax_14, edx_6 = sub_743dc0(arg1, arg4, 0x10000, eax_13)
        
        if (edx_6 s<= 0 && (edx_6 s< 0 || eax_14 u< 0))
            return 0xffffff7f
        
        return var_10

return ecx_2
