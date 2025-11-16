// 函数: sub_424660
// 地址: 0x424660
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (*arg3 == 0 || arg2[0x13] == 0)
    return 

arg1.b = arg2[0x12].b
void* var_18_1 = arg1

if (arg1.b == 0)
    return 

int32_t eax = arg2[0x1e]
void* var_c_1
int32_t var_8_1
int32_t edx
int32_t ebx_1
int32_t edi_1

if (eax != 0xffffffff || arg2[0x1f] != eax || arg2[0x20] != eax || arg2[0x21] != eax)
    int32_t edx_1 = data_702ff4
    ebx_1 = data_702ffc
    edi_1 = data_702ff8
    
    if (eax s> edx_1)
        edx_1 = eax
    
    int32_t eax_1 = arg2[0x20]
    var_8_1 = edx_1
    void* edx_2 = data_703000
    
    if (eax_1 s< ebx_1)
        ebx_1 = eax_1
    
    void* eax_2 = arg2[0x21]
    
    if (arg2[0x1f] s> edi_1)
        edi_1 = arg2[0x1f]
    
    if (eax_2 s< edx_2)
        edx_2 = eax_2
    
    var_c_1 = edx_2
    edx = var_8_1
    arg1 = var_c_1
else
    edx = data_702ff4
    arg1 = data_703000
    ebx_1 = data_702ffc
    edi_1 = data_702ff8
    var_8_1 = edx
    var_c_1 = arg1

int32_t var_10_1 = ebx_1

if (edx s> ebx_1 || edi_1 s> arg1)
    return 

if (arg5 == 0xffffffff)
    arg5 = *arg2
    ebx_1 = var_10_1

if (*(arg3 + 0x14) != 0 && *(arg3 + 0x14) != 1)
    arg1 = *(arg3 + 0x14)
    
    if (arg1 == 2)
        arg1 = sub_4d25b0(*(arg3 + 4), arg5)
        
        if (arg1 != 0)
            void* edx_5 = arg1
            void* edi_3 = arg1 + 0x74
            void* var_2c_1 = edx_5
            arg1 = zx.d(*(edx_5 + 2))
            void* i_1 = arg1
            
            if (arg1 s> 0)
                void* i
                
                do
                    uint32_t ecx_1 = zx.d(*edi_3)
                    int32_t ebx_3 = zx.d(*(edi_3 + 8))
                    uint32_t ecx_2 = zx.d(*(edi_3 + 2))
                    uint32_t ecx_3 = zx.d(*(edi_3 + 4))
                    uint32_t ecx_4 = zx.d(*(edi_3 + 6))
                    uint32_t eax_4 = zx.d(arg2[0x12].b)
                    
                    if (arg4 == 0)
                        int32_t var_3c_2 = arg2[3]
                        uint32_t var_40_2 = eax_4
                        int32_t var_44_2 = arg2[0x11]
                        int32_t var_48_2 = arg2[0x10]
                        int32_t var_4c_2 = arg2[0xf]
                        int32_t eax_24 = arg2[1] + ecx_1 + arg6
                        sub_584980(eax_24, data_702fec, data_702fe8, data_702ff0, edi_3 + 0x5c, 
                            ecx_4, ebx_3, *(edx_5 + 0x14), *(edx_5 + 0x18), ecx_3, eax_24, 
                            arg2[2] + ecx_2 + arg7, var_8_1, edi_1.b, var_10_1, var_c_1, ecx_4, 
                            arg2[4], zx.d(arg2[5].b), arg2[6], arg2[7], arg2[8], (arg2[9]).b, 
                            (arg2[0xa]).b, (arg2[0xb]).b, zx.d(arg2[0xc].b), zx.d(*(arg2 + 0x31)), 
                            zx.d(*(arg2 + 0x32)), zx.d(*(arg2 + 0x33)), zx.d(arg2[0xd].b), 
                            *(arg2 + 0x35), arg2[0xe])
                    else
                        uint32_t var_3c_1 = eax_4
                        void* var_40_1 = var_c_1
                        int32_t var_44_1 = var_10_1
                        int32_t var_48_1 = edi_1
                        int32_t eax_10 = arg2[1] + ecx_1 + arg6
                        sub_584e80(eax_10, data_702fec, data_702fe8, data_702ff0, edi_3 + 0x5c, 
                            ecx_4, ebx_3, *(edx_5 + 0x14), *(edx_5 + 0x18), ecx_3, eax_10, 
                            arg2[2] + ecx_2 + arg7, var_8_1.b)
                    
                    i = i_1
                    i_1 -= 1
                    edx_5 = var_2c_1
                    edi_3 = edi_3 + 0x5c + ((ebx_3 * ecx_4) << 2)
                while (i != 1)
    else if (arg1 == 3 && arg5 == 0)
        int32_t edx_9 = *(arg3 + 4) + 2
        arg1 = edx_9 + (zx.d(**(arg3 + 4)) << 2)
        
        if (arg1 != 0)
            void* var_3c_3 = var_c_1
            int32_t var_40_3 = ebx_1
            int32_t var_44_3 = edi_1
            int32_t var_48_3 = var_8_1
            int32_t eax_32 = arg2[1] + arg6
            sub_58d2d0(eax_32, data_702fec, data_702fe8, data_702ff0, arg1, *(arg3 + 0xc), 
                *(arg3 + 0x10), 0, 0, edx_9, eax_32, arg2[2] + arg7, zx.d(var_18_1.b))
else if (arg5 == 0)
    if (arg4 != 0)
        void* var_3c_4 = var_18_1
        void* var_40_4 = arg1
        int32_t var_44_4 = ebx_1
        int32_t var_48_4 = edi_1
        int32_t eax_37 = arg2[1] + arg6
        sub_584e80(eax_37, data_702fec, data_702fe8, data_702ff0, *(arg3 + 4), *(arg3 + 0xc), 
            *(arg3 + 0x10), 0, 0, *(arg3 + 0x14), eax_37, arg2[2] + arg7, var_8_1.b)
        return 
    
    int32_t var_3c_5 = arg2[3]
    void* var_40_5 = var_18_1
    int32_t var_44_5 = arg2[0x11]
    int32_t var_48_5 = arg2[0x10]
    int32_t var_4c_5 = arg2[0xf]
    int32_t eax_49 = arg2[1] + arg6
    sub_584980(eax_49, data_702fec, data_702fe8, data_702ff0, *(arg3 + 4), *(arg3 + 0xc), 
        *(arg3 + 0x10), 0, 0, *(arg3 + 0x14), eax_49, arg2[2] + arg7, var_8_1, edi_1.b, ebx_1, 
        var_c_1, arg3, arg2[4], zx.d(arg2[5].b), arg2[6], arg2[7], arg2[8], (arg2[9]).b, 
        (arg2[0xa]).b, (arg2[0xb]).b, zx.d(arg2[0xc].b), zx.d(*(arg2 + 0x31)), 
        zx.d(*(arg2 + 0x32)), zx.d(*(arg2 + 0x33)), zx.d(arg2[0xd].b), *(arg2 + 0x35), arg2[0xe])
