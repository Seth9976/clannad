// 函数: sub_581880
// 地址: 0x581880
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t ebx
int32_t var_1c = ebx
int32_t esi_1 = arg2 * arg4
int32_t var_c = 0
int32_t eax_1 = esi_1 << 2
uint32_t dwBytes = eax_1 + 0xd0
char* eax_2 = arg3 + 3
uint32_t var_8 = dwBytes
int32_t ecx = 0

if (esi_1 s> 0)
    do
        if (*eax_2 != 0xff)
            var_c = 1
            break
        
        ecx += 1
        eax_2 = &eax_2[4]
    while (ecx s< esi_1)

if (data_1af413c != 0)
    WaitForSingleObject(data_7027a8, 0xffffffff)
    
    if (*arg7 == 0)
        ReleaseSemaphore(data_7027a8, 1, nullptr)
    else
        sub_4d6820(arg7, "32BitChipData")
    
    dwBytes = var_8

int32_t esi_2 = 0
BOOL hMem
uint32_t result
BOOL* edi

while (true)
    hMem = GlobalAlloc(GHND, dwBytes)
    *arg7 = hMem
    
    if (hMem != 0)
        hMem = GlobalLock(hMem)
        edi = arg8
        result = var_8
        *edi = hMem
        break
    
    dwBytes = var_8
    esi_2 += 1
    
    if (esi_2 s>= 3)
        result = dwBytes
        
        if (data_1c04c64 == hMem)
            int32_t var_28_2 = data_20c0500
            uint32_t result_1 = result
            char const* const var_30_2 = "32BitChipData"
            sub_4c84d0(0x1c04d68, "%s\n\n")
            hMem = "MEM_ERR"
            void* edx = &data_1c04c68
            
            do
                char ecx_2 = *hMem
                
                if (ecx_2 u< 0x80)
                label_581996:
                    *edx = ecx_2
                    edx += 1
                    hMem += 1
                else
                    if (ecx_2 u< 0xa0)
                        if (ecx_2 u>= 0xfe)
                            goto label_581996
                    else if (ecx_2 u<= 0xdf || ecx_2 u>= 0xfe)
                        goto label_581996
                    
                    *edx = ecx_2
                    *(edx + 1) = *(hMem + 1)
                    edx += 2
                    hMem += 2
            while (*hMem != 0)
            
            *edx = 0
            data_1c04c64 = 1
        
        edi = arg8
        break

if (data_1af413c != 0)
    sub_4d6560(hMem, result, *arg7, "32BitChipData")

int32_t edx_2 = *edi
*(edx_2 + 2) = 1
*(edx_2 + 0x14) = arg5
*(edx_2 + 0x18) = arg6
*edx_2 = 1
*(edx_2 + 4) = 0
*(edx_2 + 8) = 0
*(edx_2 + 0xc) = arg2
*(edx_2 + 0x10) = arg4
*(edx_2 + 0x1c) = arg2
*(edx_2 + 0x20) = arg4
*(edx_2 + 0x74) = 0
*(edx_2 + 0x78) = var_c.b
*(edx_2 + 0x7a) = arg2.w
*(edx_2 + 0x7c) = arg4.w
sub_4d1c30(var_c, arg3, edx_2 + 0xd0, eax_1)
return result
