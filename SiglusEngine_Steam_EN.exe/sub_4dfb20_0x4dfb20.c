// 函数: sub_4dfb20
// 地址: 0x4dfb20
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

HMENU esi = arg1

if (esi != 0)
label_4dfb47:
    int32_t* lpBaseAddress = esi
    *lpBaseAddress = 0x42444c7
    lpBaseAddress[1] = 0
    lpBaseAddress[2].b = 0xe9
    *(lpBaseAddress + 9) = 0xfffffff3 - lpBaseAddress
    FlushInstructionCache(GetCurrentProcess(), lpBaseAddress, 0xd)
    
    if (arg7 != 0)
        sub_4d96c0(&esi[2], esi)
        HMENU hMenu = arg6
        
        if (hMenu == 0)
            if ((arg4 & 0x40000000) != 0)
                hMenu = esi
            
            arg6 = hMenu
        
        void* ecx = &data_6400fc
        
        if (arg2 != 0)
            ecx = arg2
        
        arg2 = ecx
        int32_t Y = *(ecx + 4)
        return CreateWindowExA(arg5, zx.d(arg7), arg3, arg4, *ecx, Y, *(ecx + 8) - *ecx, 
            *(ecx + 0xc) - Y, nullptr, hMenu, data_641a68, nullptr)
else
    SLIST_ENTRY* eax_1 = sub_603855()
    esi = eax_1
    
    if (eax_1 != 0)
        goto label_4dfb47
    
    SetLastError(ERROR_OUTOFMEMORY)

return 0
