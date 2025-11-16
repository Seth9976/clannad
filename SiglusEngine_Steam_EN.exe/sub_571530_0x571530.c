// 函数: sub_571530
// 地址: 0x571530
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

void var_774
int32_t eax_1 = __security_cookie ^ &var_774
void* eax_2 = &data_20f0440
int32_t edx = 0

while (*(eax_2 + 0x18) != arg1)
    edx += 1
    eax_2 += 0x1c
    
    if (edx s>= 0x100)
        void* edi_1 = &data_20f0440
        int32_t eax_3 = 0
        WIN32_FIND_DATAA findFileData
        void fileName
        
        while (*edi_1 != 0)
            eax_3 += 1
            edi_1 += 0x1c
            
            if (eax_3 s>= 0x100)
                void* var_770
                void* esi_1 = var_770
                int32_t ecx = 0xffffffff
                void* eax_4 = &data_20f0470
                int32_t j_1 = 0x40
                int32_t j
                
                do
                    int32_t edx_1 = *(eax_4 - 0x1c)
                    
                    if (ecx s> edx_1)
                        ecx = edx_1
                        esi_1 = eax_4 - 0x30
                    
                    int32_t edx_2 = *eax_4
                    
                    if (ecx s> edx_2)
                        ecx = edx_2
                        esi_1 = eax_4 - 0x14
                    
                    int32_t edx_3 = *(eax_4 + 0x1c)
                    
                    if (ecx s> edx_3)
                        ecx = edx_3
                        esi_1 = eax_4 + 8
                    
                    int32_t edx_4 = *(eax_4 + 0x38)
                    
                    if (ecx s> edx_4)
                        ecx = edx_4
                        esi_1 = eax_4 + 0x24
                    
                    eax_4 += 0x70
                    j = j_1
                    j_1 -= 1
                while (j != 1)
                
                if (*esi_1 != j_1)
                    int32_t eax_5 = data_1af413c
                    
                    if (eax_5 == 0)
                    label_57160e:
                        HGLOBAL hMem = *esi_1
                        
                        if (hMem != 0)
                            GlobalUnlock(hMem)
                            GlobalFree(*esi_1)
                            *esi_1 = 0
                        
                        goto label_57162e
                    
                    WaitForSingleObject(data_7027a8, 0xffffffff)
                    
                    if (*esi_1 == 0)
                    label_57162e:
                        *(esi_1 + 4) = 0
                        
                        if (eax_5 != 0)
                            sub_4d6500()
                            ReleaseSemaphore(data_7027a8, 1, nullptr)
                    else if (sub_4d6b80(esi_1) != 0)
                        goto label_57160e
                else
                    *(esi_1 + 4) = j_1
                
                if (*(esi_1 + 8) != 0)
                    int32_t eax_7 = data_1af413c
                    
                    if (eax_7 == 0)
                    label_57168a:
                        HGLOBAL hMem_1 = *(esi_1 + 8)
                        
                        if (hMem_1 != 0)
                            GlobalUnlock(hMem_1)
                            GlobalFree(*(esi_1 + 8))
                            *(esi_1 + 8) = 0
                        
                        goto label_5716ad
                    
                    WaitForSingleObject(data_7027a8, 0xffffffff)
                    
                    if (*(esi_1 + 8) == 0)
                    label_5716ad:
                        *(esi_1 + 0xc) = 0
                        
                        if (eax_7 != 0)
                            sub_4d6500()
                            ReleaseSemaphore(data_7027a8, 1, nullptr)
                    else if (sub_4d6b80(esi_1 + 8) != 0)
                        goto label_57168a
                else
                    *(esi_1 + 0xc) = 0
                
                __builtin_memset(esi_1, 0, 0x18)
                *(esi_1 + 0x18) = 0xffffffff
                
                if (data_131331c != 0)
                    int32_t var_784_5 = arg1
                    char* var_788_3 = &data_131331c
                    void var_218
                    sub_4c84d0(&var_218, "%s\Seen%04d.org")
                    uint32_t uMode = SetErrorMode(SEM_FAILCRITICALERRORS)
                    int32_t ebx_2 = 0
                    sub_4cfd70(&fileName, &var_218)
                    HANDLE hFindFile = FindFirstFileA(&fileName, &findFileData)
                    
                    if (hFindFile != 0xffffffff)
                        FindClose(hFindFile)
                        ebx_2.b = (findFileData.dwFileAttributes.b & 0x10) != 0
                        ebx_2 += 1
                    
                    uint32_t eax_9 = SetErrorMode(uMode)
                    
                    if (ebx_2 == 1)
                        sub_4c4810(eax_9, esi_1, &var_218, esi_1 + 4, "SDBsource", 0xffffffff, 
                            0xffffffff)
                        
                        if (*(esi_1 + 4) != 0)
                            sub_571440(esi_1)
                            *(esi_1 + 0x18) = arg1
                
                sub_5f02dd(eax_1 ^ &var_774)
                return esi_1
        
        if (data_131331c != 0)
            int32_t var_784_9 = arg1
            char* var_788_5 = &data_131331c
            void var_420
            sub_4c84d0(&var_420, "%s\Seen%04d.org")
            uint32_t uMode_1 = SetErrorMode(SEM_FAILCRITICALERRORS)
            int32_t ebx_4 = 0
            sub_4cfd70(&fileName, &var_420)
            HANDLE hFindFile_1 = FindFirstFileA(&fileName, &findFileData)
            
            if (hFindFile_1 != 0xffffffff)
                FindClose(hFindFile_1)
                ebx_4.b = (findFileData.dwFileAttributes.b & 0x10) != 0
                ebx_4 += 1
            
            uint32_t eax_12 = SetErrorMode(uMode_1)
            
            if (ebx_4 == 1)
                sub_4c4810(eax_12, edi_1, &var_420, edi_1 + 4, "SDBsource", 0xffffffff, 0xffffffff)
                
                if (*(edi_1 + 4) != 0)
                    sub_571440(edi_1)
                    *(edi_1 + 0x18) = arg1
        
        eax_2 = edi_1
        break

sub_5f02dd(eax_1 ^ &var_774)
return eax_2
