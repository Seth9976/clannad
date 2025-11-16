// 函数: sub_4d6b80
// 地址: 0x4d6b80
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t esi = data_20c0500
HGLOBAL hMem = nullptr
int32_t* edi = data_20c04fc
int32_t* edx = edi

if (esi s> 0)
    do
        if (*edx == *arg1)
            if (hMem s>= 0 && hMem s< esi)
                void* esi_1 = &edi[hMem * 5]
                hMem = *(esi_1 + 8)
                
                if (hMem != 0)
                    GlobalUnlock(hMem)
                    GlobalFree(*(esi_1 + 8))
                
                __builtin_memset(esi_1, 0, 0x14)
            
            hMem.b = 1
            return hMem
        
        hMem += 1
        edx = &edx[5]
    while (hMem s< esi)

if (data_1c04c64 == 0)
    sub_4cfd70(0x1c04d68, 0x61ce68)
    sub_4cfd70(&data_1c04c68, "MEM_ERR")
    data_1c04c64 = 1

ReleaseSemaphore(data_7027a8, 1, nullptr)
BOOL eax
eax.b = 0
return eax
