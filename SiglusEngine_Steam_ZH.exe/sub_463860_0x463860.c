// 函数: sub_463860
// 地址: 0x463860
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_18 = edi
HANDLE eax = CreateFileA(arg1, 0x80000000, FILE_SHARE_READ, nullptr, OPEN_EXISTING, 
    SECURITY_ANONYMOUS, nullptr)

if (eax == 0xffffffff)
    return 0x88760389

uint32_t fileSizeHigh
uint32_t eax_2 = GetFileSize(eax, &fileSizeHigh)
int32_t* esi_1

if (eax_2 != 0xffffffff)
    uint32_t fileSizeHigh_1 = fileSizeHigh
    
    if (fileSizeHigh_1 s> 0 || (fileSizeHigh_1 s>= 0 && eax_2 u>= 0x20))
        HANDLE eax_3 = CreateFileMappingA(eax, nullptr, PAGE_READONLY, 0, 0, nullptr)
        
        if (eax_3 == 0xffffffff)
            esi_1 = 0x8876038f
        else
            struct MEMORY_MAPPED_VIEW_ADDRESS lpBaseAddress =
                MapViewOfFile(eax_3, FILE_MAP_READ, 0, 0, 0)
            
            if (lpBaseAddress != 0)
                void*** eax_4 = sub_745f3f(0x54)
                void*** esi_2
                
                if (eax_4 == 0)
                    esi_2 = nullptr
                else
                    esi_2 = sub_462606(eax_4, arg2, eax, eax_3, lpBaseAddress, eax_2)
                
                if (esi_2 != 0)
                    int32_t* ebx_2 = sub_46275d(esi_2)
                    
                    if (ebx_2 s>= 0)
                        ebx_2 = sub_4636e2(esi_2)
                        
                        if (ebx_2 s>= 0)
                            ebx_2 = sub_46339e(esi_2)
                            
                            if (ebx_2 s>= 0)
                                *arg3 = esi_2
                                return nullptr
                    
                    (*esi_2)[2](esi_2)
                    return ebx_2
                
                UnmapViewOfFile(lpBaseAddress)
                esi_1 = 0x8007000e
            else
                esi_1 = 0x8876038f
            
            CloseHandle(eax_3)
    else
        esi_1 = 0x8876038f
else
    esi_1 = 0x8876038f

CloseHandle(eax)
return esi_1
