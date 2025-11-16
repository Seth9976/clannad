// 函数: sub_4606c9
// 地址: 0x4606c9
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx = *arg1
int32_t* result

if (ecx u>= arg2)
    *arg3 = 0
    result.b = 0
else
    *arg3 = ecx
    
    if (*arg1 u>= arg2)
        *arg3 = 0
        result.b = 0
    else
        char* ecx_1
        
        do
            ecx_1 = *arg1
            
            if (*ecx_1 == 0)
                break
            
            *arg1 = &ecx_1[1]
        while (&ecx_1[1] u< arg2)
        int32_t ecx_3 = *arg1
        
        if (ecx_3 u>= arg2)
            *arg3 = 0
            result.b = 0
        else
            *arg1 = ecx_3 + 1
            result.b = 1

return result
