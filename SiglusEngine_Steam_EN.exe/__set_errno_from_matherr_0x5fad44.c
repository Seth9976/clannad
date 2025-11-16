// 函数: __set_errno_from_matherr
// 地址: 0x5fad44
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

void* eax_1

if (arg1 == 1)
    eax_1 = __errno()
    *eax_1 = 0x21
else
    eax_1 = arg1 - 2
    
    if (eax_1 u<= 1)
        void* eax_2 = __errno()
        *eax_2 = 0x22
        return eax_2

return eax_1
