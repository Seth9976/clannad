// 函数: sub_744070
// 地址: 0x744070
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edx = arg2
int32_t edi = arg3
int32_t var_c = arg3
int32_t var_10 = edx
int32_t var_14 = 0xffffffff
int32_t var_2c_1
__builtin_memset(&var_2c_1, 0xff, 0x14)
int32_t var_18 = edi
int32_t var_8 = 0xffffffff
arg3 = 0xffffffff
int32_t ebx_1 = edx
int32_t var_28_1
int32_t var_24_1
int32_t var_20_1
int32_t var_1c_1
int32_t edx_7

while (true)
    int32_t edx_1 = edx - 0x10000
    arg3 = edx_1
    int32_t eax_2 = adc.d(var_c, 0xffffffff, edx u>= 0x10000)
    var_c = eax_2
    
    if (eax_2 s<= 0 && (eax_2 s< 0 || edx_1 u< 0))
        arg2.q = 0
        eax_2 = arg3
        edx_1 = 0
        var_c = eax_2
        arg3 = 0
    
    int32_t ecx_1 = *arg1
    int32_t eax_8
    
    if (ecx_1 == 0)
        eax_8 = 0xffffff7f
    else if (arg1[2] != edx_1 || arg1[3] != eax_2)
        int32_t eax_3 = arg1[0xb1]
        int32_t eax_4
        
        if (eax_3 != 0)
            eax_4 = eax_3(ecx_1, edx_1, var_c, 0)
        
        if (eax_3 == 0 || eax_4 == 0xffffffff)
            eax_8 = 0xffffff80
        else
            arg1[2] = arg3
            arg1[3] = var_c
            sub_6e5120(&arg1[6])
            eax_8 = 0
    else
        eax_8 = 0
    
    int32_t eax_9
    int32_t edx_2
    edx_2:eax_9 = sx.q(eax_8)
    
    if ((eax_9 | edx_2) != 0)
        return eax_9
    
    int32_t temp2_1 = arg1[3]
    
    if (temp2_1 s> edi || (temp2_1 s>= edi && arg1[2] u>= ebx_1))
    label_74423c:
        edx_7 = var_8
    else
        while (true)
            void var_40
            int32_t eax_11
            int32_t edx_3
            eax_11, edx_3 =
                sub_743dc0(arg1, &var_40, ebx_1 - arg1[2], sbb.d(edi, arg1[3], ebx_1 u< arg1[2]))
            
            if (eax_11 == 0xffffff80 && edx_3 == 0xffffffff)
                return 0xffffff80
            
            if (edx_3 s>= 0 && (edx_3 s> 0 || eax_11 u>= 0))
                int32_t eax_13
                int32_t edx_4
                edx_4:eax_13 = sx.q(sub_6e47d0(&var_40))
                var_8 = eax_13
                int32_t eax_14
                int32_t edx_5
                eax_14, edx_5 = sub_6e4740(&var_40)
                var_20_1 = eax_14
                var_24_1 = edx_5
                var_28_1 = eax_11
                var_2c_1 = edx_3
                int32_t eax_17
                int32_t edx_6
                edx_6:eax_17 = sx.q(*arg6)
                edx_7 = var_8
                
                if (edx_7 == eax_17 && edx_4 == edx_6)
                    var_14 = eax_11
                    var_1c_1 = edx_3
                    *arg7 = var_20_1
                    arg7[1] = var_24_1
                
                int32_t* eax_19 = arg4
                
                if (arg4 == 0 || arg5 == 0)
                label_74420c:
                    var_14 = 0xffffffff
                    var_1c_1 = 0xffffffff
                else
                    int32_t ecx_7 = arg5
                    
                    while (true)
                        ecx_7 -= 1
                        
                        if (*eax_19 == edx_7)
                            break
                        
                        eax_19 = &eax_19[1]
                        
                        if (ecx_7 == 0)
                            goto label_74420c
                
                edi = var_18
                ebx_1 = var_10
                int32_t temp7_1 = arg1[3]
                
                if (temp7_1 s< edi)
                    continue
                else
                    if (temp7_1 s> edi)
                        break
                    
                    if (arg1[2] u>= ebx_1)
                        break
                    
                    continue
            
            edi = var_18
            ebx_1 = var_10
            goto label_74423c
    
    if ((var_28_1 & var_2c_1) != 0xffffffff)
        break
    
    edx = arg3

if (var_1c_1 s>= 0 && (var_1c_1 s> 0 || var_14 u>= 0))
    return var_14

*arg6 = edx_7
*arg7 = var_20_1
arg7[1] = var_24_1
return var_28_1
