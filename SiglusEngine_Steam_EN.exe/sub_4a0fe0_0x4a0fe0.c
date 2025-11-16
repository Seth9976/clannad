// 函数: sub_4a0fe0
// 地址: 0x4a0fe0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

BOOL var_4 = arg1
BOOL esi = arg1

if (esi s< 0)
    esi = 0
else if (esi s> 0xff)
    esi = 0xff

BOOL eax

if (arg2 != 0)
    sub_4c0650(WaitForSingleObject(data_1bfffc4, 0xffffffff), 0xffffffff, 3, esi, arg2)
    eax = ReleaseSemaphore(data_1bfffc4, 1, nullptr)
else
    if (esi s>= 0)
        eax = esi
        
        if (esi s> 0xff)
            eax = 0xff
        
        data_208c71c = eax
    else
        data_208c71c = arg2
    
    if (data_208c70c != 0 && data_1bfe268 != 0xffffffff)
        eax = sub_4c0620()

return sub_49ebf0(sub_49ebf0(eax, 0, &data_92b1b0, esi, arg2), 1, &data_92b1b0, esi, arg2)
