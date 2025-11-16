// 函数: sub_4cb9c0
// 地址: 0x4cb9c0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (arg1 s< 0x40)
    void* esi_1 = arg1 * 0x3c0
    
    if (arg2 == 0)
        if (*(esi_1 + &data_20af850) == 3)
            int32_t* eax_3 = *(esi_1 + 0x20af860)
            (*(*eax_3 + 0x24))(eax_3)
        
        *(esi_1 + 0x20af89c) = 0xff
        
        if (*(esi_1 + 0x20af9f4) != 0)
            sub_4caf70(esi_1 + &data_20af850)
            return ReleaseSemaphore(data_702788, 1, nullptr)
        
        *(esi_1 + &data_20af850) = 1
    else if (*(esi_1 + 0x20af880) != 2)
        int32_t ecx = *(esi_1 + 0x20af89c)
        *(esi_1 + 0x20af984) = data_1392ccc
        *(esi_1 + 0x20af978) = ecx
        *(esi_1 + 0x20af96c) = 0
        *(esi_1 + 0x20af970) = ecx
        *(esi_1 + 0x20af990) = 2
        
        if (arg2 s< 0)
            arg2 = neg.d(arg2)
        
        *(esi_1 + 0x20af98c) = arg2
        *(esi_1 + 0x20af988) = 0
        *(esi_1 + 0x20af97c) = 0
        *(esi_1 + 0x20af980) = 0
        *(esi_1 + 0x20af974) = 0
        *(esi_1 + 0x20af880) = 1
        *(esi_1 + 0x20af880) = 2

return ReleaseSemaphore(data_702788, 1, nullptr)
