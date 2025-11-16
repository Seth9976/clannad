// 函数: sub_5cc8e0
// 地址: 0x5cc8e0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

HMENU esi = arg1

if (esi != 0)
label_5cc907:
    int32_t* lpBaseAddress = esi
    *lpBaseAddress = 0x42444c7
    lpBaseAddress[1] = 0
    lpBaseAddress[2].b = 0xe9
    *(lpBaseAddress + 9) = 0xfffffff3 - lpBaseAddress
    BOOL eax_5
    int128_t* ecx
    eax_5, ecx = FlushInstructionCache(GetCurrentProcess(), lpBaseAddress, 0xd)
    
    if (arg7 != 0)
        HMENU var_c = esi
        sub_5c5080(eax_5, &esi[2], ecx)
        HMENU hMenu = arg6
        
        if (hMenu == 0)
            if ((arg4 & 0x40000000) != 0)
                hMenu = esi
            
            arg6 = hMenu
        
        void* ecx_1 = &data_b900ac
        
        if (arg2 != 0)
            ecx_1 = arg2
        
        arg2 = ecx_1
        int32_t Y = *(ecx_1 + 4)
        return CreateWindowExW(arg5, zx.d(arg7), arg3, arg4, *ecx_1, Y, *(ecx_1 + 8) - *ecx_1, 
            *(ecx_1 + 0xc) - Y, nullptr, hMenu, data_b95abc, nullptr)
else
    SLIST_ENTRY* eax_1 = sub_760caa()
    esi = eax_1
    
    if (eax_1 != 0)
        goto label_5cc907
    
    SetLastError(ERROR_OUTOFMEMORY)

return 0
