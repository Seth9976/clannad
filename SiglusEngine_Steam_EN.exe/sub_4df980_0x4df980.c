// 函数: sub_4df980
// 地址: 0x4df980
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t* result = sub_4d9a60()

if (result == 0)
    return result

int32_t eax = *result
result[1] = arg1
int32_t eax_1 = (*(eax + 8))()
SLIST_ENTRY* eax_2

if (result[5] == 0)
    eax_2 = sub_603855()
    result[5] = eax_2

if (result[5] != 0 || eax_2 != 0)
    int32_t* lpBaseAddress = result[5]
    *lpBaseAddress = 0x42444c7
    lpBaseAddress[1] = result
    lpBaseAddress[2].b = 0xe9
    *(lpBaseAddress + 9) = eax_1 - lpBaseAddress - 0xd
    FlushInstructionCache(GetCurrentProcess(), lpBaseAddress, 0xd)

int32_t dwNewLong = result[5]
SetWindowLongA(arg1, 0xfffffffc, dwNewLong)
return dwNewLong(arg1, arg2, arg3, arg4)
