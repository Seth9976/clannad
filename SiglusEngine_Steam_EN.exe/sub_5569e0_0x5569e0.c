// 函数: sub_5569e0
// 地址: 0x5569e0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

HGLOBAL hMem_2 = nullptr
int32_t esi = 0
void* i = &data_1b8c8f0
int32_t* dwBytes_1 = nullptr

do
    if (*(i - 0x24) s> 0)
        esi += 1
    
    if (*i s> 0)
        esi += 1
    
    if (*(i + 0x24) s> 0)
        esi += 1
    
    i += 0x6c
while (i s< 0x1be470c)

if (esi s> 0)
    int32_t dwBytes = esi << 2
    
    if (data_1af413c != 0)
        WaitForSingleObject(data_7027a8, 0xffffffff)
        ReleaseSemaphore(data_7027a8, 1, nullptr)
        dwBytes = esi << 2
    
    int32_t edi = 0
    HGLOBAL hMem_1
    HGLOBAL hMem
    int32_t edi_1
    
    while (true)
        hMem = GlobalAlloc(GHND, dwBytes)
        hMem_1 = hMem
        
        if (hMem != 0)
            dwBytes = GlobalLock(hMem)
            hMem = hMem_1
            edi_1 = esi << 2
            dwBytes_1 = dwBytes
            break
        
        edi += 1
        dwBytes = esi << 2
        
        if (edi s>= 3)
            edi_1 = esi << 2
            
            if (data_1c04c64 == hMem)
                int32_t var_20_2 = data_20c0500
                int32_t var_24_2 = edi_1
                char const* const var_28_2 = "ARFSD_SEENBUF"
                sub_4c84d0(0x1c04d68, "%s\n\n")
                char const* const ecx = "MEM_ERR"
                void* edx = &data_1c04c68
                
                do
                    dwBytes.b = *ecx
                    
                    if (dwBytes.b u< 0x80)
                    label_556ad8:
                        *edx = dwBytes.b
                        edx += 1
                        ecx = &ecx[1]
                    else
                        if (dwBytes.b u< 0xa0)
                            if (dwBytes.b u>= 0xfe)
                                goto label_556ad8
                        else if (dwBytes.b u<= 0xdf || dwBytes.b u>= 0xfe)
                            goto label_556ad8
                        
                        *edx = dwBytes.b
                        dwBytes.b = ecx[1]
                        *(edx + 1) = dwBytes.b
                        edx += 2
                        ecx = &ecx[2]
                while (*ecx != 0)
                
                hMem = hMem_1
                *edx = 0
                data_1c04c64 = 1
            
            dwBytes_1 = nullptr
            break
    
    if (data_1af413c != 0)
        sub_4d6560(dwBytes, edi_1, hMem, "ARFSD_SEENBUF")
    
    int32_t* dwBytes_2 = dwBytes_1
    int32_t ecx_1 = 1
    
    for (void* i_1 = &data_1b8c8cc; i_1 s< 0x1be46e8; )
        if (*i_1 s> 0)
            *dwBytes_2 = ecx_1
            dwBytes_2 = &dwBytes_2[1]
        
        i_1 += 0x24
        ecx_1 += 1
    
    hMem_2 = hMem_1

*arg3 = hMem_2
*arg2 = dwBytes_1
*arg4 = esi
return arg4
