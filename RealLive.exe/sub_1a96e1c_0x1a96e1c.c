// 函数: sub_1a96e1c
// 地址: 0x1a96e1c
// 来自: F:\SETUPDATA\GAMEDATA\RealLive.exe

void** lpMem

if (data_1bfa0c0 != 0xffffffff)
    lpMem = HeapAlloc(data_1c09030, HEAP_NONE, 0x2020)
    
    if (lpMem != 0)
        goto label_1a96e63
else
    lpMem = &data_1bfa0b0
label_1a96e63:
    char* lpAddress = VirtualAlloc(nullptr, &__dos_header, MEM_RESERVE, PAGE_READWRITE)
    
    if (lpAddress != 0)
        if (VirtualAlloc(lpAddress, 0x10000, MEM_COMMIT, PAGE_READWRITE) != 0)
            if (lpMem != &data_1bfa0b0)
                *lpMem = &data_1bfa0b0
                lpMem[1] = data_1bfa0b4
                data_1bfa0b4 = lpMem
                *lpMem[1] = lpMem
            else
                if (data_1bfa0b0 == 0)
                    data_1bfa0b0 = &data_1bfa0b0
                
                if (data_1bfa0b4 == 0)
                    data_1bfa0b4 = &data_1bfa0b0
            
            lpMem[5] = lpAddress + &__dos_header
            void* eax_7 = &lpMem[6]
            lpMem[3] = &lpMem[0x26]
            lpMem[4] = lpAddress
            lpMem[2] = eax_7
            
            for (int32_t i = 0; i s< 0x400; )
                int32_t edx_1
                edx_1.b = i s>= 0x10
                i += 1
                *eax_7 = ((edx_1 - 1) & 0xf1) - 1
                *(eax_7 + 4) = 0xf1
                eax_7 += 8
            
            sub_1a917d0(lpAddress, 0, 0x10000)
            
            for (; lpAddress u< lpMem[4] + 0x10000; lpAddress = &lpAddress[0x1000])
                lpAddress[0xf8] = 0xff
                *lpAddress = &lpAddress[8]
                *(lpAddress + 4) = 0xf0
            
            return lpMem
        
        VirtualFree(lpAddress, 0, MEM_RELEASE)
    
    if (lpMem != &data_1bfa0b0)
        HeapFree(data_1c09030, HEAP_NONE, lpMem)
return nullptr
