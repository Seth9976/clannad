// 函数: sub_46ee50
// 地址: 0x46ee50
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

void* ebx = nullptr
void* edx = arg4
*arg5 = 0
char* i = nullptr
*arg6 = 0
arg6 = nullptr
*arg7 = 0
int32_t* result = arg8
*result = 0

if (*(edx + 0x10) s> 0)
    do
        result.b = *(i + edx)
        uint32_t var_c_1
        
        if (result.b != 0xff)
            var_c_1 = zx.d(result.b)
        else
            var_c_1 = 0
        
        int32_t* result_1 = 0xffffffff
        int32_t esi_1 = 0xffffffff
        int32_t* result_2 = 0xffffffff
        int32_t var_10 = 0xffffffff
        
        if (arg3 u<= 0x1ff)
            sub_425430(arg3, 1)
            
            if (*(arg3 * 0x74 + 0x13747b0) != 0)
                sub_426840(&result_2, var_c_1, arg3 * 0x74 + 0x13747b0, &result_2, &var_10)
                esi_1 = var_10
                result_1 = result_2
        
        void* eax_7 = ebx - 1 + result_1
        int32_t* ecx_5 = arg6
        
        if (*arg5 s> ebx)
            *arg5 = ebx
        
        edx = arg4
        
        if (*arg7 s< eax_7)
            *arg7 = eax_7
            ecx_5 = arg6
        
        if (*arg8 s< esi_1 - 1)
            *arg8 = esi_1 - 1
        
        result = *(arg2 + 0x14)
        
        if (result == 0x1869f)
            result = nullptr
        else if (result == 0)
            result = result_1
        
        i = ecx_5 + 1
        ebx += result
        arg6 = i
    while (i s< *(edx + 0x10))

return result
