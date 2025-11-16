// 函数: sub_478c00
// 地址: 0x478c00
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = arg3
void* edx_1
int32_t edi_1

if (arg3 s>= 0 && arg3 s< data_7031bc)
    arg1 = arg2 + (arg3 << 1)
    edx_1 = arg1 * 0x7a0 + &data_98c178
    edi_1 = *(edx_1 + 8)

if (arg3 s< 0 || arg3 s>= data_7031bc || edi_1 == 0)
    sub_476410(arg1, arg2, arg3, 0)
else
    enum MESSAGEBOX_RESULT ecx = arg4
    enum MESSAGEBOX_RESULT ebx_1 = arg5
    
    if (ecx s> ebx_1)
        arg1 = ecx
        ecx = ebx_1
        ebx_1 = arg1
    
    if (ecx s>= 0 && ebx_1 s< *edx_1)
        void* esi_2 = ecx * 0x7d8 + edi_1
        int32_t i = 0
        
        if (ebx_1 - ecx + 1 s> 0)
            do
                arg1 = sub_4788d0(arg1, arg6, esi_2, arg7)
                
                if (arg1 != 0)
                    return 1
                
                i += 1
                esi_2 += 0x7d8
            while (i s< ebx_1 - ecx + 1)
            
            return arg1

return 0
