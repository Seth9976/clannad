// 函数: sub_479250
// 地址: 0x479250
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (arg3 s>= 0 && arg3 s< data_7031bc)
    arg1 = arg2 + (arg3 << 1)
    void* edi_2 = arg1 * 0x7a0 + &data_98c178
    int32_t ebx_1 = *(edi_2 + 8)
    
    if (ebx_1 != 0)
        char* ecx = arg4
        char* esi_1 = arg5
        
        if (ecx s> esi_1)
            arg1 = ecx
            ecx = esi_1
            esi_1 = arg1
        
        if (ecx s>= 0 && esi_1 s< *edi_2)
            void* i_1 = esi_1 - ecx + 1
            void* edi_4 = ecx * 0x7d8 + ebx_1
            
            if (i_1 s> 0)
                void* i
                
                do
                    arg1 = sub_478d20(arg1, arg6, edi_4, arg7, arg8)
                    edi_4 += 0x7d8
                    i = i_1
                    i_1 -= 1
                while (i != 1)
        
        return arg1

return sub_476410(arg1, arg2, arg3, 0)
