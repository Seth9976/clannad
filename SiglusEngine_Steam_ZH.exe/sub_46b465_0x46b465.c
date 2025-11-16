// 函数: sub_46b465
// 地址: 0x46b465
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* var_8 = arg1
int32_t edi
int32_t var_14 = edi
int32_t ecx_1 = not.d(arg3 - 1)
int32_t edi_3 = ((arg3 + arg1[2] - 1) & ecx_1) + arg2
uint32_t dwSize_1

if (edi_3 u<= arg1[4])
    int32_t ecx_3 = arg1[3]
    
    if (edi_3 u<= ecx_3)
        goto label_46b50e
    
    int32_t eax_12 = arg1[1]
    dwSize_1 = (eax_12 + edi_3 - 1) & not.d(eax_12 - 1)
    
    if (VirtualAlloc(*arg1 + ecx_3, dwSize_1 - ecx_3, MEM_COMMIT, PAGE_READWRITE) != 0)
        goto label_46b509
else
    uint32_t eax_1 = arg1[5]
    edi_3 = ((arg3 + 3) & ecx_1) + arg2
    arg3 = eax_1
    
    if (edi_3 u> eax_1)
        uint32_t eax_3
        
        do
            eax_3 = arg3 * 2
            arg3 = eax_3
        while (edi_3 u> eax_3)
    
    int32_t* lpAddress = VirtualAlloc(nullptr, arg3, MEM_RESERVE, PAGE_READWRITE)
    
    if (lpAddress != 0)
        int32_t eax_4 = arg1[1]
        dwSize_1 = (eax_4 + edi_3 - 1) & not.d(eax_4 - 1)
        uint32_t dwSize = VirtualAlloc(lpAddress, dwSize_1, MEM_COMMIT, PAGE_READWRITE)
        
        if (dwSize != 0)
            *lpAddress = *arg1
            *arg1 = lpAddress
            arg1[4] = arg3
        label_46b509:
            arg1[3] = dwSize_1
        label_46b50e:
            int32_t eax_10 = *arg1 - arg2
            arg1[2] = edi_3
            return eax_10 + edi_3
        
        VirtualFree(lpAddress, dwSize, MEM_RELEASE)
return 0
