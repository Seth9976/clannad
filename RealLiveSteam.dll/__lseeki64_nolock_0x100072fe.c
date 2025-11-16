// 函数: __lseeki64_nolock
// 地址: 0x100072fe
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\RealLiveSteam.dll

int32_t var_8 = arg3
int32_t newFilePointer = arg3
HANDLE hFile = sub_1000ae87(arg4)
int32_t result

if (hFile != 0xffffffff)
    int32_t var_20_1 = arg6
    
    if (SetFilePointerEx(hFile, arg5, &newFilePointer, arg7) != 0)
        int32_t esi_2 = (arg4 & 0x1f) << 6
        int32_t eax_5 = (&data_1001b0a0)[arg4 s>> 5]
        *(eax_5 + esi_2 + 4) &= 0xfd
        result = newFilePointer
    else
        __dosmaperr(GetLastError())
        result = 0xffffffff
else
    *__errno() = 9
    result = 0xffffffff

return result
