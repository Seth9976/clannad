// 函数: sub_48b7f0
// 地址: 0x48b7f0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t result

if (data_703788 == 0 || data_13130d4 != 0)
    result = data_108f2d4
else
    result = data_108f2d4
    
    if (result != 1 && result != 3)
        int32_t ecx
        ecx.b = 1
        sub_57fcf0(ecx, 1)
        void* eax_1 = &data_f8d300
        int32_t i_1 = 0x10
        int32_t i
        
        do
            if (*(eax_1 + 8) == 0 || *eax_1 != 0)
                *(eax_1 - 0x20) = 0
            
            if (*(eax_1 + 0x3928) == 0 || *(eax_1 + 0x3920) != 0)
                *(eax_1 + 0x3900) = 0
            
            if (*(eax_1 + 0x7248) == 0 || *(eax_1 + 0x7240) != 0)
                *(eax_1 + 0x7220) = 0
            
            if (*(eax_1 + 0xab68) == 0 || *(eax_1 + 0xab60) != 0)
                *(eax_1 + 0xab40) = 0
            
            eax_1 += 0xe480
            i = i_1
            i_1 -= 1
        while (i != 1)
        result = data_108f2d4

data_13130d4 = 0

if (result == 2)
    data_131d2e0 = 0
    data_131d2e8 = 1

return result
