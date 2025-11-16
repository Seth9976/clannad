// 函数: sub_4d1410
// 地址: 0x4d1410
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t* var_8 = arg1
int32_t i = 0
int32_t i_1 = 0
int32_t* esi = arg1[1]

if (arg1[2] s> 0)
    do
        if (*esi != 0)
            int32_t ebx_1 = data_1af413c
            
            if (ebx_1 == 0)
            label_4d1468:
                HGLOBAL hMem = *esi
                
                if (hMem != 0)
                    GlobalUnlock(hMem)
                    GlobalFree(*esi)
                    *esi = 0
                
                goto label_4d1483
            
            WaitForSingleObject(data_7027a8, 0xffffffff)
            
            if (*esi == 0)
            label_4d1483:
                esi[1] = 0
                
                if (ebx_1 != 0)
                    sub_4d6500()
                    ReleaseSemaphore(data_7027a8, 1, nullptr)
            else if (sub_4d6b80(esi) != 0)
                goto label_4d1468
            
            i = i_1
        else
            esi[1] = 0
        
        i += 1
        esi = &esi[3]
        i_1 = i
    while (i s< arg1[2])

if (*arg1 == 0)
    arg1[1] = 0
    arg1[2] = 0
    return i

int32_t esi_1 = data_1af413c
BOOL hMem_1

if (esi_1 == 0)
label_4d1504:
    hMem_1 = *arg1
    
    if (hMem_1 != 0)
        GlobalUnlock(hMem_1)
        hMem_1 = GlobalFree(*arg1)
        *arg1 = 0
    
    goto label_4d151f

hMem_1 = WaitForSingleObject(data_7027a8, 0xffffffff)

if (*arg1 == 0)
label_4d151f:
    arg1[1] = 0
    
    if (esi_1 != 0)
        sub_4d6500()
        hMem_1 = ReleaseSemaphore(data_7027a8, 1, nullptr)
else
    hMem_1 = sub_4d6b80(arg1)
    
    if (hMem_1.b != 0)
        goto label_4d1504

arg1[2] = 0
return hMem_1
