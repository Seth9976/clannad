// 函数: sub_4d66b0
// 地址: 0x4d66b0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (data_1af413c == 0)
    return 

WaitForSingleObject(data_7027a8, 0xffffffff)
int32_t ecx = data_20c0500
int32_t eax_1 = 0
int32_t* esi_1 = data_20c04fc

if (ecx s> 0)
    do
        if (*esi_1 == arg1)
            HGLOBAL hMem = esi_1[2]
            
            if (hMem != 0)
                GlobalUnlock(hMem)
                GlobalFree(esi_1[2])
            
            uint32_t dwBytes = sub_4cfc80("AVG_BANK_serialpdt_swap")
            esi_1[4] = dwBytes
            HGLOBAL hMem_1 = GlobalAlloc(GHND, dwBytes)
            esi_1[2] = hMem_1
            char* eax_2 = GlobalLock(hMem_1)
            esi_1[3] = eax_2
            sub_4cfd70(eax_2, "AVG_BANK_serialpdt_swap")
            ReleaseSemaphore(data_7027a8, 1, nullptr)
            return 
        
        eax_1 += 1
        esi_1 = &esi_1[5]
    while (eax_1 s< ecx)

if (data_1c04c64 == 0)
    char const* const var_c_1 = "AVG_BANK_serialpdt_swap"
    sub_4c84d0(0x1c04d68, "%s\n\n")
    sub_4cfd70(&data_1c04c68, "MEM_ERR")
    data_1c04c64 = 1

ReleaseSemaphore(data_7027a8, 1, nullptr)
