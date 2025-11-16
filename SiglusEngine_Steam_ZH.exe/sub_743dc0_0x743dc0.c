// 函数: sub_743dc0
// 地址: 0x743dc0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx
int32_t var_8 = ecx
int32_t ebx = arg3
int32_t edi = arg4
int32_t var_8_1 = edi

if (edi s< 0)
    goto label_743e0b

if (edi s> 0 || ebx != 0)
    int32_t temp3_1 = ebx
    ebx += arg1[2]
    edi = adc.d(edi, arg1[3], temp3_1 + arg1[2] u< temp3_1)
    var_8_1 = edi

while (true)
    if (edi s>= 0 && (edi s> 0 || ebx != 0))
        int32_t temp7_1 = arg1[3]
        
        if (temp7_1 s> edi)
            return 0xffffffff
        
        if (temp7_1 s>= edi && arg1[2] u>= ebx)
            return 0xffffffff
    
label_743e0b:
    void* eax_2 = sub_6e4b80(&arg1[6], arg2)
    
    if (eax_2 s>= 0)
        if (eax_2 != 0)
            int32_t result = arg1[2]
            int32_t ecx_1 = arg1[3]
            int32_t eax_15
            int32_t edx_5
            edx_5:eax_15 = sx.q(eax_2)
            arg1[2] = eax_15 + result
            arg1[3] = adc.d(edx_5, ecx_1, eax_15 + result u< eax_15)
            return result
        
        if ((ebx | edi) == 0)
            return 0xffffffff
        
        *__errno() = 0
        
        if (arg1[0xb0] == 0)
            return 0xffffff80
        
        if (*arg1 == 0)
            return 0xfffffffe
        
        int32_t eax_10 = arg1[0xb0](sub_6e4ac0(&arg1[6], 0x800), 1, 0x800, *arg1)
        bool cond:4_1 = eax_10 == 0
        
        if (eax_10 s> 0)
            sub_6e4b50(&arg1[6], eax_10)
            cond:4_1 = eax_10 == 0
        
        if (cond:4_1)
            break
        
        if (eax_10 s< 0)
            return 0xffffff80
        
        edi = var_8_1
    else
        int32_t eax_3
        int32_t edx_1
        edx_1:eax_3 = sx.q(eax_2)
        int32_t temp2_1 = arg1[2]
        arg1[2] -= eax_3
        arg1[3] = sbb.d(arg1[3], edx_1, temp2_1 u< eax_3)

if (*__errno() != 0)
    return 0xffffff80

return 0xfffffffe
