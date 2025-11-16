// 函数: sub_72cf90
// 地址: 0x72cf90
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ebx = 0
int32_t result = arg2[2]
int32_t esi = arg2[4]
int32_t edx_1 = arg2[6] * result
int32_t result_1 = result
int32_t var_c = edx_1

if (esi s> 0)
    do
        int32_t result_2 = esi - ebx
        
        if (arg2[5] s< result_2)
            result_2 = arg2[5]
        
        int32_t ecx_1 = arg2[6] + ebx
        int32_t result_3 = arg2[7] - ecx_1
        
        if (result_2 s>= result_3)
            result_2 = result_3
        
        result = arg2[1] - ecx_1
        
        if (result_2 s>= result)
            result_2 = result
        
        if (result_2 s<= 0)
            break
        
        int32_t esi_1 = result_2 * result_1
        void* var_2c_1
        int32_t eax_4
        
        if (arg4 == 0)
            eax_4 = arg2[0xa]
            var_2c_1 = &arg2[0xa]
        else
            var_2c_1 = &arg2[0xa]
            eax_4 = arg2[0xb]
        
        result = eax_4(arg3, var_2c_1, *(*arg2 + (ebx << 2)), edx_1, esi_1)
        ebx += arg2[5]
        edx_1 = var_c + esi_1
        esi = arg2[4]
        var_c = edx_1
    while (ebx s< esi)

return result
