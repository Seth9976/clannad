// 函数: sub_425050
// 地址: 0x425050
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (*arg5 == 0 || arg6[0x13] == 0)
    return 

arg1.b = arg6[0x12].b
void* var_14_1 = arg1

if (arg1.b == 0)
    return 

arg1 = arg6[0x1e]
int32_t* edx = arg6[0x20]
void* var_8_1 = arg1
int32_t ebx_1 = arg6[0x1f]
int32_t edi_1 = arg6[0x21]

if (arg1 s> edx || ebx_1 s> edi_1)
    return 

void* edx_1 = arg7

if (edx_1 == 0xffffffff)
    edx_1 = *arg6

arg1 = arg5[5]

if (arg1 == 0 || arg1 == 1)
    if (edx_1 == 0)
        void* var_34_3 = var_14_1
        int32_t var_38_3 = edi_1
        int32_t* var_3c_3 = edx
        
        if (arg8 != edx_1)
            arg1 = edx_1
        
        int32_t var_40_3 = ebx_1
        sub_584e80(arg1, arg2, arg3, arg4, arg5[1], arg5[3], arg5[4], edx_1, edx_1, arg1, arg6[1], 
            arg6[2], var_8_1.b)
else if (arg1 == 2)
    arg1 = sub_4d25b0(arg5[1], edx_1)
    
    if (arg1 != 0)
        void* var_20_1 = arg1
        void* esi_2 = arg1 + 0x74
        arg1 = zx.d(*(arg1 + 2))
        void* i_1 = arg1
        
        if (arg1 s> 0)
            void* i
            
            do
                uint32_t edx_2 = zx.d(*(esi_2 + 4))
                uint32_t ebx_2 = zx.d(*(esi_2 + 6))
                int32_t edi_2 = zx.d(*(esi_2 + 8))
                
                if (arg8 != 0)
                    edx_2 = 0
                
                uint32_t var_34_1 = zx.d(arg6[0x12].b)
                int32_t var_38_1 = edi_1
                int32_t* var_3c_1 = edx
                int32_t var_40_1 = ebx_1
                sub_584e80(var_20_1, arg2, arg3, arg4, esi_2 + 0x5c, ebx_2, edi_2, 
                    *(var_20_1 + 0x14), *(var_20_1 + 0x18), edx_2, arg6[1] + zx.d(*esi_2), 
                    arg6[2] + zx.d(*(esi_2 + 2)), var_8_1.b)
                i = i_1
                i_1 -= 1
                esi_2 = esi_2 + 0x5c + ((edi_2 * ebx_2) << 2)
            while (i != 1)
else if (arg1 == 3 && edx_1 == 0)
    int16_t* edx_4 = arg5[1]
    arg1 = &edx_4[1 + zx.d(*edx_4) * 2]
    
    if (arg1 != 0)
        int32_t var_34_2 = edi_1
        int32_t* var_38_2 = edx
        uint32_t eax_13 = zx.d(var_14_1.b)
        int32_t var_3c_2 = ebx_1
        void* var_40_2 = var_8_1
        sub_58d2d0(eax_13, arg2, arg3, arg4, arg1, arg5[3], arg5[4], 0, 0, &edx_4[1], arg6[1], 
            arg6[2], eax_13)
