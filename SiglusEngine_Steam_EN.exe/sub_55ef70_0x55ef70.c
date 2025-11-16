// 函数: sub_55ef70
// 地址: 0x55ef70
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t esi_1 = data_20c71e8 << 5
*(esi_1 + 0x20c71ec) = arg3
*(esi_1 + 0x20c71f0) = arg2

if (arg4 == 0 || *arg4 == 0)
    char* eax_6 = *(esi_1 + &data_20c71f8)
    
    if (eax_6 != 0)
        if (*(esi_1 + 0x20c71fc) s< 0x100)
            *eax_6 = 0
        else
            HGLOBAL hMem_2 = *(esi_1 + &data_20c71f4)
            
            if (hMem_2 != 0)
                GlobalUnlock(hMem_2)
                GlobalFree(*(esi_1 + &data_20c71f4))
                *(esi_1 + &data_20c71f4) = 0
                *(esi_1 + &data_20c71f8) = 0
            
            *(esi_1 + 0x20c71fc) = 0
else
    uint32_t dwBytes = sub_4cfc80(arg4)
    void* eax_1 = esi_1 + &data_20c71f8
    
    if (*(esi_1 + &data_20c71f8) != 0 && *(esi_1 + 0x20c71fc) s< dwBytes)
        sub_4d6d20(esi_1 + &data_20c71f4, eax_1)
        *(esi_1 + 0x20c71fc) = 0
        eax_1 = esi_1 + &data_20c71f8
    
    if (*(esi_1 + &data_20c71f8) == 0 || *eax_1 == 0)
        HGLOBAL hMem = GlobalAlloc(GHND, dwBytes)
        *(esi_1 + &data_20c71f4) = hMem
        
        if (hMem == 0)
            sub_4d6cc0(dwBytes, "_DBMLOGM")
        else
            *(esi_1 + &data_20c71f8) = GlobalLock(hMem)
        
        *(esi_1 + 0x20c71fc) = dwBytes
        eax_1 = esi_1 + &data_20c71f8
    
    int32_t ecx_3 = *eax_1
    
    if (ecx_3 != 0)
        sub_4d1c30(eax_1, arg4, ecx_3, dwBytes)

if (arg5 == 0 || *arg5 == 0)
    char* eax_7 = *(esi_1 + 0x20c7204)
    
    if (eax_7 != 0)
        if (*(esi_1 + 0x20c7208) s< 0x100)
            *eax_7 = 0
        else
            HGLOBAL hMem_3 = *(esi_1 + 0x20c7200)
            
            if (hMem_3 != 0)
                GlobalUnlock(hMem_3)
                GlobalFree(*(esi_1 + 0x20c7200))
                *(esi_1 + 0x20c7200) = 0
                *(esi_1 + 0x20c7204) = 0
            
            *(esi_1 + 0x20c7208) = 0
else
    uint32_t dwBytes_1 = sub_4cfc80(arg5)
    char* eax_4 = esi_1 + 0x20c7204
    arg4 = eax_4
    
    if (*(esi_1 + 0x20c7204) != 0 && *(esi_1 + 0x20c7208) s< dwBytes_1)
        sub_4d6d20(esi_1 + 0x20c7200, eax_4)
        *(esi_1 + 0x20c7208) = 0
        eax_4 = esi_1 + 0x20c7204
    
    if (*(esi_1 + 0x20c7204) == 0 || *eax_4 == 0)
        HGLOBAL hMem_1 = GlobalAlloc(GHND, dwBytes_1)
        *(esi_1 + 0x20c7200) = hMem_1
        
        if (hMem_1 == 0)
            sub_4d6cc0(dwBytes_1, "_DBMLOGC")
        else
            *(esi_1 + 0x20c7204) = GlobalLock(hMem_1)
        
        eax_4 = arg4
        *(esi_1 + 0x20c7208) = dwBytes_1
    
    int32_t ecx_7 = *eax_4
    
    if (ecx_7 != 0)
        sub_4d1c30(eax_4, arg5, ecx_7, dwBytes_1)

int32_t edx_5 = data_20c71e4 + 1

if (edx_5 s> 0x100)
    edx_5 = 0x100

int32_t result_1 = data_20c71e8 + 1
data_20c71e4 = edx_5

if (result_1 s>= 0x100)
    result_1 = 0

int32_t result = data_20c71e0
data_20c71e8 = result_1

if (edx_5 == 0x100)
    result = result_1

data_20c71e0 = result
return result
