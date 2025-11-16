// 函数: sub_424ce0
// 地址: 0x424ce0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (*arg3 == 0 || arg2[0x13] == 0)
    return 

arg1.b = arg2[0x12].b
void* var_20_1 = arg1

if (arg1.b == 0)
    return 

int32_t edx = arg4
int32_t esi_1 = arg6

if (edx s> esi_1)
    arg6 = edx
    edx = esi_1
    arg4 = edx

if (arg5 s> arg7)
    void* eax = arg5
    arg5 = arg7
    arg7 = eax

int32_t eax_1 = arg8
int32_t esi_2 = arg6

if (eax_1 s> arg10)
    arg8 = arg10
    edx = arg4
    arg10 = eax_1

void* eax_2 = arg9
void* edi_3 = arg5

if (eax_2 s> arg11)
    arg9 = arg11
    esi_2 = arg6
    arg11 = eax_2
    eax_2 = arg9

if (edx == arg8 && edi_3 == eax_2 && esi_2 == arg10 && arg7 == arg11)
    sub_424660(arg11, arg2, arg3, 0, 0xffffffff, 0, 0)
    return 

void* var_18_1
int32_t var_14_1
int32_t var_10_1
int32_t var_c_1

if (arg2[0x1e] != 0xffffffff || arg2[0x1f] != 0xffffffff || arg2[0x20] != 0xffffffff
        || arg2[0x21] != 0xffffffff)
    void* eax_5 = data_702ff4
    int32_t edx_3 = data_702ffc
    
    if (arg2[0x1e] s> eax_5)
        eax_5 = arg2[0x1e]
    
    var_18_1 = eax_5
    int32_t eax_6 = arg2[0x20]
    
    if (eax_6 s< edx_3)
        edx_3 = eax_6
    
    int32_t eax_7 = arg2[0x21]
    var_10_1 = edx_3
    int32_t edx_4 = data_702ff8
    
    if (arg2[0x1f] s> edx_4)
        edx_4 = arg2[0x1f]
    
    var_14_1 = edx_4
    int32_t edx_5 = data_703000
    
    if (eax_7 s< edx_5)
        edx_5 = eax_7
    
    arg1 = var_18_1
    var_c_1 = edx_5
    edx = arg4
else
    arg1 = data_702ff4
    var_10_1 = data_702ffc
    var_14_1 = data_702ff8
    var_c_1 = data_703000
    edi_3 = arg5
    var_18_1 = arg1

if (arg1 s> var_10_1 || var_14_1 s> var_c_1)
    return 

int32_t var_5c

if (*(arg3 + 0x14) == 0 || *(arg3 + 0x14) == 1)
    if (*arg2 == 0)
        int32_t var_38_3 = arg2[3]
        uint32_t eax_22 = zx.d(*(arg2 + 0x31))
        void* var_3c_3 = var_20_1
        int32_t var_40_3 = arg2[0x11]
        int32_t var_44_3 = arg2[0x10]
        int32_t var_48_3 = arg2[0xf]
        int32_t var_4c_3 = arg2[0xe]
        sub_5856e0(eax_22, data_702fec, data_702fe8, data_702ff0, arg8, arg9, arg10, arg11, 
            *(arg3 + 4), esi_2 - edx + 1, arg7 - edi_3 + 1, *(arg3 + 0x14), edx, edi_3, esi_2, 
            arg7, arg2[1], arg2[2], *(arg3 + 0xc), *(arg3 + 0x10), var_18_1.b, var_14_1, var_10_1, 
            var_c_1, arg3, eax_22.b, var_5c)
else if (*(arg3 + 0x14) == 2)
    void* edx_7 = sub_4d25b0(*(arg3 + 4), *arg2)
    
    if (edx_7 != 0)
        arg1 = zx.d(*(edx_7 + 2))
        void* edx_8 = edx_7 + 0x74
        void* i_1 = arg1
        
        if (arg1 s> 0)
            void* i
            
            do
                int32_t var_38_1 = arg2[3]
                uint32_t var_3c_1 = zx.d(arg2[0x12].b)
                int32_t var_40_1 = arg2[0x11]
                int32_t var_44_1 = arg2[0x10]
                uint32_t esi_4 = zx.d(*(edx_8 + 8))
                int32_t var_48_1 = arg2[0xf]
                uint32_t edi_7 = zx.d(*(edx_8 + 6))
                int32_t var_4c_1 = arg2[0xe]
                uint32_t eax_17 = zx.d(*(edx_8 + 4))
                sub_5856e0(eax_17, data_702fec, data_702fe8, data_702ff0, arg8, arg9, arg10, arg11, 
                    edx_8 + 0x5c, esi_2 - edx + 1, arg7 - edi_3 + 1, eax_17, arg4, arg5, arg6, 
                    arg7, zx.d(*edx_8) + arg2[1], zx.d(*(edx_8 + 2)) + arg2[2], edi_7, esi_4, 
                    var_18_1.b, var_14_1, var_10_1, var_c_1, edx_8, *(arg2 + 0x31), var_5c)
                i = i_1
                i_1 -= 1
                edx_8 = edx_8 + 0x5c + ((esi_4 * edi_7) << 2)
            while (i != 1)
else if (*(arg3 + 0x14) == 3 && *arg2 == 0)
    int16_t* edx_12 = *(arg3 + 4)
    
    if (data_702fe8 != 0)
        void* var_38_2 = var_20_1
        int32_t var_3c_2 = var_c_1
        int32_t var_40_2 = var_10_1
        int32_t var_44_2 = var_14_1
        void* eax_20 = &edx_12[1 + zx.d(*edx_12) * 2]
        sub_58e060(eax_20, data_702fec, data_702fe8, data_702ff0, arg8, arg9, arg10, arg11, eax_20, 
            esi_2 - edx + 1, arg7 - edi_3 + 1, &edx_12[1], arg4, arg5, esi_2, arg7, arg2[1], 
            arg2[2], *(arg3 + 0xc), *(arg3 + 0x10), var_18_1.b)
