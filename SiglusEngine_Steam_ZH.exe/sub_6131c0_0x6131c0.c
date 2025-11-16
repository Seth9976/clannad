// 函数: sub_6131c0
// 地址: 0x6131c0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* edx = arg2

for (int32_t* i = *edx; i != edx[1]; i = &i[1])
    int32_t eax_1 = *(arg1 + 0x1adc)
    int32_t var_8
    int32_t* ecx = &var_8
    int32_t ebx_1 = *i
    var_8 = ebx_1
    
    if (&var_8 u< eax_1)
        ecx = *(arg1 + 0x1ad8)
        edx = arg2
    
    if (&var_8 u>= eax_1 || ecx u> &var_8)
        if (eax_1 == *(arg1 + 0x1ae0))
            int32_t* var_20_2 = ecx
            sub_530c10(arg1 + 0x1ad8)
            edx = arg2
        
        int32_t* eax_4 = *(arg1 + 0x1adc)
        
        if (eax_4 != 0)
            *eax_4 = ebx_1
    else
        if (eax_1 == *(arg1 + 0x1ae0))
            int32_t* var_20_1 = ecx
            sub_530c10(arg1 + 0x1ad8)
            edx = arg2
        
        int32_t* ecx_2 = *(arg1 + 0x1adc)
        
        if (ecx_2 != 0)
            *ecx_2 = *(*(arg1 + 0x1ad8) + ((&var_8 - ecx) s>> 2 << 2))
    
    *(arg1 + 0x1adc) += 4

char eax_5 = sub_6f6480(arg1 + 0x90)

if (eax_5 == 0)
    return eax_5

*(arg1 + 0x1adc) = *(arg1 + 0x1ad8)
arg2[1] = *arg2
sub_6f6220()
sub_6f6350()
int32_t eax_8
eax_8.b = 1
return eax_8
