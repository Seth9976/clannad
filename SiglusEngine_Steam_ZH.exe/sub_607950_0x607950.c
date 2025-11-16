// 函数: sub_607950
// 地址: 0x607950
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* result = arg2
void* i = result

if (arg1 != result)
    void* ecx = &arg1[1]
    
    if (ecx != result)
        result = ecx - 1
        int32_t ebx
        int32_t var_14_1 = ebx
        
        do
            ebx.b = *(result + 1)
            void* result_2 = result + 1
            void* result_1 = result_2
            
            if (ebx.b s>= *arg1)
                ecx.b = *result
                
                while (ebx.b s< ecx.b)
                    *result_1 = ecx.b
                    result_1 = result
                    ecx.b = *(result - 1)
                    result -= 1
                
                *result_1 = ebx.b
            else
                _memcpy(ecx, arg1, result + 1 - arg1)
                *arg1 = ebx.b
            
            result = result_2
            ecx = &arg1[1]
        while (result + 1 != i)

return result
