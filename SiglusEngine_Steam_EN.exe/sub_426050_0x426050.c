// 函数: sub_426050
// 地址: 0x426050
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (arg3 u> 0x1ff)
    return 

sub_425430(arg3, 1)

if (*(arg3 * 0x74 + 0x13747b0) == 0)
    return 

arg1 = *(arg3 * 0x74 + 0x13747c4)
int32_t var_4c

if (arg1 == 0 || arg1 == 1)
    int32_t var_28_3 = 0
    int32_t var_2c_3 = arg15
    int32_t ecx_8 = *(arg3 * 0x74 + 0x13747c0)
    int32_t var_30_3 = 0
    int32_t var_34_3 = 0
    int32_t var_38_3 = 0
    int32_t var_3c_3 = 0
    int32_t edx_5 = *(arg3 * 0x74 + 0x13747bc)
    sub_5856e0(edx_5 - 1, arg5, arg4, arg6, arg7, arg8, arg9, arg10, *(arg3 * 0x74 + 0x13747b4), 
        edx_5, ecx_8, 0, 0, 0, edx_5 - 1, ecx_8 - 1, 0, 0, edx_5, ecx_8, arg11, arg12, arg13, 
        arg14, ecx_8, 0, var_4c)
else if (arg1 == 2)
    arg1 = sub_4d25b0(*(arg3 * 0x74 + 0x13747b4), arg2)
    
    if (arg1 != 0)
        void* ecx_1 = arg1
        void* ebx_2 = arg1 + 0x74
        arg1 = zx.d(*(ecx_1 + 2))
        int32_t edx_1 = *(ecx_1 + 0x1c)
        int32_t ecx_2 = *(ecx_1 + 0x20)
        void* i_1 = arg1
        int32_t var_14_1 = edx_1
        
        if (arg1 s> 0)
            void* i
            
            do
                int32_t var_28_1 = 0
                int32_t var_2c_1 = arg15
                int32_t var_30_1 = 0
                int32_t var_34_1 = 0
                int32_t var_38_1 = 0
                int32_t var_3c_1 = 0
                uint32_t esi_3 = zx.d(*(ebx_2 + 8))
                uint32_t edi_1 = zx.d(*(ebx_2 + 6))
                uint32_t eax_4 = zx.d(*(ebx_2 + 4))
                sub_5856e0(eax_4, arg5, arg4, arg6, arg7, arg8, arg9, arg10, ebx_2 + 0x5c, edx_1, 
                    ecx_2, eax_4, 0, 0, edx_1 - 1, ecx_2 - 1, zx.d(*ebx_2), zx.d(*(ebx_2 + 2)), 
                    edi_1, esi_3, arg11, arg12, arg13, arg14, ebx_2, 0, var_4c)
                edx_1 = var_14_1
                i = i_1
                i_1 -= 1
                ebx_2 = ebx_2 + 0x5c + ((esi_3 * edi_1) << 2)
            while (i != 1)
else if (arg1 == 3)
    int16_t* edi_2 = *(arg3 * 0x74 + 0x13747b4)
    
    if (arg4 != 0)
        int32_t var_28_2 = arg15
        int32_t ecx_6 = *(arg3 * 0x74 + 0x13747c0)
        int32_t var_2c_2 = arg14
        int32_t edx_3 = *(arg3 * 0x74 + 0x13747bc)
        int32_t var_30_2 = arg13
        int32_t var_34_2 = arg12
        void* eax_9 = &edi_2[1 + zx.d(*edi_2) * 2]
        sub_58e060(eax_9, arg5, arg4, arg6, arg7, arg8, arg9, arg10, eax_9, edx_3, ecx_6, 
            &edi_2[1], 0, 0, edx_3 - 1, ecx_6 - 1, 0, 0, edx_3, ecx_6, arg11)
