// 函数: sub_478ca0
// 地址: 0x478ca0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = arg3
void* edi_1

if (arg3 s>= 0 && arg3 s< data_7031bc)
    arg1 = arg2 + (arg3 << 1)
    edi_1 = *(arg1 * 0x7a0 + 0x98c180)

if (arg3 s< 0 || arg3 s>= data_7031bc || edi_1 == 0)
    sub_476410(arg1, arg2, arg3, 0)
else
    int32_t ebx_3 = *(arg1 * 0x7a0 + &data_98c178)
    int32_t esi_1 = 0
    
    if (ebx_3 s> 0)
        do
            arg1 = sub_4788d0(arg1, arg4, edi_1, arg5)
            
            if (arg1 != 0)
                return 1
            
            esi_1 += 1
            edi_1 += 0x7d8
        while (esi_1 s< ebx_3)
        
        return arg1

return 0
