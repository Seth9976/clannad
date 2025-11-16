// 函数: sub_5498c0
// 地址: 0x5498c0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (arg2 == 0x87)
    if (arg4 != 0)
        int32_t ecx_3 = *(arg4 + 4)
        
        if (ecx_3 == 0x100)
            int32_t ecx_4 = *(arg4 + 8)
            
            if (ecx_4 == 0x25 || ecx_4 == 0x27)
                sub_549680(0, 0)
                return 1
            
            if (ecx_4 == 0xd)
                int32_t eax_3 = data_20c2014
                
                if (eax_3 != 0xffffffff)
                    eax_3 = 3
                
                data_20c2014 = eax_3
                return 4
        else if (ecx_3 == 0x102)
            int32_t ecx_5 = *(arg4 + 8)
            
            if (ecx_5 == 9 || ecx_5 == 0xd)
                return 0x80
else if (arg2 == 0x101 && arg3 == 0xd)
    int32_t eax_1 = data_20c2014
    
    if (eax_1 != 0xffffffff)
        if (eax_1 == 3 && data_20c200c != 0xffffffff)
            SendMessageA(data_20c17c4, 0x111, 0x4f4f, arg2 - 0x101)
        
        data_20c2014 = 0
    
    return 0

return CallWindowProcA(data_20c2180, arg1, arg2, arg3, arg4)
