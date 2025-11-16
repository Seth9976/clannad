// 函数: sub_417610
// 地址: 0x417610
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

void* eax_1 = data_131d2d0

if (eax_1 != 0xffffffff)
    int32_t ecx_1 = data_131d2e0
    
    if (data_131d2e4 != ecx_1)
        int32_t esi = 0
        void* edx = 0xffffffff
        
        if ((data_13132c8 == 0 || data_703734 == 0) && data_70383c == 0 && data_13130b8 == 0)
            eax_1 = eax_1 * 0x10c + 0x1097fe4
            
            if (ecx_1 == 0)
                edx = *(eax_1 + 0x104)
                esi = *(eax_1 + 0x108)
            else
                edx = *(eax_1 + 0xf4)
                esi = *(eax_1 + 0xf8)
        
        sub_4161c0(eax_1, edx, ecx_1, esi)
        data_131d2e4 = data_131d2e0
        return 1

return 0
