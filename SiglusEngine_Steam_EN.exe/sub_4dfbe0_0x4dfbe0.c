// 函数: sub_4dfbe0
// 地址: 0x4dfbe0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t eax_1 = (*(*arg1 + 8))()
SLIST_ENTRY* eax_2

if (arg1[5] == 0)
    eax_2 = sub_603855()
    arg1[5] = eax_2

if (arg1[5] != 0 || eax_2 != 0)
    int32_t* lpBaseAddress = arg1[5]
    *lpBaseAddress = 0x42444c7
    lpBaseAddress[1] = arg1
    lpBaseAddress[2].b = 0xe9
    *(lpBaseAddress + 9) = eax_1 - lpBaseAddress - 0xd
    FlushInstructionCache(GetCurrentProcess(), lpBaseAddress, 0xd)
    int32_t eax_5 = SetWindowLongA(arg2, 0xfffffffc, arg1[5])
    
    if (eax_5 != 0)
        arg1[1] = arg2
        arg1[8] = eax_5
        return 1

return 0
