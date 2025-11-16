// 函数: sub_4cb670
// 地址: 0x4cb670
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

WaitForSingleObject(data_702788, 0xffffffff)

for (void* i = &data_20af854; i s< &data_20be854; i += 0x3c0)
    if (*(i - 4) == 3)
        int32_t* eax_1 = *(i + 0xc)
        (*(*eax_1 + 0x24))(eax_1)
    
    *(i + 0x48) = 0xff
    
    if (*(i + 0x1a0) == 0)
        *(i - 4) = 1
    else
        sub_4caf70(i - 4)
    
    int32_t* ecx_3 = *(i + 4)
    
    if (ecx_3 != 0)
        (*(*ecx_3 + 0x4c))(ecx_3, 0)
        int32_t* eax_3 = *(i + 4)
        (*(*eax_3 + 0x74))(eax_3, 0)
        int32_t* eax_4 = *(i + 4)
        (*(*eax_4 + 8))(eax_4)
    
    int32_t* ecx_6 = *(i + 0x14)
    
    if (ecx_6 != 0)
        (*(*ecx_6 + 8))(ecx_6)
    
    int32_t* ecx_7 = *(i + 0x10)
    
    if (ecx_7 != 0)
        (*(*ecx_7 + 8))(ecx_7)
    
    int32_t* ecx_8 = *(i + 0xc)
    
    if (ecx_8 != 0)
        (*(*ecx_8 + 8))(ecx_8)
    
    int32_t* ecx_9 = *(i + 8)
    
    if (ecx_9 != 0)
        (*(*ecx_9 + 8))(ecx_9)
    
    int32_t* ecx_10 = *i
    
    if (ecx_10 != 0)
        (*(*ecx_10 + 8))(ecx_10)
    
    *(i - 4) = 0
    *(i + 0x19c) = 0
    __builtin_memset(i, 0, 0x18)
    *(i + 0x48) = 0xff
    *(i + 0x16c) = 0
    *(i + 0x1a0) = 0
    *(i + 0x1b4) = 0

sub_4d7020(&data_702784, &data_70277c)
ReleaseSemaphore(data_702788, 1, nullptr)
BOOL hObject = data_702788

if (hObject != 0)
    hObject = CloseHandle(hObject)
    data_702788 = 0

return hObject
