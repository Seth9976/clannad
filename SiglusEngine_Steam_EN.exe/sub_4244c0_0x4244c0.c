// 函数: sub_4244c0
// 地址: 0x4244c0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (*arg3 == 0)
    return 

int32_t edx = data_702ffc
int32_t ebx_1 = data_702ff8
int32_t esi_1 = data_703000
int32_t edi_1 = data_702ff4

if (edi_1 s> edx || ebx_1 s> esi_1)
    return 

arg1 = *(arg3 + 0x14)

if (arg1 == 0 || arg1 == 1)
    int32_t var_2c_3 = 0xff
    int32_t var_30_3 = esi_1
    int32_t var_34_3 = edx
    int32_t var_38_3 = ebx_1
    sub_584e80(arg1, data_702fec, data_702fe8, data_702ff0, *(arg3 + 4), *(arg3 + 0xc), 
        *(arg3 + 0x10), 0, 0, arg1, arg4, arg5, edi_1.b)
else if (arg1 == 2)
    arg1 = sub_4d25b0(*(arg3 + 4), arg2)
    
    if (arg1 != 0)
        void* edx_2 = arg1
        void* ebx_3 = arg1 + 0x74
        void* var_1c_1 = edx_2
        arg1 = zx.d(*(edx_2 + 2))
        void* i_1 = arg1
        
        if (arg1 s> 0)
            void* i
            
            do
                int32_t var_2c_1 = 0xff
                int32_t var_30_1 = esi_1
                int32_t var_34_1 = edx
                int32_t var_38_1 = ebx_1
                uint32_t esi_2 = zx.d(*(ebx_3 + 8))
                uint32_t edi_2 = zx.d(*(ebx_3 + 6))
                uint32_t eax_4 = zx.d(*(ebx_3 + 4))
                sub_584e80(eax_4, data_702fec, data_702fe8, data_702ff0, ebx_3 + 0x5c, edi_2, 
                    esi_2, *(edx_2 + 0x14), *(edx_2 + 0x18), eax_4, zx.d(*ebx_3) + arg4, 
                    zx.d(*(ebx_3 + 2)) + arg5, edi_1.b)
                edx_2 = var_1c_1
                i = i_1
                i_1 -= 1
                ebx_3 = ebx_3 + 0x5c + ((esi_2 * edi_2) << 2)
            while (i != 1)
else if (arg1 == 3)
    int16_t* edx_4 = *(arg3 + 4)
    arg1 = &edx_4[1 + zx.d(*edx_4) * 2]
    
    if (arg1 != 0)
        int32_t var_2c_2 = esi_1
        int32_t var_30_2 = edx
        int32_t var_34_2 = ebx_1
        int32_t var_38_2 = edi_1
        sub_58d2d0(arg1, data_702fec, data_702fe8, data_702ff0, arg1, *(arg3 + 0xc), 
            *(arg3 + 0x10), 0, 0, &edx_4[1], arg4, arg5, 0xff)
