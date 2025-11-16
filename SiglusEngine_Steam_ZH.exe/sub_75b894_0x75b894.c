// 函数: sub_75b894
// 地址: 0x75b894
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

HANDLE hFile = sub_75ea0d(arg1)

if (hFile == 0xffffffff)
    void* eax = __errno()
    *eax = 9
    return eax | hFile

int32_t var_2c_1 = 0
int32_t var_c
BOOL eax_2 = SetFilePointerEx(hFile, 0, &var_c, FILE_CURRENT)
int32_t newFilePointer
BOOL eax_4

if (eax_2 != 0)
    int32_t liDistanceToMove
    int32_t edx_1
    edx_1:liDistanceToMove = sx.q(arg2)
    int32_t var_2c_2 = edx_1
    eax_4 = SetFilePointerEx(hFile, liDistanceToMove, &newFilePointer, arg3)

if (eax_2 != 0 && eax_4 != 0)
    int32_t var_10
    
    if (var_10 == 0)
        int32_t esi_2 = (arg1 & 0x1f) << 6
        int32_t eax_9 = (&data_b95720)[arg1 s>> 5]
        *(eax_9 + esi_2 + 4) &= 0xfd
        return newFilePointer
    
    int32_t var_8
    int32_t var_2c_3 = var_8
    SetFilePointerEx(hFile, var_c, nullptr, FILE_BEGIN)
    *__errno() = 0x16
else
    __dosmaperr(GetLastError())

return 0xffffffff
