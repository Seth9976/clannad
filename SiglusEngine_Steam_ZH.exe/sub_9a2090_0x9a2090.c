// 函数: sub_9a2090
// 地址: 0x9a2090
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi = arg3
int32_t result_1 = 1
int32_t var_18 = edi
int32_t edx = edi
int32_t var_10 = edi
int32_t var_14 = edi
int32_t result = *(arg6 + 4)
int32_t var_c = result

if (result s> 0)
    void* esi_1 = arg4
    void* ecx_2 = arg6 + (result << 2) + 4
    void* var_1c_1 = ecx_2
    int32_t i
    
    do
        int32_t temp0_1 = divs.dp.d(sx.q(edx), *ecx_2)
        int32_t temp0_2 = divs.dp.d(sx.q(edi), var_10)
        void* eax_6 = temp0_2 * temp0_1
        int32_t eax_7 = *var_1c_1
        int32_t edx_4 = var_14 - (eax_7 - 1) * temp0_2
        int32_t result_3 = 1 - result_1
        var_14 = edx_4
        result_1 = result_3
        
        if (eax_7 == 4)
            void* var_44_3
            void* var_40_3
            void* var_3c_5
            int32_t var_38_5
            void* eax_24
            
            if (result_3 == 0)
                var_38_5 = arg5 + ((edx_4 - 1 + temp0_2) << 2)
                eax_24 = arg5 - 4 + (edx_4 << 2)
                var_3c_5 = eax_24
                var_40_3 = esi_1
                var_44_3 = arg2
            else
                var_38_5 = arg5 + ((edx_4 - 1 + temp0_2) << 2)
                eax_24 = arg5 - 4 + (edx_4 << 2)
                var_3c_5 = eax_24
                var_40_3 = arg2
                var_44_3 = esi_1
            
            sub_9a31a0(eax_24, temp0_1, temp0_2, var_44_3, var_40_3, var_3c_5, var_38_5, 
                arg5 + ((temp0_2 * 2 + edx_4 - 1) << 2))
            result = result_1
        else if (eax_7 == 2)
            if (result_3 == 0)
                sub_9a3600(arg5 + (edx_4 << 2) - 4, temp0_1, temp0_2, arg2, esi_1, 
                    arg5 + (edx_4 << 2) - 4)
            else
                sub_9a3600(arg5 + (edx_4 << 2) - 4, temp0_1, temp0_2, esi_1, arg2, 
                    arg5 + (edx_4 << 2) - 4)
            
            result = result_1
        else
            if (temp0_2 == 1)
                result_3 = temp0_2 - result_3
            
            int32_t edx_5 = *var_1c_1
            
            if (result_3 == 0)
                sub_9a22b0(var_1c_1, edx_5, temp0_2, temp0_1, eax_6, arg2, arg2, arg2, esi_1, 
                    esi_1, arg5 + (edx_4 << 2) - 4)
                result = 1
                result_1 = 1
            else
                sub_9a22b0(var_1c_1, edx_5, temp0_2, temp0_1, eax_6, esi_1, esi_1, esi_1, arg2, 
                    arg2, arg5 + (edx_4 << 2) - 4)
                result = 0
                result_1 = 0
        
        edx = temp0_1
        ecx_2 = var_1c_1 - 4
        i = var_c
        var_c -= 1
        edi = var_18
        var_10 = edx
        var_1c_1 = ecx_2
    while (i != 1)
    
    if (result != 1)
        result = 0
        
        if (edi s>= 4)
            void* edx_8 = esi_1 + 0xc
            int32_t var_c_1 = ((edi - 4) u>> 2) + 1
            int32_t i_3 = ((edi - 4) u>> 2) + 1
            int32_t result_2 = (((edi - 4) u>> 2) + 1) << 2
            void* ecx_16 = arg2 + 4
            int32_t i_1
            
            do
                ecx_16 += 0x10
                *(ecx_16 - 0x14) = *(edx_8 - 0xc)
                edx_8 += 0x10
                *(ecx_16 - 0x10) = *(esi_1 - arg2 + ecx_16 - 0x10)
                *(ecx_16 - 0xc) = *(edx_8 - 0x14)
                *(ecx_16 - 8) = *(edx_8 - 0x10)
                i_1 = i_3
                i_3 -= 1
            while (i_1 != 1)
            esi_1 = arg4
            edi = var_18
            result = result_2
        
        if (result s< edi)
            void* ecx_17 = arg2 + (result << 2)
            int32_t i_4 = edi - result
            int32_t i_2
            
            do
                result = *(ecx_17 + esi_1 - arg2)
                ecx_17 += 4
                *(ecx_17 - 4) = result
                i_2 = i_4
                i_4 -= 1
            while (i_2 != 1)

return result
