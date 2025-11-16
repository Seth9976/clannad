// 函数: sub_5c5430
// 地址: 0x5c5430
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (*(arg1 + 0xc) == 0)
    SLIST_ENTRY* result = sub_760caa()
    *(arg1 + 0xc) = result
    
    if (result == 0)
        return result

int32_t* lpBaseAddress = *(arg1 + 0xc)
lpBaseAddress[1] = arg3
*lpBaseAddress = 0x42444c7
lpBaseAddress[2].b = 0xe9
*(lpBaseAddress + 9) = arg2 - lpBaseAddress - 0xd
FlushInstructionCache(GetCurrentProcess(), lpBaseAddress, 0xd)
return 1
