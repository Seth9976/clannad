// 函数: sub_5fefc0
// 地址: 0x5fefc0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* var_8 = arg1
HANDLE edi = *arg1

if (edi != 0)
    WaitForSingleObject(edi, 0xffffffff)

char eax = arg1[0xe].b
var_8:3.b = eax

if (edi != 0)
    ReleaseSemaphore(edi, 1, nullptr)
    eax = var_8:3.b

if (eax != 0)
    HANDLE edi_1 = *arg1
    
    if (edi_1 != 0)
        WaitForSingleObject(edi_1, 0xffffffff)
    
    eax = arg1[0x13].b
    var_8:3.b = eax
    
    if (edi_1 != 0)
        ReleaseSemaphore(edi_1, 1, nullptr)
        eax = var_8:3.b
    
    if (eax == 0)
        HANDLE edi_2 = *arg1
        
        if (edi_2 != 0)
            WaitForSingleObject(edi_2, 0xffffffff)
        
        char ebx_1 = *(arg1 + 0x39)
        
        if (edi_2 != 0)
            ReleaseSemaphore(edi_2, 1, nullptr)
        
        if (ebx_1 == 0)
            return 1

return 0
