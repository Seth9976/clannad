// 函数: sub_401640
// 地址: 0x401640
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t result = 0xffffffff
int32_t ecx = arg1[2]
int32_t eax = arg1[3]
int32_t ebx = ecx
int32_t edi = eax
int32_t var_4 = 0xffffffff

while (true)
    int32_t ecx_1 = ecx - 0x2134
    int32_t eax_1 = adc.d(eax, 0xffffffff, ecx u>= 0x2134)
    int32_t var_10_1 = ecx_1
    int32_t var_c_1 = eax_1
    
    if (eax_1 s<= 0 && (eax_1 s< 0 || ecx_1 u< 0))
        var_10_1 = 0
        var_c_1 = 0
        ecx_1 = 0
        eax_1 = 0
    
    sub_401760(arg1, ecx_1, eax_1)
    int32_t eax_2 = arg1[3]
    int32_t ecx_2 = arg1[2]
    
    if (eax_2 s<= edi && (eax_2 s< edi || ecx_2 u< ebx))
        while (true)
            int32_t result_1
            int32_t edx_4
            result_1, edx_4 = sub_4013c0(arg1, arg2, ebx - ecx_2, sbb.d(edi, eax_2, ebx u< ecx_2))
            
            if (result_1 == 0xffffff80 && edx_4 == 0xffffffff)
                return 0xffffff80
            
            if (edx_4 s< 0)
                break
            
            if (edx_4 s<= 0 && result_1 u< 0)
                break
            
            ecx_2 = arg1[2]
            result = result_1
            eax_2 = arg1[3]
            var_4 = edx_4
            
            if (eax_2 s>= edi)
                if (eax_2 s> edi)
                    break
                
                if (ecx_2 u>= ebx)
                    break
    
    if ((result & var_4) != 0xffffffff)
        break
    
    ecx = var_10_1
    eax = var_c_1

sub_401760(arg1, result, var_4)
int32_t eax_5
int32_t edx_6
eax_5, edx_6 = sub_4013c0(arg1, arg2, 0x2134, 0)

if (edx_6 s<= 0 && (edx_6 s< 0 || eax_5 u< 0))
    return 0xffffff7f

return result
