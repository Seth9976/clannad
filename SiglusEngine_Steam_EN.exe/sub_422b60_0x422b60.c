// 函数: sub_422b60
// 地址: 0x422b60
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t esi = data_13701b0
int32_t i_1 = 0

if (data_13126e0 s> 0)
    int32_t i
    
    do
        void* ebx_1 = *(data_13701cc + (esi << 3) + 4)
        
        if (*(ebx_1 + 0x44) != 0)
            int32_t eax_1 = data_1af413c
            
            if (eax_1 == 0)
            label_422bc7:
                HGLOBAL hMem = *(ebx_1 + 0x44)
                
                if (hMem != 0)
                    GlobalUnlock(hMem)
                    GlobalFree(*(ebx_1 + 0x44))
                    *(ebx_1 + 0x44) = 0
                
                goto label_422be9
            
            WaitForSingleObject(data_7027a8, 0xffffffff)
            
            if (*(ebx_1 + 0x44) == 0)
            label_422be9:
                *(ebx_1 + 0x48) = 0
                
                if (eax_1 != 0)
                    sub_4d6500()
                    ReleaseSemaphore(data_7027a8, 1, nullptr)
            else if (sub_4d6b80(ebx_1 + 0x44) != 0)
                goto label_422bc7
        else
            *(ebx_1 + 0x48) = 0
        
        esi += 1
        
        if (esi == 0x3e8)
            esi = 0
        
        i = i_1 + 1
        i_1 = i
    while (i s< data_13126e0)

data_1312720 = 1
