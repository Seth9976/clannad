// 函数: sub_4d6390
// 地址: 0x4d6390
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx
int32_t var_8 = ecx
WaitForSingleObject(data_7027a8, 0xffffffff)
int32_t ecx_1 = data_20c0500

if (data_1af413c != 0)
    int32_t edi_1 = 0
    
    if (ecx_1 s> 0)
        int32_t edx_1 = 0
        int32_t var_8_1 = 0
        void* ebx_2 = data_20c04fc + 0xc
        
        do
            if (*(ebx_2 - 0xc) != 0)
                int32_t eax_1 = *ebx_2
                
                if (eax_1 == 0)
                    sub_4cfd70(0x1c04d68, "[ NoName ]\n\n")
                else
                    int32_t var_18_1 = eax_1
                    sub_4c84d0(0x1c04d68, "%s\n\n")
                
                MessageBoxA(data_7027bc, 0x1c04d68, 0x61cbac, MB_OK)
                ecx_1 = data_20c0500
                edx_1 = var_8_1
            
            if (edi_1 s>= 0 && edi_1 s< ecx_1)
                void* esi_2 = data_20c04fc + edx_1
                HGLOBAL hMem = *(esi_2 + 8)
                
                if (hMem != 0)
                    GlobalUnlock(hMem)
                    GlobalFree(*(esi_2 + 8))
                    ecx_1 = data_20c0500
                    edx_1 = var_8_1
                
                __builtin_memset(esi_2, 0, 0x14)
            
            edi_1 += 1
            edx_1 += 0x14
            ebx_2 += 0x14
            var_8_1 = edx_1
        while (edi_1 s< ecx_1)

int32_t edi_2 = 0

if (ecx_1 s> 0)
    int32_t* esi_4 = data_20c04fc + 8
    
    do
        if (esi_4[1] != 0)
            GlobalUnlock(*esi_4)
            GlobalFree(*esi_4)
            ecx_1 = data_20c0500
        
        edi_2 += 1
        esi_4 = &esi_4[5]
    while (edi_2 s< ecx_1)

HGLOBAL hMem_1 = data_20c04f8

if (hMem_1 != 0)
    GlobalUnlock(hMem_1)
    GlobalFree(data_20c04f8)

ReleaseSemaphore(data_7027a8, 1, nullptr)
return CloseHandle(data_7027a8)
