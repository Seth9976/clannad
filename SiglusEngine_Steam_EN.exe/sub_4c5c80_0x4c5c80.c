// 函数: sub_4c5c80
// 地址: 0x4c5c80
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

HDC ecx
HDC var_8 = ecx

if (arg2 != 0 && *arg2 != 0)
    sub_4c5640(ecx, arg3)
    int32_t eax_1 = data_20af110:0xc
    
    if (eax_1 s> 0)
        int32_t i = 0
        void* edi = data_20af110:4
        
        if (eax_1 s> 0)
            do
                if (sub_4d0f10(*(edi + 4), arg2) == 0)
                    return zx.d(*(edi + 8))
                
                i += 1
                edi += 0xc
            while (i s< data_20af110:0xc)
        
        return 0

return 0xffffffff
