// 函数: sub_591560
// 地址: 0x591560
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

char ecx = arg9

if (arg9 u> 8)
    ecx = 8

int32_t result_1 = arg10
uint32_t ecx_1 = zx.d(ecx)
int32_t result = 0xffffff01 << ecx_1.b

if (result_1 s< result)
    result_1 = result
else if (result_1 s> 0xff)
    result_1 = 0xff

if (arg3 != 0 && arg16 != 0 && (arg8 == 0 || result_1 != result))
    int32_t arg_24
    int32_t arg_28
    int32_t arg_2c
    int32_t arg_30
    sub_4d2170(&arg_24, arg4, arg2, &arg_24, &arg_28, &arg_2c, &arg_30)
    int32_t arg_8
    int32_t arg_c
    int32_t arg_10
    int32_t arg_14
    result = sub_4c08c0(&arg_10, &arg_c, &arg_8, &arg_10, &arg_14, arg_24, arg_28, arg_2c, arg_30)
    
    if (result != 0)
        int32_t ecx_4 = arg_10
        int32_t ebx_1 = arg_8
        int32_t ecx_5 = ecx_4 - ebx_1
        
        if (ecx_4 - ebx_1 s>= 0)
            arg9.d = 1
        else
            ecx_5 = neg.d(ecx_5)
            arg9.d = 0xffffffff
        
        int32_t edx_3 = arg_14
        int32_t edx_4 = edx_3 - arg_c
        int32_t eax_2 = arg2
        
        if (edx_3 - arg_c s< 0)
            edx_4 = neg.d(edx_4)
            eax_2 = neg.d(eax_2)
        
        int32_t eax_3 = neg.d(eax_2)
        data_1cd4480 = ecx_5
        int32_t eax_5 = arg2 * arg_c
        data_1cd4484 = edx_4
        data_1cd4490 = arg3 + ((eax_5 + ebx_1) << 2)
        data_1cd4448 = arg4
        data_1cd444c = arg2 << 2
        data_1cd4474 = zx.d(arg5)
        data_1cd4478 = zx.d(arg6)
        data_1cd447c = zx.d(arg7)
        int32_t ebx_4 = eax_3 << 2
        data_1cd4488 = arg9.d << 2
        int32_t ebx_5
        
        if (ecx_5 s<= edx_4)
            data_1c45978 = edx_4
            ebx_5 = neg.d(ebx_4)
            data_1ccce5c = neg.d(edx_4)
            data_1c4ce38 = ecx_5 * 2
            data_1cd4324 = edx_4 * 2
            int32_t eax_28 = data_1cd4488
            data_1ccce80 = ebx_5
            data_1c4ce3c = eax_28
        else
            data_1c45978 = ecx_5
            ebx_5 = neg.d(ebx_4)
            data_1ccce5c = neg.d(ecx_5)
            data_1c4ce38 = edx_4 * 2
            data_1cd4324 = ecx_5 * 2
            data_1ccce80 = data_1cd4488
            data_1c4ce3c = ebx_5
        
        void* ecx_6 = data_1cd4328
        data_1c4ce34 = ebx_5
        data_1cd4430 = 0xff
        data_1cd442c = 0xff
        data_1cd43c8 = *(ecx_6 + 0x3fc)
        data_1cd4444 = *(ecx_6 + 0x3fc)
        uint32_t eax_31 = zx.d(arg16)
        data_1cd4434 = eax_31
        data_1cd4450 = 0xff - eax_31
        data_1cd4428 = 0xff
        data_1cd43a4 = *(ecx_6 + (eax_31 << 2))
        data_1cd4394 = *(ecx_6 + 0x3fc)
        data_1cd438c = *(ecx_6 + 0x3fc)
        data_1cd4384 = *(ecx_6 + 0x3fc)
        
        if (arg8 != 0)
            int32_t edx_6 = arg13
            int32_t ecx_7 = arg11
            data_1cd4468 = arg15
            data_1cd4464 = ecx_1
            int32_t eax_38 = arg_8
            data_1cd4460 = result_1
            data_1cd445c = ecx_7
            data_1cd4424 = arg12
            
            if (eax_38 s< edx_6)
                edx_6 = mods.dp.d(sx.q(edx_6 - eax_38), ecx_7)
                eax_38 = ecx_7
            
            int32_t temp1_2 = mods.dp.d(sx.q(eax_38 - edx_6), ecx_7)
            int32_t eax_43 = arg_c
            data_1cd446c = temp1_2
            data_1cd4420 = temp1_2
            int32_t edx_11 = arg14
            
            if (eax_43 s< edx_11)
                edx_11 = mods.dp.d(sx.q(edx_11 - eax_43), arg12)
                eax_43 = arg12
            
            data_1cd4454 = arg8
            int32_t temp1_4 = mods.dp.d(sx.q(eax_43 - edx_11), arg12)
            data_1cd441c = temp1_4
            data_1cd4458 = ecx_7 * arg12 + arg8
            data_1cd4470 = temp1_4 * ecx_7 + arg8
            int32_t eax_51
            eax_51.b = arg9.d s>= 0
            data_1ccce60 = (eax_51 << 1) + 0xffffffff
            
            if (eax_3 s< 0)
                ecx_7 = neg.d(ecx_7)
            
            data_1ccce54 = ecx_7
        
        if (arg16 != 0xff)
            if (arg8 != 0 && result_1 != 0xff)
                return sub_590f40()
            
            return sub_590790()
        
        data_1cd448c = ((((data_1cd4474 - 0x100) << 8) + data_1cd4478) << 8) + data_1cd447c
        
        if (arg8 != 0 && result_1 != 0xff)
            return sub_590960()
        
        return sub_5906d0()

return result
